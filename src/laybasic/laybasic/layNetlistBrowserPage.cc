
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

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


#include "layNetlistBrowserPage.h"
#include "layItemDelegates.h"
#include "dbLayoutToNetlist.h"
#include "dbNetlistDeviceClasses.h"

#include <QUrl>

namespace lay
{

extern std::string cfg_l2ndb_show_all;

// ----------------------------------------------------------------------------------
//  NetlistBrowserModel implementation

static inline void *make_id (size_t i1)
{
  return reinterpret_cast<void *> (i1);
}

static inline void *make_id (size_t i1, size_t n1, size_t i2)
{
  return reinterpret_cast<void *> (i1 + n1 * i2);
}

static inline void *make_id (size_t i1, size_t n1, size_t i2, size_t n2, size_t i3)
{
  return reinterpret_cast<void *> (i1 + n1 * (i2 + n2 * i3));
}

static inline void *make_id (size_t i1, size_t n1, size_t i2, size_t n2, size_t i3, size_t n3, size_t i4)
{
  return reinterpret_cast<void *> (i1 + n1 * (i2 + n2 * (i3 + n3 * i4)));
}

static inline void *make_id (size_t i1, size_t n1, size_t i2, size_t n2, size_t i3, size_t n3, size_t i4, size_t n4, size_t i5)
{
  return reinterpret_cast<void *> (i1 + n1 * (i2 + n2 * (i3 + n3 * (i4 + n4 * i5))));
}

static inline void *make_id (size_t i1, size_t n1, size_t i2, size_t n2, size_t i3, size_t n3, size_t i4, size_t n4, size_t i5, size_t n5, size_t i6)
{
  return reinterpret_cast<void *> (i1 + n1 * (i2 + n2 * (i3 + n3 * (i4 + n4 * (i5 + n5 * i6)))));
}

static inline size_t pop (void *&idp, size_t n)
{
  size_t id = reinterpret_cast<size_t> (idp);
  size_t i = id % n;
  id /= n;
  idp = reinterpret_cast<void *> (id);
  return i;
}

static inline bool always (bool)
{
  return true;
}

NetlistBrowserModel::NetlistBrowserModel (QWidget *parent, db::LayoutToNetlist *l2ndb)
  : QAbstractItemModel (parent), mp_l2ndb (l2ndb)
{
  //  .. nothing yet ..
}

NetlistBrowserModel::~NetlistBrowserModel ()
{
  //  .. nothing yet ..
}

void *
NetlistBrowserModel::make_id_circuit (size_t circuit_index) const
{
  return make_id (circuit_index);
}

void *
NetlistBrowserModel::make_id_circuit_pin (size_t circuit_index, size_t pin_index) const
{
  return make_id (circuit_index, netlist ()->circuit_count (), 1, 8, pin_index);
}

void *
NetlistBrowserModel::make_id_circuit_pin_net (size_t circuit_index, size_t pin_index, size_t net_index) const
{
  const db::Circuit *circuit = circuit_from_id (make_id_circuit (circuit_index));
  return make_id (circuit_index, netlist ()->circuit_count (), 1, 8, pin_index, circuit->pin_count (), net_index + 1);
}

void *
NetlistBrowserModel::make_id_circuit_net (size_t circuit_index, size_t net_index) const
{
  return make_id (circuit_index, netlist ()->circuit_count (), 2, 8, net_index);
}

void *
NetlistBrowserModel::make_id_circuit_net_device_terminal (size_t circuit_index, size_t net_index, size_t terminal_ref_index) const
{
  const db::Circuit *circuit = circuit_from_id (make_id_circuit (circuit_index));
  return make_id (circuit_index, netlist ()->circuit_count (), 2, 8, net_index, circuit->net_count (), 1, 4, terminal_ref_index);
}

void *
NetlistBrowserModel::make_id_circuit_net_device_terminal_others (size_t circuit_index, size_t net_index, size_t terminal_ref_index, size_t other_index) const
{
  const db::Circuit *circuit = circuit_from_id (make_id_circuit (circuit_index));
  const db::Net *net = net_from_id (make_id_circuit_net (circuit_index, net_index));
  return make_id (circuit_index, netlist ()->circuit_count (), 2, 8, net_index, circuit->net_count (), 1, 4, terminal_ref_index, net->terminal_count (), other_index + 1);
}

void *
NetlistBrowserModel::make_id_circuit_net_pin (size_t circuit_index, size_t net_index, size_t pin_index) const
{
  const db::Circuit *circuit = circuit_from_id (make_id_circuit (circuit_index));
  return make_id (circuit_index, netlist ()->circuit_count (), 2, 8, net_index, circuit->net_count (), 2, 4, pin_index);
}

void *
NetlistBrowserModel::make_id_circuit_net_subcircuit_pin (size_t circuit_index, size_t net_index, size_t pin_ref_index) const
{
  const db::Circuit *circuit = circuit_from_id (make_id_circuit (circuit_index));
  return make_id (circuit_index, netlist ()->circuit_count (), 2, 8, net_index, circuit->net_count (), 3, 4, pin_ref_index);
}

void *
NetlistBrowserModel::make_id_circuit_net_subcircuit_pin_others (size_t circuit_index, size_t net_index, size_t pin_ref_index, size_t other_index) const
{
  const db::Circuit *circuit = circuit_from_id (make_id_circuit (circuit_index));
  const db::Net *net = net_from_id (make_id_circuit_net (circuit_index, net_index));
  return make_id (circuit_index, netlist ()->circuit_count (), 2, 8, net_index, circuit->net_count (), 3, 4, pin_ref_index, net->subcircuit_pin_count (), other_index + 1);
}

void *
NetlistBrowserModel::make_id_circuit_subcircuit (size_t circuit_index, size_t subcircuit_index) const
{
  return make_id (circuit_index, netlist ()->circuit_count (), 3, 8, subcircuit_index);
}

void *
NetlistBrowserModel::make_id_circuit_subcircuit_pin (size_t circuit_index, size_t subcircuit_index, size_t pin_index) const
{
  const db::Circuit *circuit = circuit_from_id (make_id_circuit (circuit_index));
  return make_id (circuit_index, netlist ()->circuit_count (), 3, 8, subcircuit_index, circuit->subcircuit_count (), pin_index + 1);
}

void *
NetlistBrowserModel::make_id_circuit_device (size_t circuit_index, size_t device_index) const
{
  return make_id (circuit_index, netlist ()->circuit_count (), 4, 8, device_index);
}

void *
NetlistBrowserModel::make_id_circuit_device_terminal (size_t circuit_index, size_t device_index, size_t terminal_index) const
{
  const db::Circuit *circuit = circuit_from_id (make_id_circuit (circuit_index));
  return make_id (circuit_index, netlist ()->circuit_count (), 4, 8, device_index, circuit->device_count (), terminal_index + 1);
}

bool
NetlistBrowserModel::is_id_circuit (void *id) const
{
  pop (id, netlist ()->circuit_count ());
  return id == 0;
}

bool
NetlistBrowserModel::is_id_circuit_pin (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 1 && always (pop (id, circuit->pin_count ())) && id == 0);
}

bool
NetlistBrowserModel::is_id_circuit_pin_net (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 1 && always (pop (id, circuit->pin_count ())) && id != 0);
}

bool
NetlistBrowserModel::is_id_circuit_net (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 2 && always (pop (id, circuit->net_count ())) && id == 0);
}

bool
NetlistBrowserModel::is_id_circuit_net_device_terminal (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  const db::Net *net = net_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 2 && always (pop (id, circuit->net_count ())) && pop (id, 4) == 1 && always (pop (id, net->terminal_count ())) && id == 0);
}

bool
NetlistBrowserModel::is_id_circuit_net_device_terminal_others (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  const db::Net *net = net_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 2 && always (pop (id, circuit->net_count ())) && pop (id, 4) == 1 && always (pop (id, net->terminal_count ())) && id != 0);
}

bool
NetlistBrowserModel::is_id_circuit_net_pin (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 2 && always (pop (id, circuit->net_count ())) && pop (id, 4) == 2);
}

bool
NetlistBrowserModel::is_id_circuit_net_subcircuit_pin (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  const db::Net *net = net_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 2 && always (pop (id, circuit->net_count ())) && pop (id, 4) == 3 && always (pop (id, net->subcircuit_pin_count ())) && id == 0);
}

bool
NetlistBrowserModel::is_id_circuit_net_subcircuit_pin_others (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  const db::Net *net = net_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 2 && always (pop (id, circuit->net_count ())) && pop (id, 4) == 3 && always (pop (id, net->subcircuit_pin_count ())) && id != 0);
}

bool
NetlistBrowserModel::is_id_circuit_subcircuit (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 3 && always (pop (id, circuit->subcircuit_count ())) && id == 0);
}

bool
NetlistBrowserModel::is_id_circuit_subcircuit_pin (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 3 && always (pop (id, circuit->subcircuit_count ())) && id != 0);
}

bool
NetlistBrowserModel::is_id_circuit_device (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 4 && always (pop (id, circuit->device_count ())) && id == 0);
}

bool
NetlistBrowserModel::is_id_circuit_device_terminal (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  return (pop (id, 8) == 4 && always (pop (id, circuit->device_count ())) && id != 0);
}

size_t
NetlistBrowserModel::circuit_index_from_id (void *id) const
{
  return pop (id, netlist ()->circuit_count ());
}

size_t
NetlistBrowserModel::circuit_pin_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  return pop (id, circuit->pin_count ());
}

size_t
NetlistBrowserModel::circuit_device_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  return pop (id, circuit->device_count ());
}

size_t
NetlistBrowserModel::circuit_device_terminal_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  pop (id, circuit->device_count ());
  return reinterpret_cast<size_t> (id) - 1;
}

size_t
NetlistBrowserModel::circuit_subcircuit_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  return pop (id, circuit->subcircuit_count ());
}

size_t
NetlistBrowserModel::circuit_subcircuit_pin_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  pop (id, circuit->subcircuit_count ());
  return reinterpret_cast<size_t> (id) - 1;
}

size_t
NetlistBrowserModel::circuit_net_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  return pop (id, circuit->net_count ());
}

size_t
NetlistBrowserModel::circuit_net_pin_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  pop (id, circuit->net_count ());
  pop (id, 4);
  return reinterpret_cast<size_t> (id);
}

size_t
NetlistBrowserModel::circuit_net_subcircuit_pin_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  const db::Net *net = net_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  pop (id, circuit->net_count ());
  pop (id, 4);
  return pop (id, net->subcircuit_pin_count ());
}

size_t
NetlistBrowserModel::circuit_net_subcircuit_pin_other_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  const db::Net *net = net_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  pop (id, circuit->net_count ());
  pop (id, 4);
  pop (id, net->subcircuit_pin_count ());
  return reinterpret_cast<size_t> (id) - 1;
}

size_t
NetlistBrowserModel::circuit_net_device_terminal_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  const db::Net *net = net_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  pop (id, circuit->net_count ());
  pop (id, 4);
  return pop (id, net->terminal_count ());
}

size_t
NetlistBrowserModel::circuit_net_device_terminal_other_index_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  const db::Net *net = net_from_id (id);
  pop (id, netlist ()->circuit_count ());
  pop (id, 8);
  pop (id, circuit->net_count ());
  pop (id, 4);
  pop (id, net->terminal_count ());
  return reinterpret_cast<size_t> (id) - 1;
}

int
NetlistBrowserModel::columnCount (const QModelIndex & /*parent*/) const
{
  //  Item type & icon, link or description
  return 2;
}

QVariant
NetlistBrowserModel::data (const QModelIndex &index, int role) const
{
  if (! index.isValid ()) {
    return QVariant ();
  }

  if (role == Qt::DecorationRole && index.column () == 0) {
    return QVariant (icon (index));
  } else if (role == Qt::DisplayRole) {
    return QVariant (text (index));
  } else {
    return QVariant ();
  }
}

QString
NetlistBrowserModel::make_link_to (const db::Net *net) const
{
  if (! net) {
    return QString ();
  } else {
    void *id = make_id_circuit_net (circuit_index (net->circuit ()), net_index (net));
    return tl::to_qstring (tl::sprintf ("<a href='int:net?id=%s'>%s</a>", tl::to_string (reinterpret_cast<size_t> (id)), net->expanded_name ()));
  }
}

QString
NetlistBrowserModel::make_link_to (const db::Pin *pin, const db::Circuit *circuit) const
{
  if (! pin) {
    return QString ();
  } else {
    void *id = make_id_circuit_pin (circuit_index (circuit), pin_index (pin, circuit));
    return tl::to_qstring (tl::sprintf ("<a href='int:pin?id=%s'>%s</a>", tl::to_string (reinterpret_cast<size_t> (id)), pin->expanded_name ()));
  }
}

QString
NetlistBrowserModel::make_link_to (const db::Circuit *circuit) const
{
  if (! circuit) {
    return QString ();
  } else {
    void *id = make_id_circuit (circuit_index (circuit));
    return tl::to_qstring (tl::sprintf ("<a href='int:circuit?id=%s'>%s</a>", tl::to_string (reinterpret_cast<size_t> (id)), circuit->name ()));
  }
}

QString
NetlistBrowserModel::make_link_to (const db::SubCircuit *sub_circuit) const
{
  if (! sub_circuit) {
    return QString ();
  } else {
    void *id = make_id_circuit_subcircuit (circuit_index (sub_circuit->circuit ()), subcircuit_index (sub_circuit));
    return tl::to_qstring (tl::sprintf ("<a href='int:subcircuit?id=%s'>%s</a>", tl::to_string (reinterpret_cast<size_t> (id)), sub_circuit->expanded_name ()));
  }
}

static
std::string device_string (const db::Device *device)
{
  if (! device || ! device->device_class ()) {
    return std::string ();
  }

  std::string s = device->device_class ()->name ();
  bool first = true;
  const std::vector<db::DeviceParameterDefinition> &pd = device->device_class ()->parameter_definitions ();
  for (std::vector<db::DeviceParameterDefinition>::const_iterator p = pd.begin (); p != pd.end (); ++p) {
    if (p->is_primary ()) {
      if (first) {
        s += " [";
        first = false;
      } else {
        s += ", ";
      }
      s += p->name ();
      s += "=";
      double v = device->parameter_value (p->id ());
      s += tl::to_string (v);
    }
  }
  s += "]";
  return s;
}

QString
NetlistBrowserModel::text (const QModelIndex &index) const
{
  void *id = index.internalPointer ();

  if (is_id_circuit (id)) {

    //  circuit: header column = name, other columns empty
    if (index.column () == 0) {
      const db::Circuit *circuit = circuit_from_id (id);
      if (circuit) {
        return tl::to_qstring (circuit->name ());
      }
    }

  } else if (is_id_circuit_pin (id)) {

    //  circuit/pin: header column = pin name, other columns pin name
    const db::Pin *pin = pin_from_id (id);
    if (pin) {
      return tl::to_qstring (pin->expanded_name ());
    }
    //  TODO: in case of compare, column 1 is name(a):name(b), 2 is name(a) and 3 is name(b)

  } else if (is_id_circuit_pin_net (id)) {

    //  circuit/pin/net: header column = name, second column link to net
    const db::Circuit *circuit = circuit_from_id (id);
    const db::Pin *pin = pin_from_id (id);
    if (pin) {
      const db::Net *net = circuit->net_for_pin (pin->id ());
      if (net) {
        if (index.column () == 0) {
          return tl::to_qstring (net->expanded_name ());
        } else {
          return make_link_to (net);
        }
      }
    }
    //  TODO: in case of compare, column 1 is name(a):name(b), 2 is link name(a) and 3 is link name(b)

  } else if (is_id_circuit_device (id)) {

    //  circuit/device: header column = class + parameters, second column device name
    const db::Device *device = device_from_id (id);
    if (device && device->device_class ()) {

      if (index.column () == 0) {
        return tl::to_qstring (device_string (device));
      } else {
        return tl::to_qstring (device->expanded_name ());
      }

    }
    //  TODO: in case of compare, column 1 is name(a):name(b) [param], 2 is name(a) and 3 is name(b)

  } else if (is_id_circuit_device_terminal (id)) {

    //  circuit/device/terminal: header column = terminal name, second column link to net
    const db::Device *device = device_from_id (id);
    if (device && device->device_class ()) {
      size_t terminal = circuit_device_terminal_index_from_id (id);
      if (device->device_class ()->terminal_definitions ().size () > terminal) {
        const db::DeviceTerminalDefinition &td = device->device_class ()->terminal_definitions () [terminal];
        if (index.column () == 0) {
          return tl::to_qstring (td.name ());
        } else {
          return make_link_to (device->net_for_terminal (td.id ()));
        }
      }
    }
    //  TODO: in case of compare, column 1 is terminal, 2 is linke net(a) and 3 is link net(b)

  } else if (is_id_circuit_subcircuit (id)) {

    //  circuit/subcircuit: header column = circuit name, second column subcircuit name
    const db::SubCircuit *subcircuit = subcircuit_from_id (id);
    if (subcircuit) {
      if (index.column () == 0) {
        return make_link_to (subcircuit->circuit_ref ());
      } else {
        return tl::to_qstring (subcircuit->expanded_name ());
      }
    }
    //  TODO: in case of compare, column 1 is circuit name(a):circuit name(b), 2 is subcircuit name(a) and 3 is subcircuit name(b)

  } else if (is_id_circuit_subcircuit_pin (id)) {

    //  circuit/pin: header column = pin name, other columns net name
    const db::SubCircuit *subcircuit = subcircuit_from_id (id);
    if (subcircuit && subcircuit->circuit () && subcircuit->circuit_ref ()) {
      const db::Pin *pin = pin_from_id (id);
      if (pin) {
        if (index.column () == 0) {
          return make_link_to (pin, subcircuit->circuit_ref ());
        } else {
          return make_link_to (subcircuit->net_for_pin (pin->id ()));
        }
      }
    }
    //  TODO: in case of compare, column 1 is name(a):name(b), 2 is link net(a) and 3 is link net(b)

  } else if (is_id_circuit_net (id)) {

    //  circuit/net: header column = node count, second column net name
    const db::Net *net = net_from_id (id);
    if (net) {
      if (index.column () == 0) {
        return tl::to_qstring ("(" + tl::to_string (net->pin_count () + net->terminal_count () + net->subcircuit_pin_count ()) + ")");
      } else {
        return tl::to_qstring (net->expanded_name ());
      }
    }
    //  TODO: in case of compare, column 1 is (size), 2 is net name(a) and 3 is net name(b)

  } else if (is_id_circuit_net_pin (id)) {

    //  circuit/net/pin: header column = pin name, second column empty (for now)
    const db::NetPinRef *ref = net_pinref_from_id (id);
    if (ref && ref->pin ()) {
      if (index.column () == 0) {
        return make_link_to (ref->pin (), circuit_from_id (id));
      }
      //  TODO: in case of compare use second and third column
    }

  } else if (is_id_circuit_net_subcircuit_pin (id)) {

    //  circuit/net/subcircuit pin: header column = pin name - circuit name, second column link to subcircuit
    const db::NetSubcircuitPinRef *ref = net_subcircuit_pinref_from_id (id);
    if (ref && ref->pin () && ref->subcircuit ()) {
      const db::Circuit *circuit = ref->subcircuit ()->circuit_ref ();
      if (circuit) {
        if (index.column () == 0) {
          return make_link_to (ref->pin (), circuit) + tl::to_qstring (" - ") + make_link_to (circuit);
        } else {
          return make_link_to (ref->subcircuit ());
        }
      }
    }
    //  TODO: in case of compare, column 1 is pin link(a):pin link(b) - circuit link(a):circuit link(b),
    //  columns 2 is subcircuit link(a), columns (3) is subcircuit link(b)

  } else if (is_id_circuit_net_subcircuit_pin_others (id)) {

    //  circuit/net/device terminal/more: header column = pin name, second column = net link
    const db::NetSubcircuitPinRef *ref = net_subcircuit_pinref_from_id (id);
    size_t other_index = circuit_net_subcircuit_pin_other_index_from_id (id);

    if (ref && ref->pin () && ref->subcircuit ()) {
      const db::Circuit *circuit = ref->subcircuit ()->circuit_ref ();
      if (circuit && circuit->pin_by_id (other_index)) {
        const db::Pin *pin = circuit->pin_by_id (other_index);
        if (index.column () == 0) {
          return tl::to_qstring (pin->expanded_name ());
        } else {
          return make_link_to (ref->subcircuit ()->net_for_pin (pin->id ()));
        }
      }
    }

  } else if (is_id_circuit_net_device_terminal (id)) {

    //  circuit/net/device terminal: header column = terminal and device string, second column = device name
    const db::NetTerminalRef *ref = net_terminalref_from_id (id);
    if (ref && ref->terminal_def ()) {
      if (index.column () == 0) {
        return tl::to_qstring (ref->terminal_def ()->name () + " - " + device_string (ref->device ()));
      } else {
        return tl::to_qstring (ref->device ()->expanded_name ());
      }
    }

  } else if (is_id_circuit_net_device_terminal_others (id)) {

    //  circuit/net/device terminal/more: header column = terminal name, second column = net link
    const db::NetTerminalRef *ref = net_terminalref_from_id (id);
    size_t other_index = circuit_net_device_terminal_other_index_from_id (id);

    if (ref && ref->device_class () && ref->device_class ()->terminal_definitions ().size () > other_index) {
      const db::DeviceTerminalDefinition &def = ref->device_class ()->terminal_definitions ()[other_index];
      if (index.column () == 0) {
        return tl::to_qstring (def.name ());
      } else {
        return make_link_to (ref->device ()->net_for_terminal (def.id ()));
      }
    }

  }

  return QString ();
}

static QIcon icon_for_net ()
{
  QIcon icon;
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_net_48.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_net_32.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_net_24.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_net_16.png")));
  return icon;
}

static QIcon icon_for_pin ()
{
  QIcon icon;
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_pin_48.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_pin_32.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_pin_24.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_pin_16.png")));
  return icon;
}

static QIcon icon_for_device (const db::DeviceClass *dc)
{
  QIcon icon;
  //  TODO: diode, inductor, generic device ...
  if (dynamic_cast<const db::DeviceClassResistor *> (dc)) {
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_res_48.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_res_32.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_res_24.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_res_16.png")));
  } else if (dynamic_cast<const db::DeviceClassCapacitor *> (dc)) {
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_cap_48.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_cap_32.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_cap_24.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_cap_16.png")));
  } else {
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_mos_48.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_mos_32.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_mos_24.png")));
    icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_device_mos_16.png")));
  }
  return icon;
}

static QIcon icon_for_circuit ()
{
  QIcon icon;
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_circuit_48.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_circuit_32.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_circuit_24.png")));
  icon.addPixmap (QPixmap (QString::fromUtf8 (":/images/icon_circuit_16.png")));
  return icon;
}

QIcon
NetlistBrowserModel::icon (const QModelIndex &index) const
{
  void *id = index.internalPointer ();

  if (is_id_circuit (id)) {
    return icon_for_circuit ();
  } else if (is_id_circuit_pin (id) || is_id_circuit_subcircuit_pin (id)) {
    return icon_for_pin ();
  } else if (is_id_circuit_pin_net (id)) {
    return icon_for_net ();
  } else if (is_id_circuit_device (id)) {

    const db::Device *device = device_from_id (id);
    if (device) {
      return icon_for_device (device->device_class ());
    }

  } else if (is_id_circuit_device_terminal (id)) {
    return icon_for_net ();
  } else if (is_id_circuit_subcircuit (id)) {
    return icon_for_circuit ();
  } else if (is_id_circuit_net (id)) {
    return icon_for_net ();
  } else if (is_id_circuit_net_pin (id) || is_id_circuit_net_subcircuit_pin_others (id)) {
    return icon_for_pin ();
  } else if (is_id_circuit_net_subcircuit_pin (id)) {
    return icon_for_circuit ();
  } else if (is_id_circuit_net_device_terminal (id)) {

    const db::NetTerminalRef *ref = net_terminalref_from_id (id);
    if (ref && ref->device ()) {
      return icon_for_device (ref->device ()->device_class ());
    }

  } else if (is_id_circuit_net_device_terminal_others (id)) {
    return icon_for_net ();
  }

  return QIcon ();
}

Qt::ItemFlags
NetlistBrowserModel::flags (const QModelIndex & /*index*/) const
{
  return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

bool
NetlistBrowserModel::hasChildren (const QModelIndex &parent) const
{
  if (! parent.isValid ()) {

    return mp_l2ndb->netlist () && mp_l2ndb->netlist ()->circuit_count () > 0;

  } else {

    void *id = parent.internalPointer ();

    if (is_id_circuit (id)) {
      const db::Circuit *circuit = circuit_from_id (id);
      return circuit->device_count () + circuit->pin_count () + circuit->net_count () + circuit->subcircuit_count () > 0;
    } else if (is_id_circuit_pin (id)) {
      return true;
    } else if (is_id_circuit_device (id)) {
      const db::Device *device = device_from_id (id);
      return device->device_class () && ! device->device_class ()->terminal_definitions ().empty ();
    } else if (is_id_circuit_subcircuit (id)) {
      const db::SubCircuit *subcircuit = subcircuit_from_id (id);
      return subcircuit->circuit_ref () && subcircuit->circuit_ref ()->pin_count () > 0;
    } else if (is_id_circuit_net (id)) {
      const db::Net *net = net_from_id (id);
      return net->pin_count () + net->subcircuit_pin_count () + net->terminal_count () > 0;
    } else if (is_id_circuit_net_subcircuit_pin (id)) {
      const db::NetSubcircuitPinRef *ref = net_subcircuit_pinref_from_id (id);
      return ref->subcircuit ()->circuit_ref () && ref->subcircuit ()->circuit_ref ()->pin_count () > 0;
    } else if (is_id_circuit_net_device_terminal (id)) {
      const db::NetTerminalRef *ref = net_terminalref_from_id (id);
      return ref->device_class () && ! ref->device_class ()->terminal_definitions ().empty ();
    } else {
      return false;
    }

  }
}

QVariant
NetlistBrowserModel::headerData (int /*section*/, Qt::Orientation /*orientation*/, int /*role*/) const
{
  return QVariant ();
}

QModelIndex
NetlistBrowserModel::index (int row, int column, const QModelIndex &parent) const
{
  void *new_id = 0;

  if (! parent.isValid ()) {

    new_id = make_id_circuit (row);

  } else {

    void *id = parent.internalPointer ();

    if (is_id_circuit (id)) {

      int r = row;
      const db::Circuit *circuit = circuit_from_id (id);
      if (r < int (circuit->pin_count ())) {
        new_id = make_id_circuit_pin (circuit_index_from_id (id), size_t (r));
      } else {
        r -= int (circuit->pin_count ());
        if (r < int (circuit->net_count ())) {
          new_id = make_id_circuit_net (circuit_index_from_id (id), size_t (r));
        } else {
          r -= int (circuit->net_count ());
          if (r < int (circuit->subcircuit_count ())) {
            new_id = make_id_circuit_subcircuit (circuit_index_from_id (id), size_t (r));
          } else {
            r -= int (circuit->subcircuit_count ());
            if (r < int (circuit->device_count ())) {
              new_id = make_id_circuit_device (circuit_index_from_id (id), size_t (r));
            }
          }
        }
      }

    } else if (is_id_circuit_pin (id)) {

      new_id = make_id_circuit_pin_net (circuit_index_from_id (id), circuit_pin_index_from_id (id), size_t (row));

    } else if (is_id_circuit_device (id)) {

      new_id = make_id_circuit_device_terminal (circuit_index_from_id (id), circuit_device_index_from_id (id), size_t (row));

    } else if (is_id_circuit_subcircuit (id)) {

      new_id = make_id_circuit_subcircuit_pin (circuit_index_from_id (id), circuit_subcircuit_index_from_id (id), size_t (row));

    } else if (is_id_circuit_net (id)) {

      int r = row;
      const db::Net *net = net_from_id (id);
      if (r < int (net->terminal_count ())) {
        new_id = make_id_circuit_net_device_terminal (circuit_index_from_id (id), circuit_net_index_from_id (id), size_t (r));
      } else {
        r -= int (net->terminal_count ());
        if (r < int (net->pin_count ())) {
          new_id = make_id_circuit_net_pin (circuit_index_from_id (id), circuit_net_index_from_id (id), size_t (r));
        } else {
          r -= int (net->pin_count ());
          if (r < int (net->subcircuit_pin_count ())) {
            new_id = make_id_circuit_net_subcircuit_pin (circuit_index_from_id (id), circuit_net_index_from_id (id), size_t (r));
          }
        }
      }

    } else if (is_id_circuit_net_subcircuit_pin (id)) {

      new_id = make_id_circuit_net_subcircuit_pin_others (circuit_index_from_id (id), circuit_net_index_from_id (id), circuit_net_subcircuit_pin_index_from_id (id), size_t (row));

    } else if (is_id_circuit_net_device_terminal (id)) {

      new_id = make_id_circuit_net_device_terminal_others (circuit_index_from_id (id), circuit_net_index_from_id (id), circuit_net_device_terminal_index_from_id (id), size_t (row));

    }

  }

  return createIndex (row, column, new_id);
}

QModelIndex
NetlistBrowserModel::index_from_id (void *id, int column) const
{
  if (is_id_circuit (id)) {

    return createIndex (circuit_index_from_id (id), column, id);

  } else if (is_id_circuit_pin (id)) {

    return createIndex (int (circuit_pin_index_from_id (id)), column, id);

  } else if (is_id_circuit_pin_net (id)) {

    return createIndex (0, column, id);

  } else if (is_id_circuit_net (id)) {

    const db::Circuit *circuit = circuit_from_id (id);
    return createIndex (int (circuit->pin_count () + circuit_net_index_from_id (id)), column, id);

  } else if (is_id_circuit_net_device_terminal (id)) {

    return createIndex (circuit_net_device_terminal_index_from_id (id), column, id);

  } else if (is_id_circuit_net_device_terminal_others (id)) {

    return createIndex (circuit_net_device_terminal_other_index_from_id (id), column, id);

  } else if (is_id_circuit_net_pin (id)) {

    const db::Net *net = net_from_id (id);
    return createIndex (net->terminal_count () + circuit_net_pin_index_from_id (id), column, id);

  } else if (is_id_circuit_net_subcircuit_pin (id)) {

    const db::Net *net = net_from_id (id);
    return createIndex (net->terminal_count () + net->pin_count () + circuit_net_subcircuit_pin_index_from_id (id), column, id);

  } else if (is_id_circuit_net_subcircuit_pin_others (id)) {

    return createIndex (circuit_net_subcircuit_pin_other_index_from_id (id), column, id);

  } else if (is_id_circuit_subcircuit (id)) {

    const db::Circuit *circuit = circuit_from_id (id);
    return createIndex (int (circuit->pin_count () + circuit->net_count () + circuit_subcircuit_index_from_id (id)), column, id);

  } else if (is_id_circuit_subcircuit_pin (id)) {

    return createIndex (int (circuit_subcircuit_pin_index_from_id (id)), column, id);

  } else if (is_id_circuit_device (id)) {

    const db::Circuit *circuit = circuit_from_id (id);
    return createIndex (int (circuit->pin_count () + circuit->net_count () + circuit->subcircuit_count () + circuit_device_index_from_id (id)), column, id);

  } else if (is_id_circuit_device_terminal (id)) {

    return createIndex (int (circuit_device_terminal_index_from_id (id)), column, id);

  }

  return QModelIndex ();
}


QModelIndex
NetlistBrowserModel::parent (const QModelIndex &index) const
{
  if (! index.isValid ()) {

    return QModelIndex ();

  } else {

    void *id = index.internalPointer ();
    int column = 0;

    if (is_id_circuit (id)) {

      return QModelIndex ();

    } else if (is_id_circuit_pin (id) || is_id_circuit_net (id) || is_id_circuit_device (id) || is_id_circuit_subcircuit (id)) {

      return createIndex (int (circuit_index_from_id (id)), column, make_id_circuit (circuit_index_from_id (id)));

    } else if (is_id_circuit_pin_net (id)) {

      return createIndex (int (circuit_pin_index_from_id (id)), column, make_id_circuit_pin (circuit_index_from_id (id), circuit_pin_index_from_id (id)));

    } else if (is_id_circuit_net_device_terminal (id) || is_id_circuit_net_pin (id) || is_id_circuit_net_subcircuit_pin (id)) {

      const db::Circuit *circuit = circuit_from_id (id);
      return createIndex (int (circuit->pin_count () + circuit_net_index_from_id (id)), column, make_id_circuit_net (circuit_index_from_id (id), circuit_net_index_from_id (id)));

    } else if (is_id_circuit_subcircuit_pin (id)) {

      const db::Circuit *circuit = circuit_from_id (id);
      return createIndex (int (circuit->pin_count () + circuit->net_count () + circuit_subcircuit_index_from_id (id)), column, make_id_circuit_subcircuit (circuit_index_from_id (id), circuit_subcircuit_index_from_id (id)));

    } else if (is_id_circuit_device_terminal (id)) {

      const db::Circuit *circuit = circuit_from_id (id);
      return createIndex (int (circuit->pin_count () + circuit->net_count () + circuit->subcircuit_count () + circuit_device_index_from_id (id)), column, make_id_circuit_device (circuit_index_from_id (id), circuit_device_index_from_id (id)));

    } else if (is_id_circuit_net_device_terminal_others (id)) {

      return createIndex (circuit_net_device_terminal_index_from_id (id), column, make_id_circuit_net_device_terminal (circuit_index_from_id (id), circuit_net_index_from_id (id), circuit_net_device_terminal_index_from_id (id)));

    } else if (is_id_circuit_net_subcircuit_pin_others (id)) {

      const db::Net *net = net_from_id (id);
      return createIndex (size_t (net->terminal_count () + net->pin_count () + circuit_net_subcircuit_pin_index_from_id (id)), column, make_id_circuit_net_subcircuit_pin (circuit_index_from_id (id), circuit_net_index_from_id (id), circuit_net_subcircuit_pin_index_from_id (id)));

    }

  }

  return QModelIndex ();
}

int
NetlistBrowserModel::rowCount (const QModelIndex &parent) const
{
  if (! parent.isValid ()) {

    return int (mp_l2ndb->netlist ()->circuit_count ());

  } else {

    void *id = parent.internalPointer ();

    if (is_id_circuit (id)) {

      const db::Circuit *circuit = circuit_from_id (id);
      return int (circuit->pin_count () + circuit->net_count () + circuit->subcircuit_count () + circuit->device_count ());

    } else if (is_id_circuit_pin (id)) {

      return 1;

    } else if (is_id_circuit_device (id) || is_id_circuit_net_device_terminal (id)) {

      const db::Device *device = device_from_id (id);
      return int (device->device_class () ? device->device_class ()->terminal_definitions ().size () : 0);

    } else if (is_id_circuit_subcircuit (id) || is_id_circuit_net_subcircuit_pin (id)) {

      const db::SubCircuit *subcircuit = subcircuit_from_id (id);
      return int (subcircuit->circuit_ref () ? subcircuit->circuit_ref ()->pin_count () : 0);

    } else if (is_id_circuit_net (id)) {

      const db::Net *net = net_from_id (id);
      return int (net->terminal_count () + net->pin_count () + net->subcircuit_pin_count ());

    }

  }

  return 0;
}

const db::Circuit *
NetlistBrowserModel::circuit_from_id (void *id) const
{
  size_t index = circuit_index_from_id (id);

  std::map<size_t, const db::Circuit *>::iterator c = m_circuit_by_index.find (index);
  if (c == m_circuit_by_index.end ()) {

    c = m_circuit_by_index.insert (std::make_pair (index, (db::Circuit *) 0)).first;
    for (db::Netlist::circuit_iterator i = netlist ()->begin_circuits (); i != netlist ()->end_circuits (); ++i) {
      if (index-- == 0) {
        c->second = i.operator-> ();
        break;
      }
    }

  }

  return c->second;
}

template <class Obj, class Attr, class Iter>
static const Attr *attr_by_object_and_index (const Obj *obj, size_t index, const Iter &begin, const Iter &end, std::map<const Obj *, std::map<size_t, const Attr *> > &cache)
{
  typename std::map<const Obj *, std::map<size_t, const Attr *> >::iterator cc = cache.find (obj);
  if (cc == cache.end ()) {
    cc = cache.insert (std::make_pair (obj, std::map<size_t, const Attr *> ())).first;
  }

  typename std::map<size_t, const Attr *>::iterator c = cc->second.find (index);
  if (c == cc->second.end ()) {

    c = cc->second.insert (std::make_pair (index, (const Attr *) 0)).first;
    for (Iter i = begin; i != end; ++i) {
      if (index-- == 0) {
        c->second = i.operator-> ();
        break;
      }
    }

  }

  return c->second;
}

const db::Net *
NetlistBrowserModel::net_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  size_t index = circuit_net_index_from_id (id);

  return attr_by_object_and_index (circuit, index, circuit->begin_nets (), circuit->end_nets (), m_net_by_circuit_and_index);
}

const db::NetSubcircuitPinRef *
NetlistBrowserModel::net_subcircuit_pinref_from_id (void *id) const
{
  const db::Net *net = net_from_id (id);
  size_t index = circuit_net_subcircuit_pin_index_from_id (id);

  return attr_by_object_and_index (net, index, net->begin_subcircuit_pins (), net->end_subcircuit_pins (), m_subcircuit_pinref_by_net_and_index);
}

const db::NetPinRef *
NetlistBrowserModel::net_pinref_from_id (void *id) const
{
  const db::Net *net = net_from_id (id);
  size_t index = circuit_net_pin_index_from_id (id);

  return attr_by_object_and_index (net, index, net->begin_pins (), net->end_pins (), m_pinref_by_net_and_index);
}

const db::NetTerminalRef *
NetlistBrowserModel::net_terminalref_from_id (void *id) const
{
  const db::Net *net = net_from_id (id);
  size_t index = circuit_net_device_terminal_index_from_id (id);

  return attr_by_object_and_index (net, index, net->begin_terminals (), net->end_terminals (), m_terminalref_by_net_and_index);
}

const db::Device *
NetlistBrowserModel::device_from_id (void *id) const
{
  const db::Circuit *circuit = circuit_from_id (id);
  size_t index = circuit_device_index_from_id (id);

  return attr_by_object_and_index (circuit, index, circuit->begin_devices (), circuit->end_devices (), m_device_by_circuit_and_index);
}

const db::Pin *
NetlistBrowserModel::pin_from_id (void *id) const
{
  if (is_id_circuit_subcircuit_pin (id)) {

    const db::SubCircuit *subcircuit = subcircuit_from_id (id);
    const db::Circuit *circuit = subcircuit->circuit_ref ();
    size_t index = circuit_subcircuit_pin_index_from_id (id);

    return attr_by_object_and_index (circuit, index, circuit->begin_pins (), circuit->end_pins (), m_pin_by_circuit_and_index);

  } else {

    const db::Circuit *circuit = circuit_from_id (id);
    size_t index = circuit_pin_index_from_id (id);

    return attr_by_object_and_index (circuit, index, circuit->begin_pins (), circuit->end_pins (), m_pin_by_circuit_and_index);

  }
}

const db::SubCircuit *
NetlistBrowserModel::subcircuit_from_id (void *id) const
{
  if (is_id_circuit_subcircuit_pin (id) || is_id_circuit_subcircuit (id)) {

    const db::Circuit *circuit = circuit_from_id (id);
    size_t index = circuit_subcircuit_index_from_id (id);

    return attr_by_object_and_index (circuit, index, circuit->begin_subcircuits (), circuit->end_subcircuits (), m_subcircuit_by_circuit_and_index);

  } else {

    const db::NetSubcircuitPinRef *pinref = net_subcircuit_pinref_from_id (id);
    return pinref ? pinref->subcircuit () : 0;

  }
}

template <class Attr, class Iter>
static size_t index_from_attr (const Attr *attr, const Iter &begin, const Iter &end, std::map<const Attr *, size_t> &cache)
{
  typename std::map<const Attr *, size_t>::iterator cc = cache.find (attr);
  if (cc != cache.end ()) {
    return cc->second;
  }

  size_t index = 0;
  for (Iter i = begin; i != end; ++i, ++index) {
    if (i.operator-> () == attr) {
      cache.insert (std::make_pair (i.operator-> (), index));
      return index;
    }
  }

  tl_assert (false);
}

size_t
NetlistBrowserModel::circuit_index (const db::Circuit *circuit) const
{
  return index_from_attr (circuit, netlist ()->begin_circuits (), netlist ()->end_circuits (), m_circuit_index_by_object);
}

size_t
NetlistBrowserModel::net_index (const db::Net *net) const
{
  const db::Circuit *circuit = net->circuit ();
  return index_from_attr (net, circuit->begin_nets (), circuit->end_nets (), m_net_index_by_object);
}

size_t
NetlistBrowserModel::pin_index (const db::Pin *pin, const db::Circuit *circuit) const
{
  return index_from_attr (pin, circuit->begin_pins (), circuit->end_pins (), m_pin_index_by_object);
}

size_t
NetlistBrowserModel::subcircuit_index (const db::SubCircuit *sub_circuit) const
{
  const db::Circuit *circuit = sub_circuit->circuit ();
  return index_from_attr (sub_circuit, circuit->begin_subcircuits (), circuit->end_subcircuits (), m_subcircuit_index_by_object);
}

// ----------------------------------------------------------------------------------
//  NetlistBrowserPage implementation

NetlistBrowserPage::NetlistBrowserPage (QWidget * /*parent*/)
  : m_show_all (true),
    m_window (lay::NetlistBrowserConfig::FitNet),
    m_window_dim (0.0),
    m_max_shape_count (1000),
    m_marker_line_width (-1),
    m_marker_vertex_size (-1),
    m_marker_halo (-1),
    m_marker_dither_pattern (-1),
    m_marker_intensity (0),
    m_auto_colors_enabled (false),
    mp_view (0),
    m_cv_index (0),
    mp_plugin_root (0),
    m_history_ptr (0),
    m_signals_enabled (true)
{
  Ui::NetlistBrowserPage::setupUi (this);

  m_show_all_action = new QAction (QObject::tr ("Show All"), this);
  m_show_all_action->setCheckable (true);
  m_show_all_action->setChecked (m_show_all);

  directory_tree->addAction (actionCollapseAll);
  directory_tree->addAction (actionExpandAll);

  lay::HTMLItemDelegate *delegate;

  delegate = new lay::HTMLItemDelegate (this);
  delegate->set_text_margin (2);
  delegate->set_anchors_clickable (true);
  connect (delegate, SIGNAL (anchor_clicked (const QString &)), this, SLOT (anchor_clicked (const QString &)));
  directory_tree->setItemDelegateForColumn (1, delegate);

  delegate = new lay::HTMLItemDelegate (this);
  delegate->set_text_margin (2);
  delegate->set_anchors_clickable (true);
  connect (delegate, SIGNAL (anchor_clicked (const QString &)), this, SLOT (anchor_clicked (const QString &)));
  directory_tree->setItemDelegateForColumn (0, delegate);

  connect (m_show_all_action, SIGNAL (triggered ()), this, SLOT (show_all_clicked ()));
  connect (filter, SIGNAL (textEdited (const QString &)), this, SLOT (filter_changed ()));
  connect (forward, SIGNAL (clicked ()), this, SLOT (navigate_forward ()));
  connect (backward, SIGNAL (clicked ()), this, SLOT (navigate_back ()));

  forward->setEnabled (false);
  backward->setEnabled (false);
}

NetlistBrowserPage::~NetlistBrowserPage ()
{
  //  .. nothing yet ..
}

void
NetlistBrowserPage::set_plugin_root (lay::PluginRoot *pr)
{
  mp_plugin_root = pr;
}

void
NetlistBrowserPage::set_highlight_style (QColor color, int line_width, int vertex_size, int halo, int dither_pattern, int marker_intensity, const lay::ColorPalette *auto_colors)
{
  m_marker_color = color;
  m_marker_line_width = line_width;
  m_marker_vertex_size = vertex_size;
  m_marker_halo = halo;
  m_marker_dither_pattern = dither_pattern;
  m_marker_intensity = marker_intensity;
  m_auto_colors_enabled = (auto_colors != 0);
  if (auto_colors) {
    m_auto_colors = *auto_colors;
  }
  update_highlights ();
}

void
NetlistBrowserPage::set_view (lay::LayoutView *view, unsigned int cv_index)
{
  mp_view = view;
  m_cv_index = cv_index;
  update_highlights ();
}

void
NetlistBrowserPage::set_window (lay::NetlistBrowserConfig::net_window_type window, double window_dim)
{
  if (window != m_window || window_dim != m_window_dim) {
    m_window = window;
    m_window_dim = window_dim;
  }
}

void
NetlistBrowserPage::set_max_shape_count (size_t max_shape_count)
{
  if (m_max_shape_count != max_shape_count) {
    m_max_shape_count = max_shape_count;
#if 0 // @@@
    update_marker_list (1 /*select first*/);
#endif
  }
}

void
NetlistBrowserPage::anchor_clicked (const QString &a)
{
  QUrl url (a);
  QString ids = url.queryItemValue (QString::fromUtf8 ("id"));
  if (ids.isEmpty ()) {
    return;
  }

  void *id = reinterpret_cast<void *> (ids.toULongLong ());
  navigate_to (id, true);
}

void
NetlistBrowserPage::navigate_to (void *id, bool fwd)
{
  NetlistBrowserModel *model = dynamic_cast<NetlistBrowserModel *> (directory_tree->model ());
  if (! model) {
    return;
  }

  QModelIndex index = model->index_from_id (id, 0);
  if (! index.isValid ()) {
    return;
  }

  m_signals_enabled = false;
  try {
    directory_tree->setCurrentIndex (index);
  } catch (...) {
  }
  m_signals_enabled = true;

  add_to_history (id, fwd);
}

void
NetlistBrowserPage::current_index_changed (const QModelIndex &index)
{
  if (index.isValid () && m_signals_enabled) {
    add_to_history (index.internalPointer (), true);
  }
}

void
NetlistBrowserPage::add_to_history (void *id, bool fwd)
{
  if (! fwd) {
    if (m_history_ptr > 1) {
      --m_history_ptr;
      m_history [m_history_ptr - 1] = id;
    }
  } else if (m_history_ptr >= m_history.size ()) {
    m_history.push_back (id);
    m_history_ptr = m_history.size ();
  } else {
    if (m_history [m_history_ptr] != id) {
      m_history.erase (m_history.begin () + m_history_ptr + 1, m_history.end ());
    }
    m_history [m_history_ptr] = id;
    ++m_history_ptr;
  }

  backward->setEnabled (m_history_ptr > 1);
  forward->setEnabled (m_history_ptr < m_history.size ());
}

void
NetlistBrowserPage::navigate_back ()
{
  if (m_history_ptr > 1) {
    navigate_to (m_history [m_history_ptr - 2], false);
  }
}

void
NetlistBrowserPage::navigate_forward ()
{
  if (m_history_ptr < m_history.size ()) {
    navigate_to (m_history [m_history_ptr]);
  }
}

void
NetlistBrowserPage::filter_changed ()
{
#if 0 // @@@
  MarkerBrowserTreeViewModel *tree_model = dynamic_cast<MarkerBrowserTreeViewModel *> (directory_tree->model ());
  if (tree_model) {
    set_hidden_rec (tree_model, directory_tree, QModelIndex (), m_show_all, cat_filter->text (), cell_filter->text ());
  }
  update_highlights (2 /*select all*/);
#endif
}

void
NetlistBrowserPage::show_all_clicked ()
{
  if (mp_plugin_root) {
    mp_plugin_root->config_set (cfg_l2ndb_show_all, tl::to_string (m_show_all_action->isChecked ()));
  }
}

void
NetlistBrowserPage::show_all (bool f)
{
  if (f != m_show_all) {

    m_show_all = f;
    m_show_all_action->setChecked (f);

#if 0 // @@@
    MarkerBrowserTreeViewModel *tree_model = dynamic_cast<MarkerBrowserTreeViewModel *> (directory_tree->model ());
    if (tree_model) {
      set_hidden_rec (tree_model, directory_tree, QModelIndex (), m_show_all, cat_filter->text (), cell_filter->text ());
    }
#endif

  }
}

void
NetlistBrowserPage::update_highlights ()
{
#if 0
  if (! m_enable_updates) {
    m_update_needed = true;
    return;
  }

  if (m_recursion_sentinel) {
    return;
  }

  m_recursion_sentinel = true;
  try {
    do_update_markers ();
  } catch (...) {
    m_recursion_sentinel = false;
    throw;
  }
  m_recursion_sentinel = false;
#endif
}

void
NetlistBrowserPage::set_l2ndb (db::LayoutToNetlist *database)
{
  if (database != mp_database.get ()) {

    mp_database.reset (database);

    if (! database) {
      directory_tree->setModel (0);
      return;
    }

    //  @@@ release_markers ();

    //  NOTE: with the tree as the parent, the tree will take over ownership of the model
    NetlistBrowserModel *new_model = new NetlistBrowserModel (directory_tree, database);

    directory_tree->setModel (new_model);
    connect (directory_tree->selectionModel (), SIGNAL (currentChanged (const QModelIndex &, const QModelIndex &)), this, SLOT (current_index_changed (const QModelIndex &)));
    // @@@ connect (directory_tree->selectionModel (), SIGNAL (selectionChanged (const QItemSelection &, const QItemSelection &)), this, SLOT (directory_selection_changed (const QItemSelection &, const QItemSelection &)));

    directory_tree->header ()->setSortIndicatorShown (true);

    filter->setText (QString ());

  }
}

void
NetlistBrowserPage::enable_updates (bool f)
{
#if 0 // @@@
  if (f != m_enable_updates) {

    m_enable_updates = f;

    if (f && m_update_needed) {
      update_markers ();
      update_info_text ();
    }

    m_update_needed = false;

  }
#endif
}

}

