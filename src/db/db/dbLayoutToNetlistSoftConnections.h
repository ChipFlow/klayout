
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2024 Matthias Koefferlein

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

#ifndef _HDR_dbLayoutToNetlistSoftConnections
#define _HDR_dbLayoutToNetlistSoftConnections

#include "dbCommon.h"
#include "dbPolygon.h"

#include <set>
#include <map>
#include <list>
#include <cstddef>
#include <string>

namespace db
{

class Net;
class Pin;
class Circuit;
class Netlist;
class SubCircuit;
class LayoutToNetlist;

template <class T> class hier_clusters;
template <class T> class connected_clusters;
class NetShape;

/**
 *  @brief Describes a soft-connected cluster
 *
 *  Such a cluster is a collection of nets/shape clusters that are connected via
 *  soft connections.
 *  There is also some information about the count of "down-only" nets.
 */
class DB_PUBLIC SoftConnectionClusterInfo
{
public:
  typedef std::set<size_t> pin_set;
  typedef pin_set::const_iterator pin_iterator;
  typedef std::map<size_t, int> dir_map;
  typedef dir_map::const_iterator dir_map_iterator;

  SoftConnectionClusterInfo ();

  /**
   *  @brief Enters information about a specific net
   *
   *  @param net The Net for which we are entering information
   *  @param dir The direction code of the net (0: no soft connection or both directions, +1: up-only, -1: down-only)
   *  @param pin A pin that might leading outside our current circuit from this net (0 if there is none)
   *  @param partial_net_count The partial net count of nets attached to this net inside subcircuits
   */
  void add (const db::Net *net, int dir, const db::Pin *pin, size_t partial_net_count);

  /**
   *  @brief Gets the partial net count
   *
   *  The partial net count is the number of nets definitely isolated.
   *  This is the count of "down-only" connected nets on the cluster.
   *  This may also involve nets from subcircuits.
   *  Only non-trivial (floating) nets are counted.
   *
   *  A partial net count of more than one indicates a soft connection
   *  between nets.
   */
  size_t partial_net_count () const
  {
    return m_partial_net_count;
  }

  /**
   *  @brief Gets the pins on the cluster (begin iterator)
   *
   *  The iterator delivers Pin IDs of pins leading outside the circuit this cluster lives in.
   */
  pin_iterator begin_pins () const
  {
    return m_pin_ids.begin ();
  }

  /**
   *  @brief Gets the pins on the cluster (end iterator)
   */
  pin_iterator end_pins () const
  {
    return m_pin_ids.end ();
  }

  /**
   *  @brief Gets the shape clusters + dir information (begin iterator)
   */
  dir_map_iterator begin_clusters () const
  {
    return m_cluster_dir.begin ();
  }

  /**
   *  @brief Gets the shape clusters + dir information (end iterator)
   */
  dir_map_iterator end_clusters () const
  {
    return m_cluster_dir.end ();
  }

private:
  pin_set m_pin_ids;
  size_t m_partial_net_count;
  dir_map m_cluster_dir;
};

/**
 *  @brief Provides temporary soft connection information for a circuit
 *
 *  Soft connection information is the soft-connected-clusters that are formed inside
 *  the circuit and how these clusters connect to pins.
 */
class DB_PUBLIC SoftConnectionCircuitInfo
{
public:
  typedef std::list<SoftConnectionClusterInfo> cluster_list;
  typedef cluster_list::const_iterator cluster_list_iterator;

  /**
   *  @brief Constructor
   */
  SoftConnectionCircuitInfo (const db::Circuit *circuit);

  /**
   *  @brief Gets the circuit for this info object
   */
  const db::Circuit *circuit () const
  {
    return mp_circuit;
  }

  /**
   *  @brief Creates a new cluster info object
   */
  SoftConnectionClusterInfo &make_cluster ();

  /**
   *  @brief Adds information about a pin
   *
   *  @param pin The pin
   *  @param dir The nature of connections from the pin: 0 if no soft connections / both directions, +1 to "up only" and -1 for "down only"
   *  @param sc_cluster_info The soft-connected net cluster info object
   */
  void add_pin_info (const db::Pin *pin, int dir, SoftConnectionClusterInfo *sc_cluster_info);

  /**
   *  @brief Gets the direction attribute of the pin
   */
  int direction_per_pin (const db::Pin *pin) const;

  /**
   *  @brief Gets the soft-connected net cluster info object the pin connects to
   */
  const SoftConnectionClusterInfo *get_cluster_info_per_pin (const db::Pin *pin) const;

  /**
   *  @brief List of per-circui info objects, begin iterator
   */
  cluster_list_iterator begin () const
  {
    return m_cluster_info.begin ();
  }

  /**
   *  @brief List of per-circui info objects, end iterator
   */
  cluster_list_iterator end () const
  {
    return m_cluster_info.end ();
  }

private:
  const db::Circuit *mp_circuit;
  cluster_list m_cluster_info;
  std::map<size_t, std::pair<int, const SoftConnectionClusterInfo *> > m_pin_info;
};

/**
 *  @brief Provides temporary soft connection information for a netlist
 */
class DB_PUBLIC SoftConnectionInfo
{
public:
  SoftConnectionInfo ();

  /**
   *  @brief Builds the soft connection information for the given netlist and net clusters
   */
  void build (const db::Netlist &netlist, const db::hier_clusters<db::NetShape> &net_clusters);

  /**
   *  @brief Joins nets connected by soft connections
   *
   *  This method will clear the information from this object
   *  as the clusters will no longer be valid.
   */
  void join_soft_connections (db::Netlist &netlist);

  /**
   *  @brief Create log entries
   */
  void report (db::LayoutToNetlist &l2n);

private:
  std::map<const db::Circuit *, SoftConnectionCircuitInfo> m_scc_per_circuit;

  /**
   *  @brief Builds the per-circuit cluster information
   *
   *  First of all, this method creates a SoftConnectionCircuitInfo object for the circuit.
   *
   *  Inside this per-circuit object, it will create a number of SoftConnectionClusterInfo objects - each one
   *  for a cluster of soft-connected nets.
   *
   *  Call this method bottom-up as it needs SoftConnectionCircuitInfo objects for called circuits.
   */
  void build_clusters_for_circuit (const db::Circuit *circuit, const db::connected_clusters<db::NetShape> &shape_clusters);

  /**
   *  @brief Gets a value indicating whether the given net connects to subcircuits with up or down connections inside
   */
  bool net_has_up_or_down_subcircuit_connections (const db::Net *net, bool up);

  /**
   *  @brief Gets connections to other nets / shape clusters through the given subcircuit from the given pin
   *
   *  As a side effect, this method will also collect the partial net count - that is the number
   *  of defintively disconnected (down-only) nets.
   *  More that one such a net will render an error.
   */
  void get_net_connections_through_subcircuit (const db::SubCircuit *subcircuit, const db::Pin *pin, std::set<size_t> &ids, size_t &partial_net_count);

  /**
   *  @brief Gets connections to other nets / shape clusters through the subcircuits on the net
   *
   *  As a side effect, this method will also collect the partial net count - that is the number
   *  of defintively disconnected (down-only) nets.
   *  More that one such a net will render an error.
   *
   *  The return value is a set of nets  shape cluster IDs.
   */
  std::set<size_t> net_connections_through_subcircuits (const db::Net *net, size_t &partial_net_count);

  void report_partial_nets (const db::Circuit *circuit, const SoftConnectionClusterInfo &cluster_info, LayoutToNetlist &l2n, const std::string &path, const db::DCplxTrans &trans, const std::string &top_cell, int &index);
  db::DPolygon representative_polygon (const db::Net *net, const db::LayoutToNetlist &l2n, const db::CplxTrans &trans);
};

}

#endif
