/* c/zx-gl-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** getput-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: getput-templ.c,v 1.8 2009-08-30 15:09:26 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** Edit with care! xsd2sg.pl applies various substitutions to this file.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-gl-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_AreaComparison_NUM_CivilData) */

int zx_gl_AreaComparison_NUM_CivilData(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_CivilData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CivilData; y; ++n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_AreaComparison_GET_CivilData) */

struct zx_gl_CivilData_s* zx_gl_AreaComparison_GET_CivilData(struct zx_gl_AreaComparison_s* x, int n)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return 0;
  for (y = x->CivilData; n>=0 && y; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_AreaComparison_POP_CivilData) */

struct zx_gl_CivilData_s* zx_gl_AreaComparison_POP_CivilData(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return 0;
  y = x->CivilData;
  if (y)
    x->CivilData = (struct zx_gl_CivilData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_AreaComparison_PUSH_CivilData) */

void zx_gl_AreaComparison_PUSH_CivilData(struct zx_gl_AreaComparison_s* x, struct zx_gl_CivilData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CivilData->gg.g;
  x->CivilData = z;
}

/* FUNC(zx_gl_AreaComparison_REV_CivilData) */

void zx_gl_AreaComparison_REV_CivilData(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_CivilData_s* nxt;
  struct zx_gl_CivilData_s* y;
  if (!x) return;
  y = x->CivilData;
  if (!y) return;
  x->CivilData = 0;
  while (y) {
    nxt = (struct zx_gl_CivilData_s*)y->gg.g.n;
    y->gg.g.n = &x->CivilData->gg.g;
    x->CivilData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_AreaComparison_PUT_CivilData) */

void zx_gl_AreaComparison_PUT_CivilData(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_CivilData_s* z)
{
  struct zx_gl_CivilData_s* y;
  if (!x || !z) return;
  y = x->CivilData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CivilData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_AreaComparison_ADD_CivilData) */

void zx_gl_AreaComparison_ADD_CivilData(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_CivilData_s* z)
{
  struct zx_gl_CivilData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CivilData->gg.g;
    x->CivilData = z;
    return;
  case -1:
    y = x->CivilData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CivilData; n > 1 && y; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_AreaComparison_DEL_CivilData) */

void zx_gl_AreaComparison_DEL_CivilData(struct zx_gl_AreaComparison_s* x, int n)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CivilData = (struct zx_gl_CivilData_s*)x->CivilData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CivilData_s*)x->CivilData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CivilData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_AreaComparison_NUM_shape) */

int zx_gl_AreaComparison_NUM_shape(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_shape_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shape; y; ++n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_AreaComparison_GET_shape) */

struct zx_gl_shape_s* zx_gl_AreaComparison_GET_shape(struct zx_gl_AreaComparison_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  for (y = x->shape; n>=0 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_AreaComparison_POP_shape) */

struct zx_gl_shape_s* zx_gl_AreaComparison_POP_shape(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  y = x->shape;
  if (y)
    x->shape = (struct zx_gl_shape_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_AreaComparison_PUSH_shape) */

void zx_gl_AreaComparison_PUSH_shape(struct zx_gl_AreaComparison_s* x, struct zx_gl_shape_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shape->gg.g;
  x->shape = z;
}

/* FUNC(zx_gl_AreaComparison_REV_shape) */

void zx_gl_AreaComparison_REV_shape(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_shape_s* nxt;
  struct zx_gl_shape_s* y;
  if (!x) return;
  y = x->shape;
  if (!y) return;
  x->shape = 0;
  while (y) {
    nxt = (struct zx_gl_shape_s*)y->gg.g.n;
    y->gg.g.n = &x->shape->gg.g;
    x->shape = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_AreaComparison_PUT_shape) */

void zx_gl_AreaComparison_PUT_shape(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  y = x->shape;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shape = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_AreaComparison_ADD_shape) */

void zx_gl_AreaComparison_ADD_shape(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shape->gg.g;
    x->shape = z;
    return;
  case -1:
    y = x->shape;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_AreaComparison_DEL_shape) */

void zx_gl_AreaComparison_DEL_shape(struct zx_gl_AreaComparison_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shape = (struct zx_gl_shape_s*)x->shape->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_shape_s*)x->shape;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_AreaComparison_NUM_Extension) */

int zx_gl_AreaComparison_NUM_Extension(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_AreaComparison_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_AreaComparison_GET_Extension(struct zx_gl_AreaComparison_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_AreaComparison_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_AreaComparison_POP_Extension(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_AreaComparison_PUSH_Extension) */

void zx_gl_AreaComparison_PUSH_Extension(struct zx_gl_AreaComparison_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_AreaComparison_REV_Extension) */

void zx_gl_AreaComparison_REV_Extension(struct zx_gl_AreaComparison_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_AreaComparison_PUT_Extension) */

void zx_gl_AreaComparison_PUT_Extension(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_AreaComparison_ADD_Extension) */

void zx_gl_AreaComparison_ADD_Extension(struct zx_gl_AreaComparison_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_AreaComparison_DEL_Extension) */

void zx_gl_AreaComparison_DEL_Extension(struct zx_gl_AreaComparison_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_AreaComparison_GET_itemID) */
struct zx_str* zx_gl_AreaComparison_GET_itemID(struct zx_gl_AreaComparison_s* x) { return x->itemID; }
/* FUNC(zx_gl_AreaComparison_PUT_itemID) */
void zx_gl_AreaComparison_PUT_itemID(struct zx_gl_AreaComparison_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_gl_AreaComparison_GET_returnLocation) */
struct zx_str* zx_gl_AreaComparison_GET_returnLocation(struct zx_gl_AreaComparison_s* x) { return x->returnLocation; }
/* FUNC(zx_gl_AreaComparison_PUT_returnLocation) */
void zx_gl_AreaComparison_PUT_returnLocation(struct zx_gl_AreaComparison_s* x, struct zx_str* y) { x->returnLocation = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Box_NUM_coord) */

int zx_gl_Box_NUM_coord(struct zx_gl_Box_s* x)
{
  struct zx_gl_coord_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->coord; y; ++n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Box_GET_coord) */

struct zx_gl_coord_s* zx_gl_Box_GET_coord(struct zx_gl_Box_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  for (y = x->coord; n>=0 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Box_POP_coord) */

struct zx_gl_coord_s* zx_gl_Box_POP_coord(struct zx_gl_Box_s* x)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  y = x->coord;
  if (y)
    x->coord = (struct zx_gl_coord_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Box_PUSH_coord) */

void zx_gl_Box_PUSH_coord(struct zx_gl_Box_s* x, struct zx_gl_coord_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->coord->gg.g;
  x->coord = z;
}

/* FUNC(zx_gl_Box_REV_coord) */

void zx_gl_Box_REV_coord(struct zx_gl_Box_s* x)
{
  struct zx_gl_coord_s* nxt;
  struct zx_gl_coord_s* y;
  if (!x) return;
  y = x->coord;
  if (!y) return;
  x->coord = 0;
  while (y) {
    nxt = (struct zx_gl_coord_s*)y->gg.g.n;
    y->gg.g.n = &x->coord->gg.g;
    x->coord = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Box_PUT_coord) */

void zx_gl_Box_PUT_coord(struct zx_gl_Box_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  y = x->coord;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->coord = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Box_ADD_coord) */

void zx_gl_Box_ADD_coord(struct zx_gl_Box_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->coord->gg.g;
    x->coord = z;
    return;
  case -1:
    y = x->coord;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Box_DEL_coord) */

void zx_gl_Box_DEL_coord(struct zx_gl_Box_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->coord = (struct zx_gl_coord_s*)x->coord->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_coord_s*)x->coord;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Box_GET_gid) */
struct zx_str* zx_gl_Box_GET_gid(struct zx_gl_Box_s* x) { return x->gid; }
/* FUNC(zx_gl_Box_PUT_gid) */
void zx_gl_Box_PUT_gid(struct zx_gl_Box_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_Box_GET_srsName) */
struct zx_str* zx_gl_Box_GET_srsName(struct zx_gl_Box_s* x) { return x->srsName; }
/* FUNC(zx_gl_Box_PUT_srsName) */
void zx_gl_Box_PUT_srsName(struct zx_gl_Box_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ChangeArea_NUM_CivilData) */

int zx_gl_ChangeArea_NUM_CivilData(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_CivilData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CivilData; y; ++n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ChangeArea_GET_CivilData) */

struct zx_gl_CivilData_s* zx_gl_ChangeArea_GET_CivilData(struct zx_gl_ChangeArea_s* x, int n)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return 0;
  for (y = x->CivilData; n>=0 && y; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ChangeArea_POP_CivilData) */

struct zx_gl_CivilData_s* zx_gl_ChangeArea_POP_CivilData(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return 0;
  y = x->CivilData;
  if (y)
    x->CivilData = (struct zx_gl_CivilData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ChangeArea_PUSH_CivilData) */

void zx_gl_ChangeArea_PUSH_CivilData(struct zx_gl_ChangeArea_s* x, struct zx_gl_CivilData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CivilData->gg.g;
  x->CivilData = z;
}

/* FUNC(zx_gl_ChangeArea_REV_CivilData) */

void zx_gl_ChangeArea_REV_CivilData(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_CivilData_s* nxt;
  struct zx_gl_CivilData_s* y;
  if (!x) return;
  y = x->CivilData;
  if (!y) return;
  x->CivilData = 0;
  while (y) {
    nxt = (struct zx_gl_CivilData_s*)y->gg.g.n;
    y->gg.g.n = &x->CivilData->gg.g;
    x->CivilData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ChangeArea_PUT_CivilData) */

void zx_gl_ChangeArea_PUT_CivilData(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_CivilData_s* z)
{
  struct zx_gl_CivilData_s* y;
  if (!x || !z) return;
  y = x->CivilData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CivilData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ChangeArea_ADD_CivilData) */

void zx_gl_ChangeArea_ADD_CivilData(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_CivilData_s* z)
{
  struct zx_gl_CivilData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CivilData->gg.g;
    x->CivilData = z;
    return;
  case -1:
    y = x->CivilData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CivilData; n > 1 && y; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ChangeArea_DEL_CivilData) */

void zx_gl_ChangeArea_DEL_CivilData(struct zx_gl_ChangeArea_s* x, int n)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CivilData = (struct zx_gl_CivilData_s*)x->CivilData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CivilData_s*)x->CivilData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CivilData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ChangeArea_NUM_shape) */

int zx_gl_ChangeArea_NUM_shape(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_shape_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shape; y; ++n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ChangeArea_GET_shape) */

struct zx_gl_shape_s* zx_gl_ChangeArea_GET_shape(struct zx_gl_ChangeArea_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  for (y = x->shape; n>=0 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ChangeArea_POP_shape) */

struct zx_gl_shape_s* zx_gl_ChangeArea_POP_shape(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  y = x->shape;
  if (y)
    x->shape = (struct zx_gl_shape_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ChangeArea_PUSH_shape) */

void zx_gl_ChangeArea_PUSH_shape(struct zx_gl_ChangeArea_s* x, struct zx_gl_shape_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shape->gg.g;
  x->shape = z;
}

/* FUNC(zx_gl_ChangeArea_REV_shape) */

void zx_gl_ChangeArea_REV_shape(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_shape_s* nxt;
  struct zx_gl_shape_s* y;
  if (!x) return;
  y = x->shape;
  if (!y) return;
  x->shape = 0;
  while (y) {
    nxt = (struct zx_gl_shape_s*)y->gg.g.n;
    y->gg.g.n = &x->shape->gg.g;
    x->shape = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ChangeArea_PUT_shape) */

void zx_gl_ChangeArea_PUT_shape(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  y = x->shape;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shape = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ChangeArea_ADD_shape) */

void zx_gl_ChangeArea_ADD_shape(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shape->gg.g;
    x->shape = z;
    return;
  case -1:
    y = x->shape;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ChangeArea_DEL_shape) */

void zx_gl_ChangeArea_DEL_shape(struct zx_gl_ChangeArea_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shape = (struct zx_gl_shape_s*)x->shape->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_shape_s*)x->shape;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ChangeArea_NUM_Extension) */

int zx_gl_ChangeArea_NUM_Extension(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ChangeArea_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_ChangeArea_GET_Extension(struct zx_gl_ChangeArea_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ChangeArea_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_ChangeArea_POP_Extension(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ChangeArea_PUSH_Extension) */

void zx_gl_ChangeArea_PUSH_Extension(struct zx_gl_ChangeArea_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_ChangeArea_REV_Extension) */

void zx_gl_ChangeArea_REV_Extension(struct zx_gl_ChangeArea_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ChangeArea_PUT_Extension) */

void zx_gl_ChangeArea_PUT_Extension(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ChangeArea_ADD_Extension) */

void zx_gl_ChangeArea_ADD_Extension(struct zx_gl_ChangeArea_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ChangeArea_DEL_Extension) */

void zx_gl_ChangeArea_DEL_Extension(struct zx_gl_ChangeArea_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_ChangeArea_GET_event) */
struct zx_str* zx_gl_ChangeArea_GET_event(struct zx_gl_ChangeArea_s* x) { return x->event; }
/* FUNC(zx_gl_ChangeArea_PUT_event) */
void zx_gl_ChangeArea_PUT_event(struct zx_gl_ChangeArea_s* x, struct zx_str* y) { x->event = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArcArea_NUM_coord) */

int zx_gl_CircularArcArea_NUM_coord(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_gl_coord_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->coord; y; ++n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArcArea_GET_coord) */

struct zx_gl_coord_s* zx_gl_CircularArcArea_GET_coord(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  for (y = x->coord; n>=0 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_POP_coord) */

struct zx_gl_coord_s* zx_gl_CircularArcArea_POP_coord(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  y = x->coord;
  if (y)
    x->coord = (struct zx_gl_coord_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_PUSH_coord) */

void zx_gl_CircularArcArea_PUSH_coord(struct zx_gl_CircularArcArea_s* x, struct zx_gl_coord_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->coord->gg.g;
  x->coord = z;
}

/* FUNC(zx_gl_CircularArcArea_REV_coord) */

void zx_gl_CircularArcArea_REV_coord(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_gl_coord_s* nxt;
  struct zx_gl_coord_s* y;
  if (!x) return;
  y = x->coord;
  if (!y) return;
  x->coord = 0;
  while (y) {
    nxt = (struct zx_gl_coord_s*)y->gg.g.n;
    y->gg.g.n = &x->coord->gg.g;
    x->coord = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArcArea_PUT_coord) */

void zx_gl_CircularArcArea_PUT_coord(struct zx_gl_CircularArcArea_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  y = x->coord;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->coord = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CircularArcArea_ADD_coord) */

void zx_gl_CircularArcArea_ADD_coord(struct zx_gl_CircularArcArea_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->coord->gg.g;
    x->coord = z;
    return;
  case -1:
    y = x->coord;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CircularArcArea_DEL_coord) */

void zx_gl_CircularArcArea_DEL_coord(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->coord = (struct zx_gl_coord_s*)x->coord->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_coord_s*)x->coord;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArcArea_NUM_inRadius) */

int zx_gl_CircularArcArea_NUM_inRadius(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->inRadius; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArcArea_GET_inRadius) */

struct zx_elem_s* zx_gl_CircularArcArea_GET_inRadius(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->inRadius; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_POP_inRadius) */

struct zx_elem_s* zx_gl_CircularArcArea_POP_inRadius(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->inRadius;
  if (y)
    x->inRadius = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_PUSH_inRadius) */

void zx_gl_CircularArcArea_PUSH_inRadius(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->inRadius->g;
  x->inRadius = z;
}

/* FUNC(zx_gl_CircularArcArea_REV_inRadius) */

void zx_gl_CircularArcArea_REV_inRadius(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->inRadius;
  if (!y) return;
  x->inRadius = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->inRadius->g;
    x->inRadius = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArcArea_PUT_inRadius) */

void zx_gl_CircularArcArea_PUT_inRadius(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->inRadius;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->inRadius = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CircularArcArea_ADD_inRadius) */

void zx_gl_CircularArcArea_ADD_inRadius(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->inRadius->g;
    x->inRadius = z;
    return;
  case -1:
    y = x->inRadius;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->inRadius; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CircularArcArea_DEL_inRadius) */

void zx_gl_CircularArcArea_DEL_inRadius(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->inRadius = (struct zx_elem_s*)x->inRadius->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->inRadius;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->inRadius; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArcArea_NUM_outRadius) */

int zx_gl_CircularArcArea_NUM_outRadius(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->outRadius; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArcArea_GET_outRadius) */

struct zx_elem_s* zx_gl_CircularArcArea_GET_outRadius(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->outRadius; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_POP_outRadius) */

struct zx_elem_s* zx_gl_CircularArcArea_POP_outRadius(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->outRadius;
  if (y)
    x->outRadius = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_PUSH_outRadius) */

void zx_gl_CircularArcArea_PUSH_outRadius(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->outRadius->g;
  x->outRadius = z;
}

/* FUNC(zx_gl_CircularArcArea_REV_outRadius) */

void zx_gl_CircularArcArea_REV_outRadius(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->outRadius;
  if (!y) return;
  x->outRadius = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->outRadius->g;
    x->outRadius = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArcArea_PUT_outRadius) */

void zx_gl_CircularArcArea_PUT_outRadius(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->outRadius;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->outRadius = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CircularArcArea_ADD_outRadius) */

void zx_gl_CircularArcArea_ADD_outRadius(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->outRadius->g;
    x->outRadius = z;
    return;
  case -1:
    y = x->outRadius;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->outRadius; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CircularArcArea_DEL_outRadius) */

void zx_gl_CircularArcArea_DEL_outRadius(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->outRadius = (struct zx_elem_s*)x->outRadius->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->outRadius;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->outRadius; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArcArea_NUM_startAngle) */

int zx_gl_CircularArcArea_NUM_startAngle(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->startAngle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArcArea_GET_startAngle) */

struct zx_elem_s* zx_gl_CircularArcArea_GET_startAngle(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->startAngle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_POP_startAngle) */

struct zx_elem_s* zx_gl_CircularArcArea_POP_startAngle(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->startAngle;
  if (y)
    x->startAngle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_PUSH_startAngle) */

void zx_gl_CircularArcArea_PUSH_startAngle(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->startAngle->g;
  x->startAngle = z;
}

/* FUNC(zx_gl_CircularArcArea_REV_startAngle) */

void zx_gl_CircularArcArea_REV_startAngle(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->startAngle;
  if (!y) return;
  x->startAngle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->startAngle->g;
    x->startAngle = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArcArea_PUT_startAngle) */

void zx_gl_CircularArcArea_PUT_startAngle(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->startAngle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->startAngle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CircularArcArea_ADD_startAngle) */

void zx_gl_CircularArcArea_ADD_startAngle(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->startAngle->g;
    x->startAngle = z;
    return;
  case -1:
    y = x->startAngle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->startAngle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CircularArcArea_DEL_startAngle) */

void zx_gl_CircularArcArea_DEL_startAngle(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->startAngle = (struct zx_elem_s*)x->startAngle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->startAngle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->startAngle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArcArea_NUM_stopAngle) */

int zx_gl_CircularArcArea_NUM_stopAngle(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->stopAngle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArcArea_GET_stopAngle) */

struct zx_elem_s* zx_gl_CircularArcArea_GET_stopAngle(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->stopAngle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_POP_stopAngle) */

struct zx_elem_s* zx_gl_CircularArcArea_POP_stopAngle(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->stopAngle;
  if (y)
    x->stopAngle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_PUSH_stopAngle) */

void zx_gl_CircularArcArea_PUSH_stopAngle(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->stopAngle->g;
  x->stopAngle = z;
}

/* FUNC(zx_gl_CircularArcArea_REV_stopAngle) */

void zx_gl_CircularArcArea_REV_stopAngle(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->stopAngle;
  if (!y) return;
  x->stopAngle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->stopAngle->g;
    x->stopAngle = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArcArea_PUT_stopAngle) */

void zx_gl_CircularArcArea_PUT_stopAngle(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->stopAngle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->stopAngle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CircularArcArea_ADD_stopAngle) */

void zx_gl_CircularArcArea_ADD_stopAngle(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->stopAngle->g;
    x->stopAngle = z;
    return;
  case -1:
    y = x->stopAngle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->stopAngle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CircularArcArea_DEL_stopAngle) */

void zx_gl_CircularArcArea_DEL_stopAngle(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->stopAngle = (struct zx_elem_s*)x->stopAngle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->stopAngle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->stopAngle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArcArea_NUM_angularUnit) */

int zx_gl_CircularArcArea_NUM_angularUnit(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->angularUnit; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArcArea_GET_angularUnit) */

struct zx_elem_s* zx_gl_CircularArcArea_GET_angularUnit(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->angularUnit; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_POP_angularUnit) */

struct zx_elem_s* zx_gl_CircularArcArea_POP_angularUnit(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->angularUnit;
  if (y)
    x->angularUnit = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_PUSH_angularUnit) */

void zx_gl_CircularArcArea_PUSH_angularUnit(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->angularUnit->g;
  x->angularUnit = z;
}

/* FUNC(zx_gl_CircularArcArea_REV_angularUnit) */

void zx_gl_CircularArcArea_REV_angularUnit(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->angularUnit;
  if (!y) return;
  x->angularUnit = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->angularUnit->g;
    x->angularUnit = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArcArea_PUT_angularUnit) */

void zx_gl_CircularArcArea_PUT_angularUnit(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->angularUnit;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->angularUnit = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CircularArcArea_ADD_angularUnit) */

void zx_gl_CircularArcArea_ADD_angularUnit(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->angularUnit->g;
    x->angularUnit = z;
    return;
  case -1:
    y = x->angularUnit;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->angularUnit; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CircularArcArea_DEL_angularUnit) */

void zx_gl_CircularArcArea_DEL_angularUnit(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->angularUnit = (struct zx_elem_s*)x->angularUnit->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->angularUnit;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->angularUnit; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArcArea_NUM_distanceUnit) */

int zx_gl_CircularArcArea_NUM_distanceUnit(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->distanceUnit; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArcArea_GET_distanceUnit) */

struct zx_elem_s* zx_gl_CircularArcArea_GET_distanceUnit(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->distanceUnit; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_POP_distanceUnit) */

struct zx_elem_s* zx_gl_CircularArcArea_POP_distanceUnit(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->distanceUnit;
  if (y)
    x->distanceUnit = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CircularArcArea_PUSH_distanceUnit) */

void zx_gl_CircularArcArea_PUSH_distanceUnit(struct zx_gl_CircularArcArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->distanceUnit->g;
  x->distanceUnit = z;
}

/* FUNC(zx_gl_CircularArcArea_REV_distanceUnit) */

void zx_gl_CircularArcArea_REV_distanceUnit(struct zx_gl_CircularArcArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->distanceUnit;
  if (!y) return;
  x->distanceUnit = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->distanceUnit->g;
    x->distanceUnit = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArcArea_PUT_distanceUnit) */

void zx_gl_CircularArcArea_PUT_distanceUnit(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->distanceUnit;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->distanceUnit = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CircularArcArea_ADD_distanceUnit) */

void zx_gl_CircularArcArea_ADD_distanceUnit(struct zx_gl_CircularArcArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->distanceUnit->g;
    x->distanceUnit = z;
    return;
  case -1:
    y = x->distanceUnit;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->distanceUnit; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CircularArcArea_DEL_distanceUnit) */

void zx_gl_CircularArcArea_DEL_distanceUnit(struct zx_gl_CircularArcArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->distanceUnit = (struct zx_elem_s*)x->distanceUnit->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->distanceUnit;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->distanceUnit; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_gl_CircularArcArea_GET_gid) */
struct zx_str* zx_gl_CircularArcArea_GET_gid(struct zx_gl_CircularArcArea_s* x) { return x->gid; }
/* FUNC(zx_gl_CircularArcArea_PUT_gid) */
void zx_gl_CircularArcArea_PUT_gid(struct zx_gl_CircularArcArea_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_CircularArcArea_GET_srsName) */
struct zx_str* zx_gl_CircularArcArea_GET_srsName(struct zx_gl_CircularArcArea_s* x) { return x->srsName; }
/* FUNC(zx_gl_CircularArcArea_PUT_srsName) */
void zx_gl_CircularArcArea_PUT_srsName(struct zx_gl_CircularArcArea_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArea_NUM_coord) */

int zx_gl_CircularArea_NUM_coord(struct zx_gl_CircularArea_s* x)
{
  struct zx_gl_coord_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->coord; y; ++n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArea_GET_coord) */

struct zx_gl_coord_s* zx_gl_CircularArea_GET_coord(struct zx_gl_CircularArea_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  for (y = x->coord; n>=0 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArea_POP_coord) */

struct zx_gl_coord_s* zx_gl_CircularArea_POP_coord(struct zx_gl_CircularArea_s* x)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  y = x->coord;
  if (y)
    x->coord = (struct zx_gl_coord_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CircularArea_PUSH_coord) */

void zx_gl_CircularArea_PUSH_coord(struct zx_gl_CircularArea_s* x, struct zx_gl_coord_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->coord->gg.g;
  x->coord = z;
}

/* FUNC(zx_gl_CircularArea_REV_coord) */

void zx_gl_CircularArea_REV_coord(struct zx_gl_CircularArea_s* x)
{
  struct zx_gl_coord_s* nxt;
  struct zx_gl_coord_s* y;
  if (!x) return;
  y = x->coord;
  if (!y) return;
  x->coord = 0;
  while (y) {
    nxt = (struct zx_gl_coord_s*)y->gg.g.n;
    y->gg.g.n = &x->coord->gg.g;
    x->coord = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArea_PUT_coord) */

void zx_gl_CircularArea_PUT_coord(struct zx_gl_CircularArea_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  y = x->coord;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->coord = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CircularArea_ADD_coord) */

void zx_gl_CircularArea_ADD_coord(struct zx_gl_CircularArea_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->coord->gg.g;
    x->coord = z;
    return;
  case -1:
    y = x->coord;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CircularArea_DEL_coord) */

void zx_gl_CircularArea_DEL_coord(struct zx_gl_CircularArea_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->coord = (struct zx_gl_coord_s*)x->coord->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_coord_s*)x->coord;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArea_NUM_radius) */

int zx_gl_CircularArea_NUM_radius(struct zx_gl_CircularArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->radius; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArea_GET_radius) */

struct zx_elem_s* zx_gl_CircularArea_GET_radius(struct zx_gl_CircularArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->radius; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArea_POP_radius) */

struct zx_elem_s* zx_gl_CircularArea_POP_radius(struct zx_gl_CircularArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->radius;
  if (y)
    x->radius = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CircularArea_PUSH_radius) */

void zx_gl_CircularArea_PUSH_radius(struct zx_gl_CircularArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->radius->g;
  x->radius = z;
}

/* FUNC(zx_gl_CircularArea_REV_radius) */

void zx_gl_CircularArea_REV_radius(struct zx_gl_CircularArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->radius;
  if (!y) return;
  x->radius = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->radius->g;
    x->radius = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArea_PUT_radius) */

void zx_gl_CircularArea_PUT_radius(struct zx_gl_CircularArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->radius;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->radius = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CircularArea_ADD_radius) */

void zx_gl_CircularArea_ADD_radius(struct zx_gl_CircularArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->radius->g;
    x->radius = z;
    return;
  case -1:
    y = x->radius;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->radius; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CircularArea_DEL_radius) */

void zx_gl_CircularArea_DEL_radius(struct zx_gl_CircularArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->radius = (struct zx_elem_s*)x->radius->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->radius;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->radius; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CircularArea_NUM_distanceUnit) */

int zx_gl_CircularArea_NUM_distanceUnit(struct zx_gl_CircularArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->distanceUnit; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CircularArea_GET_distanceUnit) */

struct zx_elem_s* zx_gl_CircularArea_GET_distanceUnit(struct zx_gl_CircularArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->distanceUnit; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CircularArea_POP_distanceUnit) */

struct zx_elem_s* zx_gl_CircularArea_POP_distanceUnit(struct zx_gl_CircularArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->distanceUnit;
  if (y)
    x->distanceUnit = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CircularArea_PUSH_distanceUnit) */

void zx_gl_CircularArea_PUSH_distanceUnit(struct zx_gl_CircularArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->distanceUnit->g;
  x->distanceUnit = z;
}

/* FUNC(zx_gl_CircularArea_REV_distanceUnit) */

void zx_gl_CircularArea_REV_distanceUnit(struct zx_gl_CircularArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->distanceUnit;
  if (!y) return;
  x->distanceUnit = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->distanceUnit->g;
    x->distanceUnit = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CircularArea_PUT_distanceUnit) */

void zx_gl_CircularArea_PUT_distanceUnit(struct zx_gl_CircularArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->distanceUnit;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->distanceUnit = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CircularArea_ADD_distanceUnit) */

void zx_gl_CircularArea_ADD_distanceUnit(struct zx_gl_CircularArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->distanceUnit->g;
    x->distanceUnit = z;
    return;
  case -1:
    y = x->distanceUnit;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->distanceUnit; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CircularArea_DEL_distanceUnit) */

void zx_gl_CircularArea_DEL_distanceUnit(struct zx_gl_CircularArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->distanceUnit = (struct zx_elem_s*)x->distanceUnit->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->distanceUnit;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->distanceUnit; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_gl_CircularArea_GET_gid) */
struct zx_str* zx_gl_CircularArea_GET_gid(struct zx_gl_CircularArea_s* x) { return x->gid; }
/* FUNC(zx_gl_CircularArea_PUT_gid) */
void zx_gl_CircularArea_PUT_gid(struct zx_gl_CircularArea_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_CircularArea_GET_srsName) */
struct zx_str* zx_gl_CircularArea_GET_srsName(struct zx_gl_CircularArea_s* x) { return x->srsName; }
/* FUNC(zx_gl_CircularArea_PUT_srsName) */
void zx_gl_CircularArea_PUT_srsName(struct zx_gl_CircularArea_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_PostalAddress) */

int zx_gl_CivilData_NUM_PostalAddress(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PostalAddress; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_PostalAddress) */

struct zx_elem_s* zx_gl_CivilData_GET_PostalAddress(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PostalAddress; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_PostalAddress) */

struct zx_elem_s* zx_gl_CivilData_POP_PostalAddress(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PostalAddress;
  if (y)
    x->PostalAddress = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_PostalAddress) */

void zx_gl_CivilData_PUSH_PostalAddress(struct zx_gl_CivilData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PostalAddress->g;
  x->PostalAddress = z;
}

/* FUNC(zx_gl_CivilData_REV_PostalAddress) */

void zx_gl_CivilData_REV_PostalAddress(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PostalAddress;
  if (!y) return;
  x->PostalAddress = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PostalAddress->g;
    x->PostalAddress = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_PostalAddress) */

void zx_gl_CivilData_PUT_PostalAddress(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PostalAddress;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PostalAddress = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_PostalAddress) */

void zx_gl_CivilData_ADD_PostalAddress(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PostalAddress->g;
    x->PostalAddress = z;
    return;
  case -1:
    y = x->PostalAddress;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PostalAddress; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CivilData_DEL_PostalAddress) */

void zx_gl_CivilData_DEL_PostalAddress(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PostalAddress = (struct zx_elem_s*)x->PostalAddress->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PostalAddress;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PostalAddress; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_LPostalAddress) */

int zx_gl_CivilData_NUM_LPostalAddress(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LPostalAddress_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LPostalAddress; y; ++n, y = (struct zx_gl_LPostalAddress_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_LPostalAddress) */

struct zx_gl_LPostalAddress_s* zx_gl_CivilData_GET_LPostalAddress(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_gl_LPostalAddress_s* y;
  if (!x) return 0;
  for (y = x->LPostalAddress; n>=0 && y; --n, y = (struct zx_gl_LPostalAddress_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_LPostalAddress) */

struct zx_gl_LPostalAddress_s* zx_gl_CivilData_POP_LPostalAddress(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LPostalAddress_s* y;
  if (!x) return 0;
  y = x->LPostalAddress;
  if (y)
    x->LPostalAddress = (struct zx_gl_LPostalAddress_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_LPostalAddress) */

void zx_gl_CivilData_PUSH_LPostalAddress(struct zx_gl_CivilData_s* x, struct zx_gl_LPostalAddress_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LPostalAddress->gg.g;
  x->LPostalAddress = z;
}

/* FUNC(zx_gl_CivilData_REV_LPostalAddress) */

void zx_gl_CivilData_REV_LPostalAddress(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LPostalAddress_s* nxt;
  struct zx_gl_LPostalAddress_s* y;
  if (!x) return;
  y = x->LPostalAddress;
  if (!y) return;
  x->LPostalAddress = 0;
  while (y) {
    nxt = (struct zx_gl_LPostalAddress_s*)y->gg.g.n;
    y->gg.g.n = &x->LPostalAddress->gg.g;
    x->LPostalAddress = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_LPostalAddress) */

void zx_gl_CivilData_PUT_LPostalAddress(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LPostalAddress_s* z)
{
  struct zx_gl_LPostalAddress_s* y;
  if (!x || !z) return;
  y = x->LPostalAddress;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LPostalAddress = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LPostalAddress_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_LPostalAddress) */

void zx_gl_CivilData_ADD_LPostalAddress(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LPostalAddress_s* z)
{
  struct zx_gl_LPostalAddress_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LPostalAddress->gg.g;
    x->LPostalAddress = z;
    return;
  case -1:
    y = x->LPostalAddress;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_LPostalAddress_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LPostalAddress; n > 1 && y; --n, y = (struct zx_gl_LPostalAddress_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CivilData_DEL_LPostalAddress) */

void zx_gl_CivilData_DEL_LPostalAddress(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_gl_LPostalAddress_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LPostalAddress = (struct zx_gl_LPostalAddress_s*)x->LPostalAddress->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_LPostalAddress_s*)x->LPostalAddress;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_LPostalAddress_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LPostalAddress; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LPostalAddress_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_PostalCode) */

int zx_gl_CivilData_NUM_PostalCode(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PostalCode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_PostalCode) */

struct zx_elem_s* zx_gl_CivilData_GET_PostalCode(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->PostalCode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_PostalCode) */

struct zx_elem_s* zx_gl_CivilData_POP_PostalCode(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->PostalCode;
  if (y)
    x->PostalCode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_PostalCode) */

void zx_gl_CivilData_PUSH_PostalCode(struct zx_gl_CivilData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->PostalCode->g;
  x->PostalCode = z;
}

/* FUNC(zx_gl_CivilData_REV_PostalCode) */

void zx_gl_CivilData_REV_PostalCode(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->PostalCode;
  if (!y) return;
  x->PostalCode = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->PostalCode->g;
    x->PostalCode = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_PostalCode) */

void zx_gl_CivilData_PUT_PostalCode(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->PostalCode;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->PostalCode = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_PostalCode) */

void zx_gl_CivilData_ADD_PostalCode(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->PostalCode->g;
    x->PostalCode = z;
    return;
  case -1:
    y = x->PostalCode;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PostalCode; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CivilData_DEL_PostalCode) */

void zx_gl_CivilData_DEL_PostalCode(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PostalCode = (struct zx_elem_s*)x->PostalCode->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->PostalCode;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->PostalCode; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_L) */

int zx_gl_CivilData_NUM_L(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->L; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_L) */

struct zx_elem_s* zx_gl_CivilData_GET_L(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->L; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_L) */

struct zx_elem_s* zx_gl_CivilData_POP_L(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->L;
  if (y)
    x->L = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_L) */

void zx_gl_CivilData_PUSH_L(struct zx_gl_CivilData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->L->g;
  x->L = z;
}

/* FUNC(zx_gl_CivilData_REV_L) */

void zx_gl_CivilData_REV_L(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->L;
  if (!y) return;
  x->L = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->L->g;
    x->L = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_L) */

void zx_gl_CivilData_PUT_L(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->L;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->L = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_L) */

void zx_gl_CivilData_ADD_L(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->L->g;
    x->L = z;
    return;
  case -1:
    y = x->L;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->L; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CivilData_DEL_L) */

void zx_gl_CivilData_DEL_L(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->L = (struct zx_elem_s*)x->L->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->L;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->L; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_LL) */

int zx_gl_CivilData_NUM_LL(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LL_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LL; y; ++n, y = (struct zx_gl_LL_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_LL) */

struct zx_gl_LL_s* zx_gl_CivilData_GET_LL(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_gl_LL_s* y;
  if (!x) return 0;
  for (y = x->LL; n>=0 && y; --n, y = (struct zx_gl_LL_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_LL) */

struct zx_gl_LL_s* zx_gl_CivilData_POP_LL(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LL_s* y;
  if (!x) return 0;
  y = x->LL;
  if (y)
    x->LL = (struct zx_gl_LL_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_LL) */

void zx_gl_CivilData_PUSH_LL(struct zx_gl_CivilData_s* x, struct zx_gl_LL_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LL->gg.g;
  x->LL = z;
}

/* FUNC(zx_gl_CivilData_REV_LL) */

void zx_gl_CivilData_REV_LL(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LL_s* nxt;
  struct zx_gl_LL_s* y;
  if (!x) return;
  y = x->LL;
  if (!y) return;
  x->LL = 0;
  while (y) {
    nxt = (struct zx_gl_LL_s*)y->gg.g.n;
    y->gg.g.n = &x->LL->gg.g;
    x->LL = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_LL) */

void zx_gl_CivilData_PUT_LL(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LL_s* z)
{
  struct zx_gl_LL_s* y;
  if (!x || !z) return;
  y = x->LL;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LL = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_LL) */

void zx_gl_CivilData_ADD_LL(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LL_s* z)
{
  struct zx_gl_LL_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LL->gg.g;
    x->LL = z;
    return;
  case -1:
    y = x->LL;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_LL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LL; n > 1 && y; --n, y = (struct zx_gl_LL_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CivilData_DEL_LL) */

void zx_gl_CivilData_DEL_LL(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_gl_LL_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LL = (struct zx_gl_LL_s*)x->LL->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_LL_s*)x->LL;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_LL_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LL; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LL_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_St) */

int zx_gl_CivilData_NUM_St(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->St; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_St) */

struct zx_elem_s* zx_gl_CivilData_GET_St(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->St; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_St) */

struct zx_elem_s* zx_gl_CivilData_POP_St(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->St;
  if (y)
    x->St = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_St) */

void zx_gl_CivilData_PUSH_St(struct zx_gl_CivilData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->St->g;
  x->St = z;
}

/* FUNC(zx_gl_CivilData_REV_St) */

void zx_gl_CivilData_REV_St(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->St;
  if (!y) return;
  x->St = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->St->g;
    x->St = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_St) */

void zx_gl_CivilData_PUT_St(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->St;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->St = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_St) */

void zx_gl_CivilData_ADD_St(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->St->g;
    x->St = z;
    return;
  case -1:
    y = x->St;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->St; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CivilData_DEL_St) */

void zx_gl_CivilData_DEL_St(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->St = (struct zx_elem_s*)x->St->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->St;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->St; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_LSt) */

int zx_gl_CivilData_NUM_LSt(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LSt_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LSt; y; ++n, y = (struct zx_gl_LSt_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_LSt) */

struct zx_gl_LSt_s* zx_gl_CivilData_GET_LSt(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_gl_LSt_s* y;
  if (!x) return 0;
  for (y = x->LSt; n>=0 && y; --n, y = (struct zx_gl_LSt_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_LSt) */

struct zx_gl_LSt_s* zx_gl_CivilData_POP_LSt(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LSt_s* y;
  if (!x) return 0;
  y = x->LSt;
  if (y)
    x->LSt = (struct zx_gl_LSt_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_LSt) */

void zx_gl_CivilData_PUSH_LSt(struct zx_gl_CivilData_s* x, struct zx_gl_LSt_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LSt->gg.g;
  x->LSt = z;
}

/* FUNC(zx_gl_CivilData_REV_LSt) */

void zx_gl_CivilData_REV_LSt(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_LSt_s* nxt;
  struct zx_gl_LSt_s* y;
  if (!x) return;
  y = x->LSt;
  if (!y) return;
  x->LSt = 0;
  while (y) {
    nxt = (struct zx_gl_LSt_s*)y->gg.g.n;
    y->gg.g.n = &x->LSt->gg.g;
    x->LSt = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_LSt) */

void zx_gl_CivilData_PUT_LSt(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LSt_s* z)
{
  struct zx_gl_LSt_s* y;
  if (!x || !z) return;
  y = x->LSt;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LSt = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LSt_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_LSt) */

void zx_gl_CivilData_ADD_LSt(struct zx_gl_CivilData_s* x, int n, struct zx_gl_LSt_s* z)
{
  struct zx_gl_LSt_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LSt->gg.g;
    x->LSt = z;
    return;
  case -1:
    y = x->LSt;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_LSt_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LSt; n > 1 && y; --n, y = (struct zx_gl_LSt_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CivilData_DEL_LSt) */

void zx_gl_CivilData_DEL_LSt(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_gl_LSt_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LSt = (struct zx_gl_LSt_s*)x->LSt->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_LSt_s*)x->LSt;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_LSt_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LSt; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LSt_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_C) */

int zx_gl_CivilData_NUM_C(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->C; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_C) */

struct zx_elem_s* zx_gl_CivilData_GET_C(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->C; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_C) */

struct zx_elem_s* zx_gl_CivilData_POP_C(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->C;
  if (y)
    x->C = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_C) */

void zx_gl_CivilData_PUSH_C(struct zx_gl_CivilData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->C->g;
  x->C = z;
}

/* FUNC(zx_gl_CivilData_REV_C) */

void zx_gl_CivilData_REV_C(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->C;
  if (!y) return;
  x->C = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->C->g;
    x->C = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_C) */

void zx_gl_CivilData_PUT_C(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->C;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->C = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_C) */

void zx_gl_CivilData_ADD_C(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->C->g;
    x->C = z;
    return;
  case -1:
    y = x->C;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->C; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CivilData_DEL_C) */

void zx_gl_CivilData_DEL_C(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->C = (struct zx_elem_s*)x->C->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->C;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->C; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_MNC) */

int zx_gl_CivilData_NUM_MNC(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MNC; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_MNC) */

struct zx_elem_s* zx_gl_CivilData_GET_MNC(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->MNC; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_MNC) */

struct zx_elem_s* zx_gl_CivilData_POP_MNC(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->MNC;
  if (y)
    x->MNC = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_MNC) */

void zx_gl_CivilData_PUSH_MNC(struct zx_gl_CivilData_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->MNC->g;
  x->MNC = z;
}

/* FUNC(zx_gl_CivilData_REV_MNC) */

void zx_gl_CivilData_REV_MNC(struct zx_gl_CivilData_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->MNC;
  if (!y) return;
  x->MNC = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->MNC->g;
    x->MNC = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_MNC) */

void zx_gl_CivilData_PUT_MNC(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->MNC;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->MNC = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_MNC) */

void zx_gl_CivilData_ADD_MNC(struct zx_gl_CivilData_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->MNC->g;
    x->MNC = z;
    return;
  case -1:
    y = x->MNC;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MNC; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_CivilData_DEL_MNC) */

void zx_gl_CivilData_DEL_MNC(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MNC = (struct zx_elem_s*)x->MNC->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->MNC;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->MNC; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CivilData_NUM_Extension) */

int zx_gl_CivilData_NUM_Extension(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CivilData_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_CivilData_GET_Extension(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CivilData_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_CivilData_POP_Extension(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CivilData_PUSH_Extension) */

void zx_gl_CivilData_PUSH_Extension(struct zx_gl_CivilData_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_CivilData_REV_Extension) */

void zx_gl_CivilData_REV_Extension(struct zx_gl_CivilData_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CivilData_PUT_Extension) */

void zx_gl_CivilData_PUT_Extension(struct zx_gl_CivilData_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CivilData_ADD_Extension) */

void zx_gl_CivilData_ADD_Extension(struct zx_gl_CivilData_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CivilData_DEL_Extension) */

void zx_gl_CivilData_DEL_Extension(struct zx_gl_CivilData_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_gl_ComparisonResult_GET_ItemIDRef) */
struct zx_str* zx_gl_ComparisonResult_GET_ItemIDRef(struct zx_gl_ComparisonResult_s* x) { return x->ItemIDRef; }
/* FUNC(zx_gl_ComparisonResult_PUT_ItemIDRef) */
void zx_gl_ComparisonResult_PUT_ItemIDRef(struct zx_gl_ComparisonResult_s* x, struct zx_str* y) { x->ItemIDRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CoordinateReferenceSystem_NUM_Identifier) */

int zx_gl_CoordinateReferenceSystem_NUM_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x)
{
  struct zx_gl_Identifier_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Identifier; y; ++n, y = (struct zx_gl_Identifier_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CoordinateReferenceSystem_GET_Identifier) */

struct zx_gl_Identifier_s* zx_gl_CoordinateReferenceSystem_GET_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, int n)
{
  struct zx_gl_Identifier_s* y;
  if (!x) return 0;
  for (y = x->Identifier; n>=0 && y; --n, y = (struct zx_gl_Identifier_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CoordinateReferenceSystem_POP_Identifier) */

struct zx_gl_Identifier_s* zx_gl_CoordinateReferenceSystem_POP_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x)
{
  struct zx_gl_Identifier_s* y;
  if (!x) return 0;
  y = x->Identifier;
  if (y)
    x->Identifier = (struct zx_gl_Identifier_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CoordinateReferenceSystem_PUSH_Identifier) */

void zx_gl_CoordinateReferenceSystem_PUSH_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, struct zx_gl_Identifier_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Identifier->gg.g;
  x->Identifier = z;
}

/* FUNC(zx_gl_CoordinateReferenceSystem_REV_Identifier) */

void zx_gl_CoordinateReferenceSystem_REV_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x)
{
  struct zx_gl_Identifier_s* nxt;
  struct zx_gl_Identifier_s* y;
  if (!x) return;
  y = x->Identifier;
  if (!y) return;
  x->Identifier = 0;
  while (y) {
    nxt = (struct zx_gl_Identifier_s*)y->gg.g.n;
    y->gg.g.n = &x->Identifier->gg.g;
    x->Identifier = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CoordinateReferenceSystem_PUT_Identifier) */

void zx_gl_CoordinateReferenceSystem_PUT_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, int n, struct zx_gl_Identifier_s* z)
{
  struct zx_gl_Identifier_s* y;
  if (!x || !z) return;
  y = x->Identifier;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Identifier = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Identifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CoordinateReferenceSystem_ADD_Identifier) */

void zx_gl_CoordinateReferenceSystem_ADD_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, int n, struct zx_gl_Identifier_s* z)
{
  struct zx_gl_Identifier_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Identifier->gg.g;
    x->Identifier = z;
    return;
  case -1:
    y = x->Identifier;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Identifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Identifier; n > 1 && y; --n, y = (struct zx_gl_Identifier_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CoordinateReferenceSystem_DEL_Identifier) */

void zx_gl_CoordinateReferenceSystem_DEL_Identifier(struct zx_gl_CoordinateReferenceSystem_s* x, int n)
{
  struct zx_gl_Identifier_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Identifier = (struct zx_gl_Identifier_s*)x->Identifier->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Identifier_s*)x->Identifier;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Identifier_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Identifier; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Identifier_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Create_NUM_ResourceID) */

int zx_gl_Create_NUM_ResourceID(struct zx_gl_Create_s* x)
{
  struct zx_gl_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Create_GET_ResourceID) */

struct zx_gl_ResourceID_s* zx_gl_Create_GET_ResourceID(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Create_POP_ResourceID) */

struct zx_gl_ResourceID_s* zx_gl_Create_POP_ResourceID(struct zx_gl_Create_s* x)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_gl_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Create_PUSH_ResourceID) */

void zx_gl_Create_PUSH_ResourceID(struct zx_gl_Create_s* x, struct zx_gl_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_gl_Create_REV_ResourceID) */

void zx_gl_Create_REV_ResourceID(struct zx_gl_Create_s* x)
{
  struct zx_gl_ResourceID_s* nxt;
  struct zx_gl_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_gl_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Create_PUT_ResourceID) */

void zx_gl_Create_PUT_ResourceID(struct zx_gl_Create_s* x, int n, struct zx_gl_ResourceID_s* z)
{
  struct zx_gl_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Create_ADD_ResourceID) */

void zx_gl_Create_ADD_ResourceID(struct zx_gl_Create_s* x, int n, struct zx_gl_ResourceID_s* z)
{
  struct zx_gl_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Create_DEL_ResourceID) */

void zx_gl_Create_DEL_ResourceID(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_gl_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Create_NUM_EncryptedResourceID) */

int zx_gl_Create_NUM_EncryptedResourceID(struct zx_gl_Create_s* x)
{
  struct zx_gl_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Create_GET_EncryptedResourceID) */

struct zx_gl_EncryptedResourceID_s* zx_gl_Create_GET_EncryptedResourceID(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Create_POP_EncryptedResourceID) */

struct zx_gl_EncryptedResourceID_s* zx_gl_Create_POP_EncryptedResourceID(struct zx_gl_Create_s* x)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Create_PUSH_EncryptedResourceID) */

void zx_gl_Create_PUSH_EncryptedResourceID(struct zx_gl_Create_s* x, struct zx_gl_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_gl_Create_REV_EncryptedResourceID) */

void zx_gl_Create_REV_EncryptedResourceID(struct zx_gl_Create_s* x)
{
  struct zx_gl_EncryptedResourceID_s* nxt;
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Create_PUT_EncryptedResourceID) */

void zx_gl_Create_PUT_EncryptedResourceID(struct zx_gl_Create_s* x, int n, struct zx_gl_EncryptedResourceID_s* z)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Create_ADD_EncryptedResourceID) */

void zx_gl_Create_ADD_EncryptedResourceID(struct zx_gl_Create_s* x, int n, struct zx_gl_EncryptedResourceID_s* z)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Create_DEL_EncryptedResourceID) */

void zx_gl_Create_DEL_EncryptedResourceID(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_gl_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Create_NUM_Subscription) */

int zx_gl_Create_NUM_Subscription(struct zx_gl_Create_s* x)
{
  struct zx_gl_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Create_GET_Subscription) */

struct zx_gl_Subscription_s* zx_gl_Create_GET_Subscription(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Create_POP_Subscription) */

struct zx_gl_Subscription_s* zx_gl_Create_POP_Subscription(struct zx_gl_Create_s* x)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_gl_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Create_PUSH_Subscription) */

void zx_gl_Create_PUSH_Subscription(struct zx_gl_Create_s* x, struct zx_gl_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_gl_Create_REV_Subscription) */

void zx_gl_Create_REV_Subscription(struct zx_gl_Create_s* x)
{
  struct zx_gl_Subscription_s* nxt;
  struct zx_gl_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_gl_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Create_PUT_Subscription) */

void zx_gl_Create_PUT_Subscription(struct zx_gl_Create_s* x, int n, struct zx_gl_Subscription_s* z)
{
  struct zx_gl_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Create_ADD_Subscription) */

void zx_gl_Create_ADD_Subscription(struct zx_gl_Create_s* x, int n, struct zx_gl_Subscription_s* z)
{
  struct zx_gl_Subscription_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = z;
    return;
  case -1:
    y = x->Subscription;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Create_DEL_Subscription) */

void zx_gl_Create_DEL_Subscription(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_gl_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Create_NUM_CreateItem) */

int zx_gl_Create_NUM_CreateItem(struct zx_gl_Create_s* x)
{
  struct zx_gl_CreateItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CreateItem; y; ++n, y = (struct zx_gl_CreateItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Create_GET_CreateItem) */

struct zx_gl_CreateItem_s* zx_gl_Create_GET_CreateItem(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_CreateItem_s* y;
  if (!x) return 0;
  for (y = x->CreateItem; n>=0 && y; --n, y = (struct zx_gl_CreateItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Create_POP_CreateItem) */

struct zx_gl_CreateItem_s* zx_gl_Create_POP_CreateItem(struct zx_gl_Create_s* x)
{
  struct zx_gl_CreateItem_s* y;
  if (!x) return 0;
  y = x->CreateItem;
  if (y)
    x->CreateItem = (struct zx_gl_CreateItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Create_PUSH_CreateItem) */

void zx_gl_Create_PUSH_CreateItem(struct zx_gl_Create_s* x, struct zx_gl_CreateItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CreateItem->gg.g;
  x->CreateItem = z;
}

/* FUNC(zx_gl_Create_REV_CreateItem) */

void zx_gl_Create_REV_CreateItem(struct zx_gl_Create_s* x)
{
  struct zx_gl_CreateItem_s* nxt;
  struct zx_gl_CreateItem_s* y;
  if (!x) return;
  y = x->CreateItem;
  if (!y) return;
  x->CreateItem = 0;
  while (y) {
    nxt = (struct zx_gl_CreateItem_s*)y->gg.g.n;
    y->gg.g.n = &x->CreateItem->gg.g;
    x->CreateItem = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Create_PUT_CreateItem) */

void zx_gl_Create_PUT_CreateItem(struct zx_gl_Create_s* x, int n, struct zx_gl_CreateItem_s* z)
{
  struct zx_gl_CreateItem_s* y;
  if (!x || !z) return;
  y = x->CreateItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CreateItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CreateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Create_ADD_CreateItem) */

void zx_gl_Create_ADD_CreateItem(struct zx_gl_Create_s* x, int n, struct zx_gl_CreateItem_s* z)
{
  struct zx_gl_CreateItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CreateItem->gg.g;
    x->CreateItem = z;
    return;
  case -1:
    y = x->CreateItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CreateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreateItem; n > 1 && y; --n, y = (struct zx_gl_CreateItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Create_DEL_CreateItem) */

void zx_gl_Create_DEL_CreateItem(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_CreateItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CreateItem = (struct zx_gl_CreateItem_s*)x->CreateItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CreateItem_s*)x->CreateItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CreateItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreateItem; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CreateItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Create_NUM_ItemSelection) */

int zx_gl_Create_NUM_ItemSelection(struct zx_gl_Create_s* x)
{
  struct zx_gl_ItemSelection_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemSelection; y; ++n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Create_GET_ItemSelection) */

struct zx_gl_ItemSelection_s* zx_gl_Create_GET_ItemSelection(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return 0;
  for (y = x->ItemSelection; n>=0 && y; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Create_POP_ItemSelection) */

struct zx_gl_ItemSelection_s* zx_gl_Create_POP_ItemSelection(struct zx_gl_Create_s* x)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return 0;
  y = x->ItemSelection;
  if (y)
    x->ItemSelection = (struct zx_gl_ItemSelection_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Create_PUSH_ItemSelection) */

void zx_gl_Create_PUSH_ItemSelection(struct zx_gl_Create_s* x, struct zx_gl_ItemSelection_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemSelection->gg.g;
  x->ItemSelection = z;
}

/* FUNC(zx_gl_Create_REV_ItemSelection) */

void zx_gl_Create_REV_ItemSelection(struct zx_gl_Create_s* x)
{
  struct zx_gl_ItemSelection_s* nxt;
  struct zx_gl_ItemSelection_s* y;
  if (!x) return;
  y = x->ItemSelection;
  if (!y) return;
  x->ItemSelection = 0;
  while (y) {
    nxt = (struct zx_gl_ItemSelection_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Create_PUT_ItemSelection) */

void zx_gl_Create_PUT_ItemSelection(struct zx_gl_Create_s* x, int n, struct zx_gl_ItemSelection_s* z)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x || !z) return;
  y = x->ItemSelection;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemSelection = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Create_ADD_ItemSelection) */

void zx_gl_Create_ADD_ItemSelection(struct zx_gl_Create_s* x, int n, struct zx_gl_ItemSelection_s* z)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = z;
    return;
  case -1:
    y = x->ItemSelection;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Create_DEL_ItemSelection) */

void zx_gl_Create_DEL_ItemSelection(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemSelection = (struct zx_gl_ItemSelection_s*)x->ItemSelection->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ItemSelection_s*)x->ItemSelection;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Create_NUM_Extension) */

int zx_gl_Create_NUM_Extension(struct zx_gl_Create_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Create_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_Create_GET_Extension(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Create_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_Create_POP_Extension(struct zx_gl_Create_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Create_PUSH_Extension) */

void zx_gl_Create_PUSH_Extension(struct zx_gl_Create_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_Create_REV_Extension) */

void zx_gl_Create_REV_Extension(struct zx_gl_Create_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Create_PUT_Extension) */

void zx_gl_Create_PUT_Extension(struct zx_gl_Create_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Create_ADD_Extension) */

void zx_gl_Create_ADD_Extension(struct zx_gl_Create_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Create_DEL_Extension) */

void zx_gl_Create_DEL_Extension(struct zx_gl_Create_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Create_GET_id) */
struct zx_str* zx_gl_Create_GET_id(struct zx_gl_Create_s* x) { return x->id; }
/* FUNC(zx_gl_Create_PUT_id) */
void zx_gl_Create_PUT_id(struct zx_gl_Create_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CreateItem_NUM_NewData) */

int zx_gl_CreateItem_NUM_NewData(struct zx_gl_CreateItem_s* x)
{
  struct zx_gl_NewData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewData; y; ++n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CreateItem_GET_NewData) */

struct zx_gl_NewData_s* zx_gl_CreateItem_GET_NewData(struct zx_gl_CreateItem_s* x, int n)
{
  struct zx_gl_NewData_s* y;
  if (!x) return 0;
  for (y = x->NewData; n>=0 && y; --n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CreateItem_POP_NewData) */

struct zx_gl_NewData_s* zx_gl_CreateItem_POP_NewData(struct zx_gl_CreateItem_s* x)
{
  struct zx_gl_NewData_s* y;
  if (!x) return 0;
  y = x->NewData;
  if (y)
    x->NewData = (struct zx_gl_NewData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CreateItem_PUSH_NewData) */

void zx_gl_CreateItem_PUSH_NewData(struct zx_gl_CreateItem_s* x, struct zx_gl_NewData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NewData->gg.g;
  x->NewData = z;
}

/* FUNC(zx_gl_CreateItem_REV_NewData) */

void zx_gl_CreateItem_REV_NewData(struct zx_gl_CreateItem_s* x)
{
  struct zx_gl_NewData_s* nxt;
  struct zx_gl_NewData_s* y;
  if (!x) return;
  y = x->NewData;
  if (!y) return;
  x->NewData = 0;
  while (y) {
    nxt = (struct zx_gl_NewData_s*)y->gg.g.n;
    y->gg.g.n = &x->NewData->gg.g;
    x->NewData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CreateItem_PUT_NewData) */

void zx_gl_CreateItem_PUT_NewData(struct zx_gl_CreateItem_s* x, int n, struct zx_gl_NewData_s* z)
{
  struct zx_gl_NewData_s* y;
  if (!x || !z) return;
  y = x->NewData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NewData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CreateItem_ADD_NewData) */

void zx_gl_CreateItem_ADD_NewData(struct zx_gl_CreateItem_s* x, int n, struct zx_gl_NewData_s* z)
{
  struct zx_gl_NewData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NewData->gg.g;
    x->NewData = z;
    return;
  case -1:
    y = x->NewData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y; --n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CreateItem_DEL_NewData) */

void zx_gl_CreateItem_DEL_NewData(struct zx_gl_CreateItem_s* x, int n)
{
  struct zx_gl_NewData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewData = (struct zx_gl_NewData_s*)x->NewData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_NewData_s*)x->NewData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_CreateItem_GET_id) */
struct zx_str* zx_gl_CreateItem_GET_id(struct zx_gl_CreateItem_s* x) { return x->id; }
/* FUNC(zx_gl_CreateItem_PUT_id) */
void zx_gl_CreateItem_PUT_id(struct zx_gl_CreateItem_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_CreateItem_GET_itemID) */
struct zx_str* zx_gl_CreateItem_GET_itemID(struct zx_gl_CreateItem_s* x) { return x->itemID; }
/* FUNC(zx_gl_CreateItem_PUT_itemID) */
void zx_gl_CreateItem_PUT_itemID(struct zx_gl_CreateItem_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_gl_CreateItem_GET_objectType) */
struct zx_str* zx_gl_CreateItem_GET_objectType(struct zx_gl_CreateItem_s* x) { return x->objectType; }
/* FUNC(zx_gl_CreateItem_PUT_objectType) */
void zx_gl_CreateItem_PUT_objectType(struct zx_gl_CreateItem_s* x, struct zx_str* y) { x->objectType = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CreateResponse_NUM_Status) */

int zx_gl_CreateResponse_NUM_Status(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CreateResponse_GET_Status) */

struct zx_gl_Status_s* zx_gl_CreateResponse_GET_Status(struct zx_gl_CreateResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CreateResponse_POP_Status) */

struct zx_gl_Status_s* zx_gl_CreateResponse_POP_Status(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_gl_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CreateResponse_PUSH_Status) */

void zx_gl_CreateResponse_PUSH_Status(struct zx_gl_CreateResponse_s* x, struct zx_gl_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_gl_CreateResponse_REV_Status) */

void zx_gl_CreateResponse_REV_Status(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_Status_s* nxt;
  struct zx_gl_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_gl_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CreateResponse_PUT_Status) */

void zx_gl_CreateResponse_PUT_Status(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CreateResponse_ADD_Status) */

void zx_gl_CreateResponse_ADD_Status(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CreateResponse_DEL_Status) */

void zx_gl_CreateResponse_DEL_Status(struct zx_gl_CreateResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_gl_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CreateResponse_NUM_ItemData) */

int zx_gl_CreateResponse_NUM_ItemData(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CreateResponse_GET_ItemData) */

struct zx_gl_ItemData_s* zx_gl_CreateResponse_GET_ItemData(struct zx_gl_CreateResponse_s* x, int n)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CreateResponse_POP_ItemData) */

struct zx_gl_ItemData_s* zx_gl_CreateResponse_POP_ItemData(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_gl_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CreateResponse_PUSH_ItemData) */

void zx_gl_CreateResponse_PUSH_ItemData(struct zx_gl_CreateResponse_s* x, struct zx_gl_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_gl_CreateResponse_REV_ItemData) */

void zx_gl_CreateResponse_REV_ItemData(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_ItemData_s* nxt;
  struct zx_gl_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_gl_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CreateResponse_PUT_ItemData) */

void zx_gl_CreateResponse_PUT_ItemData(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_ItemData_s* z)
{
  struct zx_gl_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CreateResponse_ADD_ItemData) */

void zx_gl_CreateResponse_ADD_ItemData(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_ItemData_s* z)
{
  struct zx_gl_ItemData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = z;
    return;
  case -1:
    y = x->ItemData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CreateResponse_DEL_ItemData) */

void zx_gl_CreateResponse_DEL_ItemData(struct zx_gl_CreateResponse_s* x, int n)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_gl_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_CreateResponse_NUM_Extension) */

int zx_gl_CreateResponse_NUM_Extension(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_CreateResponse_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_CreateResponse_GET_Extension(struct zx_gl_CreateResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_CreateResponse_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_CreateResponse_POP_Extension(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_CreateResponse_PUSH_Extension) */

void zx_gl_CreateResponse_PUSH_Extension(struct zx_gl_CreateResponse_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_CreateResponse_REV_Extension) */

void zx_gl_CreateResponse_REV_Extension(struct zx_gl_CreateResponse_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_CreateResponse_PUT_Extension) */

void zx_gl_CreateResponse_PUT_Extension(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_CreateResponse_ADD_Extension) */

void zx_gl_CreateResponse_ADD_Extension(struct zx_gl_CreateResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_CreateResponse_DEL_Extension) */

void zx_gl_CreateResponse_DEL_Extension(struct zx_gl_CreateResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_CreateResponse_GET_id) */
struct zx_str* zx_gl_CreateResponse_GET_id(struct zx_gl_CreateResponse_s* x) { return x->id; }
/* FUNC(zx_gl_CreateResponse_PUT_id) */
void zx_gl_CreateResponse_PUT_id(struct zx_gl_CreateResponse_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_CreateResponse_GET_timeStamp) */
struct zx_str* zx_gl_CreateResponse_GET_timeStamp(struct zx_gl_CreateResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_gl_CreateResponse_PUT_timeStamp) */
void zx_gl_CreateResponse_PUT_timeStamp(struct zx_gl_CreateResponse_s* x, struct zx_str* y) { x->timeStamp = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Credential_NUM_Assertion) */

int zx_gl_Credential_NUM_Assertion(struct zx_gl_Credential_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Credential_GET_Assertion) */

struct zx_sa_Assertion_s* zx_gl_Credential_GET_Assertion(struct zx_gl_Credential_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Credential_POP_Assertion) */

struct zx_sa_Assertion_s* zx_gl_Credential_POP_Assertion(struct zx_gl_Credential_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Credential_PUSH_Assertion) */

void zx_gl_Credential_PUSH_Assertion(struct zx_gl_Credential_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_gl_Credential_REV_Assertion) */

void zx_gl_Credential_REV_Assertion(struct zx_gl_Credential_s* x)
{
  struct zx_sa_Assertion_s* nxt;
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zx_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Credential_PUT_Assertion) */

void zx_gl_Credential_PUT_Assertion(struct zx_gl_Credential_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Credential_ADD_Assertion) */

void zx_gl_Credential_ADD_Assertion(struct zx_gl_Credential_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = z;
    return;
  case -1:
    y = x->Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Credential_DEL_Assertion) */

void zx_gl_Credential_DEL_Assertion(struct zx_gl_Credential_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zx_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Credential_GET_notOnOrAfter) */
struct zx_str* zx_gl_Credential_GET_notOnOrAfter(struct zx_gl_Credential_s* x) { return x->notOnOrAfter; }
/* FUNC(zx_gl_Credential_PUT_notOnOrAfter) */
void zx_gl_Credential_PUT_notOnOrAfter(struct zx_gl_Credential_s* x, struct zx_str* y) { x->notOnOrAfter = y; }





/* FUNC(zx_gl_Data_GET_id) */
struct zx_str* zx_gl_Data_GET_id(struct zx_gl_Data_s* x) { return x->id; }
/* FUNC(zx_gl_Data_PUT_id) */
void zx_gl_Data_PUT_id(struct zx_gl_Data_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_Data_GET_itemIDRef) */
struct zx_str* zx_gl_Data_GET_itemIDRef(struct zx_gl_Data_s* x) { return x->itemIDRef; }
/* FUNC(zx_gl_Data_PUT_itemIDRef) */
void zx_gl_Data_PUT_itemIDRef(struct zx_gl_Data_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_gl_Data_GET_nextOffset) */
struct zx_str* zx_gl_Data_GET_nextOffset(struct zx_gl_Data_s* x) { return x->nextOffset; }
/* FUNC(zx_gl_Data_PUT_nextOffset) */
void zx_gl_Data_PUT_nextOffset(struct zx_gl_Data_s* x, struct zx_str* y) { x->nextOffset = y; }
/* FUNC(zx_gl_Data_GET_notSorted) */
struct zx_str* zx_gl_Data_GET_notSorted(struct zx_gl_Data_s* x) { return x->notSorted; }
/* FUNC(zx_gl_Data_PUT_notSorted) */
void zx_gl_Data_PUT_notSorted(struct zx_gl_Data_s* x, struct zx_str* y) { x->notSorted = y; }
/* FUNC(zx_gl_Data_GET_remaining) */
struct zx_str* zx_gl_Data_GET_remaining(struct zx_gl_Data_s* x) { return x->remaining; }
/* FUNC(zx_gl_Data_PUT_remaining) */
void zx_gl_Data_PUT_remaining(struct zx_gl_Data_s* x, struct zx_str* y) { x->remaining = y; }
/* FUNC(zx_gl_Data_GET_setID) */
struct zx_str* zx_gl_Data_GET_setID(struct zx_gl_Data_s* x) { return x->setID; }
/* FUNC(zx_gl_Data_PUT_setID) */
void zx_gl_Data_PUT_setID(struct zx_gl_Data_s* x, struct zx_str* y) { x->setID = y; }
/* FUNC(zx_gl_Data_GET_changeFormat) */
struct zx_str* zx_gl_Data_GET_changeFormat(struct zx_gl_Data_s* x) { return x->changeFormat; }
/* FUNC(zx_gl_Data_PUT_changeFormat) */
void zx_gl_Data_PUT_changeFormat(struct zx_gl_Data_s* x, struct zx_str* y) { x->changeFormat = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Delete_NUM_ResourceID) */

int zx_gl_Delete_NUM_ResourceID(struct zx_gl_Delete_s* x)
{
  struct zx_gl_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Delete_GET_ResourceID) */

struct zx_gl_ResourceID_s* zx_gl_Delete_GET_ResourceID(struct zx_gl_Delete_s* x, int n)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Delete_POP_ResourceID) */

struct zx_gl_ResourceID_s* zx_gl_Delete_POP_ResourceID(struct zx_gl_Delete_s* x)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_gl_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Delete_PUSH_ResourceID) */

void zx_gl_Delete_PUSH_ResourceID(struct zx_gl_Delete_s* x, struct zx_gl_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_gl_Delete_REV_ResourceID) */

void zx_gl_Delete_REV_ResourceID(struct zx_gl_Delete_s* x)
{
  struct zx_gl_ResourceID_s* nxt;
  struct zx_gl_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_gl_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Delete_PUT_ResourceID) */

void zx_gl_Delete_PUT_ResourceID(struct zx_gl_Delete_s* x, int n, struct zx_gl_ResourceID_s* z)
{
  struct zx_gl_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Delete_ADD_ResourceID) */

void zx_gl_Delete_ADD_ResourceID(struct zx_gl_Delete_s* x, int n, struct zx_gl_ResourceID_s* z)
{
  struct zx_gl_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Delete_DEL_ResourceID) */

void zx_gl_Delete_DEL_ResourceID(struct zx_gl_Delete_s* x, int n)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_gl_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Delete_NUM_EncryptedResourceID) */

int zx_gl_Delete_NUM_EncryptedResourceID(struct zx_gl_Delete_s* x)
{
  struct zx_gl_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Delete_GET_EncryptedResourceID) */

struct zx_gl_EncryptedResourceID_s* zx_gl_Delete_GET_EncryptedResourceID(struct zx_gl_Delete_s* x, int n)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Delete_POP_EncryptedResourceID) */

struct zx_gl_EncryptedResourceID_s* zx_gl_Delete_POP_EncryptedResourceID(struct zx_gl_Delete_s* x)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Delete_PUSH_EncryptedResourceID) */

void zx_gl_Delete_PUSH_EncryptedResourceID(struct zx_gl_Delete_s* x, struct zx_gl_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_gl_Delete_REV_EncryptedResourceID) */

void zx_gl_Delete_REV_EncryptedResourceID(struct zx_gl_Delete_s* x)
{
  struct zx_gl_EncryptedResourceID_s* nxt;
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Delete_PUT_EncryptedResourceID) */

void zx_gl_Delete_PUT_EncryptedResourceID(struct zx_gl_Delete_s* x, int n, struct zx_gl_EncryptedResourceID_s* z)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Delete_ADD_EncryptedResourceID) */

void zx_gl_Delete_ADD_EncryptedResourceID(struct zx_gl_Delete_s* x, int n, struct zx_gl_EncryptedResourceID_s* z)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Delete_DEL_EncryptedResourceID) */

void zx_gl_Delete_DEL_EncryptedResourceID(struct zx_gl_Delete_s* x, int n)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_gl_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Delete_NUM_DeleteItem) */

int zx_gl_Delete_NUM_DeleteItem(struct zx_gl_Delete_s* x)
{
  struct zx_gl_DeleteItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeleteItem; y; ++n, y = (struct zx_gl_DeleteItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Delete_GET_DeleteItem) */

struct zx_gl_DeleteItem_s* zx_gl_Delete_GET_DeleteItem(struct zx_gl_Delete_s* x, int n)
{
  struct zx_gl_DeleteItem_s* y;
  if (!x) return 0;
  for (y = x->DeleteItem; n>=0 && y; --n, y = (struct zx_gl_DeleteItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Delete_POP_DeleteItem) */

struct zx_gl_DeleteItem_s* zx_gl_Delete_POP_DeleteItem(struct zx_gl_Delete_s* x)
{
  struct zx_gl_DeleteItem_s* y;
  if (!x) return 0;
  y = x->DeleteItem;
  if (y)
    x->DeleteItem = (struct zx_gl_DeleteItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Delete_PUSH_DeleteItem) */

void zx_gl_Delete_PUSH_DeleteItem(struct zx_gl_Delete_s* x, struct zx_gl_DeleteItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeleteItem->gg.g;
  x->DeleteItem = z;
}

/* FUNC(zx_gl_Delete_REV_DeleteItem) */

void zx_gl_Delete_REV_DeleteItem(struct zx_gl_Delete_s* x)
{
  struct zx_gl_DeleteItem_s* nxt;
  struct zx_gl_DeleteItem_s* y;
  if (!x) return;
  y = x->DeleteItem;
  if (!y) return;
  x->DeleteItem = 0;
  while (y) {
    nxt = (struct zx_gl_DeleteItem_s*)y->gg.g.n;
    y->gg.g.n = &x->DeleteItem->gg.g;
    x->DeleteItem = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Delete_PUT_DeleteItem) */

void zx_gl_Delete_PUT_DeleteItem(struct zx_gl_Delete_s* x, int n, struct zx_gl_DeleteItem_s* z)
{
  struct zx_gl_DeleteItem_s* y;
  if (!x || !z) return;
  y = x->DeleteItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeleteItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_DeleteItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Delete_ADD_DeleteItem) */

void zx_gl_Delete_ADD_DeleteItem(struct zx_gl_Delete_s* x, int n, struct zx_gl_DeleteItem_s* z)
{
  struct zx_gl_DeleteItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeleteItem->gg.g;
    x->DeleteItem = z;
    return;
  case -1:
    y = x->DeleteItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_DeleteItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteItem; n > 1 && y; --n, y = (struct zx_gl_DeleteItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Delete_DEL_DeleteItem) */

void zx_gl_Delete_DEL_DeleteItem(struct zx_gl_Delete_s* x, int n)
{
  struct zx_gl_DeleteItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeleteItem = (struct zx_gl_DeleteItem_s*)x->DeleteItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_DeleteItem_s*)x->DeleteItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_DeleteItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteItem; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_DeleteItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Delete_NUM_Extension) */

int zx_gl_Delete_NUM_Extension(struct zx_gl_Delete_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Delete_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_Delete_GET_Extension(struct zx_gl_Delete_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Delete_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_Delete_POP_Extension(struct zx_gl_Delete_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Delete_PUSH_Extension) */

void zx_gl_Delete_PUSH_Extension(struct zx_gl_Delete_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_Delete_REV_Extension) */

void zx_gl_Delete_REV_Extension(struct zx_gl_Delete_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Delete_PUT_Extension) */

void zx_gl_Delete_PUT_Extension(struct zx_gl_Delete_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Delete_ADD_Extension) */

void zx_gl_Delete_ADD_Extension(struct zx_gl_Delete_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Delete_DEL_Extension) */

void zx_gl_Delete_DEL_Extension(struct zx_gl_Delete_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Delete_GET_id) */
struct zx_str* zx_gl_Delete_GET_id(struct zx_gl_Delete_s* x) { return x->id; }
/* FUNC(zx_gl_Delete_PUT_id) */
void zx_gl_Delete_PUT_id(struct zx_gl_Delete_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_DeleteItem_NUM_Select) */

int zx_gl_DeleteItem_NUM_Select(struct zx_gl_DeleteItem_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_DeleteItem_GET_Select) */

struct zx_elem_s* zx_gl_DeleteItem_GET_Select(struct zx_gl_DeleteItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_DeleteItem_POP_Select) */

struct zx_elem_s* zx_gl_DeleteItem_POP_Select(struct zx_gl_DeleteItem_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_DeleteItem_PUSH_Select) */

void zx_gl_DeleteItem_PUSH_Select(struct zx_gl_DeleteItem_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Select->g;
  x->Select = z;
}

/* FUNC(zx_gl_DeleteItem_REV_Select) */

void zx_gl_DeleteItem_REV_Select(struct zx_gl_DeleteItem_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Select;
  if (!y) return;
  x->Select = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Select->g;
    x->Select = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_DeleteItem_PUT_Select) */

void zx_gl_DeleteItem_PUT_Select(struct zx_gl_DeleteItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Select;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Select = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_DeleteItem_ADD_Select) */

void zx_gl_DeleteItem_ADD_Select(struct zx_gl_DeleteItem_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Select->g;
    x->Select = z;
    return;
  case -1:
    y = x->Select;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_DeleteItem_DEL_Select) */

void zx_gl_DeleteItem_DEL_Select(struct zx_gl_DeleteItem_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Select = (struct zx_elem_s*)x->Select->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Select;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_gl_DeleteItem_GET_id) */
struct zx_str* zx_gl_DeleteItem_GET_id(struct zx_gl_DeleteItem_s* x) { return x->id; }
/* FUNC(zx_gl_DeleteItem_PUT_id) */
void zx_gl_DeleteItem_PUT_id(struct zx_gl_DeleteItem_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_DeleteItem_GET_itemID) */
struct zx_str* zx_gl_DeleteItem_GET_itemID(struct zx_gl_DeleteItem_s* x) { return x->itemID; }
/* FUNC(zx_gl_DeleteItem_PUT_itemID) */
void zx_gl_DeleteItem_PUT_itemID(struct zx_gl_DeleteItem_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_gl_DeleteItem_GET_notChangedSince) */
struct zx_str* zx_gl_DeleteItem_GET_notChangedSince(struct zx_gl_DeleteItem_s* x) { return x->notChangedSince; }
/* FUNC(zx_gl_DeleteItem_PUT_notChangedSince) */
void zx_gl_DeleteItem_PUT_notChangedSince(struct zx_gl_DeleteItem_s* x, struct zx_str* y) { x->notChangedSince = y; }
/* FUNC(zx_gl_DeleteItem_GET_objectType) */
struct zx_str* zx_gl_DeleteItem_GET_objectType(struct zx_gl_DeleteItem_s* x) { return x->objectType; }
/* FUNC(zx_gl_DeleteItem_PUT_objectType) */
void zx_gl_DeleteItem_PUT_objectType(struct zx_gl_DeleteItem_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_gl_DeleteItem_GET_predefined) */
struct zx_str* zx_gl_DeleteItem_GET_predefined(struct zx_gl_DeleteItem_s* x) { return x->predefined; }
/* FUNC(zx_gl_DeleteItem_PUT_predefined) */
void zx_gl_DeleteItem_PUT_predefined(struct zx_gl_DeleteItem_s* x, struct zx_str* y) { x->predefined = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_DeleteResponse_NUM_Status) */

int zx_gl_DeleteResponse_NUM_Status(struct zx_gl_DeleteResponse_s* x)
{
  struct zx_gl_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_DeleteResponse_GET_Status) */

struct zx_gl_Status_s* zx_gl_DeleteResponse_GET_Status(struct zx_gl_DeleteResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_DeleteResponse_POP_Status) */

struct zx_gl_Status_s* zx_gl_DeleteResponse_POP_Status(struct zx_gl_DeleteResponse_s* x)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_gl_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_DeleteResponse_PUSH_Status) */

void zx_gl_DeleteResponse_PUSH_Status(struct zx_gl_DeleteResponse_s* x, struct zx_gl_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_gl_DeleteResponse_REV_Status) */

void zx_gl_DeleteResponse_REV_Status(struct zx_gl_DeleteResponse_s* x)
{
  struct zx_gl_Status_s* nxt;
  struct zx_gl_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_gl_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_DeleteResponse_PUT_Status) */

void zx_gl_DeleteResponse_PUT_Status(struct zx_gl_DeleteResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_DeleteResponse_ADD_Status) */

void zx_gl_DeleteResponse_ADD_Status(struct zx_gl_DeleteResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_DeleteResponse_DEL_Status) */

void zx_gl_DeleteResponse_DEL_Status(struct zx_gl_DeleteResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_gl_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_DeleteResponse_NUM_Extension) */

int zx_gl_DeleteResponse_NUM_Extension(struct zx_gl_DeleteResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_DeleteResponse_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_DeleteResponse_GET_Extension(struct zx_gl_DeleteResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_DeleteResponse_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_DeleteResponse_POP_Extension(struct zx_gl_DeleteResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_DeleteResponse_PUSH_Extension) */

void zx_gl_DeleteResponse_PUSH_Extension(struct zx_gl_DeleteResponse_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_DeleteResponse_REV_Extension) */

void zx_gl_DeleteResponse_REV_Extension(struct zx_gl_DeleteResponse_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_DeleteResponse_PUT_Extension) */

void zx_gl_DeleteResponse_PUT_Extension(struct zx_gl_DeleteResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_DeleteResponse_ADD_Extension) */

void zx_gl_DeleteResponse_ADD_Extension(struct zx_gl_DeleteResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_DeleteResponse_DEL_Extension) */

void zx_gl_DeleteResponse_DEL_Extension(struct zx_gl_DeleteResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_DeleteResponse_GET_id) */
struct zx_str* zx_gl_DeleteResponse_GET_id(struct zx_gl_DeleteResponse_s* x) { return x->id; }
/* FUNC(zx_gl_DeleteResponse_PUT_id) */
void zx_gl_DeleteResponse_PUT_id(struct zx_gl_DeleteResponse_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_EllipticalArea_NUM_coord) */

int zx_gl_EllipticalArea_NUM_coord(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_gl_coord_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->coord; y; ++n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_EllipticalArea_GET_coord) */

struct zx_gl_coord_s* zx_gl_EllipticalArea_GET_coord(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  for (y = x->coord; n>=0 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_POP_coord) */

struct zx_gl_coord_s* zx_gl_EllipticalArea_POP_coord(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  y = x->coord;
  if (y)
    x->coord = (struct zx_gl_coord_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_PUSH_coord) */

void zx_gl_EllipticalArea_PUSH_coord(struct zx_gl_EllipticalArea_s* x, struct zx_gl_coord_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->coord->gg.g;
  x->coord = z;
}

/* FUNC(zx_gl_EllipticalArea_REV_coord) */

void zx_gl_EllipticalArea_REV_coord(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_gl_coord_s* nxt;
  struct zx_gl_coord_s* y;
  if (!x) return;
  y = x->coord;
  if (!y) return;
  x->coord = 0;
  while (y) {
    nxt = (struct zx_gl_coord_s*)y->gg.g.n;
    y->gg.g.n = &x->coord->gg.g;
    x->coord = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_EllipticalArea_PUT_coord) */

void zx_gl_EllipticalArea_PUT_coord(struct zx_gl_EllipticalArea_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  y = x->coord;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->coord = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_EllipticalArea_ADD_coord) */

void zx_gl_EllipticalArea_ADD_coord(struct zx_gl_EllipticalArea_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->coord->gg.g;
    x->coord = z;
    return;
  case -1:
    y = x->coord;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_EllipticalArea_DEL_coord) */

void zx_gl_EllipticalArea_DEL_coord(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->coord = (struct zx_gl_coord_s*)x->coord->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_coord_s*)x->coord;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_EllipticalArea_NUM_angle) */

int zx_gl_EllipticalArea_NUM_angle(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->angle; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_EllipticalArea_GET_angle) */

struct zx_elem_s* zx_gl_EllipticalArea_GET_angle(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->angle; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_POP_angle) */

struct zx_elem_s* zx_gl_EllipticalArea_POP_angle(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->angle;
  if (y)
    x->angle = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_PUSH_angle) */

void zx_gl_EllipticalArea_PUSH_angle(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->angle->g;
  x->angle = z;
}

/* FUNC(zx_gl_EllipticalArea_REV_angle) */

void zx_gl_EllipticalArea_REV_angle(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->angle;
  if (!y) return;
  x->angle = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->angle->g;
    x->angle = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_EllipticalArea_PUT_angle) */

void zx_gl_EllipticalArea_PUT_angle(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->angle;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->angle = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_EllipticalArea_ADD_angle) */

void zx_gl_EllipticalArea_ADD_angle(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->angle->g;
    x->angle = z;
    return;
  case -1:
    y = x->angle;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->angle; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_EllipticalArea_DEL_angle) */

void zx_gl_EllipticalArea_DEL_angle(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->angle = (struct zx_elem_s*)x->angle->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->angle;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->angle; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_EllipticalArea_NUM_semiMajor) */

int zx_gl_EllipticalArea_NUM_semiMajor(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->semiMajor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_EllipticalArea_GET_semiMajor) */

struct zx_elem_s* zx_gl_EllipticalArea_GET_semiMajor(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->semiMajor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_POP_semiMajor) */

struct zx_elem_s* zx_gl_EllipticalArea_POP_semiMajor(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->semiMajor;
  if (y)
    x->semiMajor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_PUSH_semiMajor) */

void zx_gl_EllipticalArea_PUSH_semiMajor(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->semiMajor->g;
  x->semiMajor = z;
}

/* FUNC(zx_gl_EllipticalArea_REV_semiMajor) */

void zx_gl_EllipticalArea_REV_semiMajor(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->semiMajor;
  if (!y) return;
  x->semiMajor = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->semiMajor->g;
    x->semiMajor = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_EllipticalArea_PUT_semiMajor) */

void zx_gl_EllipticalArea_PUT_semiMajor(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->semiMajor;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->semiMajor = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_EllipticalArea_ADD_semiMajor) */

void zx_gl_EllipticalArea_ADD_semiMajor(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->semiMajor->g;
    x->semiMajor = z;
    return;
  case -1:
    y = x->semiMajor;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->semiMajor; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_EllipticalArea_DEL_semiMajor) */

void zx_gl_EllipticalArea_DEL_semiMajor(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->semiMajor = (struct zx_elem_s*)x->semiMajor->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->semiMajor;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->semiMajor; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_EllipticalArea_NUM_semiMinor) */

int zx_gl_EllipticalArea_NUM_semiMinor(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->semiMinor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_EllipticalArea_GET_semiMinor) */

struct zx_elem_s* zx_gl_EllipticalArea_GET_semiMinor(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->semiMinor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_POP_semiMinor) */

struct zx_elem_s* zx_gl_EllipticalArea_POP_semiMinor(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->semiMinor;
  if (y)
    x->semiMinor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_PUSH_semiMinor) */

void zx_gl_EllipticalArea_PUSH_semiMinor(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->semiMinor->g;
  x->semiMinor = z;
}

/* FUNC(zx_gl_EllipticalArea_REV_semiMinor) */

void zx_gl_EllipticalArea_REV_semiMinor(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->semiMinor;
  if (!y) return;
  x->semiMinor = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->semiMinor->g;
    x->semiMinor = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_EllipticalArea_PUT_semiMinor) */

void zx_gl_EllipticalArea_PUT_semiMinor(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->semiMinor;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->semiMinor = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_EllipticalArea_ADD_semiMinor) */

void zx_gl_EllipticalArea_ADD_semiMinor(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->semiMinor->g;
    x->semiMinor = z;
    return;
  case -1:
    y = x->semiMinor;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->semiMinor; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_EllipticalArea_DEL_semiMinor) */

void zx_gl_EllipticalArea_DEL_semiMinor(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->semiMinor = (struct zx_elem_s*)x->semiMinor->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->semiMinor;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->semiMinor; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_EllipticalArea_NUM_angularUnit) */

int zx_gl_EllipticalArea_NUM_angularUnit(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->angularUnit; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_EllipticalArea_GET_angularUnit) */

struct zx_elem_s* zx_gl_EllipticalArea_GET_angularUnit(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->angularUnit; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_POP_angularUnit) */

struct zx_elem_s* zx_gl_EllipticalArea_POP_angularUnit(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->angularUnit;
  if (y)
    x->angularUnit = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_PUSH_angularUnit) */

void zx_gl_EllipticalArea_PUSH_angularUnit(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->angularUnit->g;
  x->angularUnit = z;
}

/* FUNC(zx_gl_EllipticalArea_REV_angularUnit) */

void zx_gl_EllipticalArea_REV_angularUnit(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->angularUnit;
  if (!y) return;
  x->angularUnit = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->angularUnit->g;
    x->angularUnit = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_EllipticalArea_PUT_angularUnit) */

void zx_gl_EllipticalArea_PUT_angularUnit(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->angularUnit;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->angularUnit = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_EllipticalArea_ADD_angularUnit) */

void zx_gl_EllipticalArea_ADD_angularUnit(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->angularUnit->g;
    x->angularUnit = z;
    return;
  case -1:
    y = x->angularUnit;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->angularUnit; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_EllipticalArea_DEL_angularUnit) */

void zx_gl_EllipticalArea_DEL_angularUnit(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->angularUnit = (struct zx_elem_s*)x->angularUnit->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->angularUnit;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->angularUnit; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_EllipticalArea_NUM_distanceUnit) */

int zx_gl_EllipticalArea_NUM_distanceUnit(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->distanceUnit; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_EllipticalArea_GET_distanceUnit) */

struct zx_elem_s* zx_gl_EllipticalArea_GET_distanceUnit(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->distanceUnit; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_POP_distanceUnit) */

struct zx_elem_s* zx_gl_EllipticalArea_POP_distanceUnit(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->distanceUnit;
  if (y)
    x->distanceUnit = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_EllipticalArea_PUSH_distanceUnit) */

void zx_gl_EllipticalArea_PUSH_distanceUnit(struct zx_gl_EllipticalArea_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->distanceUnit->g;
  x->distanceUnit = z;
}

/* FUNC(zx_gl_EllipticalArea_REV_distanceUnit) */

void zx_gl_EllipticalArea_REV_distanceUnit(struct zx_gl_EllipticalArea_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->distanceUnit;
  if (!y) return;
  x->distanceUnit = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->distanceUnit->g;
    x->distanceUnit = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_EllipticalArea_PUT_distanceUnit) */

void zx_gl_EllipticalArea_PUT_distanceUnit(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->distanceUnit;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->distanceUnit = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_EllipticalArea_ADD_distanceUnit) */

void zx_gl_EllipticalArea_ADD_distanceUnit(struct zx_gl_EllipticalArea_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->distanceUnit->g;
    x->distanceUnit = z;
    return;
  case -1:
    y = x->distanceUnit;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->distanceUnit; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_EllipticalArea_DEL_distanceUnit) */

void zx_gl_EllipticalArea_DEL_distanceUnit(struct zx_gl_EllipticalArea_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->distanceUnit = (struct zx_elem_s*)x->distanceUnit->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->distanceUnit;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->distanceUnit; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_gl_EllipticalArea_GET_gid) */
struct zx_str* zx_gl_EllipticalArea_GET_gid(struct zx_gl_EllipticalArea_s* x) { return x->gid; }
/* FUNC(zx_gl_EllipticalArea_PUT_gid) */
void zx_gl_EllipticalArea_PUT_gid(struct zx_gl_EllipticalArea_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_EllipticalArea_GET_srsName) */
struct zx_str* zx_gl_EllipticalArea_GET_srsName(struct zx_gl_EllipticalArea_s* x) { return x->srsName; }
/* FUNC(zx_gl_EllipticalArea_PUT_srsName) */
void zx_gl_EllipticalArea_PUT_srsName(struct zx_gl_EllipticalArea_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_EncryptedResourceID_NUM_EncryptedData) */

int zx_gl_EncryptedResourceID_NUM_EncryptedData(struct zx_gl_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedData; y; ++n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_EncryptedResourceID_GET_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_gl_EncryptedResourceID_GET_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  for (y = x->EncryptedData; n>=0 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_EncryptedResourceID_POP_EncryptedData) */

struct zx_xenc_EncryptedData_s* zx_gl_EncryptedResourceID_POP_EncryptedData(struct zx_gl_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return 0;
  y = x->EncryptedData;
  if (y)
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_EncryptedResourceID_PUSH_EncryptedData) */

void zx_gl_EncryptedResourceID_PUSH_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, struct zx_xenc_EncryptedData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedData->gg.g;
  x->EncryptedData = z;
}

/* FUNC(zx_gl_EncryptedResourceID_REV_EncryptedData) */

void zx_gl_EncryptedResourceID_REV_EncryptedData(struct zx_gl_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedData_s* nxt;
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  y = x->EncryptedData;
  if (!y) return;
  x->EncryptedData = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedData_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_EncryptedResourceID_PUT_EncryptedData) */

void zx_gl_EncryptedResourceID_PUT_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  y = x->EncryptedData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_EncryptedResourceID_ADD_EncryptedData) */

void zx_gl_EncryptedResourceID_ADD_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedData_s* z)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedData->gg.g;
    x->EncryptedData = z;
    return;
  case -1:
    y = x->EncryptedData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_EncryptedResourceID_DEL_EncryptedData) */

void zx_gl_EncryptedResourceID_DEL_EncryptedData(struct zx_gl_EncryptedResourceID_s* x, int n)
{
  struct zx_xenc_EncryptedData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedData = (struct zx_xenc_EncryptedData_s*)x->EncryptedData->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedData_s*)x->EncryptedData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedData; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_EncryptedResourceID_NUM_EncryptedKey) */

int zx_gl_EncryptedResourceID_NUM_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedKey; y; ++n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_EncryptedResourceID_GET_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_gl_EncryptedResourceID_GET_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  for (y = x->EncryptedKey; n>=0 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_EncryptedResourceID_POP_EncryptedKey) */

struct zx_xenc_EncryptedKey_s* zx_gl_EncryptedResourceID_POP_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return 0;
  y = x->EncryptedKey;
  if (y)
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_EncryptedResourceID_PUSH_EncryptedKey) */

void zx_gl_EncryptedResourceID_PUSH_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, struct zx_xenc_EncryptedKey_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedKey->gg.g;
  x->EncryptedKey = z;
}

/* FUNC(zx_gl_EncryptedResourceID_REV_EncryptedKey) */

void zx_gl_EncryptedResourceID_REV_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x)
{
  struct zx_xenc_EncryptedKey_s* nxt;
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  y = x->EncryptedKey;
  if (!y) return;
  x->EncryptedKey = 0;
  while (y) {
    nxt = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_EncryptedResourceID_PUT_EncryptedKey) */

void zx_gl_EncryptedResourceID_PUT_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  y = x->EncryptedKey;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedKey = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_EncryptedResourceID_ADD_EncryptedKey) */

void zx_gl_EncryptedResourceID_ADD_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, int n, struct zx_xenc_EncryptedKey_s* z)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedKey->gg.g;
    x->EncryptedKey = z;
    return;
  case -1:
    y = x->EncryptedKey;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_EncryptedResourceID_DEL_EncryptedKey) */

void zx_gl_EncryptedResourceID_DEL_EncryptedKey(struct zx_gl_EncryptedResourceID_s* x, int n)
{
  struct zx_xenc_EncryptedKey_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedKey = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey->gg.g.n;
    return;
  case -1:
    y = (struct zx_xenc_EncryptedKey_s*)x->EncryptedKey;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedKey; n > 1 && y->gg.g.n; --n, y = (struct zx_xenc_EncryptedKey_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif













#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_GeometryCollection_NUM_shape) */

int zx_gl_GeometryCollection_NUM_shape(struct zx_gl_GeometryCollection_s* x)
{
  struct zx_gl_shape_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shape; y; ++n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_GeometryCollection_GET_shape) */

struct zx_gl_shape_s* zx_gl_GeometryCollection_GET_shape(struct zx_gl_GeometryCollection_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  for (y = x->shape; n>=0 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_GeometryCollection_POP_shape) */

struct zx_gl_shape_s* zx_gl_GeometryCollection_POP_shape(struct zx_gl_GeometryCollection_s* x)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  y = x->shape;
  if (y)
    x->shape = (struct zx_gl_shape_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_GeometryCollection_PUSH_shape) */

void zx_gl_GeometryCollection_PUSH_shape(struct zx_gl_GeometryCollection_s* x, struct zx_gl_shape_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shape->gg.g;
  x->shape = z;
}

/* FUNC(zx_gl_GeometryCollection_REV_shape) */

void zx_gl_GeometryCollection_REV_shape(struct zx_gl_GeometryCollection_s* x)
{
  struct zx_gl_shape_s* nxt;
  struct zx_gl_shape_s* y;
  if (!x) return;
  y = x->shape;
  if (!y) return;
  x->shape = 0;
  while (y) {
    nxt = (struct zx_gl_shape_s*)y->gg.g.n;
    y->gg.g.n = &x->shape->gg.g;
    x->shape = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_GeometryCollection_PUT_shape) */

void zx_gl_GeometryCollection_PUT_shape(struct zx_gl_GeometryCollection_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  y = x->shape;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shape = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_GeometryCollection_ADD_shape) */

void zx_gl_GeometryCollection_ADD_shape(struct zx_gl_GeometryCollection_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shape->gg.g;
    x->shape = z;
    return;
  case -1:
    y = x->shape;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_GeometryCollection_DEL_shape) */

void zx_gl_GeometryCollection_DEL_shape(struct zx_gl_GeometryCollection_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shape = (struct zx_gl_shape_s*)x->shape->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_shape_s*)x->shape;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_GeometryCollection_GET_gid) */
struct zx_str* zx_gl_GeometryCollection_GET_gid(struct zx_gl_GeometryCollection_s* x) { return x->gid; }
/* FUNC(zx_gl_GeometryCollection_PUT_gid) */
void zx_gl_GeometryCollection_PUT_gid(struct zx_gl_GeometryCollection_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_GeometryCollection_GET_srsName) */
struct zx_str* zx_gl_GeometryCollection_GET_srsName(struct zx_gl_GeometryCollection_s* x) { return x->srsName; }
/* FUNC(zx_gl_GeometryCollection_PUT_srsName) */
void zx_gl_GeometryCollection_PUT_srsName(struct zx_gl_GeometryCollection_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Identifier_NUM_code) */

int zx_gl_Identifier_NUM_code(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->code; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_Identifier_GET_code) */

struct zx_elem_s* zx_gl_Identifier_GET_code(struct zx_gl_Identifier_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->code; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_Identifier_POP_code) */

struct zx_elem_s* zx_gl_Identifier_POP_code(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->code;
  if (y)
    x->code = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_Identifier_PUSH_code) */

void zx_gl_Identifier_PUSH_code(struct zx_gl_Identifier_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->code->g;
  x->code = z;
}

/* FUNC(zx_gl_Identifier_REV_code) */

void zx_gl_Identifier_REV_code(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->code;
  if (!y) return;
  x->code = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->code->g;
    x->code = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Identifier_PUT_code) */

void zx_gl_Identifier_PUT_code(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->code;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->code = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_Identifier_ADD_code) */

void zx_gl_Identifier_ADD_code(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->code->g;
    x->code = z;
    return;
  case -1:
    y = x->code;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->code; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_Identifier_DEL_code) */

void zx_gl_Identifier_DEL_code(struct zx_gl_Identifier_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->code = (struct zx_elem_s*)x->code->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->code;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->code; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Identifier_NUM_codeSpace) */

int zx_gl_Identifier_NUM_codeSpace(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->codeSpace; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_Identifier_GET_codeSpace) */

struct zx_elem_s* zx_gl_Identifier_GET_codeSpace(struct zx_gl_Identifier_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->codeSpace; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_Identifier_POP_codeSpace) */

struct zx_elem_s* zx_gl_Identifier_POP_codeSpace(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->codeSpace;
  if (y)
    x->codeSpace = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_Identifier_PUSH_codeSpace) */

void zx_gl_Identifier_PUSH_codeSpace(struct zx_gl_Identifier_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->codeSpace->g;
  x->codeSpace = z;
}

/* FUNC(zx_gl_Identifier_REV_codeSpace) */

void zx_gl_Identifier_REV_codeSpace(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->codeSpace;
  if (!y) return;
  x->codeSpace = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->codeSpace->g;
    x->codeSpace = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Identifier_PUT_codeSpace) */

void zx_gl_Identifier_PUT_codeSpace(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->codeSpace;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->codeSpace = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_Identifier_ADD_codeSpace) */

void zx_gl_Identifier_ADD_codeSpace(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->codeSpace->g;
    x->codeSpace = z;
    return;
  case -1:
    y = x->codeSpace;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->codeSpace; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_Identifier_DEL_codeSpace) */

void zx_gl_Identifier_DEL_codeSpace(struct zx_gl_Identifier_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->codeSpace = (struct zx_elem_s*)x->codeSpace->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->codeSpace;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->codeSpace; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Identifier_NUM_edition) */

int zx_gl_Identifier_NUM_edition(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->edition; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_Identifier_GET_edition) */

struct zx_elem_s* zx_gl_Identifier_GET_edition(struct zx_gl_Identifier_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->edition; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_Identifier_POP_edition) */

struct zx_elem_s* zx_gl_Identifier_POP_edition(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->edition;
  if (y)
    x->edition = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_Identifier_PUSH_edition) */

void zx_gl_Identifier_PUSH_edition(struct zx_gl_Identifier_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->edition->g;
  x->edition = z;
}

/* FUNC(zx_gl_Identifier_REV_edition) */

void zx_gl_Identifier_REV_edition(struct zx_gl_Identifier_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->edition;
  if (!y) return;
  x->edition = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->edition->g;
    x->edition = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Identifier_PUT_edition) */

void zx_gl_Identifier_PUT_edition(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->edition;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->edition = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_Identifier_ADD_edition) */

void zx_gl_Identifier_ADD_edition(struct zx_gl_Identifier_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->edition->g;
    x->edition = z;
    return;
  case -1:
    y = x->edition;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->edition; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_Identifier_DEL_edition) */

void zx_gl_Identifier_DEL_edition(struct zx_gl_Identifier_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->edition = (struct zx_elem_s*)x->edition->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->edition;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->edition; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif






/* FUNC(zx_gl_ItemData_GET_id) */
struct zx_str* zx_gl_ItemData_GET_id(struct zx_gl_ItemData_s* x) { return x->id; }
/* FUNC(zx_gl_ItemData_PUT_id) */
void zx_gl_ItemData_PUT_id(struct zx_gl_ItemData_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_ItemData_GET_itemIDRef) */
struct zx_str* zx_gl_ItemData_GET_itemIDRef(struct zx_gl_ItemData_s* x) { return x->itemIDRef; }
/* FUNC(zx_gl_ItemData_PUT_itemIDRef) */
void zx_gl_ItemData_PUT_itemIDRef(struct zx_gl_ItemData_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_gl_ItemData_GET_notSorted) */
struct zx_str* zx_gl_ItemData_GET_notSorted(struct zx_gl_ItemData_s* x) { return x->notSorted; }
/* FUNC(zx_gl_ItemData_PUT_notSorted) */
void zx_gl_ItemData_PUT_notSorted(struct zx_gl_ItemData_s* x, struct zx_str* y) { x->notSorted = y; }
/* FUNC(zx_gl_ItemData_GET_changeFormat) */
struct zx_str* zx_gl_ItemData_GET_changeFormat(struct zx_gl_ItemData_s* x) { return x->changeFormat; }
/* FUNC(zx_gl_ItemData_PUT_changeFormat) */
void zx_gl_ItemData_PUT_changeFormat(struct zx_gl_ItemData_s* x, struct zx_str* y) { x->changeFormat = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ItemSelection_NUM_AreaComparison) */

int zx_gl_ItemSelection_NUM_AreaComparison(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_AreaComparison_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AreaComparison; y; ++n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ItemSelection_GET_AreaComparison) */

struct zx_gl_AreaComparison_s* zx_gl_ItemSelection_GET_AreaComparison(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x) return 0;
  for (y = x->AreaComparison; n>=0 && y; --n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ItemSelection_POP_AreaComparison) */

struct zx_gl_AreaComparison_s* zx_gl_ItemSelection_POP_AreaComparison(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x) return 0;
  y = x->AreaComparison;
  if (y)
    x->AreaComparison = (struct zx_gl_AreaComparison_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ItemSelection_PUSH_AreaComparison) */

void zx_gl_ItemSelection_PUSH_AreaComparison(struct zx_gl_ItemSelection_s* x, struct zx_gl_AreaComparison_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AreaComparison->gg.g;
  x->AreaComparison = z;
}

/* FUNC(zx_gl_ItemSelection_REV_AreaComparison) */

void zx_gl_ItemSelection_REV_AreaComparison(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_AreaComparison_s* nxt;
  struct zx_gl_AreaComparison_s* y;
  if (!x) return;
  y = x->AreaComparison;
  if (!y) return;
  x->AreaComparison = 0;
  while (y) {
    nxt = (struct zx_gl_AreaComparison_s*)y->gg.g.n;
    y->gg.g.n = &x->AreaComparison->gg.g;
    x->AreaComparison = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ItemSelection_PUT_AreaComparison) */

void zx_gl_ItemSelection_PUT_AreaComparison(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_AreaComparison_s* z)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x || !z) return;
  y = x->AreaComparison;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AreaComparison = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ItemSelection_ADD_AreaComparison) */

void zx_gl_ItemSelection_ADD_AreaComparison(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_AreaComparison_s* z)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AreaComparison->gg.g;
    x->AreaComparison = z;
    return;
  case -1:
    y = x->AreaComparison;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AreaComparison; n > 1 && y; --n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ItemSelection_DEL_AreaComparison) */

void zx_gl_ItemSelection_DEL_AreaComparison(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AreaComparison = (struct zx_gl_AreaComparison_s*)x->AreaComparison->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_AreaComparison_s*)x->AreaComparison;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AreaComparison; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ItemSelection_NUM_eqop) */

int zx_gl_ItemSelection_NUM_eqop(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_eqop_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->eqop; y; ++n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ItemSelection_GET_eqop) */

struct zx_gl_eqop_s* zx_gl_ItemSelection_GET_eqop(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_eqop_s* y;
  if (!x) return 0;
  for (y = x->eqop; n>=0 && y; --n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ItemSelection_POP_eqop) */

struct zx_gl_eqop_s* zx_gl_ItemSelection_POP_eqop(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_eqop_s* y;
  if (!x) return 0;
  y = x->eqop;
  if (y)
    x->eqop = (struct zx_gl_eqop_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ItemSelection_PUSH_eqop) */

void zx_gl_ItemSelection_PUSH_eqop(struct zx_gl_ItemSelection_s* x, struct zx_gl_eqop_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->eqop->gg.g;
  x->eqop = z;
}

/* FUNC(zx_gl_ItemSelection_REV_eqop) */

void zx_gl_ItemSelection_REV_eqop(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_eqop_s* nxt;
  struct zx_gl_eqop_s* y;
  if (!x) return;
  y = x->eqop;
  if (!y) return;
  x->eqop = 0;
  while (y) {
    nxt = (struct zx_gl_eqop_s*)y->gg.g.n;
    y->gg.g.n = &x->eqop->gg.g;
    x->eqop = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ItemSelection_PUT_eqop) */

void zx_gl_ItemSelection_PUT_eqop(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_eqop_s* z)
{
  struct zx_gl_eqop_s* y;
  if (!x || !z) return;
  y = x->eqop;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->eqop = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ItemSelection_ADD_eqop) */

void zx_gl_ItemSelection_ADD_eqop(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_eqop_s* z)
{
  struct zx_gl_eqop_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->eqop->gg.g;
    x->eqop = z;
    return;
  case -1:
    y = x->eqop;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->eqop; n > 1 && y; --n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ItemSelection_DEL_eqop) */

void zx_gl_ItemSelection_DEL_eqop(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_eqop_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->eqop = (struct zx_gl_eqop_s*)x->eqop->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_eqop_s*)x->eqop;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->eqop; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ItemSelection_NUM_geoinfo) */

int zx_gl_ItemSelection_NUM_geoinfo(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_geoinfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->geoinfo; y; ++n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ItemSelection_GET_geoinfo) */

struct zx_gl_geoinfo_s* zx_gl_ItemSelection_GET_geoinfo(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_geoinfo_s* y;
  if (!x) return 0;
  for (y = x->geoinfo; n>=0 && y; --n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ItemSelection_POP_geoinfo) */

struct zx_gl_geoinfo_s* zx_gl_ItemSelection_POP_geoinfo(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_geoinfo_s* y;
  if (!x) return 0;
  y = x->geoinfo;
  if (y)
    x->geoinfo = (struct zx_gl_geoinfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ItemSelection_PUSH_geoinfo) */

void zx_gl_ItemSelection_PUSH_geoinfo(struct zx_gl_ItemSelection_s* x, struct zx_gl_geoinfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->geoinfo->gg.g;
  x->geoinfo = z;
}

/* FUNC(zx_gl_ItemSelection_REV_geoinfo) */

void zx_gl_ItemSelection_REV_geoinfo(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_geoinfo_s* nxt;
  struct zx_gl_geoinfo_s* y;
  if (!x) return;
  y = x->geoinfo;
  if (!y) return;
  x->geoinfo = 0;
  while (y) {
    nxt = (struct zx_gl_geoinfo_s*)y->gg.g.n;
    y->gg.g.n = &x->geoinfo->gg.g;
    x->geoinfo = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ItemSelection_PUT_geoinfo) */

void zx_gl_ItemSelection_PUT_geoinfo(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_geoinfo_s* z)
{
  struct zx_gl_geoinfo_s* y;
  if (!x || !z) return;
  y = x->geoinfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->geoinfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ItemSelection_ADD_geoinfo) */

void zx_gl_ItemSelection_ADD_geoinfo(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_geoinfo_s* z)
{
  struct zx_gl_geoinfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->geoinfo->gg.g;
    x->geoinfo = z;
    return;
  case -1:
    y = x->geoinfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->geoinfo; n > 1 && y; --n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ItemSelection_DEL_geoinfo) */

void zx_gl_ItemSelection_DEL_geoinfo(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_geoinfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->geoinfo = (struct zx_gl_geoinfo_s*)x->geoinfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_geoinfo_s*)x->geoinfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->geoinfo; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ItemSelection_NUM_loc_type) */

int zx_gl_ItemSelection_NUM_loc_type(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_loc_type_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->loc_type; y; ++n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ItemSelection_GET_loc_type) */

struct zx_gl_loc_type_s* zx_gl_ItemSelection_GET_loc_type(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_loc_type_s* y;
  if (!x) return 0;
  for (y = x->loc_type; n>=0 && y; --n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ItemSelection_POP_loc_type) */

struct zx_gl_loc_type_s* zx_gl_ItemSelection_POP_loc_type(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_loc_type_s* y;
  if (!x) return 0;
  y = x->loc_type;
  if (y)
    x->loc_type = (struct zx_gl_loc_type_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ItemSelection_PUSH_loc_type) */

void zx_gl_ItemSelection_PUSH_loc_type(struct zx_gl_ItemSelection_s* x, struct zx_gl_loc_type_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->loc_type->gg.g;
  x->loc_type = z;
}

/* FUNC(zx_gl_ItemSelection_REV_loc_type) */

void zx_gl_ItemSelection_REV_loc_type(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_loc_type_s* nxt;
  struct zx_gl_loc_type_s* y;
  if (!x) return;
  y = x->loc_type;
  if (!y) return;
  x->loc_type = 0;
  while (y) {
    nxt = (struct zx_gl_loc_type_s*)y->gg.g.n;
    y->gg.g.n = &x->loc_type->gg.g;
    x->loc_type = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ItemSelection_PUT_loc_type) */

void zx_gl_ItemSelection_PUT_loc_type(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_loc_type_s* z)
{
  struct zx_gl_loc_type_s* y;
  if (!x || !z) return;
  y = x->loc_type;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->loc_type = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ItemSelection_ADD_loc_type) */

void zx_gl_ItemSelection_ADD_loc_type(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_loc_type_s* z)
{
  struct zx_gl_loc_type_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->loc_type->gg.g;
    x->loc_type = z;
    return;
  case -1:
    y = x->loc_type;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->loc_type; n > 1 && y; --n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ItemSelection_DEL_loc_type) */

void zx_gl_ItemSelection_DEL_loc_type(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_loc_type_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->loc_type = (struct zx_gl_loc_type_s*)x->loc_type->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_loc_type_s*)x->loc_type;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->loc_type; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ItemSelection_NUM_prio) */

int zx_gl_ItemSelection_NUM_prio(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_prio_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prio; y; ++n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ItemSelection_GET_prio) */

struct zx_gl_prio_s* zx_gl_ItemSelection_GET_prio(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_prio_s* y;
  if (!x) return 0;
  for (y = x->prio; n>=0 && y; --n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ItemSelection_POP_prio) */

struct zx_gl_prio_s* zx_gl_ItemSelection_POP_prio(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_prio_s* y;
  if (!x) return 0;
  y = x->prio;
  if (y)
    x->prio = (struct zx_gl_prio_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ItemSelection_PUSH_prio) */

void zx_gl_ItemSelection_PUSH_prio(struct zx_gl_ItemSelection_s* x, struct zx_gl_prio_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prio->gg.g;
  x->prio = z;
}

/* FUNC(zx_gl_ItemSelection_REV_prio) */

void zx_gl_ItemSelection_REV_prio(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_prio_s* nxt;
  struct zx_gl_prio_s* y;
  if (!x) return;
  y = x->prio;
  if (!y) return;
  x->prio = 0;
  while (y) {
    nxt = (struct zx_gl_prio_s*)y->gg.g.n;
    y->gg.g.n = &x->prio->gg.g;
    x->prio = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ItemSelection_PUT_prio) */

void zx_gl_ItemSelection_PUT_prio(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_prio_s* z)
{
  struct zx_gl_prio_s* y;
  if (!x || !z) return;
  y = x->prio;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prio = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ItemSelection_ADD_prio) */

void zx_gl_ItemSelection_ADD_prio(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_prio_s* z)
{
  struct zx_gl_prio_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prio->gg.g;
    x->prio = z;
    return;
  case -1:
    y = x->prio;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prio; n > 1 && y; --n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ItemSelection_DEL_prio) */

void zx_gl_ItemSelection_DEL_prio(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_prio_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prio = (struct zx_gl_prio_s*)x->prio->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_prio_s*)x->prio;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prio; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ItemSelection_NUM_Extension) */

int zx_gl_ItemSelection_NUM_Extension(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ItemSelection_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_ItemSelection_GET_Extension(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ItemSelection_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_ItemSelection_POP_Extension(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ItemSelection_PUSH_Extension) */

void zx_gl_ItemSelection_PUSH_Extension(struct zx_gl_ItemSelection_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_ItemSelection_REV_Extension) */

void zx_gl_ItemSelection_REV_Extension(struct zx_gl_ItemSelection_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ItemSelection_PUT_Extension) */

void zx_gl_ItemSelection_PUT_Extension(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ItemSelection_ADD_Extension) */

void zx_gl_ItemSelection_ADD_Extension(struct zx_gl_ItemSelection_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ItemSelection_DEL_Extension) */

void zx_gl_ItemSelection_DEL_Extension(struct zx_gl_ItemSelection_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_gl_LL_GET_lang) */
struct zx_str* zx_gl_LL_GET_lang(struct zx_gl_LL_s* x) { return x->lang; }
/* FUNC(zx_gl_LL_PUT_lang) */
void zx_gl_LL_PUT_lang(struct zx_gl_LL_s* x, struct zx_str* y) { x->lang = y; }
/* FUNC(zx_gl_LL_GET_script) */
struct zx_str* zx_gl_LL_GET_script(struct zx_gl_LL_s* x) { return x->script; }
/* FUNC(zx_gl_LL_PUT_script) */
void zx_gl_LL_PUT_script(struct zx_gl_LL_s* x, struct zx_str* y) { x->script = y; }





/* FUNC(zx_gl_LPostalAddress_GET_lang) */
struct zx_str* zx_gl_LPostalAddress_GET_lang(struct zx_gl_LPostalAddress_s* x) { return x->lang; }
/* FUNC(zx_gl_LPostalAddress_PUT_lang) */
void zx_gl_LPostalAddress_PUT_lang(struct zx_gl_LPostalAddress_s* x, struct zx_str* y) { x->lang = y; }
/* FUNC(zx_gl_LPostalAddress_GET_script) */
struct zx_str* zx_gl_LPostalAddress_GET_script(struct zx_gl_LPostalAddress_s* x) { return x->script; }
/* FUNC(zx_gl_LPostalAddress_PUT_script) */
void zx_gl_LPostalAddress_PUT_script(struct zx_gl_LPostalAddress_s* x, struct zx_str* y) { x->script = y; }





/* FUNC(zx_gl_LSt_GET_lang) */
struct zx_str* zx_gl_LSt_GET_lang(struct zx_gl_LSt_s* x) { return x->lang; }
/* FUNC(zx_gl_LSt_PUT_lang) */
void zx_gl_LSt_PUT_lang(struct zx_gl_LSt_s* x, struct zx_str* y) { x->lang = y; }
/* FUNC(zx_gl_LSt_GET_script) */
struct zx_str* zx_gl_LSt_GET_script(struct zx_gl_LSt_s* x) { return x->script; }
/* FUNC(zx_gl_LSt_PUT_script) */
void zx_gl_LSt_PUT_script(struct zx_gl_LSt_s* x, struct zx_str* y) { x->script = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_LineString_NUM_coord) */

int zx_gl_LineString_NUM_coord(struct zx_gl_LineString_s* x)
{
  struct zx_gl_coord_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->coord; y; ++n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_LineString_GET_coord) */

struct zx_gl_coord_s* zx_gl_LineString_GET_coord(struct zx_gl_LineString_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  for (y = x->coord; n>=0 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_LineString_POP_coord) */

struct zx_gl_coord_s* zx_gl_LineString_POP_coord(struct zx_gl_LineString_s* x)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  y = x->coord;
  if (y)
    x->coord = (struct zx_gl_coord_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_LineString_PUSH_coord) */

void zx_gl_LineString_PUSH_coord(struct zx_gl_LineString_s* x, struct zx_gl_coord_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->coord->gg.g;
  x->coord = z;
}

/* FUNC(zx_gl_LineString_REV_coord) */

void zx_gl_LineString_REV_coord(struct zx_gl_LineString_s* x)
{
  struct zx_gl_coord_s* nxt;
  struct zx_gl_coord_s* y;
  if (!x) return;
  y = x->coord;
  if (!y) return;
  x->coord = 0;
  while (y) {
    nxt = (struct zx_gl_coord_s*)y->gg.g.n;
    y->gg.g.n = &x->coord->gg.g;
    x->coord = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_LineString_PUT_coord) */

void zx_gl_LineString_PUT_coord(struct zx_gl_LineString_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  y = x->coord;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->coord = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_LineString_ADD_coord) */

void zx_gl_LineString_ADD_coord(struct zx_gl_LineString_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->coord->gg.g;
    x->coord = z;
    return;
  case -1:
    y = x->coord;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_LineString_DEL_coord) */

void zx_gl_LineString_DEL_coord(struct zx_gl_LineString_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->coord = (struct zx_gl_coord_s*)x->coord->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_coord_s*)x->coord;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_LineString_GET_gid) */
struct zx_str* zx_gl_LineString_GET_gid(struct zx_gl_LineString_s* x) { return x->gid; }
/* FUNC(zx_gl_LineString_PUT_gid) */
void zx_gl_LineString_PUT_gid(struct zx_gl_LineString_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_LineString_GET_srsName) */
struct zx_str* zx_gl_LineString_GET_srsName(struct zx_gl_LineString_s* x) { return x->srsName; }
/* FUNC(zx_gl_LineString_PUT_srsName) */
void zx_gl_LineString_PUT_srsName(struct zx_gl_LineString_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_LinearRing_NUM_coord) */

int zx_gl_LinearRing_NUM_coord(struct zx_gl_LinearRing_s* x)
{
  struct zx_gl_coord_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->coord; y; ++n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_LinearRing_GET_coord) */

struct zx_gl_coord_s* zx_gl_LinearRing_GET_coord(struct zx_gl_LinearRing_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  for (y = x->coord; n>=0 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_LinearRing_POP_coord) */

struct zx_gl_coord_s* zx_gl_LinearRing_POP_coord(struct zx_gl_LinearRing_s* x)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  y = x->coord;
  if (y)
    x->coord = (struct zx_gl_coord_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_LinearRing_PUSH_coord) */

void zx_gl_LinearRing_PUSH_coord(struct zx_gl_LinearRing_s* x, struct zx_gl_coord_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->coord->gg.g;
  x->coord = z;
}

/* FUNC(zx_gl_LinearRing_REV_coord) */

void zx_gl_LinearRing_REV_coord(struct zx_gl_LinearRing_s* x)
{
  struct zx_gl_coord_s* nxt;
  struct zx_gl_coord_s* y;
  if (!x) return;
  y = x->coord;
  if (!y) return;
  x->coord = 0;
  while (y) {
    nxt = (struct zx_gl_coord_s*)y->gg.g.n;
    y->gg.g.n = &x->coord->gg.g;
    x->coord = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_LinearRing_PUT_coord) */

void zx_gl_LinearRing_PUT_coord(struct zx_gl_LinearRing_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  y = x->coord;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->coord = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_LinearRing_ADD_coord) */

void zx_gl_LinearRing_ADD_coord(struct zx_gl_LinearRing_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->coord->gg.g;
    x->coord = z;
    return;
  case -1:
    y = x->coord;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_LinearRing_DEL_coord) */

void zx_gl_LinearRing_DEL_coord(struct zx_gl_LinearRing_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->coord = (struct zx_gl_coord_s*)x->coord->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_coord_s*)x->coord;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_LinearRing_GET_gid) */
struct zx_str* zx_gl_LinearRing_GET_gid(struct zx_gl_LinearRing_s* x) { return x->gid; }
/* FUNC(zx_gl_LinearRing_PUT_gid) */
void zx_gl_LinearRing_PUT_gid(struct zx_gl_LinearRing_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_LinearRing_GET_srsName) */
struct zx_str* zx_gl_LinearRing_GET_srsName(struct zx_gl_LinearRing_s* x) { return x->srsName; }
/* FUNC(zx_gl_LinearRing_PUT_srsName) */
void zx_gl_LinearRing_PUT_srsName(struct zx_gl_LinearRing_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Modification_NUM_Select) */

int zx_gl_Modification_NUM_Select(struct zx_gl_Modification_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Select; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_Modification_GET_Select) */

struct zx_elem_s* zx_gl_Modification_GET_Select(struct zx_gl_Modification_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Select; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_Modification_POP_Select) */

struct zx_elem_s* zx_gl_Modification_POP_Select(struct zx_gl_Modification_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Select;
  if (y)
    x->Select = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_Modification_PUSH_Select) */

void zx_gl_Modification_PUSH_Select(struct zx_gl_Modification_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Select->g;
  x->Select = z;
}

/* FUNC(zx_gl_Modification_REV_Select) */

void zx_gl_Modification_REV_Select(struct zx_gl_Modification_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Select;
  if (!y) return;
  x->Select = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Select->g;
    x->Select = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Modification_PUT_Select) */

void zx_gl_Modification_PUT_Select(struct zx_gl_Modification_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Select;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Select = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_Modification_ADD_Select) */

void zx_gl_Modification_ADD_Select(struct zx_gl_Modification_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Select->g;
    x->Select = z;
    return;
  case -1:
    y = x->Select;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_Modification_DEL_Select) */

void zx_gl_Modification_DEL_Select(struct zx_gl_Modification_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Select = (struct zx_elem_s*)x->Select->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Select;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Select; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Modification_NUM_NewData) */

int zx_gl_Modification_NUM_NewData(struct zx_gl_Modification_s* x)
{
  struct zx_gl_NewData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewData; y; ++n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Modification_GET_NewData) */

struct zx_gl_NewData_s* zx_gl_Modification_GET_NewData(struct zx_gl_Modification_s* x, int n)
{
  struct zx_gl_NewData_s* y;
  if (!x) return 0;
  for (y = x->NewData; n>=0 && y; --n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Modification_POP_NewData) */

struct zx_gl_NewData_s* zx_gl_Modification_POP_NewData(struct zx_gl_Modification_s* x)
{
  struct zx_gl_NewData_s* y;
  if (!x) return 0;
  y = x->NewData;
  if (y)
    x->NewData = (struct zx_gl_NewData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Modification_PUSH_NewData) */

void zx_gl_Modification_PUSH_NewData(struct zx_gl_Modification_s* x, struct zx_gl_NewData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NewData->gg.g;
  x->NewData = z;
}

/* FUNC(zx_gl_Modification_REV_NewData) */

void zx_gl_Modification_REV_NewData(struct zx_gl_Modification_s* x)
{
  struct zx_gl_NewData_s* nxt;
  struct zx_gl_NewData_s* y;
  if (!x) return;
  y = x->NewData;
  if (!y) return;
  x->NewData = 0;
  while (y) {
    nxt = (struct zx_gl_NewData_s*)y->gg.g.n;
    y->gg.g.n = &x->NewData->gg.g;
    x->NewData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Modification_PUT_NewData) */

void zx_gl_Modification_PUT_NewData(struct zx_gl_Modification_s* x, int n, struct zx_gl_NewData_s* z)
{
  struct zx_gl_NewData_s* y;
  if (!x || !z) return;
  y = x->NewData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NewData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Modification_ADD_NewData) */

void zx_gl_Modification_ADD_NewData(struct zx_gl_Modification_s* x, int n, struct zx_gl_NewData_s* z)
{
  struct zx_gl_NewData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NewData->gg.g;
    x->NewData = z;
    return;
  case -1:
    y = x->NewData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y; --n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Modification_DEL_NewData) */

void zx_gl_Modification_DEL_NewData(struct zx_gl_Modification_s* x, int n)
{
  struct zx_gl_NewData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewData = (struct zx_gl_NewData_s*)x->NewData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_NewData_s*)x->NewData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NewData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NewData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Modification_GET_id) */
struct zx_str* zx_gl_Modification_GET_id(struct zx_gl_Modification_s* x) { return x->id; }
/* FUNC(zx_gl_Modification_PUT_id) */
void zx_gl_Modification_PUT_id(struct zx_gl_Modification_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_Modification_GET_itemID) */
struct zx_str* zx_gl_Modification_GET_itemID(struct zx_gl_Modification_s* x) { return x->itemID; }
/* FUNC(zx_gl_Modification_PUT_itemID) */
void zx_gl_Modification_PUT_itemID(struct zx_gl_Modification_s* x, struct zx_str* y) { x->itemID = y; }
/* FUNC(zx_gl_Modification_GET_notChangedSince) */
struct zx_str* zx_gl_Modification_GET_notChangedSince(struct zx_gl_Modification_s* x) { return x->notChangedSince; }
/* FUNC(zx_gl_Modification_PUT_notChangedSince) */
void zx_gl_Modification_PUT_notChangedSince(struct zx_gl_Modification_s* x, struct zx_str* y) { x->notChangedSince = y; }
/* FUNC(zx_gl_Modification_GET_objectType) */
struct zx_str* zx_gl_Modification_GET_objectType(struct zx_gl_Modification_s* x) { return x->objectType; }
/* FUNC(zx_gl_Modification_PUT_objectType) */
void zx_gl_Modification_PUT_objectType(struct zx_gl_Modification_s* x, struct zx_str* y) { x->objectType = y; }
/* FUNC(zx_gl_Modification_GET_overrideAllowed) */
struct zx_str* zx_gl_Modification_GET_overrideAllowed(struct zx_gl_Modification_s* x) { return x->overrideAllowed; }
/* FUNC(zx_gl_Modification_PUT_overrideAllowed) */
void zx_gl_Modification_PUT_overrideAllowed(struct zx_gl_Modification_s* x, struct zx_str* y) { x->overrideAllowed = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Modify_NUM_ResourceID) */

int zx_gl_Modify_NUM_ResourceID(struct zx_gl_Modify_s* x)
{
  struct zx_gl_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Modify_GET_ResourceID) */

struct zx_gl_ResourceID_s* zx_gl_Modify_GET_ResourceID(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Modify_POP_ResourceID) */

struct zx_gl_ResourceID_s* zx_gl_Modify_POP_ResourceID(struct zx_gl_Modify_s* x)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_gl_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Modify_PUSH_ResourceID) */

void zx_gl_Modify_PUSH_ResourceID(struct zx_gl_Modify_s* x, struct zx_gl_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_gl_Modify_REV_ResourceID) */

void zx_gl_Modify_REV_ResourceID(struct zx_gl_Modify_s* x)
{
  struct zx_gl_ResourceID_s* nxt;
  struct zx_gl_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_gl_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Modify_PUT_ResourceID) */

void zx_gl_Modify_PUT_ResourceID(struct zx_gl_Modify_s* x, int n, struct zx_gl_ResourceID_s* z)
{
  struct zx_gl_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Modify_ADD_ResourceID) */

void zx_gl_Modify_ADD_ResourceID(struct zx_gl_Modify_s* x, int n, struct zx_gl_ResourceID_s* z)
{
  struct zx_gl_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Modify_DEL_ResourceID) */

void zx_gl_Modify_DEL_ResourceID(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_gl_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Modify_NUM_EncryptedResourceID) */

int zx_gl_Modify_NUM_EncryptedResourceID(struct zx_gl_Modify_s* x)
{
  struct zx_gl_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Modify_GET_EncryptedResourceID) */

struct zx_gl_EncryptedResourceID_s* zx_gl_Modify_GET_EncryptedResourceID(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Modify_POP_EncryptedResourceID) */

struct zx_gl_EncryptedResourceID_s* zx_gl_Modify_POP_EncryptedResourceID(struct zx_gl_Modify_s* x)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Modify_PUSH_EncryptedResourceID) */

void zx_gl_Modify_PUSH_EncryptedResourceID(struct zx_gl_Modify_s* x, struct zx_gl_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_gl_Modify_REV_EncryptedResourceID) */

void zx_gl_Modify_REV_EncryptedResourceID(struct zx_gl_Modify_s* x)
{
  struct zx_gl_EncryptedResourceID_s* nxt;
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Modify_PUT_EncryptedResourceID) */

void zx_gl_Modify_PUT_EncryptedResourceID(struct zx_gl_Modify_s* x, int n, struct zx_gl_EncryptedResourceID_s* z)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Modify_ADD_EncryptedResourceID) */

void zx_gl_Modify_ADD_EncryptedResourceID(struct zx_gl_Modify_s* x, int n, struct zx_gl_EncryptedResourceID_s* z)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Modify_DEL_EncryptedResourceID) */

void zx_gl_Modify_DEL_EncryptedResourceID(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_gl_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Modify_NUM_Subscription) */

int zx_gl_Modify_NUM_Subscription(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Modify_GET_Subscription) */

struct zx_gl_Subscription_s* zx_gl_Modify_GET_Subscription(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Modify_POP_Subscription) */

struct zx_gl_Subscription_s* zx_gl_Modify_POP_Subscription(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_gl_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Modify_PUSH_Subscription) */

void zx_gl_Modify_PUSH_Subscription(struct zx_gl_Modify_s* x, struct zx_gl_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_gl_Modify_REV_Subscription) */

void zx_gl_Modify_REV_Subscription(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Subscription_s* nxt;
  struct zx_gl_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_gl_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Modify_PUT_Subscription) */

void zx_gl_Modify_PUT_Subscription(struct zx_gl_Modify_s* x, int n, struct zx_gl_Subscription_s* z)
{
  struct zx_gl_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Modify_ADD_Subscription) */

void zx_gl_Modify_ADD_Subscription(struct zx_gl_Modify_s* x, int n, struct zx_gl_Subscription_s* z)
{
  struct zx_gl_Subscription_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = z;
    return;
  case -1:
    y = x->Subscription;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Modify_DEL_Subscription) */

void zx_gl_Modify_DEL_Subscription(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_gl_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Modify_NUM_Modification) */

int zx_gl_Modify_NUM_Modification(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Modification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Modification; y; ++n, y = (struct zx_gl_Modification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Modify_GET_Modification) */

struct zx_gl_Modification_s* zx_gl_Modify_GET_Modification(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_Modification_s* y;
  if (!x) return 0;
  for (y = x->Modification; n>=0 && y; --n, y = (struct zx_gl_Modification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Modify_POP_Modification) */

struct zx_gl_Modification_s* zx_gl_Modify_POP_Modification(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Modification_s* y;
  if (!x) return 0;
  y = x->Modification;
  if (y)
    x->Modification = (struct zx_gl_Modification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Modify_PUSH_Modification) */

void zx_gl_Modify_PUSH_Modification(struct zx_gl_Modify_s* x, struct zx_gl_Modification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Modification->gg.g;
  x->Modification = z;
}

/* FUNC(zx_gl_Modify_REV_Modification) */

void zx_gl_Modify_REV_Modification(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Modification_s* nxt;
  struct zx_gl_Modification_s* y;
  if (!x) return;
  y = x->Modification;
  if (!y) return;
  x->Modification = 0;
  while (y) {
    nxt = (struct zx_gl_Modification_s*)y->gg.g.n;
    y->gg.g.n = &x->Modification->gg.g;
    x->Modification = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Modify_PUT_Modification) */

void zx_gl_Modify_PUT_Modification(struct zx_gl_Modify_s* x, int n, struct zx_gl_Modification_s* z)
{
  struct zx_gl_Modification_s* y;
  if (!x || !z) return;
  y = x->Modification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Modification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Modification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Modify_ADD_Modification) */

void zx_gl_Modify_ADD_Modification(struct zx_gl_Modify_s* x, int n, struct zx_gl_Modification_s* z)
{
  struct zx_gl_Modification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Modification->gg.g;
    x->Modification = z;
    return;
  case -1:
    y = x->Modification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Modification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modification; n > 1 && y; --n, y = (struct zx_gl_Modification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Modify_DEL_Modification) */

void zx_gl_Modify_DEL_Modification(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_Modification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Modification = (struct zx_gl_Modification_s*)x->Modification->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Modification_s*)x->Modification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Modification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modification; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Modification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Modify_NUM_ItemSelection) */

int zx_gl_Modify_NUM_ItemSelection(struct zx_gl_Modify_s* x)
{
  struct zx_gl_ItemSelection_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemSelection; y; ++n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Modify_GET_ItemSelection) */

struct zx_gl_ItemSelection_s* zx_gl_Modify_GET_ItemSelection(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return 0;
  for (y = x->ItemSelection; n>=0 && y; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Modify_POP_ItemSelection) */

struct zx_gl_ItemSelection_s* zx_gl_Modify_POP_ItemSelection(struct zx_gl_Modify_s* x)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return 0;
  y = x->ItemSelection;
  if (y)
    x->ItemSelection = (struct zx_gl_ItemSelection_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Modify_PUSH_ItemSelection) */

void zx_gl_Modify_PUSH_ItemSelection(struct zx_gl_Modify_s* x, struct zx_gl_ItemSelection_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemSelection->gg.g;
  x->ItemSelection = z;
}

/* FUNC(zx_gl_Modify_REV_ItemSelection) */

void zx_gl_Modify_REV_ItemSelection(struct zx_gl_Modify_s* x)
{
  struct zx_gl_ItemSelection_s* nxt;
  struct zx_gl_ItemSelection_s* y;
  if (!x) return;
  y = x->ItemSelection;
  if (!y) return;
  x->ItemSelection = 0;
  while (y) {
    nxt = (struct zx_gl_ItemSelection_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Modify_PUT_ItemSelection) */

void zx_gl_Modify_PUT_ItemSelection(struct zx_gl_Modify_s* x, int n, struct zx_gl_ItemSelection_s* z)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x || !z) return;
  y = x->ItemSelection;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemSelection = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Modify_ADD_ItemSelection) */

void zx_gl_Modify_ADD_ItemSelection(struct zx_gl_Modify_s* x, int n, struct zx_gl_ItemSelection_s* z)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = z;
    return;
  case -1:
    y = x->ItemSelection;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Modify_DEL_ItemSelection) */

void zx_gl_Modify_DEL_ItemSelection(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemSelection = (struct zx_gl_ItemSelection_s*)x->ItemSelection->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ItemSelection_s*)x->ItemSelection;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Modify_NUM_Extension) */

int zx_gl_Modify_NUM_Extension(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Modify_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_Modify_GET_Extension(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Modify_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_Modify_POP_Extension(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Modify_PUSH_Extension) */

void zx_gl_Modify_PUSH_Extension(struct zx_gl_Modify_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_Modify_REV_Extension) */

void zx_gl_Modify_REV_Extension(struct zx_gl_Modify_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Modify_PUT_Extension) */

void zx_gl_Modify_PUT_Extension(struct zx_gl_Modify_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Modify_ADD_Extension) */

void zx_gl_Modify_ADD_Extension(struct zx_gl_Modify_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Modify_DEL_Extension) */

void zx_gl_Modify_DEL_Extension(struct zx_gl_Modify_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Modify_GET_id) */
struct zx_str* zx_gl_Modify_GET_id(struct zx_gl_Modify_s* x) { return x->id; }
/* FUNC(zx_gl_Modify_PUT_id) */
void zx_gl_Modify_PUT_id(struct zx_gl_Modify_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ModifyResponse_NUM_Status) */

int zx_gl_ModifyResponse_NUM_Status(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ModifyResponse_GET_Status) */

struct zx_gl_Status_s* zx_gl_ModifyResponse_GET_Status(struct zx_gl_ModifyResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ModifyResponse_POP_Status) */

struct zx_gl_Status_s* zx_gl_ModifyResponse_POP_Status(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_gl_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ModifyResponse_PUSH_Status) */

void zx_gl_ModifyResponse_PUSH_Status(struct zx_gl_ModifyResponse_s* x, struct zx_gl_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_gl_ModifyResponse_REV_Status) */

void zx_gl_ModifyResponse_REV_Status(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_Status_s* nxt;
  struct zx_gl_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_gl_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ModifyResponse_PUT_Status) */

void zx_gl_ModifyResponse_PUT_Status(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ModifyResponse_ADD_Status) */

void zx_gl_ModifyResponse_ADD_Status(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ModifyResponse_DEL_Status) */

void zx_gl_ModifyResponse_DEL_Status(struct zx_gl_ModifyResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_gl_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ModifyResponse_NUM_ItemData) */

int zx_gl_ModifyResponse_NUM_ItemData(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ModifyResponse_GET_ItemData) */

struct zx_gl_ItemData_s* zx_gl_ModifyResponse_GET_ItemData(struct zx_gl_ModifyResponse_s* x, int n)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ModifyResponse_POP_ItemData) */

struct zx_gl_ItemData_s* zx_gl_ModifyResponse_POP_ItemData(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_gl_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ModifyResponse_PUSH_ItemData) */

void zx_gl_ModifyResponse_PUSH_ItemData(struct zx_gl_ModifyResponse_s* x, struct zx_gl_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_gl_ModifyResponse_REV_ItemData) */

void zx_gl_ModifyResponse_REV_ItemData(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_ItemData_s* nxt;
  struct zx_gl_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_gl_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ModifyResponse_PUT_ItemData) */

void zx_gl_ModifyResponse_PUT_ItemData(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_ItemData_s* z)
{
  struct zx_gl_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ModifyResponse_ADD_ItemData) */

void zx_gl_ModifyResponse_ADD_ItemData(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_ItemData_s* z)
{
  struct zx_gl_ItemData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = z;
    return;
  case -1:
    y = x->ItemData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ModifyResponse_DEL_ItemData) */

void zx_gl_ModifyResponse_DEL_ItemData(struct zx_gl_ModifyResponse_s* x, int n)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_gl_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_ModifyResponse_NUM_Extension) */

int zx_gl_ModifyResponse_NUM_Extension(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_ModifyResponse_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_ModifyResponse_GET_Extension(struct zx_gl_ModifyResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_ModifyResponse_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_ModifyResponse_POP_Extension(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_ModifyResponse_PUSH_Extension) */

void zx_gl_ModifyResponse_PUSH_Extension(struct zx_gl_ModifyResponse_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_ModifyResponse_REV_Extension) */

void zx_gl_ModifyResponse_REV_Extension(struct zx_gl_ModifyResponse_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_ModifyResponse_PUT_Extension) */

void zx_gl_ModifyResponse_PUT_Extension(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_ModifyResponse_ADD_Extension) */

void zx_gl_ModifyResponse_ADD_Extension(struct zx_gl_ModifyResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_ModifyResponse_DEL_Extension) */

void zx_gl_ModifyResponse_DEL_Extension(struct zx_gl_ModifyResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_ModifyResponse_GET_id) */
struct zx_str* zx_gl_ModifyResponse_GET_id(struct zx_gl_ModifyResponse_s* x) { return x->id; }
/* FUNC(zx_gl_ModifyResponse_PUT_id) */
void zx_gl_ModifyResponse_PUT_id(struct zx_gl_ModifyResponse_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_ModifyResponse_GET_timeStamp) */
struct zx_str* zx_gl_ModifyResponse_GET_timeStamp(struct zx_gl_ModifyResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_gl_ModifyResponse_PUT_timeStamp) */
void zx_gl_ModifyResponse_PUT_timeStamp(struct zx_gl_ModifyResponse_s* x, struct zx_str* y) { x->timeStamp = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_MultiLineString_NUM_LineString) */

int zx_gl_MultiLineString_NUM_LineString(struct zx_gl_MultiLineString_s* x)
{
  struct zx_gl_LineString_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LineString; y; ++n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_MultiLineString_GET_LineString) */

struct zx_gl_LineString_s* zx_gl_MultiLineString_GET_LineString(struct zx_gl_MultiLineString_s* x, int n)
{
  struct zx_gl_LineString_s* y;
  if (!x) return 0;
  for (y = x->LineString; n>=0 && y; --n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_MultiLineString_POP_LineString) */

struct zx_gl_LineString_s* zx_gl_MultiLineString_POP_LineString(struct zx_gl_MultiLineString_s* x)
{
  struct zx_gl_LineString_s* y;
  if (!x) return 0;
  y = x->LineString;
  if (y)
    x->LineString = (struct zx_gl_LineString_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_MultiLineString_PUSH_LineString) */

void zx_gl_MultiLineString_PUSH_LineString(struct zx_gl_MultiLineString_s* x, struct zx_gl_LineString_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LineString->gg.g;
  x->LineString = z;
}

/* FUNC(zx_gl_MultiLineString_REV_LineString) */

void zx_gl_MultiLineString_REV_LineString(struct zx_gl_MultiLineString_s* x)
{
  struct zx_gl_LineString_s* nxt;
  struct zx_gl_LineString_s* y;
  if (!x) return;
  y = x->LineString;
  if (!y) return;
  x->LineString = 0;
  while (y) {
    nxt = (struct zx_gl_LineString_s*)y->gg.g.n;
    y->gg.g.n = &x->LineString->gg.g;
    x->LineString = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_MultiLineString_PUT_LineString) */

void zx_gl_MultiLineString_PUT_LineString(struct zx_gl_MultiLineString_s* x, int n, struct zx_gl_LineString_s* z)
{
  struct zx_gl_LineString_s* y;
  if (!x || !z) return;
  y = x->LineString;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LineString = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_MultiLineString_ADD_LineString) */

void zx_gl_MultiLineString_ADD_LineString(struct zx_gl_MultiLineString_s* x, int n, struct zx_gl_LineString_s* z)
{
  struct zx_gl_LineString_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LineString->gg.g;
    x->LineString = z;
    return;
  case -1:
    y = x->LineString;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LineString; n > 1 && y; --n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_MultiLineString_DEL_LineString) */

void zx_gl_MultiLineString_DEL_LineString(struct zx_gl_MultiLineString_s* x, int n)
{
  struct zx_gl_LineString_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LineString = (struct zx_gl_LineString_s*)x->LineString->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_LineString_s*)x->LineString;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LineString; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_MultiLineString_GET_gid) */
struct zx_str* zx_gl_MultiLineString_GET_gid(struct zx_gl_MultiLineString_s* x) { return x->gid; }
/* FUNC(zx_gl_MultiLineString_PUT_gid) */
void zx_gl_MultiLineString_PUT_gid(struct zx_gl_MultiLineString_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_MultiLineString_GET_srsName) */
struct zx_str* zx_gl_MultiLineString_GET_srsName(struct zx_gl_MultiLineString_s* x) { return x->srsName; }
/* FUNC(zx_gl_MultiLineString_PUT_srsName) */
void zx_gl_MultiLineString_PUT_srsName(struct zx_gl_MultiLineString_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_MultiPoint_NUM_Point) */

int zx_gl_MultiPoint_NUM_Point(struct zx_gl_MultiPoint_s* x)
{
  struct zx_gl_Point_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Point; y; ++n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_MultiPoint_GET_Point) */

struct zx_gl_Point_s* zx_gl_MultiPoint_GET_Point(struct zx_gl_MultiPoint_s* x, int n)
{
  struct zx_gl_Point_s* y;
  if (!x) return 0;
  for (y = x->Point; n>=0 && y; --n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_MultiPoint_POP_Point) */

struct zx_gl_Point_s* zx_gl_MultiPoint_POP_Point(struct zx_gl_MultiPoint_s* x)
{
  struct zx_gl_Point_s* y;
  if (!x) return 0;
  y = x->Point;
  if (y)
    x->Point = (struct zx_gl_Point_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_MultiPoint_PUSH_Point) */

void zx_gl_MultiPoint_PUSH_Point(struct zx_gl_MultiPoint_s* x, struct zx_gl_Point_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Point->gg.g;
  x->Point = z;
}

/* FUNC(zx_gl_MultiPoint_REV_Point) */

void zx_gl_MultiPoint_REV_Point(struct zx_gl_MultiPoint_s* x)
{
  struct zx_gl_Point_s* nxt;
  struct zx_gl_Point_s* y;
  if (!x) return;
  y = x->Point;
  if (!y) return;
  x->Point = 0;
  while (y) {
    nxt = (struct zx_gl_Point_s*)y->gg.g.n;
    y->gg.g.n = &x->Point->gg.g;
    x->Point = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_MultiPoint_PUT_Point) */

void zx_gl_MultiPoint_PUT_Point(struct zx_gl_MultiPoint_s* x, int n, struct zx_gl_Point_s* z)
{
  struct zx_gl_Point_s* y;
  if (!x || !z) return;
  y = x->Point;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Point = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_MultiPoint_ADD_Point) */

void zx_gl_MultiPoint_ADD_Point(struct zx_gl_MultiPoint_s* x, int n, struct zx_gl_Point_s* z)
{
  struct zx_gl_Point_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Point->gg.g;
    x->Point = z;
    return;
  case -1:
    y = x->Point;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Point; n > 1 && y; --n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_MultiPoint_DEL_Point) */

void zx_gl_MultiPoint_DEL_Point(struct zx_gl_MultiPoint_s* x, int n)
{
  struct zx_gl_Point_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Point = (struct zx_gl_Point_s*)x->Point->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Point_s*)x->Point;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Point; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_MultiPoint_GET_gid) */
struct zx_str* zx_gl_MultiPoint_GET_gid(struct zx_gl_MultiPoint_s* x) { return x->gid; }
/* FUNC(zx_gl_MultiPoint_PUT_gid) */
void zx_gl_MultiPoint_PUT_gid(struct zx_gl_MultiPoint_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_MultiPoint_GET_srsName) */
struct zx_str* zx_gl_MultiPoint_GET_srsName(struct zx_gl_MultiPoint_s* x) { return x->srsName; }
/* FUNC(zx_gl_MultiPoint_PUT_srsName) */
void zx_gl_MultiPoint_PUT_srsName(struct zx_gl_MultiPoint_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_MultiPolygon_NUM_Polygon) */

int zx_gl_MultiPolygon_NUM_Polygon(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_Polygon_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Polygon; y; ++n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_MultiPolygon_GET_Polygon) */

struct zx_gl_Polygon_s* zx_gl_MultiPolygon_GET_Polygon(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_Polygon_s* y;
  if (!x) return 0;
  for (y = x->Polygon; n>=0 && y; --n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_POP_Polygon) */

struct zx_gl_Polygon_s* zx_gl_MultiPolygon_POP_Polygon(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_Polygon_s* y;
  if (!x) return 0;
  y = x->Polygon;
  if (y)
    x->Polygon = (struct zx_gl_Polygon_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_PUSH_Polygon) */

void zx_gl_MultiPolygon_PUSH_Polygon(struct zx_gl_MultiPolygon_s* x, struct zx_gl_Polygon_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Polygon->gg.g;
  x->Polygon = z;
}

/* FUNC(zx_gl_MultiPolygon_REV_Polygon) */

void zx_gl_MultiPolygon_REV_Polygon(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_Polygon_s* nxt;
  struct zx_gl_Polygon_s* y;
  if (!x) return;
  y = x->Polygon;
  if (!y) return;
  x->Polygon = 0;
  while (y) {
    nxt = (struct zx_gl_Polygon_s*)y->gg.g.n;
    y->gg.g.n = &x->Polygon->gg.g;
    x->Polygon = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_MultiPolygon_PUT_Polygon) */

void zx_gl_MultiPolygon_PUT_Polygon(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_Polygon_s* z)
{
  struct zx_gl_Polygon_s* y;
  if (!x || !z) return;
  y = x->Polygon;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Polygon = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_MultiPolygon_ADD_Polygon) */

void zx_gl_MultiPolygon_ADD_Polygon(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_Polygon_s* z)
{
  struct zx_gl_Polygon_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Polygon->gg.g;
    x->Polygon = z;
    return;
  case -1:
    y = x->Polygon;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Polygon; n > 1 && y; --n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_MultiPolygon_DEL_Polygon) */

void zx_gl_MultiPolygon_DEL_Polygon(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_Polygon_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Polygon = (struct zx_gl_Polygon_s*)x->Polygon->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Polygon_s*)x->Polygon;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Polygon; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_MultiPolygon_NUM_Box) */

int zx_gl_MultiPolygon_NUM_Box(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_Box_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Box; y; ++n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_MultiPolygon_GET_Box) */

struct zx_gl_Box_s* zx_gl_MultiPolygon_GET_Box(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_Box_s* y;
  if (!x) return 0;
  for (y = x->Box; n>=0 && y; --n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_POP_Box) */

struct zx_gl_Box_s* zx_gl_MultiPolygon_POP_Box(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_Box_s* y;
  if (!x) return 0;
  y = x->Box;
  if (y)
    x->Box = (struct zx_gl_Box_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_PUSH_Box) */

void zx_gl_MultiPolygon_PUSH_Box(struct zx_gl_MultiPolygon_s* x, struct zx_gl_Box_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Box->gg.g;
  x->Box = z;
}

/* FUNC(zx_gl_MultiPolygon_REV_Box) */

void zx_gl_MultiPolygon_REV_Box(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_Box_s* nxt;
  struct zx_gl_Box_s* y;
  if (!x) return;
  y = x->Box;
  if (!y) return;
  x->Box = 0;
  while (y) {
    nxt = (struct zx_gl_Box_s*)y->gg.g.n;
    y->gg.g.n = &x->Box->gg.g;
    x->Box = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_MultiPolygon_PUT_Box) */

void zx_gl_MultiPolygon_PUT_Box(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_Box_s* z)
{
  struct zx_gl_Box_s* y;
  if (!x || !z) return;
  y = x->Box;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Box = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_MultiPolygon_ADD_Box) */

void zx_gl_MultiPolygon_ADD_Box(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_Box_s* z)
{
  struct zx_gl_Box_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Box->gg.g;
    x->Box = z;
    return;
  case -1:
    y = x->Box;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Box; n > 1 && y; --n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_MultiPolygon_DEL_Box) */

void zx_gl_MultiPolygon_DEL_Box(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_Box_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Box = (struct zx_gl_Box_s*)x->Box->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Box_s*)x->Box;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Box; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_MultiPolygon_NUM_CircularArea) */

int zx_gl_MultiPolygon_NUM_CircularArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_CircularArea_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CircularArea; y; ++n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_MultiPolygon_GET_CircularArea) */

struct zx_gl_CircularArea_s* zx_gl_MultiPolygon_GET_CircularArea(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_CircularArea_s* y;
  if (!x) return 0;
  for (y = x->CircularArea; n>=0 && y; --n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_POP_CircularArea) */

struct zx_gl_CircularArea_s* zx_gl_MultiPolygon_POP_CircularArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_CircularArea_s* y;
  if (!x) return 0;
  y = x->CircularArea;
  if (y)
    x->CircularArea = (struct zx_gl_CircularArea_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_PUSH_CircularArea) */

void zx_gl_MultiPolygon_PUSH_CircularArea(struct zx_gl_MultiPolygon_s* x, struct zx_gl_CircularArea_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CircularArea->gg.g;
  x->CircularArea = z;
}

/* FUNC(zx_gl_MultiPolygon_REV_CircularArea) */

void zx_gl_MultiPolygon_REV_CircularArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_CircularArea_s* nxt;
  struct zx_gl_CircularArea_s* y;
  if (!x) return;
  y = x->CircularArea;
  if (!y) return;
  x->CircularArea = 0;
  while (y) {
    nxt = (struct zx_gl_CircularArea_s*)y->gg.g.n;
    y->gg.g.n = &x->CircularArea->gg.g;
    x->CircularArea = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_MultiPolygon_PUT_CircularArea) */

void zx_gl_MultiPolygon_PUT_CircularArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_CircularArea_s* z)
{
  struct zx_gl_CircularArea_s* y;
  if (!x || !z) return;
  y = x->CircularArea;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CircularArea = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_MultiPolygon_ADD_CircularArea) */

void zx_gl_MultiPolygon_ADD_CircularArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_CircularArea_s* z)
{
  struct zx_gl_CircularArea_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CircularArea->gg.g;
    x->CircularArea = z;
    return;
  case -1:
    y = x->CircularArea;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CircularArea; n > 1 && y; --n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_MultiPolygon_DEL_CircularArea) */

void zx_gl_MultiPolygon_DEL_CircularArea(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_CircularArea_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CircularArea = (struct zx_gl_CircularArea_s*)x->CircularArea->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CircularArea_s*)x->CircularArea;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CircularArea; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_MultiPolygon_NUM_CircularArcArea) */

int zx_gl_MultiPolygon_NUM_CircularArcArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_CircularArcArea_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CircularArcArea; y; ++n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_MultiPolygon_GET_CircularArcArea) */

struct zx_gl_CircularArcArea_s* zx_gl_MultiPolygon_GET_CircularArcArea(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x) return 0;
  for (y = x->CircularArcArea; n>=0 && y; --n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_POP_CircularArcArea) */

struct zx_gl_CircularArcArea_s* zx_gl_MultiPolygon_POP_CircularArcArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x) return 0;
  y = x->CircularArcArea;
  if (y)
    x->CircularArcArea = (struct zx_gl_CircularArcArea_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_PUSH_CircularArcArea) */

void zx_gl_MultiPolygon_PUSH_CircularArcArea(struct zx_gl_MultiPolygon_s* x, struct zx_gl_CircularArcArea_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CircularArcArea->gg.g;
  x->CircularArcArea = z;
}

/* FUNC(zx_gl_MultiPolygon_REV_CircularArcArea) */

void zx_gl_MultiPolygon_REV_CircularArcArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_CircularArcArea_s* nxt;
  struct zx_gl_CircularArcArea_s* y;
  if (!x) return;
  y = x->CircularArcArea;
  if (!y) return;
  x->CircularArcArea = 0;
  while (y) {
    nxt = (struct zx_gl_CircularArcArea_s*)y->gg.g.n;
    y->gg.g.n = &x->CircularArcArea->gg.g;
    x->CircularArcArea = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_MultiPolygon_PUT_CircularArcArea) */

void zx_gl_MultiPolygon_PUT_CircularArcArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_CircularArcArea_s* z)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x || !z) return;
  y = x->CircularArcArea;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CircularArcArea = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_MultiPolygon_ADD_CircularArcArea) */

void zx_gl_MultiPolygon_ADD_CircularArcArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_CircularArcArea_s* z)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CircularArcArea->gg.g;
    x->CircularArcArea = z;
    return;
  case -1:
    y = x->CircularArcArea;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CircularArcArea; n > 1 && y; --n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_MultiPolygon_DEL_CircularArcArea) */

void zx_gl_MultiPolygon_DEL_CircularArcArea(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CircularArcArea = (struct zx_gl_CircularArcArea_s*)x->CircularArcArea->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CircularArcArea_s*)x->CircularArcArea;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CircularArcArea; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_MultiPolygon_NUM_EllipticalArea) */

int zx_gl_MultiPolygon_NUM_EllipticalArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_EllipticalArea_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EllipticalArea; y; ++n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_MultiPolygon_GET_EllipticalArea) */

struct zx_gl_EllipticalArea_s* zx_gl_MultiPolygon_GET_EllipticalArea(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x) return 0;
  for (y = x->EllipticalArea; n>=0 && y; --n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_POP_EllipticalArea) */

struct zx_gl_EllipticalArea_s* zx_gl_MultiPolygon_POP_EllipticalArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x) return 0;
  y = x->EllipticalArea;
  if (y)
    x->EllipticalArea = (struct zx_gl_EllipticalArea_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_MultiPolygon_PUSH_EllipticalArea) */

void zx_gl_MultiPolygon_PUSH_EllipticalArea(struct zx_gl_MultiPolygon_s* x, struct zx_gl_EllipticalArea_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EllipticalArea->gg.g;
  x->EllipticalArea = z;
}

/* FUNC(zx_gl_MultiPolygon_REV_EllipticalArea) */

void zx_gl_MultiPolygon_REV_EllipticalArea(struct zx_gl_MultiPolygon_s* x)
{
  struct zx_gl_EllipticalArea_s* nxt;
  struct zx_gl_EllipticalArea_s* y;
  if (!x) return;
  y = x->EllipticalArea;
  if (!y) return;
  x->EllipticalArea = 0;
  while (y) {
    nxt = (struct zx_gl_EllipticalArea_s*)y->gg.g.n;
    y->gg.g.n = &x->EllipticalArea->gg.g;
    x->EllipticalArea = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_MultiPolygon_PUT_EllipticalArea) */

void zx_gl_MultiPolygon_PUT_EllipticalArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_EllipticalArea_s* z)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x || !z) return;
  y = x->EllipticalArea;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EllipticalArea = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_MultiPolygon_ADD_EllipticalArea) */

void zx_gl_MultiPolygon_ADD_EllipticalArea(struct zx_gl_MultiPolygon_s* x, int n, struct zx_gl_EllipticalArea_s* z)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EllipticalArea->gg.g;
    x->EllipticalArea = z;
    return;
  case -1:
    y = x->EllipticalArea;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EllipticalArea; n > 1 && y; --n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_MultiPolygon_DEL_EllipticalArea) */

void zx_gl_MultiPolygon_DEL_EllipticalArea(struct zx_gl_MultiPolygon_s* x, int n)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EllipticalArea = (struct zx_gl_EllipticalArea_s*)x->EllipticalArea->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_EllipticalArea_s*)x->EllipticalArea;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EllipticalArea; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_MultiPolygon_GET_gid) */
struct zx_str* zx_gl_MultiPolygon_GET_gid(struct zx_gl_MultiPolygon_s* x) { return x->gid; }
/* FUNC(zx_gl_MultiPolygon_PUT_gid) */
void zx_gl_MultiPolygon_PUT_gid(struct zx_gl_MultiPolygon_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_MultiPolygon_GET_srsName) */
struct zx_str* zx_gl_MultiPolygon_GET_srsName(struct zx_gl_MultiPolygon_s* x) { return x->srsName; }
/* FUNC(zx_gl_MultiPolygon_PUT_srsName) */
void zx_gl_MultiPolygon_PUT_srsName(struct zx_gl_MultiPolygon_s* x, struct zx_str* y) { x->srsName = y; }












#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Notification_NUM_ItemData) */

int zx_gl_Notification_NUM_ItemData(struct zx_gl_Notification_s* x)
{
  struct zx_gl_ItemData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemData; y; ++n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Notification_GET_ItemData) */

struct zx_gl_ItemData_s* zx_gl_Notification_GET_ItemData(struct zx_gl_Notification_s* x, int n)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return 0;
  for (y = x->ItemData; n>=0 && y; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Notification_POP_ItemData) */

struct zx_gl_ItemData_s* zx_gl_Notification_POP_ItemData(struct zx_gl_Notification_s* x)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return 0;
  y = x->ItemData;
  if (y)
    x->ItemData = (struct zx_gl_ItemData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Notification_PUSH_ItemData) */

void zx_gl_Notification_PUSH_ItemData(struct zx_gl_Notification_s* x, struct zx_gl_ItemData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemData->gg.g;
  x->ItemData = z;
}

/* FUNC(zx_gl_Notification_REV_ItemData) */

void zx_gl_Notification_REV_ItemData(struct zx_gl_Notification_s* x)
{
  struct zx_gl_ItemData_s* nxt;
  struct zx_gl_ItemData_s* y;
  if (!x) return;
  y = x->ItemData;
  if (!y) return;
  x->ItemData = 0;
  while (y) {
    nxt = (struct zx_gl_ItemData_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Notification_PUT_ItemData) */

void zx_gl_Notification_PUT_ItemData(struct zx_gl_Notification_s* x, int n, struct zx_gl_ItemData_s* z)
{
  struct zx_gl_ItemData_s* y;
  if (!x || !z) return;
  y = x->ItemData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Notification_ADD_ItemData) */

void zx_gl_Notification_ADD_ItemData(struct zx_gl_Notification_s* x, int n, struct zx_gl_ItemData_s* z)
{
  struct zx_gl_ItemData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemData->gg.g;
    x->ItemData = z;
    return;
  case -1:
    y = x->ItemData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Notification_DEL_ItemData) */

void zx_gl_Notification_DEL_ItemData(struct zx_gl_Notification_s* x, int n)
{
  struct zx_gl_ItemData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemData = (struct zx_gl_ItemData_s*)x->ItemData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ItemData_s*)x->ItemData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Notification_GET_endReason) */
struct zx_str* zx_gl_Notification_GET_endReason(struct zx_gl_Notification_s* x) { return x->endReason; }
/* FUNC(zx_gl_Notification_PUT_endReason) */
void zx_gl_Notification_PUT_endReason(struct zx_gl_Notification_s* x, struct zx_str* y) { x->endReason = y; }
/* FUNC(zx_gl_Notification_GET_expires) */
struct zx_str* zx_gl_Notification_GET_expires(struct zx_gl_Notification_s* x) { return x->expires; }
/* FUNC(zx_gl_Notification_PUT_expires) */
void zx_gl_Notification_PUT_expires(struct zx_gl_Notification_s* x, struct zx_str* y) { x->expires = y; }
/* FUNC(zx_gl_Notification_GET_id) */
struct zx_str* zx_gl_Notification_GET_id(struct zx_gl_Notification_s* x) { return x->id; }
/* FUNC(zx_gl_Notification_PUT_id) */
void zx_gl_Notification_PUT_id(struct zx_gl_Notification_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_Notification_GET_subscriptionID) */
struct zx_str* zx_gl_Notification_GET_subscriptionID(struct zx_gl_Notification_s* x) { return x->subscriptionID; }
/* FUNC(zx_gl_Notification_PUT_subscriptionID) */
void zx_gl_Notification_PUT_subscriptionID(struct zx_gl_Notification_s* x, struct zx_str* y) { x->subscriptionID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Notify_NUM_Notification) */

int zx_gl_Notify_NUM_Notification(struct zx_gl_Notify_s* x)
{
  struct zx_gl_Notification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Notification; y; ++n, y = (struct zx_gl_Notification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Notify_GET_Notification) */

struct zx_gl_Notification_s* zx_gl_Notify_GET_Notification(struct zx_gl_Notify_s* x, int n)
{
  struct zx_gl_Notification_s* y;
  if (!x) return 0;
  for (y = x->Notification; n>=0 && y; --n, y = (struct zx_gl_Notification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Notify_POP_Notification) */

struct zx_gl_Notification_s* zx_gl_Notify_POP_Notification(struct zx_gl_Notify_s* x)
{
  struct zx_gl_Notification_s* y;
  if (!x) return 0;
  y = x->Notification;
  if (y)
    x->Notification = (struct zx_gl_Notification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Notify_PUSH_Notification) */

void zx_gl_Notify_PUSH_Notification(struct zx_gl_Notify_s* x, struct zx_gl_Notification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Notification->gg.g;
  x->Notification = z;
}

/* FUNC(zx_gl_Notify_REV_Notification) */

void zx_gl_Notify_REV_Notification(struct zx_gl_Notify_s* x)
{
  struct zx_gl_Notification_s* nxt;
  struct zx_gl_Notification_s* y;
  if (!x) return;
  y = x->Notification;
  if (!y) return;
  x->Notification = 0;
  while (y) {
    nxt = (struct zx_gl_Notification_s*)y->gg.g.n;
    y->gg.g.n = &x->Notification->gg.g;
    x->Notification = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Notify_PUT_Notification) */

void zx_gl_Notify_PUT_Notification(struct zx_gl_Notify_s* x, int n, struct zx_gl_Notification_s* z)
{
  struct zx_gl_Notification_s* y;
  if (!x || !z) return;
  y = x->Notification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Notification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Notification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Notify_ADD_Notification) */

void zx_gl_Notify_ADD_Notification(struct zx_gl_Notify_s* x, int n, struct zx_gl_Notification_s* z)
{
  struct zx_gl_Notification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Notification->gg.g;
    x->Notification = z;
    return;
  case -1:
    y = x->Notification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Notification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Notification; n > 1 && y; --n, y = (struct zx_gl_Notification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Notify_DEL_Notification) */

void zx_gl_Notify_DEL_Notification(struct zx_gl_Notify_s* x, int n)
{
  struct zx_gl_Notification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Notification = (struct zx_gl_Notification_s*)x->Notification->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Notification_s*)x->Notification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Notification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Notification; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Notification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Notify_NUM_Extension) */

int zx_gl_Notify_NUM_Extension(struct zx_gl_Notify_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Notify_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_Notify_GET_Extension(struct zx_gl_Notify_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Notify_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_Notify_POP_Extension(struct zx_gl_Notify_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Notify_PUSH_Extension) */

void zx_gl_Notify_PUSH_Extension(struct zx_gl_Notify_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_Notify_REV_Extension) */

void zx_gl_Notify_REV_Extension(struct zx_gl_Notify_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Notify_PUT_Extension) */

void zx_gl_Notify_PUT_Extension(struct zx_gl_Notify_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Notify_ADD_Extension) */

void zx_gl_Notify_ADD_Extension(struct zx_gl_Notify_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Notify_DEL_Extension) */

void zx_gl_Notify_DEL_Extension(struct zx_gl_Notify_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Notify_GET_id) */
struct zx_str* zx_gl_Notify_GET_id(struct zx_gl_Notify_s* x) { return x->id; }
/* FUNC(zx_gl_Notify_PUT_id) */
void zx_gl_Notify_PUT_id(struct zx_gl_Notify_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_Notify_GET_timeStamp) */
struct zx_str* zx_gl_Notify_GET_timeStamp(struct zx_gl_Notify_s* x) { return x->timeStamp; }
/* FUNC(zx_gl_Notify_PUT_timeStamp) */
void zx_gl_Notify_PUT_timeStamp(struct zx_gl_Notify_s* x, struct zx_str* y) { x->timeStamp = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_NotifyAdminTo_NUM_SecurityMechID) */

int zx_gl_NotifyAdminTo_NUM_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_NotifyAdminTo_GET_SecurityMechID) */

struct zx_elem_s* zx_gl_NotifyAdminTo_GET_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_NotifyAdminTo_POP_SecurityMechID) */

struct zx_elem_s* zx_gl_NotifyAdminTo_POP_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_NotifyAdminTo_PUSH_SecurityMechID) */

void zx_gl_NotifyAdminTo_PUSH_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_gl_NotifyAdminTo_REV_SecurityMechID) */

void zx_gl_NotifyAdminTo_REV_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SecurityMechID;
  if (!y) return;
  x->SecurityMechID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_NotifyAdminTo_PUT_SecurityMechID) */

void zx_gl_NotifyAdminTo_PUT_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SecurityMechID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SecurityMechID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_NotifyAdminTo_ADD_SecurityMechID) */

void zx_gl_NotifyAdminTo_ADD_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = z;
    return;
  case -1:
    y = x->SecurityMechID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_NotifyAdminTo_DEL_SecurityMechID) */

void zx_gl_NotifyAdminTo_DEL_SecurityMechID(struct zx_gl_NotifyAdminTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityMechID = (struct zx_elem_s*)x->SecurityMechID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SecurityMechID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_NotifyAdminTo_NUM_Credential) */

int zx_gl_NotifyAdminTo_NUM_Credential(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_gl_Credential_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Credential; y; ++n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_NotifyAdminTo_GET_Credential) */

struct zx_gl_Credential_s* zx_gl_NotifyAdminTo_GET_Credential(struct zx_gl_NotifyAdminTo_s* x, int n)
{
  struct zx_gl_Credential_s* y;
  if (!x) return 0;
  for (y = x->Credential; n>=0 && y; --n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_NotifyAdminTo_POP_Credential) */

struct zx_gl_Credential_s* zx_gl_NotifyAdminTo_POP_Credential(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_gl_Credential_s* y;
  if (!x) return 0;
  y = x->Credential;
  if (y)
    x->Credential = (struct zx_gl_Credential_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_NotifyAdminTo_PUSH_Credential) */

void zx_gl_NotifyAdminTo_PUSH_Credential(struct zx_gl_NotifyAdminTo_s* x, struct zx_gl_Credential_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Credential->gg.g;
  x->Credential = z;
}

/* FUNC(zx_gl_NotifyAdminTo_REV_Credential) */

void zx_gl_NotifyAdminTo_REV_Credential(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_gl_Credential_s* nxt;
  struct zx_gl_Credential_s* y;
  if (!x) return;
  y = x->Credential;
  if (!y) return;
  x->Credential = 0;
  while (y) {
    nxt = (struct zx_gl_Credential_s*)y->gg.g.n;
    y->gg.g.n = &x->Credential->gg.g;
    x->Credential = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_NotifyAdminTo_PUT_Credential) */

void zx_gl_NotifyAdminTo_PUT_Credential(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_gl_Credential_s* z)
{
  struct zx_gl_Credential_s* y;
  if (!x || !z) return;
  y = x->Credential;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Credential = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_NotifyAdminTo_ADD_Credential) */

void zx_gl_NotifyAdminTo_ADD_Credential(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_gl_Credential_s* z)
{
  struct zx_gl_Credential_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Credential->gg.g;
    x->Credential = z;
    return;
  case -1:
    y = x->Credential;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credential; n > 1 && y; --n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_NotifyAdminTo_DEL_Credential) */

void zx_gl_NotifyAdminTo_DEL_Credential(struct zx_gl_NotifyAdminTo_s* x, int n)
{
  struct zx_gl_Credential_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Credential = (struct zx_gl_Credential_s*)x->Credential->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Credential_s*)x->Credential;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credential; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_NotifyAdminTo_NUM_Endpoint) */

int zx_gl_NotifyAdminTo_NUM_Endpoint(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Endpoint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_NotifyAdminTo_GET_Endpoint) */

struct zx_elem_s* zx_gl_NotifyAdminTo_GET_Endpoint(struct zx_gl_NotifyAdminTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Endpoint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_NotifyAdminTo_POP_Endpoint) */

struct zx_elem_s* zx_gl_NotifyAdminTo_POP_Endpoint(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Endpoint;
  if (y)
    x->Endpoint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_NotifyAdminTo_PUSH_Endpoint) */

void zx_gl_NotifyAdminTo_PUSH_Endpoint(struct zx_gl_NotifyAdminTo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Endpoint->g;
  x->Endpoint = z;
}

/* FUNC(zx_gl_NotifyAdminTo_REV_Endpoint) */

void zx_gl_NotifyAdminTo_REV_Endpoint(struct zx_gl_NotifyAdminTo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Endpoint;
  if (!y) return;
  x->Endpoint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Endpoint->g;
    x->Endpoint = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_NotifyAdminTo_PUT_Endpoint) */

void zx_gl_NotifyAdminTo_PUT_Endpoint(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Endpoint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Endpoint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_NotifyAdminTo_ADD_Endpoint) */

void zx_gl_NotifyAdminTo_ADD_Endpoint(struct zx_gl_NotifyAdminTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Endpoint->g;
    x->Endpoint = z;
    return;
  case -1:
    y = x->Endpoint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_NotifyAdminTo_DEL_Endpoint) */

void zx_gl_NotifyAdminTo_DEL_Endpoint(struct zx_gl_NotifyAdminTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Endpoint = (struct zx_elem_s*)x->Endpoint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Endpoint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_gl_NotifyAdminTo_GET_id) */
struct zx_str* zx_gl_NotifyAdminTo_GET_id(struct zx_gl_NotifyAdminTo_s* x) { return x->id; }
/* FUNC(zx_gl_NotifyAdminTo_PUT_id) */
void zx_gl_NotifyAdminTo_PUT_id(struct zx_gl_NotifyAdminTo_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_NotifyResponse_NUM_Status) */

int zx_gl_NotifyResponse_NUM_Status(struct zx_gl_NotifyResponse_s* x)
{
  struct zx_gl_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_NotifyResponse_GET_Status) */

struct zx_gl_Status_s* zx_gl_NotifyResponse_GET_Status(struct zx_gl_NotifyResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_NotifyResponse_POP_Status) */

struct zx_gl_Status_s* zx_gl_NotifyResponse_POP_Status(struct zx_gl_NotifyResponse_s* x)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_gl_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_NotifyResponse_PUSH_Status) */

void zx_gl_NotifyResponse_PUSH_Status(struct zx_gl_NotifyResponse_s* x, struct zx_gl_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_gl_NotifyResponse_REV_Status) */

void zx_gl_NotifyResponse_REV_Status(struct zx_gl_NotifyResponse_s* x)
{
  struct zx_gl_Status_s* nxt;
  struct zx_gl_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_gl_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_NotifyResponse_PUT_Status) */

void zx_gl_NotifyResponse_PUT_Status(struct zx_gl_NotifyResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_NotifyResponse_ADD_Status) */

void zx_gl_NotifyResponse_ADD_Status(struct zx_gl_NotifyResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_NotifyResponse_DEL_Status) */

void zx_gl_NotifyResponse_DEL_Status(struct zx_gl_NotifyResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_gl_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_NotifyResponse_NUM_Extension) */

int zx_gl_NotifyResponse_NUM_Extension(struct zx_gl_NotifyResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_NotifyResponse_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_NotifyResponse_GET_Extension(struct zx_gl_NotifyResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_NotifyResponse_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_NotifyResponse_POP_Extension(struct zx_gl_NotifyResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_NotifyResponse_PUSH_Extension) */

void zx_gl_NotifyResponse_PUSH_Extension(struct zx_gl_NotifyResponse_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_NotifyResponse_REV_Extension) */

void zx_gl_NotifyResponse_REV_Extension(struct zx_gl_NotifyResponse_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_NotifyResponse_PUT_Extension) */

void zx_gl_NotifyResponse_PUT_Extension(struct zx_gl_NotifyResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_NotifyResponse_ADD_Extension) */

void zx_gl_NotifyResponse_ADD_Extension(struct zx_gl_NotifyResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_NotifyResponse_DEL_Extension) */

void zx_gl_NotifyResponse_DEL_Extension(struct zx_gl_NotifyResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_NotifyResponse_GET_id) */
struct zx_str* zx_gl_NotifyResponse_GET_id(struct zx_gl_NotifyResponse_s* x) { return x->id; }
/* FUNC(zx_gl_NotifyResponse_PUT_id) */
void zx_gl_NotifyResponse_PUT_id(struct zx_gl_NotifyResponse_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_NotifyTo_NUM_SecurityMechID) */

int zx_gl_NotifyTo_NUM_SecurityMechID(struct zx_gl_NotifyTo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SecurityMechID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_NotifyTo_GET_SecurityMechID) */

struct zx_elem_s* zx_gl_NotifyTo_GET_SecurityMechID(struct zx_gl_NotifyTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->SecurityMechID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_NotifyTo_POP_SecurityMechID) */

struct zx_elem_s* zx_gl_NotifyTo_POP_SecurityMechID(struct zx_gl_NotifyTo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->SecurityMechID;
  if (y)
    x->SecurityMechID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_NotifyTo_PUSH_SecurityMechID) */

void zx_gl_NotifyTo_PUSH_SecurityMechID(struct zx_gl_NotifyTo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->SecurityMechID->g;
  x->SecurityMechID = z;
}

/* FUNC(zx_gl_NotifyTo_REV_SecurityMechID) */

void zx_gl_NotifyTo_REV_SecurityMechID(struct zx_gl_NotifyTo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->SecurityMechID;
  if (!y) return;
  x->SecurityMechID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_NotifyTo_PUT_SecurityMechID) */

void zx_gl_NotifyTo_PUT_SecurityMechID(struct zx_gl_NotifyTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->SecurityMechID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->SecurityMechID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_NotifyTo_ADD_SecurityMechID) */

void zx_gl_NotifyTo_ADD_SecurityMechID(struct zx_gl_NotifyTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->SecurityMechID->g;
    x->SecurityMechID = z;
    return;
  case -1:
    y = x->SecurityMechID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_NotifyTo_DEL_SecurityMechID) */

void zx_gl_NotifyTo_DEL_SecurityMechID(struct zx_gl_NotifyTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SecurityMechID = (struct zx_elem_s*)x->SecurityMechID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->SecurityMechID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->SecurityMechID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_NotifyTo_NUM_Credential) */

int zx_gl_NotifyTo_NUM_Credential(struct zx_gl_NotifyTo_s* x)
{
  struct zx_gl_Credential_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Credential; y; ++n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_NotifyTo_GET_Credential) */

struct zx_gl_Credential_s* zx_gl_NotifyTo_GET_Credential(struct zx_gl_NotifyTo_s* x, int n)
{
  struct zx_gl_Credential_s* y;
  if (!x) return 0;
  for (y = x->Credential; n>=0 && y; --n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_NotifyTo_POP_Credential) */

struct zx_gl_Credential_s* zx_gl_NotifyTo_POP_Credential(struct zx_gl_NotifyTo_s* x)
{
  struct zx_gl_Credential_s* y;
  if (!x) return 0;
  y = x->Credential;
  if (y)
    x->Credential = (struct zx_gl_Credential_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_NotifyTo_PUSH_Credential) */

void zx_gl_NotifyTo_PUSH_Credential(struct zx_gl_NotifyTo_s* x, struct zx_gl_Credential_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Credential->gg.g;
  x->Credential = z;
}

/* FUNC(zx_gl_NotifyTo_REV_Credential) */

void zx_gl_NotifyTo_REV_Credential(struct zx_gl_NotifyTo_s* x)
{
  struct zx_gl_Credential_s* nxt;
  struct zx_gl_Credential_s* y;
  if (!x) return;
  y = x->Credential;
  if (!y) return;
  x->Credential = 0;
  while (y) {
    nxt = (struct zx_gl_Credential_s*)y->gg.g.n;
    y->gg.g.n = &x->Credential->gg.g;
    x->Credential = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_NotifyTo_PUT_Credential) */

void zx_gl_NotifyTo_PUT_Credential(struct zx_gl_NotifyTo_s* x, int n, struct zx_gl_Credential_s* z)
{
  struct zx_gl_Credential_s* y;
  if (!x || !z) return;
  y = x->Credential;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Credential = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_NotifyTo_ADD_Credential) */

void zx_gl_NotifyTo_ADD_Credential(struct zx_gl_NotifyTo_s* x, int n, struct zx_gl_Credential_s* z)
{
  struct zx_gl_Credential_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Credential->gg.g;
    x->Credential = z;
    return;
  case -1:
    y = x->Credential;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credential; n > 1 && y; --n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_NotifyTo_DEL_Credential) */

void zx_gl_NotifyTo_DEL_Credential(struct zx_gl_NotifyTo_s* x, int n)
{
  struct zx_gl_Credential_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Credential = (struct zx_gl_Credential_s*)x->Credential->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Credential_s*)x->Credential;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credential; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Credential_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_NotifyTo_NUM_Endpoint) */

int zx_gl_NotifyTo_NUM_Endpoint(struct zx_gl_NotifyTo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Endpoint; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_NotifyTo_GET_Endpoint) */

struct zx_elem_s* zx_gl_NotifyTo_GET_Endpoint(struct zx_gl_NotifyTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Endpoint; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_NotifyTo_POP_Endpoint) */

struct zx_elem_s* zx_gl_NotifyTo_POP_Endpoint(struct zx_gl_NotifyTo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Endpoint;
  if (y)
    x->Endpoint = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_NotifyTo_PUSH_Endpoint) */

void zx_gl_NotifyTo_PUSH_Endpoint(struct zx_gl_NotifyTo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Endpoint->g;
  x->Endpoint = z;
}

/* FUNC(zx_gl_NotifyTo_REV_Endpoint) */

void zx_gl_NotifyTo_REV_Endpoint(struct zx_gl_NotifyTo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Endpoint;
  if (!y) return;
  x->Endpoint = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Endpoint->g;
    x->Endpoint = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_NotifyTo_PUT_Endpoint) */

void zx_gl_NotifyTo_PUT_Endpoint(struct zx_gl_NotifyTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Endpoint;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Endpoint = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_NotifyTo_ADD_Endpoint) */

void zx_gl_NotifyTo_ADD_Endpoint(struct zx_gl_NotifyTo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Endpoint->g;
    x->Endpoint = z;
    return;
  case -1:
    y = x->Endpoint;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_NotifyTo_DEL_Endpoint) */

void zx_gl_NotifyTo_DEL_Endpoint(struct zx_gl_NotifyTo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Endpoint = (struct zx_elem_s*)x->Endpoint->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Endpoint;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Endpoint; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_gl_NotifyTo_GET_id) */
struct zx_str* zx_gl_NotifyTo_GET_id(struct zx_gl_NotifyTo_s* x) { return x->id; }
/* FUNC(zx_gl_NotifyTo_PUT_id) */
void zx_gl_NotifyTo_PUT_id(struct zx_gl_NotifyTo_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Point_NUM_coord) */

int zx_gl_Point_NUM_coord(struct zx_gl_Point_s* x)
{
  struct zx_gl_coord_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->coord; y; ++n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Point_GET_coord) */

struct zx_gl_coord_s* zx_gl_Point_GET_coord(struct zx_gl_Point_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  for (y = x->coord; n>=0 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Point_POP_coord) */

struct zx_gl_coord_s* zx_gl_Point_POP_coord(struct zx_gl_Point_s* x)
{
  struct zx_gl_coord_s* y;
  if (!x) return 0;
  y = x->coord;
  if (y)
    x->coord = (struct zx_gl_coord_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Point_PUSH_coord) */

void zx_gl_Point_PUSH_coord(struct zx_gl_Point_s* x, struct zx_gl_coord_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->coord->gg.g;
  x->coord = z;
}

/* FUNC(zx_gl_Point_REV_coord) */

void zx_gl_Point_REV_coord(struct zx_gl_Point_s* x)
{
  struct zx_gl_coord_s* nxt;
  struct zx_gl_coord_s* y;
  if (!x) return;
  y = x->coord;
  if (!y) return;
  x->coord = 0;
  while (y) {
    nxt = (struct zx_gl_coord_s*)y->gg.g.n;
    y->gg.g.n = &x->coord->gg.g;
    x->coord = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Point_PUT_coord) */

void zx_gl_Point_PUT_coord(struct zx_gl_Point_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  y = x->coord;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->coord = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Point_ADD_coord) */

void zx_gl_Point_ADD_coord(struct zx_gl_Point_s* x, int n, struct zx_gl_coord_s* z)
{
  struct zx_gl_coord_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->coord->gg.g;
    x->coord = z;
    return;
  case -1:
    y = x->coord;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Point_DEL_coord) */

void zx_gl_Point_DEL_coord(struct zx_gl_Point_s* x, int n)
{
  struct zx_gl_coord_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->coord = (struct zx_gl_coord_s*)x->coord->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_coord_s*)x->coord;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->coord; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_coord_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Point_GET_gid) */
struct zx_str* zx_gl_Point_GET_gid(struct zx_gl_Point_s* x) { return x->gid; }
/* FUNC(zx_gl_Point_PUT_gid) */
void zx_gl_Point_PUT_gid(struct zx_gl_Point_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_Point_GET_srsName) */
struct zx_str* zx_gl_Point_GET_srsName(struct zx_gl_Point_s* x) { return x->srsName; }
/* FUNC(zx_gl_Point_PUT_srsName) */
void zx_gl_Point_PUT_srsName(struct zx_gl_Point_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Polygon_NUM_outerBoundaryIs) */

int zx_gl_Polygon_NUM_outerBoundaryIs(struct zx_gl_Polygon_s* x)
{
  struct zx_gl_outerBoundaryIs_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->outerBoundaryIs; y; ++n, y = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Polygon_GET_outerBoundaryIs) */

struct zx_gl_outerBoundaryIs_s* zx_gl_Polygon_GET_outerBoundaryIs(struct zx_gl_Polygon_s* x, int n)
{
  struct zx_gl_outerBoundaryIs_s* y;
  if (!x) return 0;
  for (y = x->outerBoundaryIs; n>=0 && y; --n, y = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Polygon_POP_outerBoundaryIs) */

struct zx_gl_outerBoundaryIs_s* zx_gl_Polygon_POP_outerBoundaryIs(struct zx_gl_Polygon_s* x)
{
  struct zx_gl_outerBoundaryIs_s* y;
  if (!x) return 0;
  y = x->outerBoundaryIs;
  if (y)
    x->outerBoundaryIs = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Polygon_PUSH_outerBoundaryIs) */

void zx_gl_Polygon_PUSH_outerBoundaryIs(struct zx_gl_Polygon_s* x, struct zx_gl_outerBoundaryIs_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->outerBoundaryIs->gg.g;
  x->outerBoundaryIs = z;
}

/* FUNC(zx_gl_Polygon_REV_outerBoundaryIs) */

void zx_gl_Polygon_REV_outerBoundaryIs(struct zx_gl_Polygon_s* x)
{
  struct zx_gl_outerBoundaryIs_s* nxt;
  struct zx_gl_outerBoundaryIs_s* y;
  if (!x) return;
  y = x->outerBoundaryIs;
  if (!y) return;
  x->outerBoundaryIs = 0;
  while (y) {
    nxt = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n;
    y->gg.g.n = &x->outerBoundaryIs->gg.g;
    x->outerBoundaryIs = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Polygon_PUT_outerBoundaryIs) */

void zx_gl_Polygon_PUT_outerBoundaryIs(struct zx_gl_Polygon_s* x, int n, struct zx_gl_outerBoundaryIs_s* z)
{
  struct zx_gl_outerBoundaryIs_s* y;
  if (!x || !z) return;
  y = x->outerBoundaryIs;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->outerBoundaryIs = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Polygon_ADD_outerBoundaryIs) */

void zx_gl_Polygon_ADD_outerBoundaryIs(struct zx_gl_Polygon_s* x, int n, struct zx_gl_outerBoundaryIs_s* z)
{
  struct zx_gl_outerBoundaryIs_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->outerBoundaryIs->gg.g;
    x->outerBoundaryIs = z;
    return;
  case -1:
    y = x->outerBoundaryIs;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->outerBoundaryIs; n > 1 && y; --n, y = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Polygon_DEL_outerBoundaryIs) */

void zx_gl_Polygon_DEL_outerBoundaryIs(struct zx_gl_Polygon_s* x, int n)
{
  struct zx_gl_outerBoundaryIs_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->outerBoundaryIs = (struct zx_gl_outerBoundaryIs_s*)x->outerBoundaryIs->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_outerBoundaryIs_s*)x->outerBoundaryIs;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->outerBoundaryIs; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_outerBoundaryIs_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Polygon_NUM_innerBoundaryIs) */

int zx_gl_Polygon_NUM_innerBoundaryIs(struct zx_gl_Polygon_s* x)
{
  struct zx_gl_innerBoundaryIs_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->innerBoundaryIs; y; ++n, y = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Polygon_GET_innerBoundaryIs) */

struct zx_gl_innerBoundaryIs_s* zx_gl_Polygon_GET_innerBoundaryIs(struct zx_gl_Polygon_s* x, int n)
{
  struct zx_gl_innerBoundaryIs_s* y;
  if (!x) return 0;
  for (y = x->innerBoundaryIs; n>=0 && y; --n, y = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Polygon_POP_innerBoundaryIs) */

struct zx_gl_innerBoundaryIs_s* zx_gl_Polygon_POP_innerBoundaryIs(struct zx_gl_Polygon_s* x)
{
  struct zx_gl_innerBoundaryIs_s* y;
  if (!x) return 0;
  y = x->innerBoundaryIs;
  if (y)
    x->innerBoundaryIs = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Polygon_PUSH_innerBoundaryIs) */

void zx_gl_Polygon_PUSH_innerBoundaryIs(struct zx_gl_Polygon_s* x, struct zx_gl_innerBoundaryIs_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->innerBoundaryIs->gg.g;
  x->innerBoundaryIs = z;
}

/* FUNC(zx_gl_Polygon_REV_innerBoundaryIs) */

void zx_gl_Polygon_REV_innerBoundaryIs(struct zx_gl_Polygon_s* x)
{
  struct zx_gl_innerBoundaryIs_s* nxt;
  struct zx_gl_innerBoundaryIs_s* y;
  if (!x) return;
  y = x->innerBoundaryIs;
  if (!y) return;
  x->innerBoundaryIs = 0;
  while (y) {
    nxt = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n;
    y->gg.g.n = &x->innerBoundaryIs->gg.g;
    x->innerBoundaryIs = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Polygon_PUT_innerBoundaryIs) */

void zx_gl_Polygon_PUT_innerBoundaryIs(struct zx_gl_Polygon_s* x, int n, struct zx_gl_innerBoundaryIs_s* z)
{
  struct zx_gl_innerBoundaryIs_s* y;
  if (!x || !z) return;
  y = x->innerBoundaryIs;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->innerBoundaryIs = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Polygon_ADD_innerBoundaryIs) */

void zx_gl_Polygon_ADD_innerBoundaryIs(struct zx_gl_Polygon_s* x, int n, struct zx_gl_innerBoundaryIs_s* z)
{
  struct zx_gl_innerBoundaryIs_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->innerBoundaryIs->gg.g;
    x->innerBoundaryIs = z;
    return;
  case -1:
    y = x->innerBoundaryIs;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->innerBoundaryIs; n > 1 && y; --n, y = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Polygon_DEL_innerBoundaryIs) */

void zx_gl_Polygon_DEL_innerBoundaryIs(struct zx_gl_Polygon_s* x, int n)
{
  struct zx_gl_innerBoundaryIs_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->innerBoundaryIs = (struct zx_gl_innerBoundaryIs_s*)x->innerBoundaryIs->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_innerBoundaryIs_s*)x->innerBoundaryIs;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->innerBoundaryIs; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_innerBoundaryIs_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Polygon_GET_gid) */
struct zx_str* zx_gl_Polygon_GET_gid(struct zx_gl_Polygon_s* x) { return x->gid; }
/* FUNC(zx_gl_Polygon_PUT_gid) */
void zx_gl_Polygon_PUT_gid(struct zx_gl_Polygon_s* x, struct zx_str* y) { x->gid = y; }
/* FUNC(zx_gl_Polygon_GET_srsName) */
struct zx_str* zx_gl_Polygon_GET_srsName(struct zx_gl_Polygon_s* x) { return x->srsName; }
/* FUNC(zx_gl_Polygon_PUT_srsName) */
void zx_gl_Polygon_PUT_srsName(struct zx_gl_Polygon_s* x, struct zx_str* y) { x->srsName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Query_NUM_ResourceID) */

int zx_gl_Query_NUM_ResourceID(struct zx_gl_Query_s* x)
{
  struct zx_gl_ResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceID; y; ++n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Query_GET_ResourceID) */

struct zx_gl_ResourceID_s* zx_gl_Query_GET_ResourceID(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return 0;
  for (y = x->ResourceID; n>=0 && y; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Query_POP_ResourceID) */

struct zx_gl_ResourceID_s* zx_gl_Query_POP_ResourceID(struct zx_gl_Query_s* x)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return 0;
  y = x->ResourceID;
  if (y)
    x->ResourceID = (struct zx_gl_ResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Query_PUSH_ResourceID) */

void zx_gl_Query_PUSH_ResourceID(struct zx_gl_Query_s* x, struct zx_gl_ResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceID->gg.g;
  x->ResourceID = z;
}

/* FUNC(zx_gl_Query_REV_ResourceID) */

void zx_gl_Query_REV_ResourceID(struct zx_gl_Query_s* x)
{
  struct zx_gl_ResourceID_s* nxt;
  struct zx_gl_ResourceID_s* y;
  if (!x) return;
  y = x->ResourceID;
  if (!y) return;
  x->ResourceID = 0;
  while (y) {
    nxt = (struct zx_gl_ResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Query_PUT_ResourceID) */

void zx_gl_Query_PUT_ResourceID(struct zx_gl_Query_s* x, int n, struct zx_gl_ResourceID_s* z)
{
  struct zx_gl_ResourceID_s* y;
  if (!x || !z) return;
  y = x->ResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Query_ADD_ResourceID) */

void zx_gl_Query_ADD_ResourceID(struct zx_gl_Query_s* x, int n, struct zx_gl_ResourceID_s* z)
{
  struct zx_gl_ResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceID->gg.g;
    x->ResourceID = z;
    return;
  case -1:
    y = x->ResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Query_DEL_ResourceID) */

void zx_gl_Query_DEL_ResourceID(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_ResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceID = (struct zx_gl_ResourceID_s*)x->ResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ResourceID_s*)x->ResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Query_NUM_EncryptedResourceID) */

int zx_gl_Query_NUM_EncryptedResourceID(struct zx_gl_Query_s* x)
{
  struct zx_gl_EncryptedResourceID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; y; ++n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Query_GET_EncryptedResourceID) */

struct zx_gl_EncryptedResourceID_s* zx_gl_Query_GET_EncryptedResourceID(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedResourceID; n>=0 && y; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Query_POP_EncryptedResourceID) */

struct zx_gl_EncryptedResourceID_s* zx_gl_Query_POP_EncryptedResourceID(struct zx_gl_Query_s* x)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return 0;
  y = x->EncryptedResourceID;
  if (y)
    x->EncryptedResourceID = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Query_PUSH_EncryptedResourceID) */

void zx_gl_Query_PUSH_EncryptedResourceID(struct zx_gl_Query_s* x, struct zx_gl_EncryptedResourceID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedResourceID->gg.g;
  x->EncryptedResourceID = z;
}

/* FUNC(zx_gl_Query_REV_EncryptedResourceID) */

void zx_gl_Query_REV_EncryptedResourceID(struct zx_gl_Query_s* x)
{
  struct zx_gl_EncryptedResourceID_s* nxt;
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  x->EncryptedResourceID = 0;
  while (y) {
    nxt = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Query_PUT_EncryptedResourceID) */

void zx_gl_Query_PUT_EncryptedResourceID(struct zx_gl_Query_s* x, int n, struct zx_gl_EncryptedResourceID_s* z)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x || !z) return;
  y = x->EncryptedResourceID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedResourceID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Query_ADD_EncryptedResourceID) */

void zx_gl_Query_ADD_EncryptedResourceID(struct zx_gl_Query_s* x, int n, struct zx_gl_EncryptedResourceID_s* z)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedResourceID->gg.g;
    x->EncryptedResourceID = z;
    return;
  case -1:
    y = x->EncryptedResourceID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Query_DEL_EncryptedResourceID) */

void zx_gl_Query_DEL_EncryptedResourceID(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_EncryptedResourceID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedResourceID = (struct zx_gl_EncryptedResourceID_s*)x->EncryptedResourceID->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_EncryptedResourceID_s*)x->EncryptedResourceID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedResourceID; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EncryptedResourceID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Query_NUM_Subscription) */

int zx_gl_Query_NUM_Subscription(struct zx_gl_Query_s* x)
{
  struct zx_gl_Subscription_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subscription; y; ++n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Query_GET_Subscription) */

struct zx_gl_Subscription_s* zx_gl_Query_GET_Subscription(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return 0;
  for (y = x->Subscription; n>=0 && y; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Query_POP_Subscription) */

struct zx_gl_Subscription_s* zx_gl_Query_POP_Subscription(struct zx_gl_Query_s* x)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return 0;
  y = x->Subscription;
  if (y)
    x->Subscription = (struct zx_gl_Subscription_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Query_PUSH_Subscription) */

void zx_gl_Query_PUSH_Subscription(struct zx_gl_Query_s* x, struct zx_gl_Subscription_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subscription->gg.g;
  x->Subscription = z;
}

/* FUNC(zx_gl_Query_REV_Subscription) */

void zx_gl_Query_REV_Subscription(struct zx_gl_Query_s* x)
{
  struct zx_gl_Subscription_s* nxt;
  struct zx_gl_Subscription_s* y;
  if (!x) return;
  y = x->Subscription;
  if (!y) return;
  x->Subscription = 0;
  while (y) {
    nxt = (struct zx_gl_Subscription_s*)y->gg.g.n;
    y->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Query_PUT_Subscription) */

void zx_gl_Query_PUT_Subscription(struct zx_gl_Query_s* x, int n, struct zx_gl_Subscription_s* z)
{
  struct zx_gl_Subscription_s* y;
  if (!x || !z) return;
  y = x->Subscription;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subscription = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Query_ADD_Subscription) */

void zx_gl_Query_ADD_Subscription(struct zx_gl_Query_s* x, int n, struct zx_gl_Subscription_s* z)
{
  struct zx_gl_Subscription_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subscription->gg.g;
    x->Subscription = z;
    return;
  case -1:
    y = x->Subscription;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Query_DEL_Subscription) */

void zx_gl_Query_DEL_Subscription(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_Subscription_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subscription = (struct zx_gl_Subscription_s*)x->Subscription->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Subscription_s*)x->Subscription;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subscription; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Subscription_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Query_NUM_QueryItem) */

int zx_gl_Query_NUM_QueryItem(struct zx_gl_Query_s* x)
{
  struct zx_gl_QueryItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryItem; y; ++n, y = (struct zx_gl_QueryItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Query_GET_QueryItem) */

struct zx_gl_QueryItem_s* zx_gl_Query_GET_QueryItem(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_QueryItem_s* y;
  if (!x) return 0;
  for (y = x->QueryItem; n>=0 && y; --n, y = (struct zx_gl_QueryItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Query_POP_QueryItem) */

struct zx_gl_QueryItem_s* zx_gl_Query_POP_QueryItem(struct zx_gl_Query_s* x)
{
  struct zx_gl_QueryItem_s* y;
  if (!x) return 0;
  y = x->QueryItem;
  if (y)
    x->QueryItem = (struct zx_gl_QueryItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Query_PUSH_QueryItem) */

void zx_gl_Query_PUSH_QueryItem(struct zx_gl_Query_s* x, struct zx_gl_QueryItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryItem->gg.g;
  x->QueryItem = z;
}

/* FUNC(zx_gl_Query_REV_QueryItem) */

void zx_gl_Query_REV_QueryItem(struct zx_gl_Query_s* x)
{
  struct zx_gl_QueryItem_s* nxt;
  struct zx_gl_QueryItem_s* y;
  if (!x) return;
  y = x->QueryItem;
  if (!y) return;
  x->QueryItem = 0;
  while (y) {
    nxt = (struct zx_gl_QueryItem_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryItem->gg.g;
    x->QueryItem = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Query_PUT_QueryItem) */

void zx_gl_Query_PUT_QueryItem(struct zx_gl_Query_s* x, int n, struct zx_gl_QueryItem_s* z)
{
  struct zx_gl_QueryItem_s* y;
  if (!x || !z) return;
  y = x->QueryItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_QueryItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Query_ADD_QueryItem) */

void zx_gl_Query_ADD_QueryItem(struct zx_gl_Query_s* x, int n, struct zx_gl_QueryItem_s* z)
{
  struct zx_gl_QueryItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryItem->gg.g;
    x->QueryItem = z;
    return;
  case -1:
    y = x->QueryItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_QueryItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryItem; n > 1 && y; --n, y = (struct zx_gl_QueryItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Query_DEL_QueryItem) */

void zx_gl_Query_DEL_QueryItem(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_QueryItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryItem = (struct zx_gl_QueryItem_s*)x->QueryItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_QueryItem_s*)x->QueryItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_QueryItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryItem; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_QueryItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Query_NUM_Extension) */

int zx_gl_Query_NUM_Extension(struct zx_gl_Query_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Query_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_Query_GET_Extension(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Query_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_Query_POP_Extension(struct zx_gl_Query_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Query_PUSH_Extension) */

void zx_gl_Query_PUSH_Extension(struct zx_gl_Query_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_Query_REV_Extension) */

void zx_gl_Query_REV_Extension(struct zx_gl_Query_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Query_PUT_Extension) */

void zx_gl_Query_PUT_Extension(struct zx_gl_Query_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Query_ADD_Extension) */

void zx_gl_Query_ADD_Extension(struct zx_gl_Query_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Query_DEL_Extension) */

void zx_gl_Query_DEL_Extension(struct zx_gl_Query_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Query_GET_id) */
struct zx_str* zx_gl_Query_GET_id(struct zx_gl_Query_s* x) { return x->id; }
/* FUNC(zx_gl_Query_PUT_id) */
void zx_gl_Query_PUT_id(struct zx_gl_Query_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryItem_NUM_AreaComparison) */

int zx_gl_QueryItem_NUM_AreaComparison(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_AreaComparison_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AreaComparison; y; ++n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryItem_GET_AreaComparison) */

struct zx_gl_AreaComparison_s* zx_gl_QueryItem_GET_AreaComparison(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x) return 0;
  for (y = x->AreaComparison; n>=0 && y; --n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryItem_POP_AreaComparison) */

struct zx_gl_AreaComparison_s* zx_gl_QueryItem_POP_AreaComparison(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x) return 0;
  y = x->AreaComparison;
  if (y)
    x->AreaComparison = (struct zx_gl_AreaComparison_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryItem_PUSH_AreaComparison) */

void zx_gl_QueryItem_PUSH_AreaComparison(struct zx_gl_QueryItem_s* x, struct zx_gl_AreaComparison_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AreaComparison->gg.g;
  x->AreaComparison = z;
}

/* FUNC(zx_gl_QueryItem_REV_AreaComparison) */

void zx_gl_QueryItem_REV_AreaComparison(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_AreaComparison_s* nxt;
  struct zx_gl_AreaComparison_s* y;
  if (!x) return;
  y = x->AreaComparison;
  if (!y) return;
  x->AreaComparison = 0;
  while (y) {
    nxt = (struct zx_gl_AreaComparison_s*)y->gg.g.n;
    y->gg.g.n = &x->AreaComparison->gg.g;
    x->AreaComparison = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryItem_PUT_AreaComparison) */

void zx_gl_QueryItem_PUT_AreaComparison(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_AreaComparison_s* z)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x || !z) return;
  y = x->AreaComparison;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AreaComparison = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryItem_ADD_AreaComparison) */

void zx_gl_QueryItem_ADD_AreaComparison(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_AreaComparison_s* z)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AreaComparison->gg.g;
    x->AreaComparison = z;
    return;
  case -1:
    y = x->AreaComparison;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AreaComparison; n > 1 && y; --n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryItem_DEL_AreaComparison) */

void zx_gl_QueryItem_DEL_AreaComparison(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_AreaComparison_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AreaComparison = (struct zx_gl_AreaComparison_s*)x->AreaComparison->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_AreaComparison_s*)x->AreaComparison;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AreaComparison; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_AreaComparison_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryItem_NUM_eqop) */

int zx_gl_QueryItem_NUM_eqop(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_eqop_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->eqop; y; ++n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryItem_GET_eqop) */

struct zx_gl_eqop_s* zx_gl_QueryItem_GET_eqop(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_eqop_s* y;
  if (!x) return 0;
  for (y = x->eqop; n>=0 && y; --n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryItem_POP_eqop) */

struct zx_gl_eqop_s* zx_gl_QueryItem_POP_eqop(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_eqop_s* y;
  if (!x) return 0;
  y = x->eqop;
  if (y)
    x->eqop = (struct zx_gl_eqop_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryItem_PUSH_eqop) */

void zx_gl_QueryItem_PUSH_eqop(struct zx_gl_QueryItem_s* x, struct zx_gl_eqop_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->eqop->gg.g;
  x->eqop = z;
}

/* FUNC(zx_gl_QueryItem_REV_eqop) */

void zx_gl_QueryItem_REV_eqop(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_eqop_s* nxt;
  struct zx_gl_eqop_s* y;
  if (!x) return;
  y = x->eqop;
  if (!y) return;
  x->eqop = 0;
  while (y) {
    nxt = (struct zx_gl_eqop_s*)y->gg.g.n;
    y->gg.g.n = &x->eqop->gg.g;
    x->eqop = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryItem_PUT_eqop) */

void zx_gl_QueryItem_PUT_eqop(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_eqop_s* z)
{
  struct zx_gl_eqop_s* y;
  if (!x || !z) return;
  y = x->eqop;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->eqop = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryItem_ADD_eqop) */

void zx_gl_QueryItem_ADD_eqop(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_eqop_s* z)
{
  struct zx_gl_eqop_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->eqop->gg.g;
    x->eqop = z;
    return;
  case -1:
    y = x->eqop;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->eqop; n > 1 && y; --n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryItem_DEL_eqop) */

void zx_gl_QueryItem_DEL_eqop(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_eqop_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->eqop = (struct zx_gl_eqop_s*)x->eqop->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_eqop_s*)x->eqop;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->eqop; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_eqop_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryItem_NUM_geoinfo) */

int zx_gl_QueryItem_NUM_geoinfo(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_geoinfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->geoinfo; y; ++n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryItem_GET_geoinfo) */

struct zx_gl_geoinfo_s* zx_gl_QueryItem_GET_geoinfo(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_geoinfo_s* y;
  if (!x) return 0;
  for (y = x->geoinfo; n>=0 && y; --n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryItem_POP_geoinfo) */

struct zx_gl_geoinfo_s* zx_gl_QueryItem_POP_geoinfo(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_geoinfo_s* y;
  if (!x) return 0;
  y = x->geoinfo;
  if (y)
    x->geoinfo = (struct zx_gl_geoinfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryItem_PUSH_geoinfo) */

void zx_gl_QueryItem_PUSH_geoinfo(struct zx_gl_QueryItem_s* x, struct zx_gl_geoinfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->geoinfo->gg.g;
  x->geoinfo = z;
}

/* FUNC(zx_gl_QueryItem_REV_geoinfo) */

void zx_gl_QueryItem_REV_geoinfo(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_geoinfo_s* nxt;
  struct zx_gl_geoinfo_s* y;
  if (!x) return;
  y = x->geoinfo;
  if (!y) return;
  x->geoinfo = 0;
  while (y) {
    nxt = (struct zx_gl_geoinfo_s*)y->gg.g.n;
    y->gg.g.n = &x->geoinfo->gg.g;
    x->geoinfo = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryItem_PUT_geoinfo) */

void zx_gl_QueryItem_PUT_geoinfo(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_geoinfo_s* z)
{
  struct zx_gl_geoinfo_s* y;
  if (!x || !z) return;
  y = x->geoinfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->geoinfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryItem_ADD_geoinfo) */

void zx_gl_QueryItem_ADD_geoinfo(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_geoinfo_s* z)
{
  struct zx_gl_geoinfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->geoinfo->gg.g;
    x->geoinfo = z;
    return;
  case -1:
    y = x->geoinfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->geoinfo; n > 1 && y; --n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryItem_DEL_geoinfo) */

void zx_gl_QueryItem_DEL_geoinfo(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_geoinfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->geoinfo = (struct zx_gl_geoinfo_s*)x->geoinfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_geoinfo_s*)x->geoinfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->geoinfo; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_geoinfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryItem_NUM_loc_type) */

int zx_gl_QueryItem_NUM_loc_type(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_loc_type_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->loc_type; y; ++n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryItem_GET_loc_type) */

struct zx_gl_loc_type_s* zx_gl_QueryItem_GET_loc_type(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_loc_type_s* y;
  if (!x) return 0;
  for (y = x->loc_type; n>=0 && y; --n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryItem_POP_loc_type) */

struct zx_gl_loc_type_s* zx_gl_QueryItem_POP_loc_type(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_loc_type_s* y;
  if (!x) return 0;
  y = x->loc_type;
  if (y)
    x->loc_type = (struct zx_gl_loc_type_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryItem_PUSH_loc_type) */

void zx_gl_QueryItem_PUSH_loc_type(struct zx_gl_QueryItem_s* x, struct zx_gl_loc_type_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->loc_type->gg.g;
  x->loc_type = z;
}

/* FUNC(zx_gl_QueryItem_REV_loc_type) */

void zx_gl_QueryItem_REV_loc_type(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_loc_type_s* nxt;
  struct zx_gl_loc_type_s* y;
  if (!x) return;
  y = x->loc_type;
  if (!y) return;
  x->loc_type = 0;
  while (y) {
    nxt = (struct zx_gl_loc_type_s*)y->gg.g.n;
    y->gg.g.n = &x->loc_type->gg.g;
    x->loc_type = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryItem_PUT_loc_type) */

void zx_gl_QueryItem_PUT_loc_type(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_loc_type_s* z)
{
  struct zx_gl_loc_type_s* y;
  if (!x || !z) return;
  y = x->loc_type;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->loc_type = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryItem_ADD_loc_type) */

void zx_gl_QueryItem_ADD_loc_type(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_loc_type_s* z)
{
  struct zx_gl_loc_type_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->loc_type->gg.g;
    x->loc_type = z;
    return;
  case -1:
    y = x->loc_type;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->loc_type; n > 1 && y; --n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryItem_DEL_loc_type) */

void zx_gl_QueryItem_DEL_loc_type(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_loc_type_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->loc_type = (struct zx_gl_loc_type_s*)x->loc_type->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_loc_type_s*)x->loc_type;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->loc_type; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_loc_type_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryItem_NUM_prio) */

int zx_gl_QueryItem_NUM_prio(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_prio_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prio; y; ++n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryItem_GET_prio) */

struct zx_gl_prio_s* zx_gl_QueryItem_GET_prio(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_prio_s* y;
  if (!x) return 0;
  for (y = x->prio; n>=0 && y; --n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryItem_POP_prio) */

struct zx_gl_prio_s* zx_gl_QueryItem_POP_prio(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_prio_s* y;
  if (!x) return 0;
  y = x->prio;
  if (y)
    x->prio = (struct zx_gl_prio_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryItem_PUSH_prio) */

void zx_gl_QueryItem_PUSH_prio(struct zx_gl_QueryItem_s* x, struct zx_gl_prio_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prio->gg.g;
  x->prio = z;
}

/* FUNC(zx_gl_QueryItem_REV_prio) */

void zx_gl_QueryItem_REV_prio(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_prio_s* nxt;
  struct zx_gl_prio_s* y;
  if (!x) return;
  y = x->prio;
  if (!y) return;
  x->prio = 0;
  while (y) {
    nxt = (struct zx_gl_prio_s*)y->gg.g.n;
    y->gg.g.n = &x->prio->gg.g;
    x->prio = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryItem_PUT_prio) */

void zx_gl_QueryItem_PUT_prio(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_prio_s* z)
{
  struct zx_gl_prio_s* y;
  if (!x || !z) return;
  y = x->prio;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prio = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryItem_ADD_prio) */

void zx_gl_QueryItem_ADD_prio(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_prio_s* z)
{
  struct zx_gl_prio_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prio->gg.g;
    x->prio = z;
    return;
  case -1:
    y = x->prio;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prio; n > 1 && y; --n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryItem_DEL_prio) */

void zx_gl_QueryItem_DEL_prio(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_prio_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prio = (struct zx_gl_prio_s*)x->prio->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_prio_s*)x->prio;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prio; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_prio_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryItem_NUM_Extension) */

int zx_gl_QueryItem_NUM_Extension(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryItem_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_QueryItem_GET_Extension(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryItem_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_QueryItem_POP_Extension(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryItem_PUSH_Extension) */

void zx_gl_QueryItem_PUSH_Extension(struct zx_gl_QueryItem_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_QueryItem_REV_Extension) */

void zx_gl_QueryItem_REV_Extension(struct zx_gl_QueryItem_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryItem_PUT_Extension) */

void zx_gl_QueryItem_PUT_Extension(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryItem_ADD_Extension) */

void zx_gl_QueryItem_ADD_Extension(struct zx_gl_QueryItem_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryItem_DEL_Extension) */

void zx_gl_QueryItem_DEL_Extension(struct zx_gl_QueryItem_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_QueryItem_GET_count) */
struct zx_str* zx_gl_QueryItem_GET_count(struct zx_gl_QueryItem_s* x) { return x->count; }
/* FUNC(zx_gl_QueryItem_PUT_count) */
void zx_gl_QueryItem_PUT_count(struct zx_gl_QueryItem_s* x, struct zx_str* y) { x->count = y; }
/* FUNC(zx_gl_QueryItem_GET_offset) */
struct zx_str* zx_gl_QueryItem_GET_offset(struct zx_gl_QueryItem_s* x) { return x->offset; }
/* FUNC(zx_gl_QueryItem_PUT_offset) */
void zx_gl_QueryItem_PUT_offset(struct zx_gl_QueryItem_s* x, struct zx_str* y) { x->offset = y; }
/* FUNC(zx_gl_QueryItem_GET_setID) */
struct zx_str* zx_gl_QueryItem_GET_setID(struct zx_gl_QueryItem_s* x) { return x->setID; }
/* FUNC(zx_gl_QueryItem_PUT_setID) */
void zx_gl_QueryItem_PUT_setID(struct zx_gl_QueryItem_s* x, struct zx_str* y) { x->setID = y; }
/* FUNC(zx_gl_QueryItem_GET_setReq) */
struct zx_str* zx_gl_QueryItem_GET_setReq(struct zx_gl_QueryItem_s* x) { return x->setReq; }
/* FUNC(zx_gl_QueryItem_PUT_setReq) */
void zx_gl_QueryItem_PUT_setReq(struct zx_gl_QueryItem_s* x, struct zx_str* y) { x->setReq = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryResponse_NUM_Status) */

int zx_gl_QueryResponse_NUM_Status(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryResponse_GET_Status) */

struct zx_gl_Status_s* zx_gl_QueryResponse_GET_Status(struct zx_gl_QueryResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryResponse_POP_Status) */

struct zx_gl_Status_s* zx_gl_QueryResponse_POP_Status(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_gl_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryResponse_PUSH_Status) */

void zx_gl_QueryResponse_PUSH_Status(struct zx_gl_QueryResponse_s* x, struct zx_gl_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_gl_QueryResponse_REV_Status) */

void zx_gl_QueryResponse_REV_Status(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Status_s* nxt;
  struct zx_gl_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_gl_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryResponse_PUT_Status) */

void zx_gl_QueryResponse_PUT_Status(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryResponse_ADD_Status) */

void zx_gl_QueryResponse_ADD_Status(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryResponse_DEL_Status) */

void zx_gl_QueryResponse_DEL_Status(struct zx_gl_QueryResponse_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_gl_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryResponse_NUM_Data) */

int zx_gl_QueryResponse_NUM_Data(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Data_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Data; y; ++n, y = (struct zx_gl_Data_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryResponse_GET_Data) */

struct zx_gl_Data_s* zx_gl_QueryResponse_GET_Data(struct zx_gl_QueryResponse_s* x, int n)
{
  struct zx_gl_Data_s* y;
  if (!x) return 0;
  for (y = x->Data; n>=0 && y; --n, y = (struct zx_gl_Data_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryResponse_POP_Data) */

struct zx_gl_Data_s* zx_gl_QueryResponse_POP_Data(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Data_s* y;
  if (!x) return 0;
  y = x->Data;
  if (y)
    x->Data = (struct zx_gl_Data_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryResponse_PUSH_Data) */

void zx_gl_QueryResponse_PUSH_Data(struct zx_gl_QueryResponse_s* x, struct zx_gl_Data_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Data->gg.g;
  x->Data = z;
}

/* FUNC(zx_gl_QueryResponse_REV_Data) */

void zx_gl_QueryResponse_REV_Data(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Data_s* nxt;
  struct zx_gl_Data_s* y;
  if (!x) return;
  y = x->Data;
  if (!y) return;
  x->Data = 0;
  while (y) {
    nxt = (struct zx_gl_Data_s*)y->gg.g.n;
    y->gg.g.n = &x->Data->gg.g;
    x->Data = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryResponse_PUT_Data) */

void zx_gl_QueryResponse_PUT_Data(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Data_s* z)
{
  struct zx_gl_Data_s* y;
  if (!x || !z) return;
  y = x->Data;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Data = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryResponse_ADD_Data) */

void zx_gl_QueryResponse_ADD_Data(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Data_s* z)
{
  struct zx_gl_Data_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Data->gg.g;
    x->Data = z;
    return;
  case -1:
    y = x->Data;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Data; n > 1 && y; --n, y = (struct zx_gl_Data_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryResponse_DEL_Data) */

void zx_gl_QueryResponse_DEL_Data(struct zx_gl_QueryResponse_s* x, int n)
{
  struct zx_gl_Data_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Data = (struct zx_gl_Data_s*)x->Data->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Data_s*)x->Data;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Data_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Data; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Data_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_QueryResponse_NUM_Extension) */

int zx_gl_QueryResponse_NUM_Extension(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_QueryResponse_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_QueryResponse_GET_Extension(struct zx_gl_QueryResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_QueryResponse_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_QueryResponse_POP_Extension(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_QueryResponse_PUSH_Extension) */

void zx_gl_QueryResponse_PUSH_Extension(struct zx_gl_QueryResponse_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_QueryResponse_REV_Extension) */

void zx_gl_QueryResponse_REV_Extension(struct zx_gl_QueryResponse_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_QueryResponse_PUT_Extension) */

void zx_gl_QueryResponse_PUT_Extension(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_QueryResponse_ADD_Extension) */

void zx_gl_QueryResponse_ADD_Extension(struct zx_gl_QueryResponse_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_QueryResponse_DEL_Extension) */

void zx_gl_QueryResponse_DEL_Extension(struct zx_gl_QueryResponse_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_QueryResponse_GET_id) */
struct zx_str* zx_gl_QueryResponse_GET_id(struct zx_gl_QueryResponse_s* x) { return x->id; }
/* FUNC(zx_gl_QueryResponse_PUT_id) */
void zx_gl_QueryResponse_PUT_id(struct zx_gl_QueryResponse_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_QueryResponse_GET_itemIDRef) */
struct zx_str* zx_gl_QueryResponse_GET_itemIDRef(struct zx_gl_QueryResponse_s* x) { return x->itemIDRef; }
/* FUNC(zx_gl_QueryResponse_PUT_itemIDRef) */
void zx_gl_QueryResponse_PUT_itemIDRef(struct zx_gl_QueryResponse_s* x, struct zx_str* y) { x->itemIDRef = y; }
/* FUNC(zx_gl_QueryResponse_GET_timeStamp) */
struct zx_str* zx_gl_QueryResponse_GET_timeStamp(struct zx_gl_QueryResponse_s* x) { return x->timeStamp; }
/* FUNC(zx_gl_QueryResponse_PUT_timeStamp) */
void zx_gl_QueryResponse_PUT_timeStamp(struct zx_gl_QueryResponse_s* x, struct zx_str* y) { x->timeStamp = y; }





/* FUNC(zx_gl_RefItem_GET_ItemIDRef) */
struct zx_str* zx_gl_RefItem_GET_ItemIDRef(struct zx_gl_RefItem_s* x) { return x->ItemIDRef; }
/* FUNC(zx_gl_RefItem_PUT_ItemIDRef) */
void zx_gl_RefItem_PUT_ItemIDRef(struct zx_gl_RefItem_s* x, struct zx_str* y) { x->ItemIDRef = y; }
/* FUNC(zx_gl_RefItem_GET_subscriptionID) */
struct zx_str* zx_gl_RefItem_GET_subscriptionID(struct zx_gl_RefItem_s* x) { return x->subscriptionID; }
/* FUNC(zx_gl_RefItem_PUT_subscriptionID) */
void zx_gl_RefItem_PUT_subscriptionID(struct zx_gl_RefItem_s* x, struct zx_str* y) { x->subscriptionID = y; }





/* FUNC(zx_gl_ResourceID_GET_id) */
struct zx_str* zx_gl_ResourceID_GET_id(struct zx_gl_ResourceID_s* x) { return x->id; }
/* FUNC(zx_gl_ResourceID_PUT_id) */
void zx_gl_ResourceID_PUT_id(struct zx_gl_ResourceID_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Status_NUM_Status) */

int zx_gl_Status_NUM_Status(struct zx_gl_Status_s* x)
{
  struct zx_gl_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Status_GET_Status) */

struct zx_gl_Status_s* zx_gl_Status_GET_Status(struct zx_gl_Status_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Status_POP_Status) */

struct zx_gl_Status_s* zx_gl_Status_POP_Status(struct zx_gl_Status_s* x)
{
  struct zx_gl_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_gl_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Status_PUSH_Status) */

void zx_gl_Status_PUSH_Status(struct zx_gl_Status_s* x, struct zx_gl_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_gl_Status_REV_Status) */

void zx_gl_Status_REV_Status(struct zx_gl_Status_s* x)
{
  struct zx_gl_Status_s* nxt;
  struct zx_gl_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_gl_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Status_PUT_Status) */

void zx_gl_Status_PUT_Status(struct zx_gl_Status_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Status_ADD_Status) */

void zx_gl_Status_ADD_Status(struct zx_gl_Status_s* x, int n, struct zx_gl_Status_s* z)
{
  struct zx_gl_Status_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Status->gg.g;
    x->Status = z;
    return;
  case -1:
    y = x->Status;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Status_DEL_Status) */

void zx_gl_Status_DEL_Status(struct zx_gl_Status_s* x, int n)
{
  struct zx_gl_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_gl_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Status_GET_code) */
struct zx_str* zx_gl_Status_GET_code(struct zx_gl_Status_s* x) { return x->code; }
/* FUNC(zx_gl_Status_PUT_code) */
void zx_gl_Status_PUT_code(struct zx_gl_Status_s* x, struct zx_str* y) { x->code = y; }
/* FUNC(zx_gl_Status_GET_comment) */
struct zx_str* zx_gl_Status_GET_comment(struct zx_gl_Status_s* x) { return x->comment; }
/* FUNC(zx_gl_Status_PUT_comment) */
void zx_gl_Status_PUT_comment(struct zx_gl_Status_s* x, struct zx_str* y) { x->comment = y; }
/* FUNC(zx_gl_Status_GET_ref) */
struct zx_str* zx_gl_Status_GET_ref(struct zx_gl_Status_s* x) { return x->ref; }
/* FUNC(zx_gl_Status_PUT_ref) */
void zx_gl_Status_PUT_ref(struct zx_gl_Status_s* x, struct zx_str* y) { x->ref = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Subscription_NUM_ItemSelection) */

int zx_gl_Subscription_NUM_ItemSelection(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_ItemSelection_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ItemSelection; y; ++n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Subscription_GET_ItemSelection) */

struct zx_gl_ItemSelection_s* zx_gl_Subscription_GET_ItemSelection(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return 0;
  for (y = x->ItemSelection; n>=0 && y; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Subscription_POP_ItemSelection) */

struct zx_gl_ItemSelection_s* zx_gl_Subscription_POP_ItemSelection(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return 0;
  y = x->ItemSelection;
  if (y)
    x->ItemSelection = (struct zx_gl_ItemSelection_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Subscription_PUSH_ItemSelection) */

void zx_gl_Subscription_PUSH_ItemSelection(struct zx_gl_Subscription_s* x, struct zx_gl_ItemSelection_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ItemSelection->gg.g;
  x->ItemSelection = z;
}

/* FUNC(zx_gl_Subscription_REV_ItemSelection) */

void zx_gl_Subscription_REV_ItemSelection(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_ItemSelection_s* nxt;
  struct zx_gl_ItemSelection_s* y;
  if (!x) return;
  y = x->ItemSelection;
  if (!y) return;
  x->ItemSelection = 0;
  while (y) {
    nxt = (struct zx_gl_ItemSelection_s*)y->gg.g.n;
    y->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Subscription_PUT_ItemSelection) */

void zx_gl_Subscription_PUT_ItemSelection(struct zx_gl_Subscription_s* x, int n, struct zx_gl_ItemSelection_s* z)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x || !z) return;
  y = x->ItemSelection;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ItemSelection = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Subscription_ADD_ItemSelection) */

void zx_gl_Subscription_ADD_ItemSelection(struct zx_gl_Subscription_s* x, int n, struct zx_gl_ItemSelection_s* z)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ItemSelection->gg.g;
    x->ItemSelection = z;
    return;
  case -1:
    y = x->ItemSelection;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Subscription_DEL_ItemSelection) */

void zx_gl_Subscription_DEL_ItemSelection(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_ItemSelection_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ItemSelection = (struct zx_gl_ItemSelection_s*)x->ItemSelection->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ItemSelection_s*)x->ItemSelection;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ItemSelection; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ItemSelection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Subscription_NUM_RefItem) */

int zx_gl_Subscription_NUM_RefItem(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_RefItem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RefItem; y; ++n, y = (struct zx_gl_RefItem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Subscription_GET_RefItem) */

struct zx_gl_RefItem_s* zx_gl_Subscription_GET_RefItem(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_RefItem_s* y;
  if (!x) return 0;
  for (y = x->RefItem; n>=0 && y; --n, y = (struct zx_gl_RefItem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Subscription_POP_RefItem) */

struct zx_gl_RefItem_s* zx_gl_Subscription_POP_RefItem(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_RefItem_s* y;
  if (!x) return 0;
  y = x->RefItem;
  if (y)
    x->RefItem = (struct zx_gl_RefItem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Subscription_PUSH_RefItem) */

void zx_gl_Subscription_PUSH_RefItem(struct zx_gl_Subscription_s* x, struct zx_gl_RefItem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RefItem->gg.g;
  x->RefItem = z;
}

/* FUNC(zx_gl_Subscription_REV_RefItem) */

void zx_gl_Subscription_REV_RefItem(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_RefItem_s* nxt;
  struct zx_gl_RefItem_s* y;
  if (!x) return;
  y = x->RefItem;
  if (!y) return;
  x->RefItem = 0;
  while (y) {
    nxt = (struct zx_gl_RefItem_s*)y->gg.g.n;
    y->gg.g.n = &x->RefItem->gg.g;
    x->RefItem = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Subscription_PUT_RefItem) */

void zx_gl_Subscription_PUT_RefItem(struct zx_gl_Subscription_s* x, int n, struct zx_gl_RefItem_s* z)
{
  struct zx_gl_RefItem_s* y;
  if (!x || !z) return;
  y = x->RefItem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RefItem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_RefItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Subscription_ADD_RefItem) */

void zx_gl_Subscription_ADD_RefItem(struct zx_gl_Subscription_s* x, int n, struct zx_gl_RefItem_s* z)
{
  struct zx_gl_RefItem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RefItem->gg.g;
    x->RefItem = z;
    return;
  case -1:
    y = x->RefItem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_RefItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RefItem; n > 1 && y; --n, y = (struct zx_gl_RefItem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Subscription_DEL_RefItem) */

void zx_gl_Subscription_DEL_RefItem(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_RefItem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RefItem = (struct zx_gl_RefItem_s*)x->RefItem->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_RefItem_s*)x->RefItem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_RefItem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RefItem; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_RefItem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Subscription_NUM_NotifyTo) */

int zx_gl_Subscription_NUM_NotifyTo(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_NotifyTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyTo; y; ++n, y = (struct zx_gl_NotifyTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Subscription_GET_NotifyTo) */

struct zx_gl_NotifyTo_s* zx_gl_Subscription_GET_NotifyTo(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_NotifyTo_s* y;
  if (!x) return 0;
  for (y = x->NotifyTo; n>=0 && y; --n, y = (struct zx_gl_NotifyTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Subscription_POP_NotifyTo) */

struct zx_gl_NotifyTo_s* zx_gl_Subscription_POP_NotifyTo(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_NotifyTo_s* y;
  if (!x) return 0;
  y = x->NotifyTo;
  if (y)
    x->NotifyTo = (struct zx_gl_NotifyTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Subscription_PUSH_NotifyTo) */

void zx_gl_Subscription_PUSH_NotifyTo(struct zx_gl_Subscription_s* x, struct zx_gl_NotifyTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NotifyTo->gg.g;
  x->NotifyTo = z;
}

/* FUNC(zx_gl_Subscription_REV_NotifyTo) */

void zx_gl_Subscription_REV_NotifyTo(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_NotifyTo_s* nxt;
  struct zx_gl_NotifyTo_s* y;
  if (!x) return;
  y = x->NotifyTo;
  if (!y) return;
  x->NotifyTo = 0;
  while (y) {
    nxt = (struct zx_gl_NotifyTo_s*)y->gg.g.n;
    y->gg.g.n = &x->NotifyTo->gg.g;
    x->NotifyTo = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Subscription_PUT_NotifyTo) */

void zx_gl_Subscription_PUT_NotifyTo(struct zx_gl_Subscription_s* x, int n, struct zx_gl_NotifyTo_s* z)
{
  struct zx_gl_NotifyTo_s* y;
  if (!x || !z) return;
  y = x->NotifyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NotifyTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NotifyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Subscription_ADD_NotifyTo) */

void zx_gl_Subscription_ADD_NotifyTo(struct zx_gl_Subscription_s* x, int n, struct zx_gl_NotifyTo_s* z)
{
  struct zx_gl_NotifyTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NotifyTo->gg.g;
    x->NotifyTo = z;
    return;
  case -1:
    y = x->NotifyTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_NotifyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y; --n, y = (struct zx_gl_NotifyTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Subscription_DEL_NotifyTo) */

void zx_gl_Subscription_DEL_NotifyTo(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_NotifyTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyTo = (struct zx_gl_NotifyTo_s*)x->NotifyTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_NotifyTo_s*)x->NotifyTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_NotifyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyTo; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NotifyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Subscription_NUM_NotifyAdminTo) */

int zx_gl_Subscription_NUM_NotifyAdminTo(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_NotifyAdminTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyAdminTo; y; ++n, y = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Subscription_GET_NotifyAdminTo) */

struct zx_gl_NotifyAdminTo_s* zx_gl_Subscription_GET_NotifyAdminTo(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_NotifyAdminTo_s* y;
  if (!x) return 0;
  for (y = x->NotifyAdminTo; n>=0 && y; --n, y = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Subscription_POP_NotifyAdminTo) */

struct zx_gl_NotifyAdminTo_s* zx_gl_Subscription_POP_NotifyAdminTo(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_NotifyAdminTo_s* y;
  if (!x) return 0;
  y = x->NotifyAdminTo;
  if (y)
    x->NotifyAdminTo = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Subscription_PUSH_NotifyAdminTo) */

void zx_gl_Subscription_PUSH_NotifyAdminTo(struct zx_gl_Subscription_s* x, struct zx_gl_NotifyAdminTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NotifyAdminTo->gg.g;
  x->NotifyAdminTo = z;
}

/* FUNC(zx_gl_Subscription_REV_NotifyAdminTo) */

void zx_gl_Subscription_REV_NotifyAdminTo(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_NotifyAdminTo_s* nxt;
  struct zx_gl_NotifyAdminTo_s* y;
  if (!x) return;
  y = x->NotifyAdminTo;
  if (!y) return;
  x->NotifyAdminTo = 0;
  while (y) {
    nxt = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n;
    y->gg.g.n = &x->NotifyAdminTo->gg.g;
    x->NotifyAdminTo = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Subscription_PUT_NotifyAdminTo) */

void zx_gl_Subscription_PUT_NotifyAdminTo(struct zx_gl_Subscription_s* x, int n, struct zx_gl_NotifyAdminTo_s* z)
{
  struct zx_gl_NotifyAdminTo_s* y;
  if (!x || !z) return;
  y = x->NotifyAdminTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NotifyAdminTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Subscription_ADD_NotifyAdminTo) */

void zx_gl_Subscription_ADD_NotifyAdminTo(struct zx_gl_Subscription_s* x, int n, struct zx_gl_NotifyAdminTo_s* z)
{
  struct zx_gl_NotifyAdminTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NotifyAdminTo->gg.g;
    x->NotifyAdminTo = z;
    return;
  case -1:
    y = x->NotifyAdminTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyAdminTo; n > 1 && y; --n, y = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Subscription_DEL_NotifyAdminTo) */

void zx_gl_Subscription_DEL_NotifyAdminTo(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_NotifyAdminTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyAdminTo = (struct zx_gl_NotifyAdminTo_s*)x->NotifyAdminTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_NotifyAdminTo_s*)x->NotifyAdminTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyAdminTo; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NotifyAdminTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Subscription_NUM_Aggregation) */

int zx_gl_Subscription_NUM_Aggregation(struct zx_gl_Subscription_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Aggregation; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_Subscription_GET_Aggregation) */

struct zx_elem_s* zx_gl_Subscription_GET_Aggregation(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Aggregation; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_Subscription_POP_Aggregation) */

struct zx_elem_s* zx_gl_Subscription_POP_Aggregation(struct zx_gl_Subscription_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Aggregation;
  if (y)
    x->Aggregation = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_Subscription_PUSH_Aggregation) */

void zx_gl_Subscription_PUSH_Aggregation(struct zx_gl_Subscription_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Aggregation->g;
  x->Aggregation = z;
}

/* FUNC(zx_gl_Subscription_REV_Aggregation) */

void zx_gl_Subscription_REV_Aggregation(struct zx_gl_Subscription_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Aggregation;
  if (!y) return;
  x->Aggregation = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Aggregation->g;
    x->Aggregation = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Subscription_PUT_Aggregation) */

void zx_gl_Subscription_PUT_Aggregation(struct zx_gl_Subscription_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Aggregation;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Aggregation = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_Subscription_ADD_Aggregation) */

void zx_gl_Subscription_ADD_Aggregation(struct zx_gl_Subscription_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Aggregation->g;
    x->Aggregation = z;
    return;
  case -1:
    y = x->Aggregation;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Aggregation; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_Subscription_DEL_Aggregation) */

void zx_gl_Subscription_DEL_Aggregation(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Aggregation = (struct zx_elem_s*)x->Aggregation->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Aggregation;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Aggregation; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Subscription_NUM_Trigger) */

int zx_gl_Subscription_NUM_Trigger(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_Trigger_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Trigger; y; ++n, y = (struct zx_gl_Trigger_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Subscription_GET_Trigger) */

struct zx_gl_Trigger_s* zx_gl_Subscription_GET_Trigger(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_Trigger_s* y;
  if (!x) return 0;
  for (y = x->Trigger; n>=0 && y; --n, y = (struct zx_gl_Trigger_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Subscription_POP_Trigger) */

struct zx_gl_Trigger_s* zx_gl_Subscription_POP_Trigger(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_Trigger_s* y;
  if (!x) return 0;
  y = x->Trigger;
  if (y)
    x->Trigger = (struct zx_gl_Trigger_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Subscription_PUSH_Trigger) */

void zx_gl_Subscription_PUSH_Trigger(struct zx_gl_Subscription_s* x, struct zx_gl_Trigger_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Trigger->gg.g;
  x->Trigger = z;
}

/* FUNC(zx_gl_Subscription_REV_Trigger) */

void zx_gl_Subscription_REV_Trigger(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_Trigger_s* nxt;
  struct zx_gl_Trigger_s* y;
  if (!x) return;
  y = x->Trigger;
  if (!y) return;
  x->Trigger = 0;
  while (y) {
    nxt = (struct zx_gl_Trigger_s*)y->gg.g.n;
    y->gg.g.n = &x->Trigger->gg.g;
    x->Trigger = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Subscription_PUT_Trigger) */

void zx_gl_Subscription_PUT_Trigger(struct zx_gl_Subscription_s* x, int n, struct zx_gl_Trigger_s* z)
{
  struct zx_gl_Trigger_s* y;
  if (!x || !z) return;
  y = x->Trigger;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Trigger = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Trigger_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Subscription_ADD_Trigger) */

void zx_gl_Subscription_ADD_Trigger(struct zx_gl_Subscription_s* x, int n, struct zx_gl_Trigger_s* z)
{
  struct zx_gl_Trigger_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Trigger->gg.g;
    x->Trigger = z;
    return;
  case -1:
    y = x->Trigger;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Trigger_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Trigger; n > 1 && y; --n, y = (struct zx_gl_Trigger_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Subscription_DEL_Trigger) */

void zx_gl_Subscription_DEL_Trigger(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_Trigger_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Trigger = (struct zx_gl_Trigger_s*)x->Trigger->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Trigger_s*)x->Trigger;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Trigger_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Trigger; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Trigger_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Subscription_NUM_Extension) */

int zx_gl_Subscription_NUM_Extension(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Subscription_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_Subscription_GET_Extension(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Subscription_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_Subscription_POP_Extension(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Subscription_PUSH_Extension) */

void zx_gl_Subscription_PUSH_Extension(struct zx_gl_Subscription_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_Subscription_REV_Extension) */

void zx_gl_Subscription_REV_Extension(struct zx_gl_Subscription_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Subscription_PUT_Extension) */

void zx_gl_Subscription_PUT_Extension(struct zx_gl_Subscription_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Subscription_ADD_Extension) */

void zx_gl_Subscription_ADD_Extension(struct zx_gl_Subscription_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Subscription_DEL_Extension) */

void zx_gl_Subscription_DEL_Extension(struct zx_gl_Subscription_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_Subscription_GET_expires) */
struct zx_str* zx_gl_Subscription_GET_expires(struct zx_gl_Subscription_s* x) { return x->expires; }
/* FUNC(zx_gl_Subscription_PUT_expires) */
void zx_gl_Subscription_PUT_expires(struct zx_gl_Subscription_s* x, struct zx_str* y) { x->expires = y; }
/* FUNC(zx_gl_Subscription_GET_id) */
struct zx_str* zx_gl_Subscription_GET_id(struct zx_gl_Subscription_s* x) { return x->id; }
/* FUNC(zx_gl_Subscription_PUT_id) */
void zx_gl_Subscription_PUT_id(struct zx_gl_Subscription_s* x, struct zx_str* y) { x->id = y; }
/* FUNC(zx_gl_Subscription_GET_includeData) */
struct zx_str* zx_gl_Subscription_GET_includeData(struct zx_gl_Subscription_s* x) { return x->includeData; }
/* FUNC(zx_gl_Subscription_PUT_includeData) */
void zx_gl_Subscription_PUT_includeData(struct zx_gl_Subscription_s* x, struct zx_str* y) { x->includeData = y; }
/* FUNC(zx_gl_Subscription_GET_starts) */
struct zx_str* zx_gl_Subscription_GET_starts(struct zx_gl_Subscription_s* x) { return x->starts; }
/* FUNC(zx_gl_Subscription_PUT_starts) */
void zx_gl_Subscription_PUT_starts(struct zx_gl_Subscription_s* x, struct zx_str* y) { x->starts = y; }
/* FUNC(zx_gl_Subscription_GET_subscriptionID) */
struct zx_str* zx_gl_Subscription_GET_subscriptionID(struct zx_gl_Subscription_s* x) { return x->subscriptionID; }
/* FUNC(zx_gl_Subscription_PUT_subscriptionID) */
void zx_gl_Subscription_PUT_subscriptionID(struct zx_gl_Subscription_s* x, struct zx_str* y) { x->subscriptionID = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Trigger_NUM_Granularity) */

int zx_gl_Trigger_NUM_Granularity(struct zx_gl_Trigger_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Granularity; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_Trigger_GET_Granularity) */

struct zx_elem_s* zx_gl_Trigger_GET_Granularity(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Granularity; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_Trigger_POP_Granularity) */

struct zx_elem_s* zx_gl_Trigger_POP_Granularity(struct zx_gl_Trigger_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Granularity;
  if (y)
    x->Granularity = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_Trigger_PUSH_Granularity) */

void zx_gl_Trigger_PUSH_Granularity(struct zx_gl_Trigger_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Granularity->g;
  x->Granularity = z;
}

/* FUNC(zx_gl_Trigger_REV_Granularity) */

void zx_gl_Trigger_REV_Granularity(struct zx_gl_Trigger_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Granularity;
  if (!y) return;
  x->Granularity = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Granularity->g;
    x->Granularity = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Trigger_PUT_Granularity) */

void zx_gl_Trigger_PUT_Granularity(struct zx_gl_Trigger_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Granularity;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Granularity = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_Trigger_ADD_Granularity) */

void zx_gl_Trigger_ADD_Granularity(struct zx_gl_Trigger_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Granularity->g;
    x->Granularity = z;
    return;
  case -1:
    y = x->Granularity;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Granularity; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_Trigger_DEL_Granularity) */

void zx_gl_Trigger_DEL_Granularity(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Granularity = (struct zx_elem_s*)x->Granularity->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Granularity;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Granularity; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Trigger_NUM_Interval) */

int zx_gl_Trigger_NUM_Interval(struct zx_gl_Trigger_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Interval; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_Trigger_GET_Interval) */

struct zx_elem_s* zx_gl_Trigger_GET_Interval(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Interval; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_Trigger_POP_Interval) */

struct zx_elem_s* zx_gl_Trigger_POP_Interval(struct zx_gl_Trigger_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Interval;
  if (y)
    x->Interval = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_Trigger_PUSH_Interval) */

void zx_gl_Trigger_PUSH_Interval(struct zx_gl_Trigger_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Interval->g;
  x->Interval = z;
}

/* FUNC(zx_gl_Trigger_REV_Interval) */

void zx_gl_Trigger_REV_Interval(struct zx_gl_Trigger_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Interval;
  if (!y) return;
  x->Interval = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Interval->g;
    x->Interval = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Trigger_PUT_Interval) */

void zx_gl_Trigger_PUT_Interval(struct zx_gl_Trigger_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Interval;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Interval = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_Trigger_ADD_Interval) */

void zx_gl_Trigger_ADD_Interval(struct zx_gl_Trigger_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Interval->g;
    x->Interval = z;
    return;
  case -1:
    y = x->Interval;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Interval; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_Trigger_DEL_Interval) */

void zx_gl_Trigger_DEL_Interval(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Interval = (struct zx_elem_s*)x->Interval->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Interval;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Interval; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Trigger_NUM_ms_action) */

int zx_gl_Trigger_NUM_ms_action(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_ms_action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ms_action; y; ++n, y = (struct zx_gl_ms_action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Trigger_GET_ms_action) */

struct zx_gl_ms_action_s* zx_gl_Trigger_GET_ms_action(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_gl_ms_action_s* y;
  if (!x) return 0;
  for (y = x->ms_action; n>=0 && y; --n, y = (struct zx_gl_ms_action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Trigger_POP_ms_action) */

struct zx_gl_ms_action_s* zx_gl_Trigger_POP_ms_action(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_ms_action_s* y;
  if (!x) return 0;
  y = x->ms_action;
  if (y)
    x->ms_action = (struct zx_gl_ms_action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Trigger_PUSH_ms_action) */

void zx_gl_Trigger_PUSH_ms_action(struct zx_gl_Trigger_s* x, struct zx_gl_ms_action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ms_action->gg.g;
  x->ms_action = z;
}

/* FUNC(zx_gl_Trigger_REV_ms_action) */

void zx_gl_Trigger_REV_ms_action(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_ms_action_s* nxt;
  struct zx_gl_ms_action_s* y;
  if (!x) return;
  y = x->ms_action;
  if (!y) return;
  x->ms_action = 0;
  while (y) {
    nxt = (struct zx_gl_ms_action_s*)y->gg.g.n;
    y->gg.g.n = &x->ms_action->gg.g;
    x->ms_action = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Trigger_PUT_ms_action) */

void zx_gl_Trigger_PUT_ms_action(struct zx_gl_Trigger_s* x, int n, struct zx_gl_ms_action_s* z)
{
  struct zx_gl_ms_action_s* y;
  if (!x || !z) return;
  y = x->ms_action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ms_action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ms_action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Trigger_ADD_ms_action) */

void zx_gl_Trigger_ADD_ms_action(struct zx_gl_Trigger_s* x, int n, struct zx_gl_ms_action_s* z)
{
  struct zx_gl_ms_action_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ms_action->gg.g;
    x->ms_action = z;
    return;
  case -1:
    y = x->ms_action;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ms_action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ms_action; n > 1 && y; --n, y = (struct zx_gl_ms_action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Trigger_DEL_ms_action) */

void zx_gl_Trigger_DEL_ms_action(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_gl_ms_action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ms_action = (struct zx_gl_ms_action_s*)x->ms_action->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ms_action_s*)x->ms_action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ms_action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ms_action; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ms_action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Trigger_NUM_ChangeArea) */

int zx_gl_Trigger_NUM_ChangeArea(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_ChangeArea_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ChangeArea; y; ++n, y = (struct zx_gl_ChangeArea_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Trigger_GET_ChangeArea) */

struct zx_gl_ChangeArea_s* zx_gl_Trigger_GET_ChangeArea(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_gl_ChangeArea_s* y;
  if (!x) return 0;
  for (y = x->ChangeArea; n>=0 && y; --n, y = (struct zx_gl_ChangeArea_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Trigger_POP_ChangeArea) */

struct zx_gl_ChangeArea_s* zx_gl_Trigger_POP_ChangeArea(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_ChangeArea_s* y;
  if (!x) return 0;
  y = x->ChangeArea;
  if (y)
    x->ChangeArea = (struct zx_gl_ChangeArea_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Trigger_PUSH_ChangeArea) */

void zx_gl_Trigger_PUSH_ChangeArea(struct zx_gl_Trigger_s* x, struct zx_gl_ChangeArea_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ChangeArea->gg.g;
  x->ChangeArea = z;
}

/* FUNC(zx_gl_Trigger_REV_ChangeArea) */

void zx_gl_Trigger_REV_ChangeArea(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_ChangeArea_s* nxt;
  struct zx_gl_ChangeArea_s* y;
  if (!x) return;
  y = x->ChangeArea;
  if (!y) return;
  x->ChangeArea = 0;
  while (y) {
    nxt = (struct zx_gl_ChangeArea_s*)y->gg.g.n;
    y->gg.g.n = &x->ChangeArea->gg.g;
    x->ChangeArea = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Trigger_PUT_ChangeArea) */

void zx_gl_Trigger_PUT_ChangeArea(struct zx_gl_Trigger_s* x, int n, struct zx_gl_ChangeArea_s* z)
{
  struct zx_gl_ChangeArea_s* y;
  if (!x || !z) return;
  y = x->ChangeArea;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ChangeArea = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ChangeArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Trigger_ADD_ChangeArea) */

void zx_gl_Trigger_ADD_ChangeArea(struct zx_gl_Trigger_s* x, int n, struct zx_gl_ChangeArea_s* z)
{
  struct zx_gl_ChangeArea_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ChangeArea->gg.g;
    x->ChangeArea = z;
    return;
  case -1:
    y = x->ChangeArea;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ChangeArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ChangeArea; n > 1 && y; --n, y = (struct zx_gl_ChangeArea_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Trigger_DEL_ChangeArea) */

void zx_gl_Trigger_DEL_ChangeArea(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_gl_ChangeArea_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ChangeArea = (struct zx_gl_ChangeArea_s*)x->ChangeArea->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ChangeArea_s*)x->ChangeArea;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ChangeArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ChangeArea; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ChangeArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_Trigger_NUM_Extension) */

int zx_gl_Trigger_NUM_Extension(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_Trigger_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_Trigger_GET_Extension(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_Trigger_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_Trigger_POP_Extension(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_Trigger_PUSH_Extension) */

void zx_gl_Trigger_PUSH_Extension(struct zx_gl_Trigger_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_Trigger_REV_Extension) */

void zx_gl_Trigger_REV_Extension(struct zx_gl_Trigger_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_Trigger_PUT_Extension) */

void zx_gl_Trigger_PUT_Extension(struct zx_gl_Trigger_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_Trigger_ADD_Extension) */

void zx_gl_Trigger_ADD_Extension(struct zx_gl_Trigger_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_Trigger_DEL_Extension) */

void zx_gl_Trigger_DEL_Extension(struct zx_gl_Trigger_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_coord_NUM_X) */

int zx_gl_coord_NUM_X(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->X; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_coord_GET_X) */

struct zx_elem_s* zx_gl_coord_GET_X(struct zx_gl_coord_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->X; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_coord_POP_X) */

struct zx_elem_s* zx_gl_coord_POP_X(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->X;
  if (y)
    x->X = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_coord_PUSH_X) */

void zx_gl_coord_PUSH_X(struct zx_gl_coord_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->X->g;
  x->X = z;
}

/* FUNC(zx_gl_coord_REV_X) */

void zx_gl_coord_REV_X(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->X;
  if (!y) return;
  x->X = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->X->g;
    x->X = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_coord_PUT_X) */

void zx_gl_coord_PUT_X(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->X;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->X = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_coord_ADD_X) */

void zx_gl_coord_ADD_X(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->X->g;
    x->X = z;
    return;
  case -1:
    y = x->X;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_coord_DEL_X) */

void zx_gl_coord_DEL_X(struct zx_gl_coord_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->X = (struct zx_elem_s*)x->X->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->X;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->X; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_coord_NUM_Y) */

int zx_gl_coord_NUM_Y(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Y; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_coord_GET_Y) */

struct zx_elem_s* zx_gl_coord_GET_Y(struct zx_gl_coord_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Y; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_coord_POP_Y) */

struct zx_elem_s* zx_gl_coord_POP_Y(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Y;
  if (y)
    x->Y = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_coord_PUSH_Y) */

void zx_gl_coord_PUSH_Y(struct zx_gl_coord_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Y->g;
  x->Y = z;
}

/* FUNC(zx_gl_coord_REV_Y) */

void zx_gl_coord_REV_Y(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Y;
  if (!y) return;
  x->Y = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Y->g;
    x->Y = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_coord_PUT_Y) */

void zx_gl_coord_PUT_Y(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Y;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Y = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_coord_ADD_Y) */

void zx_gl_coord_ADD_Y(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Y->g;
    x->Y = z;
    return;
  case -1:
    y = x->Y;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Y; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_coord_DEL_Y) */

void zx_gl_coord_DEL_Y(struct zx_gl_coord_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Y = (struct zx_elem_s*)x->Y->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Y;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Y; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_coord_NUM_Z) */

int zx_gl_coord_NUM_Z(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Z; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_coord_GET_Z) */

struct zx_elem_s* zx_gl_coord_GET_Z(struct zx_gl_coord_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Z; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_coord_POP_Z) */

struct zx_elem_s* zx_gl_coord_POP_Z(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Z;
  if (y)
    x->Z = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_coord_PUSH_Z) */

void zx_gl_coord_PUSH_Z(struct zx_gl_coord_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Z->g;
  x->Z = z;
}

/* FUNC(zx_gl_coord_REV_Z) */

void zx_gl_coord_REV_Z(struct zx_gl_coord_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Z;
  if (!y) return;
  x->Z = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Z->g;
    x->Z = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_coord_PUT_Z) */

void zx_gl_coord_PUT_Z(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Z;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Z = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_coord_ADD_Z) */

void zx_gl_coord_ADD_Z(struct zx_gl_coord_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Z->g;
    x->Z = z;
    return;
  case -1:
    y = x->Z;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Z; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_coord_DEL_Z) */

void zx_gl_coord_DEL_Z(struct zx_gl_coord_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Z = (struct zx_elem_s*)x->Z->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Z;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Z; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_eqop_NUM_resp_req) */

int zx_gl_eqop_NUM_resp_req(struct zx_gl_eqop_s* x)
{
  struct zx_gl_resp_req_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->resp_req; y; ++n, y = (struct zx_gl_resp_req_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_eqop_GET_resp_req) */

struct zx_gl_resp_req_s* zx_gl_eqop_GET_resp_req(struct zx_gl_eqop_s* x, int n)
{
  struct zx_gl_resp_req_s* y;
  if (!x) return 0;
  for (y = x->resp_req; n>=0 && y; --n, y = (struct zx_gl_resp_req_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_eqop_POP_resp_req) */

struct zx_gl_resp_req_s* zx_gl_eqop_POP_resp_req(struct zx_gl_eqop_s* x)
{
  struct zx_gl_resp_req_s* y;
  if (!x) return 0;
  y = x->resp_req;
  if (y)
    x->resp_req = (struct zx_gl_resp_req_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_eqop_PUSH_resp_req) */

void zx_gl_eqop_PUSH_resp_req(struct zx_gl_eqop_s* x, struct zx_gl_resp_req_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->resp_req->gg.g;
  x->resp_req = z;
}

/* FUNC(zx_gl_eqop_REV_resp_req) */

void zx_gl_eqop_REV_resp_req(struct zx_gl_eqop_s* x)
{
  struct zx_gl_resp_req_s* nxt;
  struct zx_gl_resp_req_s* y;
  if (!x) return;
  y = x->resp_req;
  if (!y) return;
  x->resp_req = 0;
  while (y) {
    nxt = (struct zx_gl_resp_req_s*)y->gg.g.n;
    y->gg.g.n = &x->resp_req->gg.g;
    x->resp_req = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_eqop_PUT_resp_req) */

void zx_gl_eqop_PUT_resp_req(struct zx_gl_eqop_s* x, int n, struct zx_gl_resp_req_s* z)
{
  struct zx_gl_resp_req_s* y;
  if (!x || !z) return;
  y = x->resp_req;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->resp_req = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_resp_req_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_eqop_ADD_resp_req) */

void zx_gl_eqop_ADD_resp_req(struct zx_gl_eqop_s* x, int n, struct zx_gl_resp_req_s* z)
{
  struct zx_gl_resp_req_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->resp_req->gg.g;
    x->resp_req = z;
    return;
  case -1:
    y = x->resp_req;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_resp_req_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->resp_req; n > 1 && y; --n, y = (struct zx_gl_resp_req_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_eqop_DEL_resp_req) */

void zx_gl_eqop_DEL_resp_req(struct zx_gl_eqop_s* x, int n)
{
  struct zx_gl_resp_req_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->resp_req = (struct zx_gl_resp_req_s*)x->resp_req->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_resp_req_s*)x->resp_req;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_resp_req_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->resp_req; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_resp_req_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_eqop_NUM_ll_acc) */

int zx_gl_eqop_NUM_ll_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ll_acc; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_eqop_GET_ll_acc) */

struct zx_elem_s* zx_gl_eqop_GET_ll_acc(struct zx_gl_eqop_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->ll_acc; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_eqop_POP_ll_acc) */

struct zx_elem_s* zx_gl_eqop_POP_ll_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->ll_acc;
  if (y)
    x->ll_acc = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_eqop_PUSH_ll_acc) */

void zx_gl_eqop_PUSH_ll_acc(struct zx_gl_eqop_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->ll_acc->g;
  x->ll_acc = z;
}

/* FUNC(zx_gl_eqop_REV_ll_acc) */

void zx_gl_eqop_REV_ll_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->ll_acc;
  if (!y) return;
  x->ll_acc = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->ll_acc->g;
    x->ll_acc = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_eqop_PUT_ll_acc) */

void zx_gl_eqop_PUT_ll_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->ll_acc;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->ll_acc = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_eqop_ADD_ll_acc) */

void zx_gl_eqop_ADD_ll_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->ll_acc->g;
    x->ll_acc = z;
    return;
  case -1:
    y = x->ll_acc;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ll_acc; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_eqop_DEL_ll_acc) */

void zx_gl_eqop_DEL_ll_acc(struct zx_gl_eqop_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ll_acc = (struct zx_elem_s*)x->ll_acc->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->ll_acc;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->ll_acc; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_eqop_NUM_hor_acc) */

int zx_gl_eqop_NUM_hor_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->hor_acc; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_eqop_GET_hor_acc) */

struct zx_elem_s* zx_gl_eqop_GET_hor_acc(struct zx_gl_eqop_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->hor_acc; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_eqop_POP_hor_acc) */

struct zx_elem_s* zx_gl_eqop_POP_hor_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->hor_acc;
  if (y)
    x->hor_acc = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_eqop_PUSH_hor_acc) */

void zx_gl_eqop_PUSH_hor_acc(struct zx_gl_eqop_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->hor_acc->g;
  x->hor_acc = z;
}

/* FUNC(zx_gl_eqop_REV_hor_acc) */

void zx_gl_eqop_REV_hor_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->hor_acc;
  if (!y) return;
  x->hor_acc = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->hor_acc->g;
    x->hor_acc = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_eqop_PUT_hor_acc) */

void zx_gl_eqop_PUT_hor_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->hor_acc;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->hor_acc = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_eqop_ADD_hor_acc) */

void zx_gl_eqop_ADD_hor_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->hor_acc->g;
    x->hor_acc = z;
    return;
  case -1:
    y = x->hor_acc;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->hor_acc; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_eqop_DEL_hor_acc) */

void zx_gl_eqop_DEL_hor_acc(struct zx_gl_eqop_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->hor_acc = (struct zx_elem_s*)x->hor_acc->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->hor_acc;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->hor_acc; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_eqop_NUM_alt_acc) */

int zx_gl_eqop_NUM_alt_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->alt_acc; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_eqop_GET_alt_acc) */

struct zx_elem_s* zx_gl_eqop_GET_alt_acc(struct zx_gl_eqop_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->alt_acc; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_eqop_POP_alt_acc) */

struct zx_elem_s* zx_gl_eqop_POP_alt_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->alt_acc;
  if (y)
    x->alt_acc = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_eqop_PUSH_alt_acc) */

void zx_gl_eqop_PUSH_alt_acc(struct zx_gl_eqop_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->alt_acc->g;
  x->alt_acc = z;
}

/* FUNC(zx_gl_eqop_REV_alt_acc) */

void zx_gl_eqop_REV_alt_acc(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->alt_acc;
  if (!y) return;
  x->alt_acc = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->alt_acc->g;
    x->alt_acc = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_eqop_PUT_alt_acc) */

void zx_gl_eqop_PUT_alt_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->alt_acc;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->alt_acc = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_eqop_ADD_alt_acc) */

void zx_gl_eqop_ADD_alt_acc(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->alt_acc->g;
    x->alt_acc = z;
    return;
  case -1:
    y = x->alt_acc;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->alt_acc; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_eqop_DEL_alt_acc) */

void zx_gl_eqop_DEL_alt_acc(struct zx_gl_eqop_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->alt_acc = (struct zx_elem_s*)x->alt_acc->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->alt_acc;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->alt_acc; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_eqop_NUM_max_loc_age) */

int zx_gl_eqop_NUM_max_loc_age(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->max_loc_age; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_eqop_GET_max_loc_age) */

struct zx_elem_s* zx_gl_eqop_GET_max_loc_age(struct zx_gl_eqop_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->max_loc_age; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_eqop_POP_max_loc_age) */

struct zx_elem_s* zx_gl_eqop_POP_max_loc_age(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->max_loc_age;
  if (y)
    x->max_loc_age = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_eqop_PUSH_max_loc_age) */

void zx_gl_eqop_PUSH_max_loc_age(struct zx_gl_eqop_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->max_loc_age->g;
  x->max_loc_age = z;
}

/* FUNC(zx_gl_eqop_REV_max_loc_age) */

void zx_gl_eqop_REV_max_loc_age(struct zx_gl_eqop_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->max_loc_age;
  if (!y) return;
  x->max_loc_age = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->max_loc_age->g;
    x->max_loc_age = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_eqop_PUT_max_loc_age) */

void zx_gl_eqop_PUT_max_loc_age(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->max_loc_age;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->max_loc_age = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_eqop_ADD_max_loc_age) */

void zx_gl_eqop_ADD_max_loc_age(struct zx_gl_eqop_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->max_loc_age->g;
    x->max_loc_age = z;
    return;
  case -1:
    y = x->max_loc_age;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->max_loc_age; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_eqop_DEL_max_loc_age) */

void zx_gl_eqop_DEL_max_loc_age(struct zx_gl_eqop_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->max_loc_age = (struct zx_elem_s*)x->max_loc_age->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->max_loc_age;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->max_loc_age; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_eqop_NUM_Extension) */

int zx_gl_eqop_NUM_Extension(struct zx_gl_eqop_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_eqop_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_eqop_GET_Extension(struct zx_gl_eqop_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_eqop_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_eqop_POP_Extension(struct zx_gl_eqop_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_eqop_PUSH_Extension) */

void zx_gl_eqop_PUSH_Extension(struct zx_gl_eqop_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_eqop_REV_Extension) */

void zx_gl_eqop_REV_Extension(struct zx_gl_eqop_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_eqop_PUT_Extension) */

void zx_gl_eqop_PUT_Extension(struct zx_gl_eqop_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_eqop_ADD_Extension) */

void zx_gl_eqop_ADD_Extension(struct zx_gl_eqop_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_eqop_DEL_Extension) */

void zx_gl_eqop_DEL_Extension(struct zx_gl_eqop_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_gl_esrd_GET_type) */
struct zx_str* zx_gl_esrd_GET_type(struct zx_gl_esrd_s* x) { return x->type; }
/* FUNC(zx_gl_esrd_PUT_type) */
void zx_gl_esrd_PUT_type(struct zx_gl_esrd_s* x, struct zx_str* y) { x->type = y; }





/* FUNC(zx_gl_esrk_GET_type) */
struct zx_str* zx_gl_esrk_GET_type(struct zx_gl_esrk_s* x) { return x->type; }
/* FUNC(zx_gl_esrk_PUT_type) */
void zx_gl_esrk_PUT_type(struct zx_gl_esrk_s* x, struct zx_str* y) { x->type = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_geoinfo_NUM_CoordinateReferenceSystem) */

int zx_gl_geoinfo_NUM_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_CoordinateReferenceSystem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CoordinateReferenceSystem; y; ++n, y = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_geoinfo_GET_CoordinateReferenceSystem) */

struct zx_gl_CoordinateReferenceSystem_s* zx_gl_geoinfo_GET_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_gl_CoordinateReferenceSystem_s* y;
  if (!x) return 0;
  for (y = x->CoordinateReferenceSystem; n>=0 && y; --n, y = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_geoinfo_POP_CoordinateReferenceSystem) */

struct zx_gl_CoordinateReferenceSystem_s* zx_gl_geoinfo_POP_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_CoordinateReferenceSystem_s* y;
  if (!x) return 0;
  y = x->CoordinateReferenceSystem;
  if (y)
    x->CoordinateReferenceSystem = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_geoinfo_PUSH_CoordinateReferenceSystem) */

void zx_gl_geoinfo_PUSH_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, struct zx_gl_CoordinateReferenceSystem_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CoordinateReferenceSystem->gg.g;
  x->CoordinateReferenceSystem = z;
}

/* FUNC(zx_gl_geoinfo_REV_CoordinateReferenceSystem) */

void zx_gl_geoinfo_REV_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_CoordinateReferenceSystem_s* nxt;
  struct zx_gl_CoordinateReferenceSystem_s* y;
  if (!x) return;
  y = x->CoordinateReferenceSystem;
  if (!y) return;
  x->CoordinateReferenceSystem = 0;
  while (y) {
    nxt = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n;
    y->gg.g.n = &x->CoordinateReferenceSystem->gg.g;
    x->CoordinateReferenceSystem = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_geoinfo_PUT_CoordinateReferenceSystem) */

void zx_gl_geoinfo_PUT_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_CoordinateReferenceSystem_s* z)
{
  struct zx_gl_CoordinateReferenceSystem_s* y;
  if (!x || !z) return;
  y = x->CoordinateReferenceSystem;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CoordinateReferenceSystem = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_geoinfo_ADD_CoordinateReferenceSystem) */

void zx_gl_geoinfo_ADD_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_CoordinateReferenceSystem_s* z)
{
  struct zx_gl_CoordinateReferenceSystem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CoordinateReferenceSystem->gg.g;
    x->CoordinateReferenceSystem = z;
    return;
  case -1:
    y = x->CoordinateReferenceSystem;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CoordinateReferenceSystem; n > 1 && y; --n, y = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_geoinfo_DEL_CoordinateReferenceSystem) */

void zx_gl_geoinfo_DEL_CoordinateReferenceSystem(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_gl_CoordinateReferenceSystem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CoordinateReferenceSystem = (struct zx_gl_CoordinateReferenceSystem_s*)x->CoordinateReferenceSystem->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CoordinateReferenceSystem_s*)x->CoordinateReferenceSystem;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CoordinateReferenceSystem; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CoordinateReferenceSystem_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_geoinfo_NUM_CivilData) */

int zx_gl_geoinfo_NUM_CivilData(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_CivilData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CivilData; y; ++n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_geoinfo_GET_CivilData) */

struct zx_gl_CivilData_s* zx_gl_geoinfo_GET_CivilData(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return 0;
  for (y = x->CivilData; n>=0 && y; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_geoinfo_POP_CivilData) */

struct zx_gl_CivilData_s* zx_gl_geoinfo_POP_CivilData(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return 0;
  y = x->CivilData;
  if (y)
    x->CivilData = (struct zx_gl_CivilData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_geoinfo_PUSH_CivilData) */

void zx_gl_geoinfo_PUSH_CivilData(struct zx_gl_geoinfo_s* x, struct zx_gl_CivilData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CivilData->gg.g;
  x->CivilData = z;
}

/* FUNC(zx_gl_geoinfo_REV_CivilData) */

void zx_gl_geoinfo_REV_CivilData(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_CivilData_s* nxt;
  struct zx_gl_CivilData_s* y;
  if (!x) return;
  y = x->CivilData;
  if (!y) return;
  x->CivilData = 0;
  while (y) {
    nxt = (struct zx_gl_CivilData_s*)y->gg.g.n;
    y->gg.g.n = &x->CivilData->gg.g;
    x->CivilData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_geoinfo_PUT_CivilData) */

void zx_gl_geoinfo_PUT_CivilData(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_CivilData_s* z)
{
  struct zx_gl_CivilData_s* y;
  if (!x || !z) return;
  y = x->CivilData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CivilData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_geoinfo_ADD_CivilData) */

void zx_gl_geoinfo_ADD_CivilData(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_CivilData_s* z)
{
  struct zx_gl_CivilData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CivilData->gg.g;
    x->CivilData = z;
    return;
  case -1:
    y = x->CivilData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CivilData; n > 1 && y; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_geoinfo_DEL_CivilData) */

void zx_gl_geoinfo_DEL_CivilData(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CivilData = (struct zx_gl_CivilData_s*)x->CivilData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CivilData_s*)x->CivilData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CivilData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_geoinfo_NUM_shape) */

int zx_gl_geoinfo_NUM_shape(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_shape_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shape; y; ++n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_geoinfo_GET_shape) */

struct zx_gl_shape_s* zx_gl_geoinfo_GET_shape(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  for (y = x->shape; n>=0 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_geoinfo_POP_shape) */

struct zx_gl_shape_s* zx_gl_geoinfo_POP_shape(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  y = x->shape;
  if (y)
    x->shape = (struct zx_gl_shape_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_geoinfo_PUSH_shape) */

void zx_gl_geoinfo_PUSH_shape(struct zx_gl_geoinfo_s* x, struct zx_gl_shape_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shape->gg.g;
  x->shape = z;
}

/* FUNC(zx_gl_geoinfo_REV_shape) */

void zx_gl_geoinfo_REV_shape(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_shape_s* nxt;
  struct zx_gl_shape_s* y;
  if (!x) return;
  y = x->shape;
  if (!y) return;
  x->shape = 0;
  while (y) {
    nxt = (struct zx_gl_shape_s*)y->gg.g.n;
    y->gg.g.n = &x->shape->gg.g;
    x->shape = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_geoinfo_PUT_shape) */

void zx_gl_geoinfo_PUT_shape(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  y = x->shape;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shape = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_geoinfo_ADD_shape) */

void zx_gl_geoinfo_ADD_shape(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shape->gg.g;
    x->shape = z;
    return;
  case -1:
    y = x->shape;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_geoinfo_DEL_shape) */

void zx_gl_geoinfo_DEL_shape(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shape = (struct zx_gl_shape_s*)x->shape->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_shape_s*)x->shape;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_geoinfo_NUM_speed) */

int zx_gl_geoinfo_NUM_speed(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->speed; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_geoinfo_GET_speed) */

struct zx_elem_s* zx_gl_geoinfo_GET_speed(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->speed; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_geoinfo_POP_speed) */

struct zx_elem_s* zx_gl_geoinfo_POP_speed(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->speed;
  if (y)
    x->speed = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_geoinfo_PUSH_speed) */

void zx_gl_geoinfo_PUSH_speed(struct zx_gl_geoinfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->speed->g;
  x->speed = z;
}

/* FUNC(zx_gl_geoinfo_REV_speed) */

void zx_gl_geoinfo_REV_speed(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->speed;
  if (!y) return;
  x->speed = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->speed->g;
    x->speed = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_geoinfo_PUT_speed) */

void zx_gl_geoinfo_PUT_speed(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->speed;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->speed = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_geoinfo_ADD_speed) */

void zx_gl_geoinfo_ADD_speed(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->speed->g;
    x->speed = z;
    return;
  case -1:
    y = x->speed;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->speed; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_geoinfo_DEL_speed) */

void zx_gl_geoinfo_DEL_speed(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->speed = (struct zx_elem_s*)x->speed->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->speed;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->speed; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_geoinfo_NUM_alt) */

int zx_gl_geoinfo_NUM_alt(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->alt; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_geoinfo_GET_alt) */

struct zx_elem_s* zx_gl_geoinfo_GET_alt(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->alt; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_geoinfo_POP_alt) */

struct zx_elem_s* zx_gl_geoinfo_POP_alt(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->alt;
  if (y)
    x->alt = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_geoinfo_PUSH_alt) */

void zx_gl_geoinfo_PUSH_alt(struct zx_gl_geoinfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->alt->g;
  x->alt = z;
}

/* FUNC(zx_gl_geoinfo_REV_alt) */

void zx_gl_geoinfo_REV_alt(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->alt;
  if (!y) return;
  x->alt = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->alt->g;
    x->alt = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_geoinfo_PUT_alt) */

void zx_gl_geoinfo_PUT_alt(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->alt;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->alt = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_geoinfo_ADD_alt) */

void zx_gl_geoinfo_ADD_alt(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->alt->g;
    x->alt = z;
    return;
  case -1:
    y = x->alt;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->alt; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_geoinfo_DEL_alt) */

void zx_gl_geoinfo_DEL_alt(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->alt = (struct zx_elem_s*)x->alt->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->alt;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->alt; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_geoinfo_NUM_direction) */

int zx_gl_geoinfo_NUM_direction(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->direction; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_geoinfo_GET_direction) */

struct zx_elem_s* zx_gl_geoinfo_GET_direction(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->direction; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_geoinfo_POP_direction) */

struct zx_elem_s* zx_gl_geoinfo_POP_direction(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->direction;
  if (y)
    x->direction = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_geoinfo_PUSH_direction) */

void zx_gl_geoinfo_PUSH_direction(struct zx_gl_geoinfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->direction->g;
  x->direction = z;
}

/* FUNC(zx_gl_geoinfo_REV_direction) */

void zx_gl_geoinfo_REV_direction(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->direction;
  if (!y) return;
  x->direction = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->direction->g;
    x->direction = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_geoinfo_PUT_direction) */

void zx_gl_geoinfo_PUT_direction(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->direction;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->direction = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_geoinfo_ADD_direction) */

void zx_gl_geoinfo_ADD_direction(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->direction->g;
    x->direction = z;
    return;
  case -1:
    y = x->direction;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->direction; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_geoinfo_DEL_direction) */

void zx_gl_geoinfo_DEL_direction(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->direction = (struct zx_elem_s*)x->direction->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->direction;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->direction; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_geoinfo_NUM_Heading) */

int zx_gl_geoinfo_NUM_Heading(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Heading; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_geoinfo_GET_Heading) */

struct zx_elem_s* zx_gl_geoinfo_GET_Heading(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Heading; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_geoinfo_POP_Heading) */

struct zx_elem_s* zx_gl_geoinfo_POP_Heading(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Heading;
  if (y)
    x->Heading = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_geoinfo_PUSH_Heading) */

void zx_gl_geoinfo_PUSH_Heading(struct zx_gl_geoinfo_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Heading->g;
  x->Heading = z;
}

/* FUNC(zx_gl_geoinfo_REV_Heading) */

void zx_gl_geoinfo_REV_Heading(struct zx_gl_geoinfo_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Heading;
  if (!y) return;
  x->Heading = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Heading->g;
    x->Heading = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_geoinfo_PUT_Heading) */

void zx_gl_geoinfo_PUT_Heading(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Heading;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Heading = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_geoinfo_ADD_Heading) */

void zx_gl_geoinfo_ADD_Heading(struct zx_gl_geoinfo_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Heading->g;
    x->Heading = z;
    return;
  case -1:
    y = x->Heading;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Heading; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_geoinfo_DEL_Heading) */

void zx_gl_geoinfo_DEL_Heading(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Heading = (struct zx_elem_s*)x->Heading->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Heading;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Heading; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_geoinfo_NUM_Extension) */

int zx_gl_geoinfo_NUM_Extension(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_geoinfo_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_geoinfo_GET_Extension(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_geoinfo_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_geoinfo_POP_Extension(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_geoinfo_PUSH_Extension) */

void zx_gl_geoinfo_PUSH_Extension(struct zx_gl_geoinfo_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_geoinfo_REV_Extension) */

void zx_gl_geoinfo_REV_Extension(struct zx_gl_geoinfo_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_geoinfo_PUT_Extension) */

void zx_gl_geoinfo_PUT_Extension(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_geoinfo_ADD_Extension) */

void zx_gl_geoinfo_ADD_Extension(struct zx_gl_geoinfo_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_geoinfo_DEL_Extension) */

void zx_gl_geoinfo_DEL_Extension(struct zx_gl_geoinfo_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_innerBoundaryIs_NUM_LinearRing) */

int zx_gl_innerBoundaryIs_NUM_LinearRing(struct zx_gl_innerBoundaryIs_s* x)
{
  struct zx_gl_LinearRing_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LinearRing; y; ++n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_innerBoundaryIs_GET_LinearRing) */

struct zx_gl_LinearRing_s* zx_gl_innerBoundaryIs_GET_LinearRing(struct zx_gl_innerBoundaryIs_s* x, int n)
{
  struct zx_gl_LinearRing_s* y;
  if (!x) return 0;
  for (y = x->LinearRing; n>=0 && y; --n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_innerBoundaryIs_POP_LinearRing) */

struct zx_gl_LinearRing_s* zx_gl_innerBoundaryIs_POP_LinearRing(struct zx_gl_innerBoundaryIs_s* x)
{
  struct zx_gl_LinearRing_s* y;
  if (!x) return 0;
  y = x->LinearRing;
  if (y)
    x->LinearRing = (struct zx_gl_LinearRing_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_innerBoundaryIs_PUSH_LinearRing) */

void zx_gl_innerBoundaryIs_PUSH_LinearRing(struct zx_gl_innerBoundaryIs_s* x, struct zx_gl_LinearRing_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LinearRing->gg.g;
  x->LinearRing = z;
}

/* FUNC(zx_gl_innerBoundaryIs_REV_LinearRing) */

void zx_gl_innerBoundaryIs_REV_LinearRing(struct zx_gl_innerBoundaryIs_s* x)
{
  struct zx_gl_LinearRing_s* nxt;
  struct zx_gl_LinearRing_s* y;
  if (!x) return;
  y = x->LinearRing;
  if (!y) return;
  x->LinearRing = 0;
  while (y) {
    nxt = (struct zx_gl_LinearRing_s*)y->gg.g.n;
    y->gg.g.n = &x->LinearRing->gg.g;
    x->LinearRing = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_innerBoundaryIs_PUT_LinearRing) */

void zx_gl_innerBoundaryIs_PUT_LinearRing(struct zx_gl_innerBoundaryIs_s* x, int n, struct zx_gl_LinearRing_s* z)
{
  struct zx_gl_LinearRing_s* y;
  if (!x || !z) return;
  y = x->LinearRing;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LinearRing = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_innerBoundaryIs_ADD_LinearRing) */

void zx_gl_innerBoundaryIs_ADD_LinearRing(struct zx_gl_innerBoundaryIs_s* x, int n, struct zx_gl_LinearRing_s* z)
{
  struct zx_gl_LinearRing_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LinearRing->gg.g;
    x->LinearRing = z;
    return;
  case -1:
    y = x->LinearRing;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LinearRing; n > 1 && y; --n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_innerBoundaryIs_DEL_LinearRing) */

void zx_gl_innerBoundaryIs_DEL_LinearRing(struct zx_gl_innerBoundaryIs_s* x, int n)
{
  struct zx_gl_LinearRing_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LinearRing = (struct zx_gl_LinearRing_s*)x->LinearRing->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_LinearRing_s*)x->LinearRing;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LinearRing; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_gl_loc_type_GET_type) */
struct zx_str* zx_gl_loc_type_GET_type(struct zx_gl_loc_type_s* x) { return x->type; }
/* FUNC(zx_gl_loc_type_PUT_type) */
void zx_gl_loc_type_PUT_type(struct zx_gl_loc_type_s* x, struct zx_str* y) { x->type = y; }





/* FUNC(zx_gl_ms_action_GET_type) */
struct zx_str* zx_gl_ms_action_GET_type(struct zx_gl_ms_action_s* x) { return x->type; }
/* FUNC(zx_gl_ms_action_PUT_type) */
void zx_gl_ms_action_PUT_type(struct zx_gl_ms_action_s* x, struct zx_str* y) { x->type = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_outerBoundaryIs_NUM_LinearRing) */

int zx_gl_outerBoundaryIs_NUM_LinearRing(struct zx_gl_outerBoundaryIs_s* x)
{
  struct zx_gl_LinearRing_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LinearRing; y; ++n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_outerBoundaryIs_GET_LinearRing) */

struct zx_gl_LinearRing_s* zx_gl_outerBoundaryIs_GET_LinearRing(struct zx_gl_outerBoundaryIs_s* x, int n)
{
  struct zx_gl_LinearRing_s* y;
  if (!x) return 0;
  for (y = x->LinearRing; n>=0 && y; --n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_outerBoundaryIs_POP_LinearRing) */

struct zx_gl_LinearRing_s* zx_gl_outerBoundaryIs_POP_LinearRing(struct zx_gl_outerBoundaryIs_s* x)
{
  struct zx_gl_LinearRing_s* y;
  if (!x) return 0;
  y = x->LinearRing;
  if (y)
    x->LinearRing = (struct zx_gl_LinearRing_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_outerBoundaryIs_PUSH_LinearRing) */

void zx_gl_outerBoundaryIs_PUSH_LinearRing(struct zx_gl_outerBoundaryIs_s* x, struct zx_gl_LinearRing_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LinearRing->gg.g;
  x->LinearRing = z;
}

/* FUNC(zx_gl_outerBoundaryIs_REV_LinearRing) */

void zx_gl_outerBoundaryIs_REV_LinearRing(struct zx_gl_outerBoundaryIs_s* x)
{
  struct zx_gl_LinearRing_s* nxt;
  struct zx_gl_LinearRing_s* y;
  if (!x) return;
  y = x->LinearRing;
  if (!y) return;
  x->LinearRing = 0;
  while (y) {
    nxt = (struct zx_gl_LinearRing_s*)y->gg.g.n;
    y->gg.g.n = &x->LinearRing->gg.g;
    x->LinearRing = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_outerBoundaryIs_PUT_LinearRing) */

void zx_gl_outerBoundaryIs_PUT_LinearRing(struct zx_gl_outerBoundaryIs_s* x, int n, struct zx_gl_LinearRing_s* z)
{
  struct zx_gl_LinearRing_s* y;
  if (!x || !z) return;
  y = x->LinearRing;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LinearRing = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_outerBoundaryIs_ADD_LinearRing) */

void zx_gl_outerBoundaryIs_ADD_LinearRing(struct zx_gl_outerBoundaryIs_s* x, int n, struct zx_gl_LinearRing_s* z)
{
  struct zx_gl_LinearRing_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LinearRing->gg.g;
    x->LinearRing = z;
    return;
  case -1:
    y = x->LinearRing;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LinearRing; n > 1 && y; --n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_outerBoundaryIs_DEL_LinearRing) */

void zx_gl_outerBoundaryIs_DEL_LinearRing(struct zx_gl_outerBoundaryIs_s* x, int n)
{
  struct zx_gl_LinearRing_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LinearRing = (struct zx_gl_LinearRing_s*)x->LinearRing->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_LinearRing_s*)x->LinearRing;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LinearRing; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LinearRing_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_time) */

int zx_gl_pd_NUM_time(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->time; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_time) */

struct zx_elem_s* zx_gl_pd_GET_time(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->time; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_time) */

struct zx_elem_s* zx_gl_pd_POP_time(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->time;
  if (y)
    x->time = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_time) */

void zx_gl_pd_PUSH_time(struct zx_gl_pd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->time->g;
  x->time = z;
}

/* FUNC(zx_gl_pd_REV_time) */

void zx_gl_pd_REV_time(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->time;
  if (!y) return;
  x->time = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->time->g;
    x->time = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_time) */

void zx_gl_pd_PUT_time(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->time;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->time = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_pd_ADD_time) */

void zx_gl_pd_ADD_time(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->time->g;
    x->time = z;
    return;
  case -1:
    y = x->time;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->time; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_pd_DEL_time) */

void zx_gl_pd_DEL_time(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->time = (struct zx_elem_s*)x->time->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->time;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->time; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_CivilData) */

int zx_gl_pd_NUM_CivilData(struct zx_gl_pd_s* x)
{
  struct zx_gl_CivilData_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CivilData; y; ++n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_CivilData) */

struct zx_gl_CivilData_s* zx_gl_pd_GET_CivilData(struct zx_gl_pd_s* x, int n)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return 0;
  for (y = x->CivilData; n>=0 && y; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_CivilData) */

struct zx_gl_CivilData_s* zx_gl_pd_POP_CivilData(struct zx_gl_pd_s* x)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return 0;
  y = x->CivilData;
  if (y)
    x->CivilData = (struct zx_gl_CivilData_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_CivilData) */

void zx_gl_pd_PUSH_CivilData(struct zx_gl_pd_s* x, struct zx_gl_CivilData_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CivilData->gg.g;
  x->CivilData = z;
}

/* FUNC(zx_gl_pd_REV_CivilData) */

void zx_gl_pd_REV_CivilData(struct zx_gl_pd_s* x)
{
  struct zx_gl_CivilData_s* nxt;
  struct zx_gl_CivilData_s* y;
  if (!x) return;
  y = x->CivilData;
  if (!y) return;
  x->CivilData = 0;
  while (y) {
    nxt = (struct zx_gl_CivilData_s*)y->gg.g.n;
    y->gg.g.n = &x->CivilData->gg.g;
    x->CivilData = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_CivilData) */

void zx_gl_pd_PUT_CivilData(struct zx_gl_pd_s* x, int n, struct zx_gl_CivilData_s* z)
{
  struct zx_gl_CivilData_s* y;
  if (!x || !z) return;
  y = x->CivilData;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CivilData = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_pd_ADD_CivilData) */

void zx_gl_pd_ADD_CivilData(struct zx_gl_pd_s* x, int n, struct zx_gl_CivilData_s* z)
{
  struct zx_gl_CivilData_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CivilData->gg.g;
    x->CivilData = z;
    return;
  case -1:
    y = x->CivilData;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CivilData; n > 1 && y; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_pd_DEL_CivilData) */

void zx_gl_pd_DEL_CivilData(struct zx_gl_pd_s* x, int n)
{
  struct zx_gl_CivilData_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CivilData = (struct zx_gl_CivilData_s*)x->CivilData->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CivilData_s*)x->CivilData;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CivilData; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CivilData_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_shape) */

int zx_gl_pd_NUM_shape(struct zx_gl_pd_s* x)
{
  struct zx_gl_shape_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shape; y; ++n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_shape) */

struct zx_gl_shape_s* zx_gl_pd_GET_shape(struct zx_gl_pd_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  for (y = x->shape; n>=0 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_shape) */

struct zx_gl_shape_s* zx_gl_pd_POP_shape(struct zx_gl_pd_s* x)
{
  struct zx_gl_shape_s* y;
  if (!x) return 0;
  y = x->shape;
  if (y)
    x->shape = (struct zx_gl_shape_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_shape) */

void zx_gl_pd_PUSH_shape(struct zx_gl_pd_s* x, struct zx_gl_shape_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shape->gg.g;
  x->shape = z;
}

/* FUNC(zx_gl_pd_REV_shape) */

void zx_gl_pd_REV_shape(struct zx_gl_pd_s* x)
{
  struct zx_gl_shape_s* nxt;
  struct zx_gl_shape_s* y;
  if (!x) return;
  y = x->shape;
  if (!y) return;
  x->shape = 0;
  while (y) {
    nxt = (struct zx_gl_shape_s*)y->gg.g.n;
    y->gg.g.n = &x->shape->gg.g;
    x->shape = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_shape) */

void zx_gl_pd_PUT_shape(struct zx_gl_pd_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  y = x->shape;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shape = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_pd_ADD_shape) */

void zx_gl_pd_ADD_shape(struct zx_gl_pd_s* x, int n, struct zx_gl_shape_s* z)
{
  struct zx_gl_shape_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shape->gg.g;
    x->shape = z;
    return;
  case -1:
    y = x->shape;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_pd_DEL_shape) */

void zx_gl_pd_DEL_shape(struct zx_gl_pd_s* x, int n)
{
  struct zx_gl_shape_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shape = (struct zx_gl_shape_s*)x->shape->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_shape_s*)x->shape;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shape; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_shape_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_alt) */

int zx_gl_pd_NUM_alt(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->alt; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_alt) */

struct zx_elem_s* zx_gl_pd_GET_alt(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->alt; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_alt) */

struct zx_elem_s* zx_gl_pd_POP_alt(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->alt;
  if (y)
    x->alt = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_alt) */

void zx_gl_pd_PUSH_alt(struct zx_gl_pd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->alt->g;
  x->alt = z;
}

/* FUNC(zx_gl_pd_REV_alt) */

void zx_gl_pd_REV_alt(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->alt;
  if (!y) return;
  x->alt = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->alt->g;
    x->alt = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_alt) */

void zx_gl_pd_PUT_alt(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->alt;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->alt = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_pd_ADD_alt) */

void zx_gl_pd_ADD_alt(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->alt->g;
    x->alt = z;
    return;
  case -1:
    y = x->alt;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->alt; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_pd_DEL_alt) */

void zx_gl_pd_DEL_alt(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->alt = (struct zx_elem_s*)x->alt->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->alt;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->alt; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_alt_acc) */

int zx_gl_pd_NUM_alt_acc(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->alt_acc; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_alt_acc) */

struct zx_elem_s* zx_gl_pd_GET_alt_acc(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->alt_acc; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_alt_acc) */

struct zx_elem_s* zx_gl_pd_POP_alt_acc(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->alt_acc;
  if (y)
    x->alt_acc = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_alt_acc) */

void zx_gl_pd_PUSH_alt_acc(struct zx_gl_pd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->alt_acc->g;
  x->alt_acc = z;
}

/* FUNC(zx_gl_pd_REV_alt_acc) */

void zx_gl_pd_REV_alt_acc(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->alt_acc;
  if (!y) return;
  x->alt_acc = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->alt_acc->g;
    x->alt_acc = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_alt_acc) */

void zx_gl_pd_PUT_alt_acc(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->alt_acc;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->alt_acc = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_pd_ADD_alt_acc) */

void zx_gl_pd_ADD_alt_acc(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->alt_acc->g;
    x->alt_acc = z;
    return;
  case -1:
    y = x->alt_acc;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->alt_acc; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_pd_DEL_alt_acc) */

void zx_gl_pd_DEL_alt_acc(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->alt_acc = (struct zx_elem_s*)x->alt_acc->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->alt_acc;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->alt_acc; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_speed) */

int zx_gl_pd_NUM_speed(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->speed; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_speed) */

struct zx_elem_s* zx_gl_pd_GET_speed(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->speed; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_speed) */

struct zx_elem_s* zx_gl_pd_POP_speed(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->speed;
  if (y)
    x->speed = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_speed) */

void zx_gl_pd_PUSH_speed(struct zx_gl_pd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->speed->g;
  x->speed = z;
}

/* FUNC(zx_gl_pd_REV_speed) */

void zx_gl_pd_REV_speed(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->speed;
  if (!y) return;
  x->speed = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->speed->g;
    x->speed = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_speed) */

void zx_gl_pd_PUT_speed(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->speed;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->speed = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_pd_ADD_speed) */

void zx_gl_pd_ADD_speed(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->speed->g;
    x->speed = z;
    return;
  case -1:
    y = x->speed;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->speed; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_pd_DEL_speed) */

void zx_gl_pd_DEL_speed(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->speed = (struct zx_elem_s*)x->speed->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->speed;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->speed; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_direction) */

int zx_gl_pd_NUM_direction(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->direction; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_direction) */

struct zx_elem_s* zx_gl_pd_GET_direction(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->direction; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_direction) */

struct zx_elem_s* zx_gl_pd_POP_direction(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->direction;
  if (y)
    x->direction = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_direction) */

void zx_gl_pd_PUSH_direction(struct zx_gl_pd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->direction->g;
  x->direction = z;
}

/* FUNC(zx_gl_pd_REV_direction) */

void zx_gl_pd_REV_direction(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->direction;
  if (!y) return;
  x->direction = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->direction->g;
    x->direction = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_direction) */

void zx_gl_pd_PUT_direction(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->direction;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->direction = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_pd_ADD_direction) */

void zx_gl_pd_ADD_direction(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->direction->g;
    x->direction = z;
    return;
  case -1:
    y = x->direction;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->direction; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_pd_DEL_direction) */

void zx_gl_pd_DEL_direction(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->direction = (struct zx_elem_s*)x->direction->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->direction;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->direction; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_Heading) */

int zx_gl_pd_NUM_Heading(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Heading; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_Heading) */

struct zx_elem_s* zx_gl_pd_GET_Heading(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Heading; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_Heading) */

struct zx_elem_s* zx_gl_pd_POP_Heading(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Heading;
  if (y)
    x->Heading = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_Heading) */

void zx_gl_pd_PUSH_Heading(struct zx_gl_pd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Heading->g;
  x->Heading = z;
}

/* FUNC(zx_gl_pd_REV_Heading) */

void zx_gl_pd_REV_Heading(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Heading;
  if (!y) return;
  x->Heading = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Heading->g;
    x->Heading = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_Heading) */

void zx_gl_pd_PUT_Heading(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Heading;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Heading = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_pd_ADD_Heading) */

void zx_gl_pd_ADD_Heading(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Heading->g;
    x->Heading = z;
    return;
  case -1:
    y = x->Heading;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Heading; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_pd_DEL_Heading) */

void zx_gl_pd_DEL_Heading(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Heading = (struct zx_elem_s*)x->Heading->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Heading;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Heading; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_lev_conf) */

int zx_gl_pd_NUM_lev_conf(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->lev_conf; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_lev_conf) */

struct zx_elem_s* zx_gl_pd_GET_lev_conf(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->lev_conf; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_lev_conf) */

struct zx_elem_s* zx_gl_pd_POP_lev_conf(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->lev_conf;
  if (y)
    x->lev_conf = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_lev_conf) */

void zx_gl_pd_PUSH_lev_conf(struct zx_gl_pd_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->lev_conf->g;
  x->lev_conf = z;
}

/* FUNC(zx_gl_pd_REV_lev_conf) */

void zx_gl_pd_REV_lev_conf(struct zx_gl_pd_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->lev_conf;
  if (!y) return;
  x->lev_conf = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->lev_conf->g;
    x->lev_conf = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_lev_conf) */

void zx_gl_pd_PUT_lev_conf(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->lev_conf;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->lev_conf = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_gl_pd_ADD_lev_conf) */

void zx_gl_pd_ADD_lev_conf(struct zx_gl_pd_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->lev_conf->g;
    x->lev_conf = z;
    return;
  case -1:
    y = x->lev_conf;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->lev_conf; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_gl_pd_DEL_lev_conf) */

void zx_gl_pd_DEL_lev_conf(struct zx_gl_pd_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->lev_conf = (struct zx_elem_s*)x->lev_conf->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->lev_conf;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->lev_conf; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_pd_NUM_Extension) */

int zx_gl_pd_NUM_Extension(struct zx_gl_pd_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_pd_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_pd_GET_Extension(struct zx_gl_pd_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_pd_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_pd_POP_Extension(struct zx_gl_pd_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_pd_PUSH_Extension) */

void zx_gl_pd_PUSH_Extension(struct zx_gl_pd_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_pd_REV_Extension) */

void zx_gl_pd_REV_Extension(struct zx_gl_pd_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_pd_PUT_Extension) */

void zx_gl_pd_PUT_Extension(struct zx_gl_pd_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_pd_ADD_Extension) */

void zx_gl_pd_ADD_Extension(struct zx_gl_pd_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_pd_DEL_Extension) */

void zx_gl_pd_DEL_Extension(struct zx_gl_pd_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_gl_pd_GET_ACC) */
struct zx_str* zx_gl_pd_GET_ACC(struct zx_gl_pd_s* x) { return x->ACC; }
/* FUNC(zx_gl_pd_PUT_ACC) */
void zx_gl_pd_PUT_ACC(struct zx_gl_pd_s* x, struct zx_str* y) { x->ACC = y; }





/* FUNC(zx_gl_prio_GET_type) */
struct zx_str* zx_gl_prio_GET_type(struct zx_gl_prio_s* x) { return x->type; }
/* FUNC(zx_gl_prio_PUT_type) */
void zx_gl_prio_PUT_type(struct zx_gl_prio_s* x, struct zx_str* y) { x->type = y; }





/* FUNC(zx_gl_resp_req_GET_type) */
struct zx_str* zx_gl_resp_req_GET_type(struct zx_gl_resp_req_s* x) { return x->type; }
/* FUNC(zx_gl_resp_req_PUT_type) */
void zx_gl_resp_req_PUT_type(struct zx_gl_resp_req_s* x, struct zx_str* y) { x->type = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_Point) */

int zx_gl_shape_NUM_Point(struct zx_gl_shape_s* x)
{
  struct zx_gl_Point_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Point; y; ++n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_Point) */

struct zx_gl_Point_s* zx_gl_shape_GET_Point(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_Point_s* y;
  if (!x) return 0;
  for (y = x->Point; n>=0 && y; --n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_Point) */

struct zx_gl_Point_s* zx_gl_shape_POP_Point(struct zx_gl_shape_s* x)
{
  struct zx_gl_Point_s* y;
  if (!x) return 0;
  y = x->Point;
  if (y)
    x->Point = (struct zx_gl_Point_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_Point) */

void zx_gl_shape_PUSH_Point(struct zx_gl_shape_s* x, struct zx_gl_Point_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Point->gg.g;
  x->Point = z;
}

/* FUNC(zx_gl_shape_REV_Point) */

void zx_gl_shape_REV_Point(struct zx_gl_shape_s* x)
{
  struct zx_gl_Point_s* nxt;
  struct zx_gl_Point_s* y;
  if (!x) return;
  y = x->Point;
  if (!y) return;
  x->Point = 0;
  while (y) {
    nxt = (struct zx_gl_Point_s*)y->gg.g.n;
    y->gg.g.n = &x->Point->gg.g;
    x->Point = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_Point) */

void zx_gl_shape_PUT_Point(struct zx_gl_shape_s* x, int n, struct zx_gl_Point_s* z)
{
  struct zx_gl_Point_s* y;
  if (!x || !z) return;
  y = x->Point;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Point = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_Point) */

void zx_gl_shape_ADD_Point(struct zx_gl_shape_s* x, int n, struct zx_gl_Point_s* z)
{
  struct zx_gl_Point_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Point->gg.g;
    x->Point = z;
    return;
  case -1:
    y = x->Point;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Point; n > 1 && y; --n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_Point) */

void zx_gl_shape_DEL_Point(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_Point_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Point = (struct zx_gl_Point_s*)x->Point->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Point_s*)x->Point;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Point; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Point_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_LineString) */

int zx_gl_shape_NUM_LineString(struct zx_gl_shape_s* x)
{
  struct zx_gl_LineString_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LineString; y; ++n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_LineString) */

struct zx_gl_LineString_s* zx_gl_shape_GET_LineString(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_LineString_s* y;
  if (!x) return 0;
  for (y = x->LineString; n>=0 && y; --n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_LineString) */

struct zx_gl_LineString_s* zx_gl_shape_POP_LineString(struct zx_gl_shape_s* x)
{
  struct zx_gl_LineString_s* y;
  if (!x) return 0;
  y = x->LineString;
  if (y)
    x->LineString = (struct zx_gl_LineString_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_LineString) */

void zx_gl_shape_PUSH_LineString(struct zx_gl_shape_s* x, struct zx_gl_LineString_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LineString->gg.g;
  x->LineString = z;
}

/* FUNC(zx_gl_shape_REV_LineString) */

void zx_gl_shape_REV_LineString(struct zx_gl_shape_s* x)
{
  struct zx_gl_LineString_s* nxt;
  struct zx_gl_LineString_s* y;
  if (!x) return;
  y = x->LineString;
  if (!y) return;
  x->LineString = 0;
  while (y) {
    nxt = (struct zx_gl_LineString_s*)y->gg.g.n;
    y->gg.g.n = &x->LineString->gg.g;
    x->LineString = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_LineString) */

void zx_gl_shape_PUT_LineString(struct zx_gl_shape_s* x, int n, struct zx_gl_LineString_s* z)
{
  struct zx_gl_LineString_s* y;
  if (!x || !z) return;
  y = x->LineString;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LineString = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_LineString) */

void zx_gl_shape_ADD_LineString(struct zx_gl_shape_s* x, int n, struct zx_gl_LineString_s* z)
{
  struct zx_gl_LineString_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LineString->gg.g;
    x->LineString = z;
    return;
  case -1:
    y = x->LineString;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LineString; n > 1 && y; --n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_LineString) */

void zx_gl_shape_DEL_LineString(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_LineString_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LineString = (struct zx_gl_LineString_s*)x->LineString->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_LineString_s*)x->LineString;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LineString; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_LineString_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_Polygon) */

int zx_gl_shape_NUM_Polygon(struct zx_gl_shape_s* x)
{
  struct zx_gl_Polygon_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Polygon; y; ++n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_Polygon) */

struct zx_gl_Polygon_s* zx_gl_shape_GET_Polygon(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_Polygon_s* y;
  if (!x) return 0;
  for (y = x->Polygon; n>=0 && y; --n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_Polygon) */

struct zx_gl_Polygon_s* zx_gl_shape_POP_Polygon(struct zx_gl_shape_s* x)
{
  struct zx_gl_Polygon_s* y;
  if (!x) return 0;
  y = x->Polygon;
  if (y)
    x->Polygon = (struct zx_gl_Polygon_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_Polygon) */

void zx_gl_shape_PUSH_Polygon(struct zx_gl_shape_s* x, struct zx_gl_Polygon_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Polygon->gg.g;
  x->Polygon = z;
}

/* FUNC(zx_gl_shape_REV_Polygon) */

void zx_gl_shape_REV_Polygon(struct zx_gl_shape_s* x)
{
  struct zx_gl_Polygon_s* nxt;
  struct zx_gl_Polygon_s* y;
  if (!x) return;
  y = x->Polygon;
  if (!y) return;
  x->Polygon = 0;
  while (y) {
    nxt = (struct zx_gl_Polygon_s*)y->gg.g.n;
    y->gg.g.n = &x->Polygon->gg.g;
    x->Polygon = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_Polygon) */

void zx_gl_shape_PUT_Polygon(struct zx_gl_shape_s* x, int n, struct zx_gl_Polygon_s* z)
{
  struct zx_gl_Polygon_s* y;
  if (!x || !z) return;
  y = x->Polygon;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Polygon = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_Polygon) */

void zx_gl_shape_ADD_Polygon(struct zx_gl_shape_s* x, int n, struct zx_gl_Polygon_s* z)
{
  struct zx_gl_Polygon_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Polygon->gg.g;
    x->Polygon = z;
    return;
  case -1:
    y = x->Polygon;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Polygon; n > 1 && y; --n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_Polygon) */

void zx_gl_shape_DEL_Polygon(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_Polygon_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Polygon = (struct zx_gl_Polygon_s*)x->Polygon->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Polygon_s*)x->Polygon;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Polygon; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Polygon_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_Box) */

int zx_gl_shape_NUM_Box(struct zx_gl_shape_s* x)
{
  struct zx_gl_Box_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Box; y; ++n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_Box) */

struct zx_gl_Box_s* zx_gl_shape_GET_Box(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_Box_s* y;
  if (!x) return 0;
  for (y = x->Box; n>=0 && y; --n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_Box) */

struct zx_gl_Box_s* zx_gl_shape_POP_Box(struct zx_gl_shape_s* x)
{
  struct zx_gl_Box_s* y;
  if (!x) return 0;
  y = x->Box;
  if (y)
    x->Box = (struct zx_gl_Box_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_Box) */

void zx_gl_shape_PUSH_Box(struct zx_gl_shape_s* x, struct zx_gl_Box_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Box->gg.g;
  x->Box = z;
}

/* FUNC(zx_gl_shape_REV_Box) */

void zx_gl_shape_REV_Box(struct zx_gl_shape_s* x)
{
  struct zx_gl_Box_s* nxt;
  struct zx_gl_Box_s* y;
  if (!x) return;
  y = x->Box;
  if (!y) return;
  x->Box = 0;
  while (y) {
    nxt = (struct zx_gl_Box_s*)y->gg.g.n;
    y->gg.g.n = &x->Box->gg.g;
    x->Box = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_Box) */

void zx_gl_shape_PUT_Box(struct zx_gl_shape_s* x, int n, struct zx_gl_Box_s* z)
{
  struct zx_gl_Box_s* y;
  if (!x || !z) return;
  y = x->Box;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Box = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_Box) */

void zx_gl_shape_ADD_Box(struct zx_gl_shape_s* x, int n, struct zx_gl_Box_s* z)
{
  struct zx_gl_Box_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Box->gg.g;
    x->Box = z;
    return;
  case -1:
    y = x->Box;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Box; n > 1 && y; --n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_Box) */

void zx_gl_shape_DEL_Box(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_Box_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Box = (struct zx_gl_Box_s*)x->Box->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Box_s*)x->Box;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Box; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Box_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_CircularArea) */

int zx_gl_shape_NUM_CircularArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_CircularArea_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CircularArea; y; ++n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_CircularArea) */

struct zx_gl_CircularArea_s* zx_gl_shape_GET_CircularArea(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_CircularArea_s* y;
  if (!x) return 0;
  for (y = x->CircularArea; n>=0 && y; --n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_CircularArea) */

struct zx_gl_CircularArea_s* zx_gl_shape_POP_CircularArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_CircularArea_s* y;
  if (!x) return 0;
  y = x->CircularArea;
  if (y)
    x->CircularArea = (struct zx_gl_CircularArea_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_CircularArea) */

void zx_gl_shape_PUSH_CircularArea(struct zx_gl_shape_s* x, struct zx_gl_CircularArea_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CircularArea->gg.g;
  x->CircularArea = z;
}

/* FUNC(zx_gl_shape_REV_CircularArea) */

void zx_gl_shape_REV_CircularArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_CircularArea_s* nxt;
  struct zx_gl_CircularArea_s* y;
  if (!x) return;
  y = x->CircularArea;
  if (!y) return;
  x->CircularArea = 0;
  while (y) {
    nxt = (struct zx_gl_CircularArea_s*)y->gg.g.n;
    y->gg.g.n = &x->CircularArea->gg.g;
    x->CircularArea = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_CircularArea) */

void zx_gl_shape_PUT_CircularArea(struct zx_gl_shape_s* x, int n, struct zx_gl_CircularArea_s* z)
{
  struct zx_gl_CircularArea_s* y;
  if (!x || !z) return;
  y = x->CircularArea;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CircularArea = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_CircularArea) */

void zx_gl_shape_ADD_CircularArea(struct zx_gl_shape_s* x, int n, struct zx_gl_CircularArea_s* z)
{
  struct zx_gl_CircularArea_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CircularArea->gg.g;
    x->CircularArea = z;
    return;
  case -1:
    y = x->CircularArea;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CircularArea; n > 1 && y; --n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_CircularArea) */

void zx_gl_shape_DEL_CircularArea(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_CircularArea_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CircularArea = (struct zx_gl_CircularArea_s*)x->CircularArea->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CircularArea_s*)x->CircularArea;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CircularArea; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CircularArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_CircularArcArea) */

int zx_gl_shape_NUM_CircularArcArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_CircularArcArea_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CircularArcArea; y; ++n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_CircularArcArea) */

struct zx_gl_CircularArcArea_s* zx_gl_shape_GET_CircularArcArea(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x) return 0;
  for (y = x->CircularArcArea; n>=0 && y; --n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_CircularArcArea) */

struct zx_gl_CircularArcArea_s* zx_gl_shape_POP_CircularArcArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x) return 0;
  y = x->CircularArcArea;
  if (y)
    x->CircularArcArea = (struct zx_gl_CircularArcArea_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_CircularArcArea) */

void zx_gl_shape_PUSH_CircularArcArea(struct zx_gl_shape_s* x, struct zx_gl_CircularArcArea_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CircularArcArea->gg.g;
  x->CircularArcArea = z;
}

/* FUNC(zx_gl_shape_REV_CircularArcArea) */

void zx_gl_shape_REV_CircularArcArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_CircularArcArea_s* nxt;
  struct zx_gl_CircularArcArea_s* y;
  if (!x) return;
  y = x->CircularArcArea;
  if (!y) return;
  x->CircularArcArea = 0;
  while (y) {
    nxt = (struct zx_gl_CircularArcArea_s*)y->gg.g.n;
    y->gg.g.n = &x->CircularArcArea->gg.g;
    x->CircularArcArea = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_CircularArcArea) */

void zx_gl_shape_PUT_CircularArcArea(struct zx_gl_shape_s* x, int n, struct zx_gl_CircularArcArea_s* z)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x || !z) return;
  y = x->CircularArcArea;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CircularArcArea = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_CircularArcArea) */

void zx_gl_shape_ADD_CircularArcArea(struct zx_gl_shape_s* x, int n, struct zx_gl_CircularArcArea_s* z)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CircularArcArea->gg.g;
    x->CircularArcArea = z;
    return;
  case -1:
    y = x->CircularArcArea;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CircularArcArea; n > 1 && y; --n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_CircularArcArea) */

void zx_gl_shape_DEL_CircularArcArea(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_CircularArcArea_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CircularArcArea = (struct zx_gl_CircularArcArea_s*)x->CircularArcArea->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CircularArcArea_s*)x->CircularArcArea;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CircularArcArea; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CircularArcArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_EllipticalArea) */

int zx_gl_shape_NUM_EllipticalArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_EllipticalArea_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EllipticalArea; y; ++n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_EllipticalArea) */

struct zx_gl_EllipticalArea_s* zx_gl_shape_GET_EllipticalArea(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x) return 0;
  for (y = x->EllipticalArea; n>=0 && y; --n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_EllipticalArea) */

struct zx_gl_EllipticalArea_s* zx_gl_shape_POP_EllipticalArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x) return 0;
  y = x->EllipticalArea;
  if (y)
    x->EllipticalArea = (struct zx_gl_EllipticalArea_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_EllipticalArea) */

void zx_gl_shape_PUSH_EllipticalArea(struct zx_gl_shape_s* x, struct zx_gl_EllipticalArea_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EllipticalArea->gg.g;
  x->EllipticalArea = z;
}

/* FUNC(zx_gl_shape_REV_EllipticalArea) */

void zx_gl_shape_REV_EllipticalArea(struct zx_gl_shape_s* x)
{
  struct zx_gl_EllipticalArea_s* nxt;
  struct zx_gl_EllipticalArea_s* y;
  if (!x) return;
  y = x->EllipticalArea;
  if (!y) return;
  x->EllipticalArea = 0;
  while (y) {
    nxt = (struct zx_gl_EllipticalArea_s*)y->gg.g.n;
    y->gg.g.n = &x->EllipticalArea->gg.g;
    x->EllipticalArea = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_EllipticalArea) */

void zx_gl_shape_PUT_EllipticalArea(struct zx_gl_shape_s* x, int n, struct zx_gl_EllipticalArea_s* z)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x || !z) return;
  y = x->EllipticalArea;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EllipticalArea = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_EllipticalArea) */

void zx_gl_shape_ADD_EllipticalArea(struct zx_gl_shape_s* x, int n, struct zx_gl_EllipticalArea_s* z)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EllipticalArea->gg.g;
    x->EllipticalArea = z;
    return;
  case -1:
    y = x->EllipticalArea;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EllipticalArea; n > 1 && y; --n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_EllipticalArea) */

void zx_gl_shape_DEL_EllipticalArea(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_EllipticalArea_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EllipticalArea = (struct zx_gl_EllipticalArea_s*)x->EllipticalArea->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_EllipticalArea_s*)x->EllipticalArea;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EllipticalArea; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_EllipticalArea_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_GeometryCollection) */

int zx_gl_shape_NUM_GeometryCollection(struct zx_gl_shape_s* x)
{
  struct zx_gl_GeometryCollection_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GeometryCollection; y; ++n, y = (struct zx_gl_GeometryCollection_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_GeometryCollection) */

struct zx_gl_GeometryCollection_s* zx_gl_shape_GET_GeometryCollection(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_GeometryCollection_s* y;
  if (!x) return 0;
  for (y = x->GeometryCollection; n>=0 && y; --n, y = (struct zx_gl_GeometryCollection_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_GeometryCollection) */

struct zx_gl_GeometryCollection_s* zx_gl_shape_POP_GeometryCollection(struct zx_gl_shape_s* x)
{
  struct zx_gl_GeometryCollection_s* y;
  if (!x) return 0;
  y = x->GeometryCollection;
  if (y)
    x->GeometryCollection = (struct zx_gl_GeometryCollection_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_GeometryCollection) */

void zx_gl_shape_PUSH_GeometryCollection(struct zx_gl_shape_s* x, struct zx_gl_GeometryCollection_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GeometryCollection->gg.g;
  x->GeometryCollection = z;
}

/* FUNC(zx_gl_shape_REV_GeometryCollection) */

void zx_gl_shape_REV_GeometryCollection(struct zx_gl_shape_s* x)
{
  struct zx_gl_GeometryCollection_s* nxt;
  struct zx_gl_GeometryCollection_s* y;
  if (!x) return;
  y = x->GeometryCollection;
  if (!y) return;
  x->GeometryCollection = 0;
  while (y) {
    nxt = (struct zx_gl_GeometryCollection_s*)y->gg.g.n;
    y->gg.g.n = &x->GeometryCollection->gg.g;
    x->GeometryCollection = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_GeometryCollection) */

void zx_gl_shape_PUT_GeometryCollection(struct zx_gl_shape_s* x, int n, struct zx_gl_GeometryCollection_s* z)
{
  struct zx_gl_GeometryCollection_s* y;
  if (!x || !z) return;
  y = x->GeometryCollection;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GeometryCollection = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_GeometryCollection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_GeometryCollection) */

void zx_gl_shape_ADD_GeometryCollection(struct zx_gl_shape_s* x, int n, struct zx_gl_GeometryCollection_s* z)
{
  struct zx_gl_GeometryCollection_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GeometryCollection->gg.g;
    x->GeometryCollection = z;
    return;
  case -1:
    y = x->GeometryCollection;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_GeometryCollection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GeometryCollection; n > 1 && y; --n, y = (struct zx_gl_GeometryCollection_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_GeometryCollection) */

void zx_gl_shape_DEL_GeometryCollection(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_GeometryCollection_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GeometryCollection = (struct zx_gl_GeometryCollection_s*)x->GeometryCollection->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_GeometryCollection_s*)x->GeometryCollection;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_GeometryCollection_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GeometryCollection; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_GeometryCollection_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_MultiLineString) */

int zx_gl_shape_NUM_MultiLineString(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiLineString_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MultiLineString; y; ++n, y = (struct zx_gl_MultiLineString_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_MultiLineString) */

struct zx_gl_MultiLineString_s* zx_gl_shape_GET_MultiLineString(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_MultiLineString_s* y;
  if (!x) return 0;
  for (y = x->MultiLineString; n>=0 && y; --n, y = (struct zx_gl_MultiLineString_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_MultiLineString) */

struct zx_gl_MultiLineString_s* zx_gl_shape_POP_MultiLineString(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiLineString_s* y;
  if (!x) return 0;
  y = x->MultiLineString;
  if (y)
    x->MultiLineString = (struct zx_gl_MultiLineString_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_MultiLineString) */

void zx_gl_shape_PUSH_MultiLineString(struct zx_gl_shape_s* x, struct zx_gl_MultiLineString_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MultiLineString->gg.g;
  x->MultiLineString = z;
}

/* FUNC(zx_gl_shape_REV_MultiLineString) */

void zx_gl_shape_REV_MultiLineString(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiLineString_s* nxt;
  struct zx_gl_MultiLineString_s* y;
  if (!x) return;
  y = x->MultiLineString;
  if (!y) return;
  x->MultiLineString = 0;
  while (y) {
    nxt = (struct zx_gl_MultiLineString_s*)y->gg.g.n;
    y->gg.g.n = &x->MultiLineString->gg.g;
    x->MultiLineString = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_MultiLineString) */

void zx_gl_shape_PUT_MultiLineString(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiLineString_s* z)
{
  struct zx_gl_MultiLineString_s* y;
  if (!x || !z) return;
  y = x->MultiLineString;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MultiLineString = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_MultiLineString_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_MultiLineString) */

void zx_gl_shape_ADD_MultiLineString(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiLineString_s* z)
{
  struct zx_gl_MultiLineString_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MultiLineString->gg.g;
    x->MultiLineString = z;
    return;
  case -1:
    y = x->MultiLineString;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_MultiLineString_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MultiLineString; n > 1 && y; --n, y = (struct zx_gl_MultiLineString_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_MultiLineString) */

void zx_gl_shape_DEL_MultiLineString(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_MultiLineString_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MultiLineString = (struct zx_gl_MultiLineString_s*)x->MultiLineString->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_MultiLineString_s*)x->MultiLineString;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_MultiLineString_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MultiLineString; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_MultiLineString_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_MultiPoint) */

int zx_gl_shape_NUM_MultiPoint(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiPoint_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MultiPoint; y; ++n, y = (struct zx_gl_MultiPoint_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_MultiPoint) */

struct zx_gl_MultiPoint_s* zx_gl_shape_GET_MultiPoint(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_MultiPoint_s* y;
  if (!x) return 0;
  for (y = x->MultiPoint; n>=0 && y; --n, y = (struct zx_gl_MultiPoint_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_MultiPoint) */

struct zx_gl_MultiPoint_s* zx_gl_shape_POP_MultiPoint(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiPoint_s* y;
  if (!x) return 0;
  y = x->MultiPoint;
  if (y)
    x->MultiPoint = (struct zx_gl_MultiPoint_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_MultiPoint) */

void zx_gl_shape_PUSH_MultiPoint(struct zx_gl_shape_s* x, struct zx_gl_MultiPoint_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MultiPoint->gg.g;
  x->MultiPoint = z;
}

/* FUNC(zx_gl_shape_REV_MultiPoint) */

void zx_gl_shape_REV_MultiPoint(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiPoint_s* nxt;
  struct zx_gl_MultiPoint_s* y;
  if (!x) return;
  y = x->MultiPoint;
  if (!y) return;
  x->MultiPoint = 0;
  while (y) {
    nxt = (struct zx_gl_MultiPoint_s*)y->gg.g.n;
    y->gg.g.n = &x->MultiPoint->gg.g;
    x->MultiPoint = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_MultiPoint) */

void zx_gl_shape_PUT_MultiPoint(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiPoint_s* z)
{
  struct zx_gl_MultiPoint_s* y;
  if (!x || !z) return;
  y = x->MultiPoint;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MultiPoint = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_MultiPoint_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_MultiPoint) */

void zx_gl_shape_ADD_MultiPoint(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiPoint_s* z)
{
  struct zx_gl_MultiPoint_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MultiPoint->gg.g;
    x->MultiPoint = z;
    return;
  case -1:
    y = x->MultiPoint;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_MultiPoint_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MultiPoint; n > 1 && y; --n, y = (struct zx_gl_MultiPoint_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_MultiPoint) */

void zx_gl_shape_DEL_MultiPoint(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_MultiPoint_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MultiPoint = (struct zx_gl_MultiPoint_s*)x->MultiPoint->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_MultiPoint_s*)x->MultiPoint;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_MultiPoint_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MultiPoint; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_MultiPoint_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_MultiPolygon) */

int zx_gl_shape_NUM_MultiPolygon(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiPolygon_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MultiPolygon; y; ++n, y = (struct zx_gl_MultiPolygon_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_MultiPolygon) */

struct zx_gl_MultiPolygon_s* zx_gl_shape_GET_MultiPolygon(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_MultiPolygon_s* y;
  if (!x) return 0;
  for (y = x->MultiPolygon; n>=0 && y; --n, y = (struct zx_gl_MultiPolygon_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_MultiPolygon) */

struct zx_gl_MultiPolygon_s* zx_gl_shape_POP_MultiPolygon(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiPolygon_s* y;
  if (!x) return 0;
  y = x->MultiPolygon;
  if (y)
    x->MultiPolygon = (struct zx_gl_MultiPolygon_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_MultiPolygon) */

void zx_gl_shape_PUSH_MultiPolygon(struct zx_gl_shape_s* x, struct zx_gl_MultiPolygon_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MultiPolygon->gg.g;
  x->MultiPolygon = z;
}

/* FUNC(zx_gl_shape_REV_MultiPolygon) */

void zx_gl_shape_REV_MultiPolygon(struct zx_gl_shape_s* x)
{
  struct zx_gl_MultiPolygon_s* nxt;
  struct zx_gl_MultiPolygon_s* y;
  if (!x) return;
  y = x->MultiPolygon;
  if (!y) return;
  x->MultiPolygon = 0;
  while (y) {
    nxt = (struct zx_gl_MultiPolygon_s*)y->gg.g.n;
    y->gg.g.n = &x->MultiPolygon->gg.g;
    x->MultiPolygon = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_MultiPolygon) */

void zx_gl_shape_PUT_MultiPolygon(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiPolygon_s* z)
{
  struct zx_gl_MultiPolygon_s* y;
  if (!x || !z) return;
  y = x->MultiPolygon;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MultiPolygon = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_MultiPolygon_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_MultiPolygon) */

void zx_gl_shape_ADD_MultiPolygon(struct zx_gl_shape_s* x, int n, struct zx_gl_MultiPolygon_s* z)
{
  struct zx_gl_MultiPolygon_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MultiPolygon->gg.g;
    x->MultiPolygon = z;
    return;
  case -1:
    y = x->MultiPolygon;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_MultiPolygon_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MultiPolygon; n > 1 && y; --n, y = (struct zx_gl_MultiPolygon_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_MultiPolygon) */

void zx_gl_shape_DEL_MultiPolygon(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_MultiPolygon_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MultiPolygon = (struct zx_gl_MultiPolygon_s*)x->MultiPolygon->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_MultiPolygon_s*)x->MultiPolygon;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_MultiPolygon_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MultiPolygon; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_MultiPolygon_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_gl_shape_NUM_Extension) */

int zx_gl_shape_NUM_Extension(struct zx_gl_shape_s* x)
{
  struct zx_gl_Extension_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Extension; y; ++n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_gl_shape_GET_Extension) */

struct zx_gl_Extension_s* zx_gl_shape_GET_Extension(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  for (y = x->Extension; n>=0 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_gl_shape_POP_Extension) */

struct zx_gl_Extension_s* zx_gl_shape_POP_Extension(struct zx_gl_shape_s* x)
{
  struct zx_gl_Extension_s* y;
  if (!x) return 0;
  y = x->Extension;
  if (y)
    x->Extension = (struct zx_gl_Extension_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_gl_shape_PUSH_Extension) */

void zx_gl_shape_PUSH_Extension(struct zx_gl_shape_s* x, struct zx_gl_Extension_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Extension->gg.g;
  x->Extension = z;
}

/* FUNC(zx_gl_shape_REV_Extension) */

void zx_gl_shape_REV_Extension(struct zx_gl_shape_s* x)
{
  struct zx_gl_Extension_s* nxt;
  struct zx_gl_Extension_s* y;
  if (!x) return;
  y = x->Extension;
  if (!y) return;
  x->Extension = 0;
  while (y) {
    nxt = (struct zx_gl_Extension_s*)y->gg.g.n;
    y->gg.g.n = &x->Extension->gg.g;
    x->Extension = y;
    y = nxt;
  }
}

/* FUNC(zx_gl_shape_PUT_Extension) */

void zx_gl_shape_PUT_Extension(struct zx_gl_shape_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  y = x->Extension;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Extension = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_gl_shape_ADD_Extension) */

void zx_gl_shape_ADD_Extension(struct zx_gl_shape_s* x, int n, struct zx_gl_Extension_s* z)
{
  struct zx_gl_Extension_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Extension->gg.g;
    x->Extension = z;
    return;
  case -1:
    y = x->Extension;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_gl_shape_DEL_Extension) */

void zx_gl_shape_DEL_Extension(struct zx_gl_shape_s* x, int n)
{
  struct zx_gl_Extension_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Extension = (struct zx_gl_Extension_s*)x->Extension->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Extension_s*)x->Extension;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Extension; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Extension_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* EOF -- c/zx-gl-getput.c */