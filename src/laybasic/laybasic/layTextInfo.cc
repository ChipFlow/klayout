
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2023 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "layTextInfo.h"
#include "layFixedFont.h"
#include "layLayoutViewBase.h"
#include "layLayoutCanvas.h"

namespace lay
{

TextInfo::TextInfo (const LayoutViewBase *view, const db::DCplxTrans &vp_trans)
  : m_default_text_size (view->default_text_size ()),
    m_default_font (db::Font (view->text_font ())),
    m_apply_text_trans (view->apply_text_trans ()),
    m_resolution (view->canvas ()->resolution ()),
    m_vp_trans (vp_trans)
{
  //  .. nothing yet ..
}

TextInfo::TextInfo (double default_text_size, const db::Font &default_font, bool apply_text_trans, double resolution, const db::DCplxTrans &vp_trans)
  : m_default_text_size (default_text_size),
    m_default_font (default_font),
    m_apply_text_trans (apply_text_trans),
    m_resolution (resolution),
    m_vp_trans (vp_trans)
{
  //  .. nothing yet ..
}

db::DBox
TextInfo::get_bbox (const db::DText &text) const
{
  //  offset in pixels (space between origin and text)
  const double offset = 2.0;

  db::DFTrans fp (db::DFTrans::r0);
  db::DCoord h;
  db::Font font = text.font () == db::NoFont ? m_default_font : text.font ();

  if (m_apply_text_trans && font != db::NoFont && font != db::DefaultFont) {
    fp = db::DFTrans (m_vp_trans.fp_trans () * text.trans ().fp_trans ());
    h = m_vp_trans.ctrans (text.size () > 0 ? text.size () : m_default_text_size);
  } else {
    h = m_vp_trans.ctrans (m_default_text_size);
  }

  db::HAlign halign = text.halign ();
  db::VAlign valign = text.valign ();

  double fy = 0.0;
  if (valign == db::VAlignBottom || valign == db::NoVAlign) {
    fy = 1.0;
  } else if (valign == db::VAlignTop) {
    fy = -1.0;
  }

  double fx = 0.0;
  if (halign == db::HAlignLeft || halign == db::NoHAlign) {
    fx = 1.0;
  } else if (halign == db::HAlignRight) {
    fx = -1.0;
  }

  db::DVector tp1 (fx * offset, fy * offset + (fy - 1) * 0.5 * h);
  db::DVector tp2 (fx * offset, fy * offset + (fy + 1) * 0.5 * h);
  db::DPoint dp = db::DPoint () + text.trans ().disp ();

  db::DBox b (dp + fp (tp1), dp + fp (tp2));

  if (font == db::DefaultFont) {

    const lay::FixedFont &ff = lay::FixedFont::get_font (m_resolution);

    //  count the lines

    unsigned int lines = 1;
    for (const char *cp = text.string (); *cp; ) {
      if (tl::skip_newline (cp)) {
        ++lines;
      } else {
        tl::utf32_from_utf8 (cp);
      }
    }

    //  compute the actual top left position
    double ytop;
    if (valign == db::VAlignBottom || valign == db::NoVAlign) {
      ytop = b.bottom ();
      ytop += double (ff.line_height () * (lines - 1) + ff.height ());
    } else if (valign == db::VAlignCenter) {
      ytop = b.center ().y ();
      ytop += double ((ff.line_height () * (lines - 1) + ff.height ()) / 2);
    } else {
      ytop = b.top ();
    }

    //  compute the bottom position
    double ybottom = ytop - ff.line_height () * (lines - 1);

    //  left and right position
    bool first = false;
    double xleft = 0.0, xright = 0.0;

    const char *cp = text.string ();
    while (*cp) {

      unsigned int length = 0;
      while (*cp && !tl::skip_newline (cp)) {
        tl::utf32_from_utf8 (cp);
        ++length;
      }

      double xl;
      if (halign == db::HAlignRight) {
        xl = b.right ();
        xl -= double (ff.width () * length);
      } else if (halign == db::HAlignCenter) {
        xl = b.center ().x ();
        xl -= double (ff.width () * length / 2);
      } else {
        xl = b.left ();
      }
      xl -= 0.5;

      double xr = xl + double (ff.width () * length);

      if (first || xl < xleft) {
        xleft = xl;
      }
      if (first || xr > xright) {
        xright = xr;
      }
      first = false;

    }

    return db::DBox (xleft, ybottom, xright, ytop).transformed (m_vp_trans.inverted ());

  } else {

    db::DHershey ht (text.string (), font);
    ht.justify (b.transformed (m_vp_trans.inverted ()), halign, valign);
    return ht.bbox ();

  }
}

}
