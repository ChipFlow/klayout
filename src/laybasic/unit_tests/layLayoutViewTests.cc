
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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

#include "layLayoutView.h"

#include "tlUnitTest.h"
#include "tlTimer.h"

#if defined(HAVE_QT)

#  include <QImage>
#  include <QPainter>

static bool compare_images (const QImage &qimg, const std::string &au)
{
  QImage qimg2;
  qimg2.load (tl::to_qstring (au));

  if (qimg2.width () == (int) qimg.width () && qimg2.height () == (int) qimg.height ()) {
    for (int j = 0; j < qimg.height (); ++j) {
      for (int i = 0; i < qimg.width (); ++i) {
        if (((const lay::color_t *) qimg.scanLine (j))[i] != ((const lay::color_t *) qimg2.scanLine (j))[i]) {
          return false;
        }
      }
    }
    return true;
  } else {
    return false;
  }
}

static bool compare_images_mono (const QImage &qimg, const std::string &au)
{
  QImage qimg2;
  qimg2.load (tl::to_qstring (au));

  if (qimg2.width () == (int) qimg.width () && qimg2.height () == (int) qimg.height ()) {
    //  NOTE: slooooow ...
    for (int j = 0; j < qimg.height (); ++j) {
      for (int i = 0; i < qimg.width (); ++i) {
        if ((qimg.scanLine (j)[i / 8] & (0x80 >> (i % 8))) != (qimg2.scanLine (j)[i / 8] & (0x80 >> (i % 8)))) {
          return false;
        }
      }
    }
    return true;
  } else {
    return false;
  }
}

static bool compare_images (const lay::PixelBuffer &img, const lay::PixelBuffer &img2)
{
  if (img2.width () == img.width () && img2.height () == img.height ()) {
    for (unsigned int j = 0; j < img.height (); ++j) {
      for (unsigned int i = 0; i < img.width (); ++i) {
        if (((const lay::color_t *) img.scan_line (j))[i] != ((const lay::color_t *) img2.scan_line (j))[i]) {
          return false;
        }
      }
    }
    return true;
  } else {
    return false;
  }
}

static bool compare_images (const lay::BitmapBuffer &img, const lay::BitmapBuffer &img2)
{
  if (img2.width () == img.width () && img2.height () == img.height ()) {
    for (unsigned int j = 0; j < img.height (); ++j) {
      for (unsigned int i = 0; i < img.stride (); ++i) {
        if (((const uint8_t *) img.scan_line (j))[i] != ((const uint8_t *) img2.scan_line (j))[i]) {
          return false;
        }
      }
    }
    return true;
  } else {
    return false;
  }
}

#endif

#if defined(HAVE_QT) // @@@
TEST(1)
{
  lay::LayoutView lv (0, false, 0);
  lv.cell_box_color (lay::Color (0, 0, 0));

  lv.load_layout (tl::testsrc () + "/testdata/gds/t10.gds", true);

  QImage qimg;
  qimg = lv.get_image_with_options (500, 500, 1, 1, 1.0, lay::Color (255, 255, 255), lay::Color (0, 0, 0), lay::Color (128, 128, 128), db::DBox (), false);

  EXPECT_EQ (qimg.format () == QImage::Format_RGB32, true);

  std::string tmp = tmp_file ("test.png");
  qimg.save (tl::to_qstring (tmp));
  tl::info << "PNG file written to " << tmp;

  std::string au = tl::testsrc () + "/testdata/lay/au_lv1.png";
  tl::info << "PNG file read from " << au;

  EXPECT_EQ (compare_images (qimg, au), true);
}

TEST(2)
{
  lay::LayoutView lv (0, false, 0);
  lv.full_hier_new_cell (true);

  lv.load_layout (tl::testsrc () + "/testdata/gds/t10.gds", true);

  QImage qimg;
  qimg = lv.get_image_with_options (500, 500, 1, 1, 1.0, lay::Color (255, 255, 255), lay::Color (0, 0, 0), lay::Color (128, 128, 128), db::DBox (), false);

  EXPECT_EQ (qimg.format () == QImage::Format_RGB32, true);

  std::string tmp = tmp_file ("test.png");
  qimg.save (tl::to_qstring (tmp));
  tl::info << "PNG file written to " << tmp;

  std::string au = tl::testsrc () + "/testdata/lay/au_lv2.png";
  tl::info << "PNG file read from " << au;

  EXPECT_EQ (compare_images (qimg, au), true);
}

//  monochrome
TEST(3)
{
  lay::LayoutView lv (0, false, 0);
  lv.full_hier_new_cell (true);

  lv.load_layout (tl::testsrc () + "/testdata/gds/t10.gds", true);

  QImage qimg;
  qimg = lv.get_image_with_options (500, 500, 1, 1, 1.0, lay::Color (255, 255, 255), lay::Color (0, 0, 0), lay::Color (128, 128, 128), db::DBox (), true);

  EXPECT_EQ (qimg.format () == QImage::Format_MonoLSB, true);

  std::string tmp = tmp_file ("test.png");
  qimg.save (tl::to_qstring (tmp));
  tl::info << "PNG file written to " << tmp;

  std::string au = tl::testsrc () + "/testdata/lay/au_lv3.png";
  tl::info << "PNG file read from " << au;

  EXPECT_EQ (compare_images_mono (qimg.convertToFormat (QImage::Format_Mono), au), true);
}
#endif
