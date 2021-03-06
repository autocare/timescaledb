/*
 * This file and its contents are licensed under the Timescale License.
 * Please see the included NOTICE for copyright information and
 * LICENSE-TIMESCALE for a copy of the license.
 */
#ifndef TIMESCALEDB_TSL_PLANNER_H
#define TIMESCALEDB_TSL_PLANNER_H

#include <optimizer/planner.h>

void		tsl_create_upper_paths_hook(PlannerInfo *, UpperRelationKind, RelOptInfo *, RelOptInfo *);

#endif							/* TIMESCALEDB_TSL_PLANNER_H */
