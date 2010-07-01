/* c/zx-xa-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-xa-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Action_NUM_ActionMatch) */

int zx_xa_Action_NUM_ActionMatch(struct zx_xa_Action_s* x)
{
  struct zx_xa_ActionMatch_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ActionMatch; y; ++n, y = (struct zx_xa_ActionMatch_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Action_GET_ActionMatch) */

struct zx_xa_ActionMatch_s* zx_xa_Action_GET_ActionMatch(struct zx_xa_Action_s* x, int n)
{
  struct zx_xa_ActionMatch_s* y;
  if (!x) return 0;
  for (y = x->ActionMatch; n>=0 && y; --n, y = (struct zx_xa_ActionMatch_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Action_POP_ActionMatch) */

struct zx_xa_ActionMatch_s* zx_xa_Action_POP_ActionMatch(struct zx_xa_Action_s* x)
{
  struct zx_xa_ActionMatch_s* y;
  if (!x) return 0;
  y = x->ActionMatch;
  if (y)
    x->ActionMatch = (struct zx_xa_ActionMatch_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Action_PUSH_ActionMatch) */

void zx_xa_Action_PUSH_ActionMatch(struct zx_xa_Action_s* x, struct zx_xa_ActionMatch_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ActionMatch->gg.g;
  x->ActionMatch = z;
}

/* FUNC(zx_xa_Action_REV_ActionMatch) */

void zx_xa_Action_REV_ActionMatch(struct zx_xa_Action_s* x)
{
  struct zx_xa_ActionMatch_s* nxt;
  struct zx_xa_ActionMatch_s* y;
  if (!x) return;
  y = x->ActionMatch;
  if (!y) return;
  x->ActionMatch = 0;
  while (y) {
    nxt = (struct zx_xa_ActionMatch_s*)y->gg.g.n;
    y->gg.g.n = &x->ActionMatch->gg.g;
    x->ActionMatch = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Action_PUT_ActionMatch) */

void zx_xa_Action_PUT_ActionMatch(struct zx_xa_Action_s* x, int n, struct zx_xa_ActionMatch_s* z)
{
  struct zx_xa_ActionMatch_s* y;
  if (!x || !z) return;
  y = x->ActionMatch;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ActionMatch = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_ActionMatch_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Action_ADD_ActionMatch) */

void zx_xa_Action_ADD_ActionMatch(struct zx_xa_Action_s* x, int n, struct zx_xa_ActionMatch_s* z)
{
  struct zx_xa_ActionMatch_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ActionMatch->gg.g;
    x->ActionMatch = z;
    return;
  case -1:
    y = x->ActionMatch;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_ActionMatch_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ActionMatch; n > 1 && y; --n, y = (struct zx_xa_ActionMatch_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Action_DEL_ActionMatch) */

void zx_xa_Action_DEL_ActionMatch(struct zx_xa_Action_s* x, int n)
{
  struct zx_xa_ActionMatch_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ActionMatch = (struct zx_xa_ActionMatch_s*)x->ActionMatch->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_ActionMatch_s*)x->ActionMatch;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_ActionMatch_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ActionMatch; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_ActionMatch_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_xa_ActionAttributeDesignator_GET_AttributeId) */
struct zx_str* zx_xa_ActionAttributeDesignator_GET_AttributeId(struct zx_xa_ActionAttributeDesignator_s* x) { return x->AttributeId; }
/* FUNC(zx_xa_ActionAttributeDesignator_PUT_AttributeId) */
void zx_xa_ActionAttributeDesignator_PUT_AttributeId(struct zx_xa_ActionAttributeDesignator_s* x, struct zx_str* y) { x->AttributeId = y; }
/* FUNC(zx_xa_ActionAttributeDesignator_GET_DataType) */
struct zx_str* zx_xa_ActionAttributeDesignator_GET_DataType(struct zx_xa_ActionAttributeDesignator_s* x) { return x->DataType; }
/* FUNC(zx_xa_ActionAttributeDesignator_PUT_DataType) */
void zx_xa_ActionAttributeDesignator_PUT_DataType(struct zx_xa_ActionAttributeDesignator_s* x, struct zx_str* y) { x->DataType = y; }
/* FUNC(zx_xa_ActionAttributeDesignator_GET_Issuer) */
struct zx_str* zx_xa_ActionAttributeDesignator_GET_Issuer(struct zx_xa_ActionAttributeDesignator_s* x) { return x->Issuer; }
/* FUNC(zx_xa_ActionAttributeDesignator_PUT_Issuer) */
void zx_xa_ActionAttributeDesignator_PUT_Issuer(struct zx_xa_ActionAttributeDesignator_s* x, struct zx_str* y) { x->Issuer = y; }
/* FUNC(zx_xa_ActionAttributeDesignator_GET_MustBePresent) */
struct zx_str* zx_xa_ActionAttributeDesignator_GET_MustBePresent(struct zx_xa_ActionAttributeDesignator_s* x) { return x->MustBePresent; }
/* FUNC(zx_xa_ActionAttributeDesignator_PUT_MustBePresent) */
void zx_xa_ActionAttributeDesignator_PUT_MustBePresent(struct zx_xa_ActionAttributeDesignator_s* x, struct zx_str* y) { x->MustBePresent = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_ActionMatch_NUM_AttributeValue) */

int zx_xa_ActionMatch_NUM_AttributeValue(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_ActionMatch_GET_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_ActionMatch_GET_AttributeValue(struct zx_xa_ActionMatch_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_ActionMatch_POP_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_ActionMatch_POP_AttributeValue(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_ActionMatch_PUSH_AttributeValue) */

void zx_xa_ActionMatch_PUSH_AttributeValue(struct zx_xa_ActionMatch_s* x, struct zx_xa_AttributeValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeValue->gg.g;
  x->AttributeValue = z;
}

/* FUNC(zx_xa_ActionMatch_REV_AttributeValue) */

void zx_xa_ActionMatch_REV_AttributeValue(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_AttributeValue_s* nxt;
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_ActionMatch_PUT_AttributeValue) */

void zx_xa_ActionMatch_PUT_AttributeValue(struct zx_xa_ActionMatch_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_ActionMatch_ADD_AttributeValue) */

void zx_xa_ActionMatch_ADD_AttributeValue(struct zx_xa_ActionMatch_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_ActionMatch_DEL_AttributeValue) */

void zx_xa_ActionMatch_DEL_AttributeValue(struct zx_xa_ActionMatch_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)x->AttributeValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeValue_s*)x->AttributeValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_ActionMatch_NUM_ActionAttributeDesignator) */

int zx_xa_ActionMatch_NUM_ActionAttributeDesignator(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_ActionAttributeDesignator_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ActionAttributeDesignator; y; ++n, y = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_ActionMatch_GET_ActionAttributeDesignator) */

struct zx_xa_ActionAttributeDesignator_s* zx_xa_ActionMatch_GET_ActionAttributeDesignator(struct zx_xa_ActionMatch_s* x, int n)
{
  struct zx_xa_ActionAttributeDesignator_s* y;
  if (!x) return 0;
  for (y = x->ActionAttributeDesignator; n>=0 && y; --n, y = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_ActionMatch_POP_ActionAttributeDesignator) */

struct zx_xa_ActionAttributeDesignator_s* zx_xa_ActionMatch_POP_ActionAttributeDesignator(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_ActionAttributeDesignator_s* y;
  if (!x) return 0;
  y = x->ActionAttributeDesignator;
  if (y)
    x->ActionAttributeDesignator = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_ActionMatch_PUSH_ActionAttributeDesignator) */

void zx_xa_ActionMatch_PUSH_ActionAttributeDesignator(struct zx_xa_ActionMatch_s* x, struct zx_xa_ActionAttributeDesignator_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ActionAttributeDesignator->gg.g;
  x->ActionAttributeDesignator = z;
}

/* FUNC(zx_xa_ActionMatch_REV_ActionAttributeDesignator) */

void zx_xa_ActionMatch_REV_ActionAttributeDesignator(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_ActionAttributeDesignator_s* nxt;
  struct zx_xa_ActionAttributeDesignator_s* y;
  if (!x) return;
  y = x->ActionAttributeDesignator;
  if (!y) return;
  x->ActionAttributeDesignator = 0;
  while (y) {
    nxt = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n;
    y->gg.g.n = &x->ActionAttributeDesignator->gg.g;
    x->ActionAttributeDesignator = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_ActionMatch_PUT_ActionAttributeDesignator) */

void zx_xa_ActionMatch_PUT_ActionAttributeDesignator(struct zx_xa_ActionMatch_s* x, int n, struct zx_xa_ActionAttributeDesignator_s* z)
{
  struct zx_xa_ActionAttributeDesignator_s* y;
  if (!x || !z) return;
  y = x->ActionAttributeDesignator;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ActionAttributeDesignator = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_ActionMatch_ADD_ActionAttributeDesignator) */

void zx_xa_ActionMatch_ADD_ActionAttributeDesignator(struct zx_xa_ActionMatch_s* x, int n, struct zx_xa_ActionAttributeDesignator_s* z)
{
  struct zx_xa_ActionAttributeDesignator_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ActionAttributeDesignator->gg.g;
    x->ActionAttributeDesignator = z;
    return;
  case -1:
    y = x->ActionAttributeDesignator;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ActionAttributeDesignator; n > 1 && y; --n, y = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_ActionMatch_DEL_ActionAttributeDesignator) */

void zx_xa_ActionMatch_DEL_ActionAttributeDesignator(struct zx_xa_ActionMatch_s* x, int n)
{
  struct zx_xa_ActionAttributeDesignator_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ActionAttributeDesignator = (struct zx_xa_ActionAttributeDesignator_s*)x->ActionAttributeDesignator->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_ActionAttributeDesignator_s*)x->ActionAttributeDesignator;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ActionAttributeDesignator; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_ActionAttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_ActionMatch_NUM_AttributeSelector) */

int zx_xa_ActionMatch_NUM_AttributeSelector(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeSelector; y; ++n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_ActionMatch_GET_AttributeSelector) */

struct zx_xa_AttributeSelector_s* zx_xa_ActionMatch_GET_AttributeSelector(struct zx_xa_ActionMatch_s* x, int n)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return 0;
  for (y = x->AttributeSelector; n>=0 && y; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_ActionMatch_POP_AttributeSelector) */

struct zx_xa_AttributeSelector_s* zx_xa_ActionMatch_POP_AttributeSelector(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return 0;
  y = x->AttributeSelector;
  if (y)
    x->AttributeSelector = (struct zx_xa_AttributeSelector_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_ActionMatch_PUSH_AttributeSelector) */

void zx_xa_ActionMatch_PUSH_AttributeSelector(struct zx_xa_ActionMatch_s* x, struct zx_xa_AttributeSelector_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeSelector->gg.g;
  x->AttributeSelector = z;
}

/* FUNC(zx_xa_ActionMatch_REV_AttributeSelector) */

void zx_xa_ActionMatch_REV_AttributeSelector(struct zx_xa_ActionMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* nxt;
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return;
  y = x->AttributeSelector;
  if (!y) return;
  x->AttributeSelector = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeSelector_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeSelector->gg.g;
    x->AttributeSelector = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_ActionMatch_PUT_AttributeSelector) */

void zx_xa_ActionMatch_PUT_AttributeSelector(struct zx_xa_ActionMatch_s* x, int n, struct zx_xa_AttributeSelector_s* z)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x || !z) return;
  y = x->AttributeSelector;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeSelector = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_ActionMatch_ADD_AttributeSelector) */

void zx_xa_ActionMatch_ADD_AttributeSelector(struct zx_xa_ActionMatch_s* x, int n, struct zx_xa_AttributeSelector_s* z)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeSelector->gg.g;
    x->AttributeSelector = z;
    return;
  case -1:
    y = x->AttributeSelector;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeSelector; n > 1 && y; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_ActionMatch_DEL_AttributeSelector) */

void zx_xa_ActionMatch_DEL_AttributeSelector(struct zx_xa_ActionMatch_s* x, int n)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeSelector = (struct zx_xa_AttributeSelector_s*)x->AttributeSelector->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeSelector_s*)x->AttributeSelector;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeSelector; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_ActionMatch_GET_MatchId) */
struct zx_str* zx_xa_ActionMatch_GET_MatchId(struct zx_xa_ActionMatch_s* x) { return x->MatchId; }
/* FUNC(zx_xa_ActionMatch_PUT_MatchId) */
void zx_xa_ActionMatch_PUT_MatchId(struct zx_xa_ActionMatch_s* x, struct zx_str* y) { x->MatchId = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Actions_NUM_Action) */

int zx_xa_Actions_NUM_Action(struct zx_xa_Actions_s* x)
{
  struct zx_xa_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_xa_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Actions_GET_Action) */

struct zx_xa_Action_s* zx_xa_Actions_GET_Action(struct zx_xa_Actions_s* x, int n)
{
  struct zx_xa_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_xa_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Actions_POP_Action) */

struct zx_xa_Action_s* zx_xa_Actions_POP_Action(struct zx_xa_Actions_s* x)
{
  struct zx_xa_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_xa_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Actions_PUSH_Action) */

void zx_xa_Actions_PUSH_Action(struct zx_xa_Actions_s* x, struct zx_xa_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_xa_Actions_REV_Action) */

void zx_xa_Actions_REV_Action(struct zx_xa_Actions_s* x)
{
  struct zx_xa_Action_s* nxt;
  struct zx_xa_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_xa_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Actions_PUT_Action) */

void zx_xa_Actions_PUT_Action(struct zx_xa_Actions_s* x, int n, struct zx_xa_Action_s* z)
{
  struct zx_xa_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Actions_ADD_Action) */

void zx_xa_Actions_ADD_Action(struct zx_xa_Actions_s* x, int n, struct zx_xa_Action_s* z)
{
  struct zx_xa_Action_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Action->gg.g;
    x->Action = z;
    return;
  case -1:
    y = x->Action;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_xa_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Actions_DEL_Action) */

void zx_xa_Actions_DEL_Action(struct zx_xa_Actions_s* x, int n)
{
  struct zx_xa_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_xa_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Apply_NUM_Expression) */

int zx_xa_Apply_NUM_Expression(struct zx_xa_Apply_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Expression; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xa_Apply_GET_Expression) */

struct zx_elem_s* zx_xa_Apply_GET_Expression(struct zx_xa_Apply_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Expression; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xa_Apply_POP_Expression) */

struct zx_elem_s* zx_xa_Apply_POP_Expression(struct zx_xa_Apply_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Expression;
  if (y)
    x->Expression = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xa_Apply_PUSH_Expression) */

void zx_xa_Apply_PUSH_Expression(struct zx_xa_Apply_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Expression->g;
  x->Expression = z;
}

/* FUNC(zx_xa_Apply_REV_Expression) */

void zx_xa_Apply_REV_Expression(struct zx_xa_Apply_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Expression;
  if (!y) return;
  x->Expression = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Expression->g;
    x->Expression = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Apply_PUT_Expression) */

void zx_xa_Apply_PUT_Expression(struct zx_xa_Apply_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Expression;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Expression = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xa_Apply_ADD_Expression) */

void zx_xa_Apply_ADD_Expression(struct zx_xa_Apply_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Expression->g;
    x->Expression = z;
    return;
  case -1:
    y = x->Expression;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Expression; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xa_Apply_DEL_Expression) */

void zx_xa_Apply_DEL_Expression(struct zx_xa_Apply_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Expression = (struct zx_elem_s*)x->Expression->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Expression;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Expression; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_xa_Apply_GET_FunctionId) */
struct zx_str* zx_xa_Apply_GET_FunctionId(struct zx_xa_Apply_s* x) { return x->FunctionId; }
/* FUNC(zx_xa_Apply_PUT_FunctionId) */
void zx_xa_Apply_PUT_FunctionId(struct zx_xa_Apply_s* x, struct zx_str* y) { x->FunctionId = y; }





/* FUNC(zx_xa_AttributeAssignment_GET_AttributeId) */
struct zx_str* zx_xa_AttributeAssignment_GET_AttributeId(struct zx_xa_AttributeAssignment_s* x) { return x->AttributeId; }
/* FUNC(zx_xa_AttributeAssignment_PUT_AttributeId) */
void zx_xa_AttributeAssignment_PUT_AttributeId(struct zx_xa_AttributeAssignment_s* x, struct zx_str* y) { x->AttributeId = y; }
/* FUNC(zx_xa_AttributeAssignment_GET_DataType) */
struct zx_str* zx_xa_AttributeAssignment_GET_DataType(struct zx_xa_AttributeAssignment_s* x) { return x->DataType; }
/* FUNC(zx_xa_AttributeAssignment_PUT_DataType) */
void zx_xa_AttributeAssignment_PUT_DataType(struct zx_xa_AttributeAssignment_s* x, struct zx_str* y) { x->DataType = y; }





/* FUNC(zx_xa_AttributeSelector_GET_DataType) */
struct zx_str* zx_xa_AttributeSelector_GET_DataType(struct zx_xa_AttributeSelector_s* x) { return x->DataType; }
/* FUNC(zx_xa_AttributeSelector_PUT_DataType) */
void zx_xa_AttributeSelector_PUT_DataType(struct zx_xa_AttributeSelector_s* x, struct zx_str* y) { x->DataType = y; }
/* FUNC(zx_xa_AttributeSelector_GET_MustBePresent) */
struct zx_str* zx_xa_AttributeSelector_GET_MustBePresent(struct zx_xa_AttributeSelector_s* x) { return x->MustBePresent; }
/* FUNC(zx_xa_AttributeSelector_PUT_MustBePresent) */
void zx_xa_AttributeSelector_PUT_MustBePresent(struct zx_xa_AttributeSelector_s* x, struct zx_str* y) { x->MustBePresent = y; }
/* FUNC(zx_xa_AttributeSelector_GET_RequestContextPath) */
struct zx_str* zx_xa_AttributeSelector_GET_RequestContextPath(struct zx_xa_AttributeSelector_s* x) { return x->RequestContextPath; }
/* FUNC(zx_xa_AttributeSelector_PUT_RequestContextPath) */
void zx_xa_AttributeSelector_PUT_RequestContextPath(struct zx_xa_AttributeSelector_s* x, struct zx_str* y) { x->RequestContextPath = y; }





/* FUNC(zx_xa_AttributeValue_GET_DataType) */
struct zx_str* zx_xa_AttributeValue_GET_DataType(struct zx_xa_AttributeValue_s* x) { return x->DataType; }
/* FUNC(zx_xa_AttributeValue_PUT_DataType) */
void zx_xa_AttributeValue_PUT_DataType(struct zx_xa_AttributeValue_s* x, struct zx_str* y) { x->DataType = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_CombinerParameter_NUM_AttributeValue) */

int zx_xa_CombinerParameter_NUM_AttributeValue(struct zx_xa_CombinerParameter_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_CombinerParameter_GET_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_CombinerParameter_GET_AttributeValue(struct zx_xa_CombinerParameter_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_CombinerParameter_POP_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_CombinerParameter_POP_AttributeValue(struct zx_xa_CombinerParameter_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_CombinerParameter_PUSH_AttributeValue) */

void zx_xa_CombinerParameter_PUSH_AttributeValue(struct zx_xa_CombinerParameter_s* x, struct zx_xa_AttributeValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeValue->gg.g;
  x->AttributeValue = z;
}

/* FUNC(zx_xa_CombinerParameter_REV_AttributeValue) */

void zx_xa_CombinerParameter_REV_AttributeValue(struct zx_xa_CombinerParameter_s* x)
{
  struct zx_xa_AttributeValue_s* nxt;
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_CombinerParameter_PUT_AttributeValue) */

void zx_xa_CombinerParameter_PUT_AttributeValue(struct zx_xa_CombinerParameter_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_CombinerParameter_ADD_AttributeValue) */

void zx_xa_CombinerParameter_ADD_AttributeValue(struct zx_xa_CombinerParameter_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_CombinerParameter_DEL_AttributeValue) */

void zx_xa_CombinerParameter_DEL_AttributeValue(struct zx_xa_CombinerParameter_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)x->AttributeValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeValue_s*)x->AttributeValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_CombinerParameter_GET_ParameterName) */
struct zx_str* zx_xa_CombinerParameter_GET_ParameterName(struct zx_xa_CombinerParameter_s* x) { return x->ParameterName; }
/* FUNC(zx_xa_CombinerParameter_PUT_ParameterName) */
void zx_xa_CombinerParameter_PUT_ParameterName(struct zx_xa_CombinerParameter_s* x, struct zx_str* y) { x->ParameterName = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_CombinerParameters_NUM_CombinerParameter) */

int zx_xa_CombinerParameters_NUM_CombinerParameter(struct zx_xa_CombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CombinerParameter; y; ++n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_CombinerParameters_GET_CombinerParameter) */

struct zx_xa_CombinerParameter_s* zx_xa_CombinerParameters_GET_CombinerParameter(struct zx_xa_CombinerParameters_s* x, int n)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return 0;
  for (y = x->CombinerParameter; n>=0 && y; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_CombinerParameters_POP_CombinerParameter) */

struct zx_xa_CombinerParameter_s* zx_xa_CombinerParameters_POP_CombinerParameter(struct zx_xa_CombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return 0;
  y = x->CombinerParameter;
  if (y)
    x->CombinerParameter = (struct zx_xa_CombinerParameter_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_CombinerParameters_PUSH_CombinerParameter) */

void zx_xa_CombinerParameters_PUSH_CombinerParameter(struct zx_xa_CombinerParameters_s* x, struct zx_xa_CombinerParameter_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CombinerParameter->gg.g;
  x->CombinerParameter = z;
}

/* FUNC(zx_xa_CombinerParameters_REV_CombinerParameter) */

void zx_xa_CombinerParameters_REV_CombinerParameter(struct zx_xa_CombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* nxt;
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return;
  y = x->CombinerParameter;
  if (!y) return;
  x->CombinerParameter = 0;
  while (y) {
    nxt = (struct zx_xa_CombinerParameter_s*)y->gg.g.n;
    y->gg.g.n = &x->CombinerParameter->gg.g;
    x->CombinerParameter = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_CombinerParameters_PUT_CombinerParameter) */

void zx_xa_CombinerParameters_PUT_CombinerParameter(struct zx_xa_CombinerParameters_s* x, int n, struct zx_xa_CombinerParameter_s* z)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x || !z) return;
  y = x->CombinerParameter;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CombinerParameter = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_CombinerParameters_ADD_CombinerParameter) */

void zx_xa_CombinerParameters_ADD_CombinerParameter(struct zx_xa_CombinerParameters_s* x, int n, struct zx_xa_CombinerParameter_s* z)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CombinerParameter->gg.g;
    x->CombinerParameter = z;
    return;
  case -1:
    y = x->CombinerParameter;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameter; n > 1 && y; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_CombinerParameters_DEL_CombinerParameter) */

void zx_xa_CombinerParameters_DEL_CombinerParameter(struct zx_xa_CombinerParameters_s* x, int n)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CombinerParameter = (struct zx_xa_CombinerParameter_s*)x->CombinerParameter->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_CombinerParameter_s*)x->CombinerParameter;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameter; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Condition_NUM_Expression) */

int zx_xa_Condition_NUM_Expression(struct zx_xa_Condition_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Expression; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xa_Condition_GET_Expression) */

struct zx_elem_s* zx_xa_Condition_GET_Expression(struct zx_xa_Condition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Expression; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xa_Condition_POP_Expression) */

struct zx_elem_s* zx_xa_Condition_POP_Expression(struct zx_xa_Condition_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Expression;
  if (y)
    x->Expression = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xa_Condition_PUSH_Expression) */

void zx_xa_Condition_PUSH_Expression(struct zx_xa_Condition_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Expression->g;
  x->Expression = z;
}

/* FUNC(zx_xa_Condition_REV_Expression) */

void zx_xa_Condition_REV_Expression(struct zx_xa_Condition_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Expression;
  if (!y) return;
  x->Expression = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Expression->g;
    x->Expression = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Condition_PUT_Expression) */

void zx_xa_Condition_PUT_Expression(struct zx_xa_Condition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Expression;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Expression = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xa_Condition_ADD_Expression) */

void zx_xa_Condition_ADD_Expression(struct zx_xa_Condition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Expression->g;
    x->Expression = z;
    return;
  case -1:
    y = x->Expression;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Expression; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xa_Condition_DEL_Expression) */

void zx_xa_Condition_DEL_Expression(struct zx_xa_Condition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Expression = (struct zx_elem_s*)x->Expression->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Expression;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Expression; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Environment_NUM_EnvironmentMatch) */

int zx_xa_Environment_NUM_EnvironmentMatch(struct zx_xa_Environment_s* x)
{
  struct zx_xa_EnvironmentMatch_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EnvironmentMatch; y; ++n, y = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Environment_GET_EnvironmentMatch) */

struct zx_xa_EnvironmentMatch_s* zx_xa_Environment_GET_EnvironmentMatch(struct zx_xa_Environment_s* x, int n)
{
  struct zx_xa_EnvironmentMatch_s* y;
  if (!x) return 0;
  for (y = x->EnvironmentMatch; n>=0 && y; --n, y = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Environment_POP_EnvironmentMatch) */

struct zx_xa_EnvironmentMatch_s* zx_xa_Environment_POP_EnvironmentMatch(struct zx_xa_Environment_s* x)
{
  struct zx_xa_EnvironmentMatch_s* y;
  if (!x) return 0;
  y = x->EnvironmentMatch;
  if (y)
    x->EnvironmentMatch = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Environment_PUSH_EnvironmentMatch) */

void zx_xa_Environment_PUSH_EnvironmentMatch(struct zx_xa_Environment_s* x, struct zx_xa_EnvironmentMatch_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EnvironmentMatch->gg.g;
  x->EnvironmentMatch = z;
}

/* FUNC(zx_xa_Environment_REV_EnvironmentMatch) */

void zx_xa_Environment_REV_EnvironmentMatch(struct zx_xa_Environment_s* x)
{
  struct zx_xa_EnvironmentMatch_s* nxt;
  struct zx_xa_EnvironmentMatch_s* y;
  if (!x) return;
  y = x->EnvironmentMatch;
  if (!y) return;
  x->EnvironmentMatch = 0;
  while (y) {
    nxt = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n;
    y->gg.g.n = &x->EnvironmentMatch->gg.g;
    x->EnvironmentMatch = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Environment_PUT_EnvironmentMatch) */

void zx_xa_Environment_PUT_EnvironmentMatch(struct zx_xa_Environment_s* x, int n, struct zx_xa_EnvironmentMatch_s* z)
{
  struct zx_xa_EnvironmentMatch_s* y;
  if (!x || !z) return;
  y = x->EnvironmentMatch;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EnvironmentMatch = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Environment_ADD_EnvironmentMatch) */

void zx_xa_Environment_ADD_EnvironmentMatch(struct zx_xa_Environment_s* x, int n, struct zx_xa_EnvironmentMatch_s* z)
{
  struct zx_xa_EnvironmentMatch_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EnvironmentMatch->gg.g;
    x->EnvironmentMatch = z;
    return;
  case -1:
    y = x->EnvironmentMatch;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EnvironmentMatch; n > 1 && y; --n, y = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Environment_DEL_EnvironmentMatch) */

void zx_xa_Environment_DEL_EnvironmentMatch(struct zx_xa_Environment_s* x, int n)
{
  struct zx_xa_EnvironmentMatch_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EnvironmentMatch = (struct zx_xa_EnvironmentMatch_s*)x->EnvironmentMatch->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_EnvironmentMatch_s*)x->EnvironmentMatch;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EnvironmentMatch; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_EnvironmentMatch_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_xa_EnvironmentAttributeDesignator_GET_AttributeId) */
struct zx_str* zx_xa_EnvironmentAttributeDesignator_GET_AttributeId(struct zx_xa_EnvironmentAttributeDesignator_s* x) { return x->AttributeId; }
/* FUNC(zx_xa_EnvironmentAttributeDesignator_PUT_AttributeId) */
void zx_xa_EnvironmentAttributeDesignator_PUT_AttributeId(struct zx_xa_EnvironmentAttributeDesignator_s* x, struct zx_str* y) { x->AttributeId = y; }
/* FUNC(zx_xa_EnvironmentAttributeDesignator_GET_DataType) */
struct zx_str* zx_xa_EnvironmentAttributeDesignator_GET_DataType(struct zx_xa_EnvironmentAttributeDesignator_s* x) { return x->DataType; }
/* FUNC(zx_xa_EnvironmentAttributeDesignator_PUT_DataType) */
void zx_xa_EnvironmentAttributeDesignator_PUT_DataType(struct zx_xa_EnvironmentAttributeDesignator_s* x, struct zx_str* y) { x->DataType = y; }
/* FUNC(zx_xa_EnvironmentAttributeDesignator_GET_Issuer) */
struct zx_str* zx_xa_EnvironmentAttributeDesignator_GET_Issuer(struct zx_xa_EnvironmentAttributeDesignator_s* x) { return x->Issuer; }
/* FUNC(zx_xa_EnvironmentAttributeDesignator_PUT_Issuer) */
void zx_xa_EnvironmentAttributeDesignator_PUT_Issuer(struct zx_xa_EnvironmentAttributeDesignator_s* x, struct zx_str* y) { x->Issuer = y; }
/* FUNC(zx_xa_EnvironmentAttributeDesignator_GET_MustBePresent) */
struct zx_str* zx_xa_EnvironmentAttributeDesignator_GET_MustBePresent(struct zx_xa_EnvironmentAttributeDesignator_s* x) { return x->MustBePresent; }
/* FUNC(zx_xa_EnvironmentAttributeDesignator_PUT_MustBePresent) */
void zx_xa_EnvironmentAttributeDesignator_PUT_MustBePresent(struct zx_xa_EnvironmentAttributeDesignator_s* x, struct zx_str* y) { x->MustBePresent = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_EnvironmentMatch_NUM_AttributeValue) */

int zx_xa_EnvironmentMatch_NUM_AttributeValue(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_EnvironmentMatch_GET_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_EnvironmentMatch_GET_AttributeValue(struct zx_xa_EnvironmentMatch_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_EnvironmentMatch_POP_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_EnvironmentMatch_POP_AttributeValue(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_EnvironmentMatch_PUSH_AttributeValue) */

void zx_xa_EnvironmentMatch_PUSH_AttributeValue(struct zx_xa_EnvironmentMatch_s* x, struct zx_xa_AttributeValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeValue->gg.g;
  x->AttributeValue = z;
}

/* FUNC(zx_xa_EnvironmentMatch_REV_AttributeValue) */

void zx_xa_EnvironmentMatch_REV_AttributeValue(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_AttributeValue_s* nxt;
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_EnvironmentMatch_PUT_AttributeValue) */

void zx_xa_EnvironmentMatch_PUT_AttributeValue(struct zx_xa_EnvironmentMatch_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_EnvironmentMatch_ADD_AttributeValue) */

void zx_xa_EnvironmentMatch_ADD_AttributeValue(struct zx_xa_EnvironmentMatch_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_EnvironmentMatch_DEL_AttributeValue) */

void zx_xa_EnvironmentMatch_DEL_AttributeValue(struct zx_xa_EnvironmentMatch_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)x->AttributeValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeValue_s*)x->AttributeValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_EnvironmentMatch_NUM_EnvironmentAttributeDesignator) */

int zx_xa_EnvironmentMatch_NUM_EnvironmentAttributeDesignator(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_EnvironmentAttributeDesignator_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EnvironmentAttributeDesignator; y; ++n, y = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_EnvironmentMatch_GET_EnvironmentAttributeDesignator) */

struct zx_xa_EnvironmentAttributeDesignator_s* zx_xa_EnvironmentMatch_GET_EnvironmentAttributeDesignator(struct zx_xa_EnvironmentMatch_s* x, int n)
{
  struct zx_xa_EnvironmentAttributeDesignator_s* y;
  if (!x) return 0;
  for (y = x->EnvironmentAttributeDesignator; n>=0 && y; --n, y = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_EnvironmentMatch_POP_EnvironmentAttributeDesignator) */

struct zx_xa_EnvironmentAttributeDesignator_s* zx_xa_EnvironmentMatch_POP_EnvironmentAttributeDesignator(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_EnvironmentAttributeDesignator_s* y;
  if (!x) return 0;
  y = x->EnvironmentAttributeDesignator;
  if (y)
    x->EnvironmentAttributeDesignator = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_EnvironmentMatch_PUSH_EnvironmentAttributeDesignator) */

void zx_xa_EnvironmentMatch_PUSH_EnvironmentAttributeDesignator(struct zx_xa_EnvironmentMatch_s* x, struct zx_xa_EnvironmentAttributeDesignator_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EnvironmentAttributeDesignator->gg.g;
  x->EnvironmentAttributeDesignator = z;
}

/* FUNC(zx_xa_EnvironmentMatch_REV_EnvironmentAttributeDesignator) */

void zx_xa_EnvironmentMatch_REV_EnvironmentAttributeDesignator(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_EnvironmentAttributeDesignator_s* nxt;
  struct zx_xa_EnvironmentAttributeDesignator_s* y;
  if (!x) return;
  y = x->EnvironmentAttributeDesignator;
  if (!y) return;
  x->EnvironmentAttributeDesignator = 0;
  while (y) {
    nxt = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n;
    y->gg.g.n = &x->EnvironmentAttributeDesignator->gg.g;
    x->EnvironmentAttributeDesignator = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_EnvironmentMatch_PUT_EnvironmentAttributeDesignator) */

void zx_xa_EnvironmentMatch_PUT_EnvironmentAttributeDesignator(struct zx_xa_EnvironmentMatch_s* x, int n, struct zx_xa_EnvironmentAttributeDesignator_s* z)
{
  struct zx_xa_EnvironmentAttributeDesignator_s* y;
  if (!x || !z) return;
  y = x->EnvironmentAttributeDesignator;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EnvironmentAttributeDesignator = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_EnvironmentMatch_ADD_EnvironmentAttributeDesignator) */

void zx_xa_EnvironmentMatch_ADD_EnvironmentAttributeDesignator(struct zx_xa_EnvironmentMatch_s* x, int n, struct zx_xa_EnvironmentAttributeDesignator_s* z)
{
  struct zx_xa_EnvironmentAttributeDesignator_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EnvironmentAttributeDesignator->gg.g;
    x->EnvironmentAttributeDesignator = z;
    return;
  case -1:
    y = x->EnvironmentAttributeDesignator;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EnvironmentAttributeDesignator; n > 1 && y; --n, y = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_EnvironmentMatch_DEL_EnvironmentAttributeDesignator) */

void zx_xa_EnvironmentMatch_DEL_EnvironmentAttributeDesignator(struct zx_xa_EnvironmentMatch_s* x, int n)
{
  struct zx_xa_EnvironmentAttributeDesignator_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EnvironmentAttributeDesignator = (struct zx_xa_EnvironmentAttributeDesignator_s*)x->EnvironmentAttributeDesignator->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_EnvironmentAttributeDesignator_s*)x->EnvironmentAttributeDesignator;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EnvironmentAttributeDesignator; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_EnvironmentAttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_EnvironmentMatch_NUM_AttributeSelector) */

int zx_xa_EnvironmentMatch_NUM_AttributeSelector(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeSelector; y; ++n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_EnvironmentMatch_GET_AttributeSelector) */

struct zx_xa_AttributeSelector_s* zx_xa_EnvironmentMatch_GET_AttributeSelector(struct zx_xa_EnvironmentMatch_s* x, int n)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return 0;
  for (y = x->AttributeSelector; n>=0 && y; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_EnvironmentMatch_POP_AttributeSelector) */

struct zx_xa_AttributeSelector_s* zx_xa_EnvironmentMatch_POP_AttributeSelector(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return 0;
  y = x->AttributeSelector;
  if (y)
    x->AttributeSelector = (struct zx_xa_AttributeSelector_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_EnvironmentMatch_PUSH_AttributeSelector) */

void zx_xa_EnvironmentMatch_PUSH_AttributeSelector(struct zx_xa_EnvironmentMatch_s* x, struct zx_xa_AttributeSelector_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeSelector->gg.g;
  x->AttributeSelector = z;
}

/* FUNC(zx_xa_EnvironmentMatch_REV_AttributeSelector) */

void zx_xa_EnvironmentMatch_REV_AttributeSelector(struct zx_xa_EnvironmentMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* nxt;
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return;
  y = x->AttributeSelector;
  if (!y) return;
  x->AttributeSelector = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeSelector_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeSelector->gg.g;
    x->AttributeSelector = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_EnvironmentMatch_PUT_AttributeSelector) */

void zx_xa_EnvironmentMatch_PUT_AttributeSelector(struct zx_xa_EnvironmentMatch_s* x, int n, struct zx_xa_AttributeSelector_s* z)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x || !z) return;
  y = x->AttributeSelector;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeSelector = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_EnvironmentMatch_ADD_AttributeSelector) */

void zx_xa_EnvironmentMatch_ADD_AttributeSelector(struct zx_xa_EnvironmentMatch_s* x, int n, struct zx_xa_AttributeSelector_s* z)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeSelector->gg.g;
    x->AttributeSelector = z;
    return;
  case -1:
    y = x->AttributeSelector;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeSelector; n > 1 && y; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_EnvironmentMatch_DEL_AttributeSelector) */

void zx_xa_EnvironmentMatch_DEL_AttributeSelector(struct zx_xa_EnvironmentMatch_s* x, int n)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeSelector = (struct zx_xa_AttributeSelector_s*)x->AttributeSelector->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeSelector_s*)x->AttributeSelector;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeSelector; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_EnvironmentMatch_GET_MatchId) */
struct zx_str* zx_xa_EnvironmentMatch_GET_MatchId(struct zx_xa_EnvironmentMatch_s* x) { return x->MatchId; }
/* FUNC(zx_xa_EnvironmentMatch_PUT_MatchId) */
void zx_xa_EnvironmentMatch_PUT_MatchId(struct zx_xa_EnvironmentMatch_s* x, struct zx_str* y) { x->MatchId = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Environments_NUM_Environment) */

int zx_xa_Environments_NUM_Environment(struct zx_xa_Environments_s* x)
{
  struct zx_xa_Environment_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Environment; y; ++n, y = (struct zx_xa_Environment_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Environments_GET_Environment) */

struct zx_xa_Environment_s* zx_xa_Environments_GET_Environment(struct zx_xa_Environments_s* x, int n)
{
  struct zx_xa_Environment_s* y;
  if (!x) return 0;
  for (y = x->Environment; n>=0 && y; --n, y = (struct zx_xa_Environment_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Environments_POP_Environment) */

struct zx_xa_Environment_s* zx_xa_Environments_POP_Environment(struct zx_xa_Environments_s* x)
{
  struct zx_xa_Environment_s* y;
  if (!x) return 0;
  y = x->Environment;
  if (y)
    x->Environment = (struct zx_xa_Environment_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Environments_PUSH_Environment) */

void zx_xa_Environments_PUSH_Environment(struct zx_xa_Environments_s* x, struct zx_xa_Environment_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Environment->gg.g;
  x->Environment = z;
}

/* FUNC(zx_xa_Environments_REV_Environment) */

void zx_xa_Environments_REV_Environment(struct zx_xa_Environments_s* x)
{
  struct zx_xa_Environment_s* nxt;
  struct zx_xa_Environment_s* y;
  if (!x) return;
  y = x->Environment;
  if (!y) return;
  x->Environment = 0;
  while (y) {
    nxt = (struct zx_xa_Environment_s*)y->gg.g.n;
    y->gg.g.n = &x->Environment->gg.g;
    x->Environment = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Environments_PUT_Environment) */

void zx_xa_Environments_PUT_Environment(struct zx_xa_Environments_s* x, int n, struct zx_xa_Environment_s* z)
{
  struct zx_xa_Environment_s* y;
  if (!x || !z) return;
  y = x->Environment;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Environment = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Environment_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Environments_ADD_Environment) */

void zx_xa_Environments_ADD_Environment(struct zx_xa_Environments_s* x, int n, struct zx_xa_Environment_s* z)
{
  struct zx_xa_Environment_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Environment->gg.g;
    x->Environment = z;
    return;
  case -1:
    y = x->Environment;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Environment_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Environment; n > 1 && y; --n, y = (struct zx_xa_Environment_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Environments_DEL_Environment) */

void zx_xa_Environments_DEL_Environment(struct zx_xa_Environments_s* x, int n)
{
  struct zx_xa_Environment_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Environment = (struct zx_xa_Environment_s*)x->Environment->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Environment_s*)x->Environment;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Environment_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Environment; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Environment_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_xa_Function_GET_FunctionId) */
struct zx_str* zx_xa_Function_GET_FunctionId(struct zx_xa_Function_s* x) { return x->FunctionId; }
/* FUNC(zx_xa_Function_PUT_FunctionId) */
void zx_xa_Function_PUT_FunctionId(struct zx_xa_Function_s* x, struct zx_str* y) { x->FunctionId = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Obligation_NUM_AttributeAssignment) */

int zx_xa_Obligation_NUM_AttributeAssignment(struct zx_xa_Obligation_s* x)
{
  struct zx_xa_AttributeAssignment_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeAssignment; y; ++n, y = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Obligation_GET_AttributeAssignment) */

struct zx_xa_AttributeAssignment_s* zx_xa_Obligation_GET_AttributeAssignment(struct zx_xa_Obligation_s* x, int n)
{
  struct zx_xa_AttributeAssignment_s* y;
  if (!x) return 0;
  for (y = x->AttributeAssignment; n>=0 && y; --n, y = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Obligation_POP_AttributeAssignment) */

struct zx_xa_AttributeAssignment_s* zx_xa_Obligation_POP_AttributeAssignment(struct zx_xa_Obligation_s* x)
{
  struct zx_xa_AttributeAssignment_s* y;
  if (!x) return 0;
  y = x->AttributeAssignment;
  if (y)
    x->AttributeAssignment = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Obligation_PUSH_AttributeAssignment) */

void zx_xa_Obligation_PUSH_AttributeAssignment(struct zx_xa_Obligation_s* x, struct zx_xa_AttributeAssignment_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeAssignment->gg.g;
  x->AttributeAssignment = z;
}

/* FUNC(zx_xa_Obligation_REV_AttributeAssignment) */

void zx_xa_Obligation_REV_AttributeAssignment(struct zx_xa_Obligation_s* x)
{
  struct zx_xa_AttributeAssignment_s* nxt;
  struct zx_xa_AttributeAssignment_s* y;
  if (!x) return;
  y = x->AttributeAssignment;
  if (!y) return;
  x->AttributeAssignment = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeAssignment->gg.g;
    x->AttributeAssignment = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Obligation_PUT_AttributeAssignment) */

void zx_xa_Obligation_PUT_AttributeAssignment(struct zx_xa_Obligation_s* x, int n, struct zx_xa_AttributeAssignment_s* z)
{
  struct zx_xa_AttributeAssignment_s* y;
  if (!x || !z) return;
  y = x->AttributeAssignment;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeAssignment = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Obligation_ADD_AttributeAssignment) */

void zx_xa_Obligation_ADD_AttributeAssignment(struct zx_xa_Obligation_s* x, int n, struct zx_xa_AttributeAssignment_s* z)
{
  struct zx_xa_AttributeAssignment_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeAssignment->gg.g;
    x->AttributeAssignment = z;
    return;
  case -1:
    y = x->AttributeAssignment;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeAssignment; n > 1 && y; --n, y = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Obligation_DEL_AttributeAssignment) */

void zx_xa_Obligation_DEL_AttributeAssignment(struct zx_xa_Obligation_s* x, int n)
{
  struct zx_xa_AttributeAssignment_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeAssignment = (struct zx_xa_AttributeAssignment_s*)x->AttributeAssignment->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeAssignment_s*)x->AttributeAssignment;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeAssignment; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeAssignment_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_Obligation_GET_FulfillOn) */
struct zx_str* zx_xa_Obligation_GET_FulfillOn(struct zx_xa_Obligation_s* x) { return x->FulfillOn; }
/* FUNC(zx_xa_Obligation_PUT_FulfillOn) */
void zx_xa_Obligation_PUT_FulfillOn(struct zx_xa_Obligation_s* x, struct zx_str* y) { x->FulfillOn = y; }
/* FUNC(zx_xa_Obligation_GET_ObligationId) */
struct zx_str* zx_xa_Obligation_GET_ObligationId(struct zx_xa_Obligation_s* x) { return x->ObligationId; }
/* FUNC(zx_xa_Obligation_PUT_ObligationId) */
void zx_xa_Obligation_PUT_ObligationId(struct zx_xa_Obligation_s* x, struct zx_str* y) { x->ObligationId = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Obligations_NUM_Obligation) */

int zx_xa_Obligations_NUM_Obligation(struct zx_xa_Obligations_s* x)
{
  struct zx_xa_Obligation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Obligation; y; ++n, y = (struct zx_xa_Obligation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Obligations_GET_Obligation) */

struct zx_xa_Obligation_s* zx_xa_Obligations_GET_Obligation(struct zx_xa_Obligations_s* x, int n)
{
  struct zx_xa_Obligation_s* y;
  if (!x) return 0;
  for (y = x->Obligation; n>=0 && y; --n, y = (struct zx_xa_Obligation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Obligations_POP_Obligation) */

struct zx_xa_Obligation_s* zx_xa_Obligations_POP_Obligation(struct zx_xa_Obligations_s* x)
{
  struct zx_xa_Obligation_s* y;
  if (!x) return 0;
  y = x->Obligation;
  if (y)
    x->Obligation = (struct zx_xa_Obligation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Obligations_PUSH_Obligation) */

void zx_xa_Obligations_PUSH_Obligation(struct zx_xa_Obligations_s* x, struct zx_xa_Obligation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Obligation->gg.g;
  x->Obligation = z;
}

/* FUNC(zx_xa_Obligations_REV_Obligation) */

void zx_xa_Obligations_REV_Obligation(struct zx_xa_Obligations_s* x)
{
  struct zx_xa_Obligation_s* nxt;
  struct zx_xa_Obligation_s* y;
  if (!x) return;
  y = x->Obligation;
  if (!y) return;
  x->Obligation = 0;
  while (y) {
    nxt = (struct zx_xa_Obligation_s*)y->gg.g.n;
    y->gg.g.n = &x->Obligation->gg.g;
    x->Obligation = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Obligations_PUT_Obligation) */

void zx_xa_Obligations_PUT_Obligation(struct zx_xa_Obligations_s* x, int n, struct zx_xa_Obligation_s* z)
{
  struct zx_xa_Obligation_s* y;
  if (!x || !z) return;
  y = x->Obligation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Obligation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Obligation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Obligations_ADD_Obligation) */

void zx_xa_Obligations_ADD_Obligation(struct zx_xa_Obligations_s* x, int n, struct zx_xa_Obligation_s* z)
{
  struct zx_xa_Obligation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Obligation->gg.g;
    x->Obligation = z;
    return;
  case -1:
    y = x->Obligation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Obligation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Obligation; n > 1 && y; --n, y = (struct zx_xa_Obligation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Obligations_DEL_Obligation) */

void zx_xa_Obligations_DEL_Obligation(struct zx_xa_Obligations_s* x, int n)
{
  struct zx_xa_Obligation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Obligation = (struct zx_xa_Obligation_s*)x->Obligation->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Obligation_s*)x->Obligation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Obligation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Obligation; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Obligation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Policy_NUM_Description) */

int zx_xa_Policy_NUM_Description(struct zx_xa_Policy_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Description; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xa_Policy_GET_Description) */

struct zx_elem_s* zx_xa_Policy_GET_Description(struct zx_xa_Policy_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Description; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xa_Policy_POP_Description) */

struct zx_elem_s* zx_xa_Policy_POP_Description(struct zx_xa_Policy_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Description;
  if (y)
    x->Description = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xa_Policy_PUSH_Description) */

void zx_xa_Policy_PUSH_Description(struct zx_xa_Policy_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Description->g;
  x->Description = z;
}

/* FUNC(zx_xa_Policy_REV_Description) */

void zx_xa_Policy_REV_Description(struct zx_xa_Policy_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Description;
  if (!y) return;
  x->Description = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Description->g;
    x->Description = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Policy_PUT_Description) */

void zx_xa_Policy_PUT_Description(struct zx_xa_Policy_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Description;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Description = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xa_Policy_ADD_Description) */

void zx_xa_Policy_ADD_Description(struct zx_xa_Policy_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Description->g;
    x->Description = z;
    return;
  case -1:
    y = x->Description;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xa_Policy_DEL_Description) */

void zx_xa_Policy_DEL_Description(struct zx_xa_Policy_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Description = (struct zx_elem_s*)x->Description->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Description;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Policy_NUM_PolicyDefaults) */

int zx_xa_Policy_NUM_PolicyDefaults(struct zx_xa_Policy_s* x)
{
  struct zx_xa_PolicyDefaults_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyDefaults; y; ++n, y = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Policy_GET_PolicyDefaults) */

struct zx_xa_PolicyDefaults_s* zx_xa_Policy_GET_PolicyDefaults(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_PolicyDefaults_s* y;
  if (!x) return 0;
  for (y = x->PolicyDefaults; n>=0 && y; --n, y = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Policy_POP_PolicyDefaults) */

struct zx_xa_PolicyDefaults_s* zx_xa_Policy_POP_PolicyDefaults(struct zx_xa_Policy_s* x)
{
  struct zx_xa_PolicyDefaults_s* y;
  if (!x) return 0;
  y = x->PolicyDefaults;
  if (y)
    x->PolicyDefaults = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Policy_PUSH_PolicyDefaults) */

void zx_xa_Policy_PUSH_PolicyDefaults(struct zx_xa_Policy_s* x, struct zx_xa_PolicyDefaults_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyDefaults->gg.g;
  x->PolicyDefaults = z;
}

/* FUNC(zx_xa_Policy_REV_PolicyDefaults) */

void zx_xa_Policy_REV_PolicyDefaults(struct zx_xa_Policy_s* x)
{
  struct zx_xa_PolicyDefaults_s* nxt;
  struct zx_xa_PolicyDefaults_s* y;
  if (!x) return;
  y = x->PolicyDefaults;
  if (!y) return;
  x->PolicyDefaults = 0;
  while (y) {
    nxt = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicyDefaults->gg.g;
    x->PolicyDefaults = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Policy_PUT_PolicyDefaults) */

void zx_xa_Policy_PUT_PolicyDefaults(struct zx_xa_Policy_s* x, int n, struct zx_xa_PolicyDefaults_s* z)
{
  struct zx_xa_PolicyDefaults_s* y;
  if (!x || !z) return;
  y = x->PolicyDefaults;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicyDefaults = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Policy_ADD_PolicyDefaults) */

void zx_xa_Policy_ADD_PolicyDefaults(struct zx_xa_Policy_s* x, int n, struct zx_xa_PolicyDefaults_s* z)
{
  struct zx_xa_PolicyDefaults_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicyDefaults->gg.g;
    x->PolicyDefaults = z;
    return;
  case -1:
    y = x->PolicyDefaults;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyDefaults; n > 1 && y; --n, y = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Policy_DEL_PolicyDefaults) */

void zx_xa_Policy_DEL_PolicyDefaults(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_PolicyDefaults_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicyDefaults = (struct zx_xa_PolicyDefaults_s*)x->PolicyDefaults->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_PolicyDefaults_s*)x->PolicyDefaults;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyDefaults; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicyDefaults_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Policy_NUM_Target) */

int zx_xa_Policy_NUM_Target(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Target_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Target; y; ++n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Policy_GET_Target) */

struct zx_xa_Target_s* zx_xa_Policy_GET_Target(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_Target_s* y;
  if (!x) return 0;
  for (y = x->Target; n>=0 && y; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Policy_POP_Target) */

struct zx_xa_Target_s* zx_xa_Policy_POP_Target(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Target_s* y;
  if (!x) return 0;
  y = x->Target;
  if (y)
    x->Target = (struct zx_xa_Target_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Policy_PUSH_Target) */

void zx_xa_Policy_PUSH_Target(struct zx_xa_Policy_s* x, struct zx_xa_Target_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Target->gg.g;
  x->Target = z;
}

/* FUNC(zx_xa_Policy_REV_Target) */

void zx_xa_Policy_REV_Target(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Target_s* nxt;
  struct zx_xa_Target_s* y;
  if (!x) return;
  y = x->Target;
  if (!y) return;
  x->Target = 0;
  while (y) {
    nxt = (struct zx_xa_Target_s*)y->gg.g.n;
    y->gg.g.n = &x->Target->gg.g;
    x->Target = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Policy_PUT_Target) */

void zx_xa_Policy_PUT_Target(struct zx_xa_Policy_s* x, int n, struct zx_xa_Target_s* z)
{
  struct zx_xa_Target_s* y;
  if (!x || !z) return;
  y = x->Target;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Target = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Policy_ADD_Target) */

void zx_xa_Policy_ADD_Target(struct zx_xa_Policy_s* x, int n, struct zx_xa_Target_s* z)
{
  struct zx_xa_Target_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Target->gg.g;
    x->Target = z;
    return;
  case -1:
    y = x->Target;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Target; n > 1 && y; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Policy_DEL_Target) */

void zx_xa_Policy_DEL_Target(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_Target_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Target = (struct zx_xa_Target_s*)x->Target->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Target_s*)x->Target;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Target; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Policy_NUM_CombinerParameters) */

int zx_xa_Policy_NUM_CombinerParameters(struct zx_xa_Policy_s* x)
{
  struct zx_xa_CombinerParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CombinerParameters; y; ++n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Policy_GET_CombinerParameters) */

struct zx_xa_CombinerParameters_s* zx_xa_Policy_GET_CombinerParameters(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x) return 0;
  for (y = x->CombinerParameters; n>=0 && y; --n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Policy_POP_CombinerParameters) */

struct zx_xa_CombinerParameters_s* zx_xa_Policy_POP_CombinerParameters(struct zx_xa_Policy_s* x)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x) return 0;
  y = x->CombinerParameters;
  if (y)
    x->CombinerParameters = (struct zx_xa_CombinerParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Policy_PUSH_CombinerParameters) */

void zx_xa_Policy_PUSH_CombinerParameters(struct zx_xa_Policy_s* x, struct zx_xa_CombinerParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CombinerParameters->gg.g;
  x->CombinerParameters = z;
}

/* FUNC(zx_xa_Policy_REV_CombinerParameters) */

void zx_xa_Policy_REV_CombinerParameters(struct zx_xa_Policy_s* x)
{
  struct zx_xa_CombinerParameters_s* nxt;
  struct zx_xa_CombinerParameters_s* y;
  if (!x) return;
  y = x->CombinerParameters;
  if (!y) return;
  x->CombinerParameters = 0;
  while (y) {
    nxt = (struct zx_xa_CombinerParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->CombinerParameters->gg.g;
    x->CombinerParameters = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Policy_PUT_CombinerParameters) */

void zx_xa_Policy_PUT_CombinerParameters(struct zx_xa_Policy_s* x, int n, struct zx_xa_CombinerParameters_s* z)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x || !z) return;
  y = x->CombinerParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CombinerParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Policy_ADD_CombinerParameters) */

void zx_xa_Policy_ADD_CombinerParameters(struct zx_xa_Policy_s* x, int n, struct zx_xa_CombinerParameters_s* z)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CombinerParameters->gg.g;
    x->CombinerParameters = z;
    return;
  case -1:
    y = x->CombinerParameters;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameters; n > 1 && y; --n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Policy_DEL_CombinerParameters) */

void zx_xa_Policy_DEL_CombinerParameters(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CombinerParameters = (struct zx_xa_CombinerParameters_s*)x->CombinerParameters->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_CombinerParameters_s*)x->CombinerParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameters; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Policy_NUM_RuleCombinerParameters) */

int zx_xa_Policy_NUM_RuleCombinerParameters(struct zx_xa_Policy_s* x)
{
  struct zx_xa_RuleCombinerParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RuleCombinerParameters; y; ++n, y = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Policy_GET_RuleCombinerParameters) */

struct zx_xa_RuleCombinerParameters_s* zx_xa_Policy_GET_RuleCombinerParameters(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_RuleCombinerParameters_s* y;
  if (!x) return 0;
  for (y = x->RuleCombinerParameters; n>=0 && y; --n, y = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Policy_POP_RuleCombinerParameters) */

struct zx_xa_RuleCombinerParameters_s* zx_xa_Policy_POP_RuleCombinerParameters(struct zx_xa_Policy_s* x)
{
  struct zx_xa_RuleCombinerParameters_s* y;
  if (!x) return 0;
  y = x->RuleCombinerParameters;
  if (y)
    x->RuleCombinerParameters = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Policy_PUSH_RuleCombinerParameters) */

void zx_xa_Policy_PUSH_RuleCombinerParameters(struct zx_xa_Policy_s* x, struct zx_xa_RuleCombinerParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RuleCombinerParameters->gg.g;
  x->RuleCombinerParameters = z;
}

/* FUNC(zx_xa_Policy_REV_RuleCombinerParameters) */

void zx_xa_Policy_REV_RuleCombinerParameters(struct zx_xa_Policy_s* x)
{
  struct zx_xa_RuleCombinerParameters_s* nxt;
  struct zx_xa_RuleCombinerParameters_s* y;
  if (!x) return;
  y = x->RuleCombinerParameters;
  if (!y) return;
  x->RuleCombinerParameters = 0;
  while (y) {
    nxt = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->RuleCombinerParameters->gg.g;
    x->RuleCombinerParameters = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Policy_PUT_RuleCombinerParameters) */

void zx_xa_Policy_PUT_RuleCombinerParameters(struct zx_xa_Policy_s* x, int n, struct zx_xa_RuleCombinerParameters_s* z)
{
  struct zx_xa_RuleCombinerParameters_s* y;
  if (!x || !z) return;
  y = x->RuleCombinerParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RuleCombinerParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Policy_ADD_RuleCombinerParameters) */

void zx_xa_Policy_ADD_RuleCombinerParameters(struct zx_xa_Policy_s* x, int n, struct zx_xa_RuleCombinerParameters_s* z)
{
  struct zx_xa_RuleCombinerParameters_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RuleCombinerParameters->gg.g;
    x->RuleCombinerParameters = z;
    return;
  case -1:
    y = x->RuleCombinerParameters;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RuleCombinerParameters; n > 1 && y; --n, y = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Policy_DEL_RuleCombinerParameters) */

void zx_xa_Policy_DEL_RuleCombinerParameters(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_RuleCombinerParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RuleCombinerParameters = (struct zx_xa_RuleCombinerParameters_s*)x->RuleCombinerParameters->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_RuleCombinerParameters_s*)x->RuleCombinerParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RuleCombinerParameters; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_RuleCombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Policy_NUM_VariableDefinition) */

int zx_xa_Policy_NUM_VariableDefinition(struct zx_xa_Policy_s* x)
{
  struct zx_xa_VariableDefinition_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VariableDefinition; y; ++n, y = (struct zx_xa_VariableDefinition_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Policy_GET_VariableDefinition) */

struct zx_xa_VariableDefinition_s* zx_xa_Policy_GET_VariableDefinition(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_VariableDefinition_s* y;
  if (!x) return 0;
  for (y = x->VariableDefinition; n>=0 && y; --n, y = (struct zx_xa_VariableDefinition_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Policy_POP_VariableDefinition) */

struct zx_xa_VariableDefinition_s* zx_xa_Policy_POP_VariableDefinition(struct zx_xa_Policy_s* x)
{
  struct zx_xa_VariableDefinition_s* y;
  if (!x) return 0;
  y = x->VariableDefinition;
  if (y)
    x->VariableDefinition = (struct zx_xa_VariableDefinition_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Policy_PUSH_VariableDefinition) */

void zx_xa_Policy_PUSH_VariableDefinition(struct zx_xa_Policy_s* x, struct zx_xa_VariableDefinition_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->VariableDefinition->gg.g;
  x->VariableDefinition = z;
}

/* FUNC(zx_xa_Policy_REV_VariableDefinition) */

void zx_xa_Policy_REV_VariableDefinition(struct zx_xa_Policy_s* x)
{
  struct zx_xa_VariableDefinition_s* nxt;
  struct zx_xa_VariableDefinition_s* y;
  if (!x) return;
  y = x->VariableDefinition;
  if (!y) return;
  x->VariableDefinition = 0;
  while (y) {
    nxt = (struct zx_xa_VariableDefinition_s*)y->gg.g.n;
    y->gg.g.n = &x->VariableDefinition->gg.g;
    x->VariableDefinition = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Policy_PUT_VariableDefinition) */

void zx_xa_Policy_PUT_VariableDefinition(struct zx_xa_Policy_s* x, int n, struct zx_xa_VariableDefinition_s* z)
{
  struct zx_xa_VariableDefinition_s* y;
  if (!x || !z) return;
  y = x->VariableDefinition;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->VariableDefinition = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_VariableDefinition_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Policy_ADD_VariableDefinition) */

void zx_xa_Policy_ADD_VariableDefinition(struct zx_xa_Policy_s* x, int n, struct zx_xa_VariableDefinition_s* z)
{
  struct zx_xa_VariableDefinition_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->VariableDefinition->gg.g;
    x->VariableDefinition = z;
    return;
  case -1:
    y = x->VariableDefinition;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_VariableDefinition_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->VariableDefinition; n > 1 && y; --n, y = (struct zx_xa_VariableDefinition_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Policy_DEL_VariableDefinition) */

void zx_xa_Policy_DEL_VariableDefinition(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_VariableDefinition_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VariableDefinition = (struct zx_xa_VariableDefinition_s*)x->VariableDefinition->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_VariableDefinition_s*)x->VariableDefinition;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_VariableDefinition_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->VariableDefinition; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_VariableDefinition_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Policy_NUM_Rule) */

int zx_xa_Policy_NUM_Rule(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Rule_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Rule; y; ++n, y = (struct zx_xa_Rule_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Policy_GET_Rule) */

struct zx_xa_Rule_s* zx_xa_Policy_GET_Rule(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_Rule_s* y;
  if (!x) return 0;
  for (y = x->Rule; n>=0 && y; --n, y = (struct zx_xa_Rule_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Policy_POP_Rule) */

struct zx_xa_Rule_s* zx_xa_Policy_POP_Rule(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Rule_s* y;
  if (!x) return 0;
  y = x->Rule;
  if (y)
    x->Rule = (struct zx_xa_Rule_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Policy_PUSH_Rule) */

void zx_xa_Policy_PUSH_Rule(struct zx_xa_Policy_s* x, struct zx_xa_Rule_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Rule->gg.g;
  x->Rule = z;
}

/* FUNC(zx_xa_Policy_REV_Rule) */

void zx_xa_Policy_REV_Rule(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Rule_s* nxt;
  struct zx_xa_Rule_s* y;
  if (!x) return;
  y = x->Rule;
  if (!y) return;
  x->Rule = 0;
  while (y) {
    nxt = (struct zx_xa_Rule_s*)y->gg.g.n;
    y->gg.g.n = &x->Rule->gg.g;
    x->Rule = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Policy_PUT_Rule) */

void zx_xa_Policy_PUT_Rule(struct zx_xa_Policy_s* x, int n, struct zx_xa_Rule_s* z)
{
  struct zx_xa_Rule_s* y;
  if (!x || !z) return;
  y = x->Rule;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Rule = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Rule_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Policy_ADD_Rule) */

void zx_xa_Policy_ADD_Rule(struct zx_xa_Policy_s* x, int n, struct zx_xa_Rule_s* z)
{
  struct zx_xa_Rule_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Rule->gg.g;
    x->Rule = z;
    return;
  case -1:
    y = x->Rule;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Rule_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Rule; n > 1 && y; --n, y = (struct zx_xa_Rule_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Policy_DEL_Rule) */

void zx_xa_Policy_DEL_Rule(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_Rule_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Rule = (struct zx_xa_Rule_s*)x->Rule->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Rule_s*)x->Rule;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Rule_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Rule; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Rule_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Policy_NUM_Obligations) */

int zx_xa_Policy_NUM_Obligations(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Obligations_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Obligations; y; ++n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Policy_GET_Obligations) */

struct zx_xa_Obligations_s* zx_xa_Policy_GET_Obligations(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return 0;
  for (y = x->Obligations; n>=0 && y; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Policy_POP_Obligations) */

struct zx_xa_Obligations_s* zx_xa_Policy_POP_Obligations(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return 0;
  y = x->Obligations;
  if (y)
    x->Obligations = (struct zx_xa_Obligations_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Policy_PUSH_Obligations) */

void zx_xa_Policy_PUSH_Obligations(struct zx_xa_Policy_s* x, struct zx_xa_Obligations_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Obligations->gg.g;
  x->Obligations = z;
}

/* FUNC(zx_xa_Policy_REV_Obligations) */

void zx_xa_Policy_REV_Obligations(struct zx_xa_Policy_s* x)
{
  struct zx_xa_Obligations_s* nxt;
  struct zx_xa_Obligations_s* y;
  if (!x) return;
  y = x->Obligations;
  if (!y) return;
  x->Obligations = 0;
  while (y) {
    nxt = (struct zx_xa_Obligations_s*)y->gg.g.n;
    y->gg.g.n = &x->Obligations->gg.g;
    x->Obligations = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Policy_PUT_Obligations) */

void zx_xa_Policy_PUT_Obligations(struct zx_xa_Policy_s* x, int n, struct zx_xa_Obligations_s* z)
{
  struct zx_xa_Obligations_s* y;
  if (!x || !z) return;
  y = x->Obligations;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Obligations = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Policy_ADD_Obligations) */

void zx_xa_Policy_ADD_Obligations(struct zx_xa_Policy_s* x, int n, struct zx_xa_Obligations_s* z)
{
  struct zx_xa_Obligations_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Obligations->gg.g;
    x->Obligations = z;
    return;
  case -1:
    y = x->Obligations;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Obligations; n > 1 && y; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Policy_DEL_Obligations) */

void zx_xa_Policy_DEL_Obligations(struct zx_xa_Policy_s* x, int n)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Obligations = (struct zx_xa_Obligations_s*)x->Obligations->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Obligations_s*)x->Obligations;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Obligations; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_Policy_GET_PolicyId) */
struct zx_str* zx_xa_Policy_GET_PolicyId(struct zx_xa_Policy_s* x) { return x->PolicyId; }
/* FUNC(zx_xa_Policy_PUT_PolicyId) */
void zx_xa_Policy_PUT_PolicyId(struct zx_xa_Policy_s* x, struct zx_str* y) { x->PolicyId = y; }
/* FUNC(zx_xa_Policy_GET_RuleCombiningAlgId) */
struct zx_str* zx_xa_Policy_GET_RuleCombiningAlgId(struct zx_xa_Policy_s* x) { return x->RuleCombiningAlgId; }
/* FUNC(zx_xa_Policy_PUT_RuleCombiningAlgId) */
void zx_xa_Policy_PUT_RuleCombiningAlgId(struct zx_xa_Policy_s* x, struct zx_str* y) { x->RuleCombiningAlgId = y; }
/* FUNC(zx_xa_Policy_GET_Version) */
struct zx_str* zx_xa_Policy_GET_Version(struct zx_xa_Policy_s* x) { return x->Version; }
/* FUNC(zx_xa_Policy_PUT_Version) */
void zx_xa_Policy_PUT_Version(struct zx_xa_Policy_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicyCombinerParameters_NUM_CombinerParameter) */

int zx_xa_PolicyCombinerParameters_NUM_CombinerParameter(struct zx_xa_PolicyCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CombinerParameter; y; ++n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicyCombinerParameters_GET_CombinerParameter) */

struct zx_xa_CombinerParameter_s* zx_xa_PolicyCombinerParameters_GET_CombinerParameter(struct zx_xa_PolicyCombinerParameters_s* x, int n)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return 0;
  for (y = x->CombinerParameter; n>=0 && y; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicyCombinerParameters_POP_CombinerParameter) */

struct zx_xa_CombinerParameter_s* zx_xa_PolicyCombinerParameters_POP_CombinerParameter(struct zx_xa_PolicyCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return 0;
  y = x->CombinerParameter;
  if (y)
    x->CombinerParameter = (struct zx_xa_CombinerParameter_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicyCombinerParameters_PUSH_CombinerParameter) */

void zx_xa_PolicyCombinerParameters_PUSH_CombinerParameter(struct zx_xa_PolicyCombinerParameters_s* x, struct zx_xa_CombinerParameter_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CombinerParameter->gg.g;
  x->CombinerParameter = z;
}

/* FUNC(zx_xa_PolicyCombinerParameters_REV_CombinerParameter) */

void zx_xa_PolicyCombinerParameters_REV_CombinerParameter(struct zx_xa_PolicyCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* nxt;
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return;
  y = x->CombinerParameter;
  if (!y) return;
  x->CombinerParameter = 0;
  while (y) {
    nxt = (struct zx_xa_CombinerParameter_s*)y->gg.g.n;
    y->gg.g.n = &x->CombinerParameter->gg.g;
    x->CombinerParameter = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicyCombinerParameters_PUT_CombinerParameter) */

void zx_xa_PolicyCombinerParameters_PUT_CombinerParameter(struct zx_xa_PolicyCombinerParameters_s* x, int n, struct zx_xa_CombinerParameter_s* z)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x || !z) return;
  y = x->CombinerParameter;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CombinerParameter = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicyCombinerParameters_ADD_CombinerParameter) */

void zx_xa_PolicyCombinerParameters_ADD_CombinerParameter(struct zx_xa_PolicyCombinerParameters_s* x, int n, struct zx_xa_CombinerParameter_s* z)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CombinerParameter->gg.g;
    x->CombinerParameter = z;
    return;
  case -1:
    y = x->CombinerParameter;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameter; n > 1 && y; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicyCombinerParameters_DEL_CombinerParameter) */

void zx_xa_PolicyCombinerParameters_DEL_CombinerParameter(struct zx_xa_PolicyCombinerParameters_s* x, int n)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CombinerParameter = (struct zx_xa_CombinerParameter_s*)x->CombinerParameter->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_CombinerParameter_s*)x->CombinerParameter;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameter; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_PolicyCombinerParameters_GET_PolicyIdRef) */
struct zx_str* zx_xa_PolicyCombinerParameters_GET_PolicyIdRef(struct zx_xa_PolicyCombinerParameters_s* x) { return x->PolicyIdRef; }
/* FUNC(zx_xa_PolicyCombinerParameters_PUT_PolicyIdRef) */
void zx_xa_PolicyCombinerParameters_PUT_PolicyIdRef(struct zx_xa_PolicyCombinerParameters_s* x, struct zx_str* y) { x->PolicyIdRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicyDefaults_NUM_XPathVersion) */

int zx_xa_PolicyDefaults_NUM_XPathVersion(struct zx_xa_PolicyDefaults_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->XPathVersion; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicyDefaults_GET_XPathVersion) */

struct zx_elem_s* zx_xa_PolicyDefaults_GET_XPathVersion(struct zx_xa_PolicyDefaults_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->XPathVersion; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicyDefaults_POP_XPathVersion) */

struct zx_elem_s* zx_xa_PolicyDefaults_POP_XPathVersion(struct zx_xa_PolicyDefaults_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->XPathVersion;
  if (y)
    x->XPathVersion = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xa_PolicyDefaults_PUSH_XPathVersion) */

void zx_xa_PolicyDefaults_PUSH_XPathVersion(struct zx_xa_PolicyDefaults_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->XPathVersion->g;
  x->XPathVersion = z;
}

/* FUNC(zx_xa_PolicyDefaults_REV_XPathVersion) */

void zx_xa_PolicyDefaults_REV_XPathVersion(struct zx_xa_PolicyDefaults_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->XPathVersion;
  if (!y) return;
  x->XPathVersion = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->XPathVersion->g;
    x->XPathVersion = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicyDefaults_PUT_XPathVersion) */

void zx_xa_PolicyDefaults_PUT_XPathVersion(struct zx_xa_PolicyDefaults_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->XPathVersion;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->XPathVersion = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xa_PolicyDefaults_ADD_XPathVersion) */

void zx_xa_PolicyDefaults_ADD_XPathVersion(struct zx_xa_PolicyDefaults_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->XPathVersion->g;
    x->XPathVersion = z;
    return;
  case -1:
    y = x->XPathVersion;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->XPathVersion; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xa_PolicyDefaults_DEL_XPathVersion) */

void zx_xa_PolicyDefaults_DEL_XPathVersion(struct zx_xa_PolicyDefaults_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->XPathVersion = (struct zx_elem_s*)x->XPathVersion->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->XPathVersion;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->XPathVersion; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif






/* FUNC(zx_xa_PolicyIdReference_GET_EarliestVersion) */
struct zx_str* zx_xa_PolicyIdReference_GET_EarliestVersion(struct zx_xa_PolicyIdReference_s* x) { return x->EarliestVersion; }
/* FUNC(zx_xa_PolicyIdReference_PUT_EarliestVersion) */
void zx_xa_PolicyIdReference_PUT_EarliestVersion(struct zx_xa_PolicyIdReference_s* x, struct zx_str* y) { x->EarliestVersion = y; }
/* FUNC(zx_xa_PolicyIdReference_GET_LatestVersion) */
struct zx_str* zx_xa_PolicyIdReference_GET_LatestVersion(struct zx_xa_PolicyIdReference_s* x) { return x->LatestVersion; }
/* FUNC(zx_xa_PolicyIdReference_PUT_LatestVersion) */
void zx_xa_PolicyIdReference_PUT_LatestVersion(struct zx_xa_PolicyIdReference_s* x, struct zx_str* y) { x->LatestVersion = y; }
/* FUNC(zx_xa_PolicyIdReference_GET_Version) */
struct zx_str* zx_xa_PolicyIdReference_GET_Version(struct zx_xa_PolicyIdReference_s* x) { return x->Version; }
/* FUNC(zx_xa_PolicyIdReference_PUT_Version) */
void zx_xa_PolicyIdReference_PUT_Version(struct zx_xa_PolicyIdReference_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_Description) */

int zx_xa_PolicySet_NUM_Description(struct zx_xa_PolicySet_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Description; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_Description) */

struct zx_elem_s* zx_xa_PolicySet_GET_Description(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Description; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_Description) */

struct zx_elem_s* zx_xa_PolicySet_POP_Description(struct zx_xa_PolicySet_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Description;
  if (y)
    x->Description = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_Description) */

void zx_xa_PolicySet_PUSH_Description(struct zx_xa_PolicySet_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Description->g;
  x->Description = z;
}

/* FUNC(zx_xa_PolicySet_REV_Description) */

void zx_xa_PolicySet_REV_Description(struct zx_xa_PolicySet_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Description;
  if (!y) return;
  x->Description = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Description->g;
    x->Description = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_Description) */

void zx_xa_PolicySet_PUT_Description(struct zx_xa_PolicySet_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Description;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Description = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_Description) */

void zx_xa_PolicySet_ADD_Description(struct zx_xa_PolicySet_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Description->g;
    x->Description = z;
    return;
  case -1:
    y = x->Description;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xa_PolicySet_DEL_Description) */

void zx_xa_PolicySet_DEL_Description(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Description = (struct zx_elem_s*)x->Description->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Description;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_PolicySetDefaults) */

int zx_xa_PolicySet_NUM_PolicySetDefaults(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetDefaults_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicySetDefaults; y; ++n, y = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_PolicySetDefaults) */

struct zx_xa_PolicySetDefaults_s* zx_xa_PolicySet_GET_PolicySetDefaults(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicySetDefaults_s* y;
  if (!x) return 0;
  for (y = x->PolicySetDefaults; n>=0 && y; --n, y = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_PolicySetDefaults) */

struct zx_xa_PolicySetDefaults_s* zx_xa_PolicySet_POP_PolicySetDefaults(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetDefaults_s* y;
  if (!x) return 0;
  y = x->PolicySetDefaults;
  if (y)
    x->PolicySetDefaults = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_PolicySetDefaults) */

void zx_xa_PolicySet_PUSH_PolicySetDefaults(struct zx_xa_PolicySet_s* x, struct zx_xa_PolicySetDefaults_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicySetDefaults->gg.g;
  x->PolicySetDefaults = z;
}

/* FUNC(zx_xa_PolicySet_REV_PolicySetDefaults) */

void zx_xa_PolicySet_REV_PolicySetDefaults(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetDefaults_s* nxt;
  struct zx_xa_PolicySetDefaults_s* y;
  if (!x) return;
  y = x->PolicySetDefaults;
  if (!y) return;
  x->PolicySetDefaults = 0;
  while (y) {
    nxt = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicySetDefaults->gg.g;
    x->PolicySetDefaults = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_PolicySetDefaults) */

void zx_xa_PolicySet_PUT_PolicySetDefaults(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicySetDefaults_s* z)
{
  struct zx_xa_PolicySetDefaults_s* y;
  if (!x || !z) return;
  y = x->PolicySetDefaults;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicySetDefaults = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_PolicySetDefaults) */

void zx_xa_PolicySet_ADD_PolicySetDefaults(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicySetDefaults_s* z)
{
  struct zx_xa_PolicySetDefaults_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicySetDefaults->gg.g;
    x->PolicySetDefaults = z;
    return;
  case -1:
    y = x->PolicySetDefaults;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySetDefaults; n > 1 && y; --n, y = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_PolicySetDefaults) */

void zx_xa_PolicySet_DEL_PolicySetDefaults(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicySetDefaults_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicySetDefaults = (struct zx_xa_PolicySetDefaults_s*)x->PolicySetDefaults->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_PolicySetDefaults_s*)x->PolicySetDefaults;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySetDefaults; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySetDefaults_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_Target) */

int zx_xa_PolicySet_NUM_Target(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Target_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Target; y; ++n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_Target) */

struct zx_xa_Target_s* zx_xa_PolicySet_GET_Target(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_Target_s* y;
  if (!x) return 0;
  for (y = x->Target; n>=0 && y; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_Target) */

struct zx_xa_Target_s* zx_xa_PolicySet_POP_Target(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Target_s* y;
  if (!x) return 0;
  y = x->Target;
  if (y)
    x->Target = (struct zx_xa_Target_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_Target) */

void zx_xa_PolicySet_PUSH_Target(struct zx_xa_PolicySet_s* x, struct zx_xa_Target_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Target->gg.g;
  x->Target = z;
}

/* FUNC(zx_xa_PolicySet_REV_Target) */

void zx_xa_PolicySet_REV_Target(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Target_s* nxt;
  struct zx_xa_Target_s* y;
  if (!x) return;
  y = x->Target;
  if (!y) return;
  x->Target = 0;
  while (y) {
    nxt = (struct zx_xa_Target_s*)y->gg.g.n;
    y->gg.g.n = &x->Target->gg.g;
    x->Target = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_Target) */

void zx_xa_PolicySet_PUT_Target(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_Target_s* z)
{
  struct zx_xa_Target_s* y;
  if (!x || !z) return;
  y = x->Target;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Target = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_Target) */

void zx_xa_PolicySet_ADD_Target(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_Target_s* z)
{
  struct zx_xa_Target_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Target->gg.g;
    x->Target = z;
    return;
  case -1:
    y = x->Target;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Target; n > 1 && y; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_Target) */

void zx_xa_PolicySet_DEL_Target(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_Target_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Target = (struct zx_xa_Target_s*)x->Target->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Target_s*)x->Target;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Target; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_PolicySet) */

int zx_xa_PolicySet_NUM_PolicySet(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySet_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicySet; y; ++n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_PolicySet) */

struct zx_xa_PolicySet_s* zx_xa_PolicySet_GET_PolicySet(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicySet_s* y;
  if (!x) return 0;
  for (y = x->PolicySet; n>=0 && y; --n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_PolicySet) */

struct zx_xa_PolicySet_s* zx_xa_PolicySet_POP_PolicySet(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySet_s* y;
  if (!x) return 0;
  y = x->PolicySet;
  if (y)
    x->PolicySet = (struct zx_xa_PolicySet_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_PolicySet) */

void zx_xa_PolicySet_PUSH_PolicySet(struct zx_xa_PolicySet_s* x, struct zx_xa_PolicySet_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicySet->gg.g;
  x->PolicySet = z;
}

/* FUNC(zx_xa_PolicySet_REV_PolicySet) */

void zx_xa_PolicySet_REV_PolicySet(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySet_s* nxt;
  struct zx_xa_PolicySet_s* y;
  if (!x) return;
  y = x->PolicySet;
  if (!y) return;
  x->PolicySet = 0;
  while (y) {
    nxt = (struct zx_xa_PolicySet_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicySet->gg.g;
    x->PolicySet = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_PolicySet) */

void zx_xa_PolicySet_PUT_PolicySet(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicySet_s* z)
{
  struct zx_xa_PolicySet_s* y;
  if (!x || !z) return;
  y = x->PolicySet;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicySet = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_PolicySet) */

void zx_xa_PolicySet_ADD_PolicySet(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicySet_s* z)
{
  struct zx_xa_PolicySet_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicySet->gg.g;
    x->PolicySet = z;
    return;
  case -1:
    y = x->PolicySet;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySet; n > 1 && y; --n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_PolicySet) */

void zx_xa_PolicySet_DEL_PolicySet(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicySet_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicySet = (struct zx_xa_PolicySet_s*)x->PolicySet->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_PolicySet_s*)x->PolicySet;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySet; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySet_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_Policy) */

int zx_xa_PolicySet_NUM_Policy(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Policy_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Policy; y; ++n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_Policy) */

struct zx_xa_Policy_s* zx_xa_PolicySet_GET_Policy(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_Policy_s* y;
  if (!x) return 0;
  for (y = x->Policy; n>=0 && y; --n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_Policy) */

struct zx_xa_Policy_s* zx_xa_PolicySet_POP_Policy(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Policy_s* y;
  if (!x) return 0;
  y = x->Policy;
  if (y)
    x->Policy = (struct zx_xa_Policy_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_Policy) */

void zx_xa_PolicySet_PUSH_Policy(struct zx_xa_PolicySet_s* x, struct zx_xa_Policy_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Policy->gg.g;
  x->Policy = z;
}

/* FUNC(zx_xa_PolicySet_REV_Policy) */

void zx_xa_PolicySet_REV_Policy(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Policy_s* nxt;
  struct zx_xa_Policy_s* y;
  if (!x) return;
  y = x->Policy;
  if (!y) return;
  x->Policy = 0;
  while (y) {
    nxt = (struct zx_xa_Policy_s*)y->gg.g.n;
    y->gg.g.n = &x->Policy->gg.g;
    x->Policy = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_Policy) */

void zx_xa_PolicySet_PUT_Policy(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_Policy_s* z)
{
  struct zx_xa_Policy_s* y;
  if (!x || !z) return;
  y = x->Policy;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Policy = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_Policy) */

void zx_xa_PolicySet_ADD_Policy(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_Policy_s* z)
{
  struct zx_xa_Policy_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Policy->gg.g;
    x->Policy = z;
    return;
  case -1:
    y = x->Policy;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y; --n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_Policy) */

void zx_xa_PolicySet_DEL_Policy(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_Policy_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Policy = (struct zx_xa_Policy_s*)x->Policy->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Policy_s*)x->Policy;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Policy; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Policy_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_PolicySetIdReference) */

int zx_xa_PolicySet_NUM_PolicySetIdReference(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetIdReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicySetIdReference; y; ++n, y = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_PolicySetIdReference) */

struct zx_xa_PolicySetIdReference_s* zx_xa_PolicySet_GET_PolicySetIdReference(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicySetIdReference_s* y;
  if (!x) return 0;
  for (y = x->PolicySetIdReference; n>=0 && y; --n, y = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_PolicySetIdReference) */

struct zx_xa_PolicySetIdReference_s* zx_xa_PolicySet_POP_PolicySetIdReference(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetIdReference_s* y;
  if (!x) return 0;
  y = x->PolicySetIdReference;
  if (y)
    x->PolicySetIdReference = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_PolicySetIdReference) */

void zx_xa_PolicySet_PUSH_PolicySetIdReference(struct zx_xa_PolicySet_s* x, struct zx_xa_PolicySetIdReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicySetIdReference->gg.g;
  x->PolicySetIdReference = z;
}

/* FUNC(zx_xa_PolicySet_REV_PolicySetIdReference) */

void zx_xa_PolicySet_REV_PolicySetIdReference(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetIdReference_s* nxt;
  struct zx_xa_PolicySetIdReference_s* y;
  if (!x) return;
  y = x->PolicySetIdReference;
  if (!y) return;
  x->PolicySetIdReference = 0;
  while (y) {
    nxt = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicySetIdReference->gg.g;
    x->PolicySetIdReference = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_PolicySetIdReference) */

void zx_xa_PolicySet_PUT_PolicySetIdReference(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicySetIdReference_s* z)
{
  struct zx_xa_PolicySetIdReference_s* y;
  if (!x || !z) return;
  y = x->PolicySetIdReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicySetIdReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_PolicySetIdReference) */

void zx_xa_PolicySet_ADD_PolicySetIdReference(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicySetIdReference_s* z)
{
  struct zx_xa_PolicySetIdReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicySetIdReference->gg.g;
    x->PolicySetIdReference = z;
    return;
  case -1:
    y = x->PolicySetIdReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySetIdReference; n > 1 && y; --n, y = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_PolicySetIdReference) */

void zx_xa_PolicySet_DEL_PolicySetIdReference(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicySetIdReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicySetIdReference = (struct zx_xa_PolicySetIdReference_s*)x->PolicySetIdReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_PolicySetIdReference_s*)x->PolicySetIdReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySetIdReference; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySetIdReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_PolicyIdReference) */

int zx_xa_PolicySet_NUM_PolicyIdReference(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicyIdReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyIdReference; y; ++n, y = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_PolicyIdReference) */

struct zx_xa_PolicyIdReference_s* zx_xa_PolicySet_GET_PolicyIdReference(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicyIdReference_s* y;
  if (!x) return 0;
  for (y = x->PolicyIdReference; n>=0 && y; --n, y = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_PolicyIdReference) */

struct zx_xa_PolicyIdReference_s* zx_xa_PolicySet_POP_PolicyIdReference(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicyIdReference_s* y;
  if (!x) return 0;
  y = x->PolicyIdReference;
  if (y)
    x->PolicyIdReference = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_PolicyIdReference) */

void zx_xa_PolicySet_PUSH_PolicyIdReference(struct zx_xa_PolicySet_s* x, struct zx_xa_PolicyIdReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyIdReference->gg.g;
  x->PolicyIdReference = z;
}

/* FUNC(zx_xa_PolicySet_REV_PolicyIdReference) */

void zx_xa_PolicySet_REV_PolicyIdReference(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicyIdReference_s* nxt;
  struct zx_xa_PolicyIdReference_s* y;
  if (!x) return;
  y = x->PolicyIdReference;
  if (!y) return;
  x->PolicyIdReference = 0;
  while (y) {
    nxt = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicyIdReference->gg.g;
    x->PolicyIdReference = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_PolicyIdReference) */

void zx_xa_PolicySet_PUT_PolicyIdReference(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicyIdReference_s* z)
{
  struct zx_xa_PolicyIdReference_s* y;
  if (!x || !z) return;
  y = x->PolicyIdReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicyIdReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_PolicyIdReference) */

void zx_xa_PolicySet_ADD_PolicyIdReference(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicyIdReference_s* z)
{
  struct zx_xa_PolicyIdReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicyIdReference->gg.g;
    x->PolicyIdReference = z;
    return;
  case -1:
    y = x->PolicyIdReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyIdReference; n > 1 && y; --n, y = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_PolicyIdReference) */

void zx_xa_PolicySet_DEL_PolicyIdReference(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicyIdReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicyIdReference = (struct zx_xa_PolicyIdReference_s*)x->PolicyIdReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_PolicyIdReference_s*)x->PolicyIdReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyIdReference; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicyIdReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_CombinerParameters) */

int zx_xa_PolicySet_NUM_CombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_CombinerParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CombinerParameters; y; ++n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_CombinerParameters) */

struct zx_xa_CombinerParameters_s* zx_xa_PolicySet_GET_CombinerParameters(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x) return 0;
  for (y = x->CombinerParameters; n>=0 && y; --n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_CombinerParameters) */

struct zx_xa_CombinerParameters_s* zx_xa_PolicySet_POP_CombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x) return 0;
  y = x->CombinerParameters;
  if (y)
    x->CombinerParameters = (struct zx_xa_CombinerParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_CombinerParameters) */

void zx_xa_PolicySet_PUSH_CombinerParameters(struct zx_xa_PolicySet_s* x, struct zx_xa_CombinerParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CombinerParameters->gg.g;
  x->CombinerParameters = z;
}

/* FUNC(zx_xa_PolicySet_REV_CombinerParameters) */

void zx_xa_PolicySet_REV_CombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_CombinerParameters_s* nxt;
  struct zx_xa_CombinerParameters_s* y;
  if (!x) return;
  y = x->CombinerParameters;
  if (!y) return;
  x->CombinerParameters = 0;
  while (y) {
    nxt = (struct zx_xa_CombinerParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->CombinerParameters->gg.g;
    x->CombinerParameters = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_CombinerParameters) */

void zx_xa_PolicySet_PUT_CombinerParameters(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_CombinerParameters_s* z)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x || !z) return;
  y = x->CombinerParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CombinerParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_CombinerParameters) */

void zx_xa_PolicySet_ADD_CombinerParameters(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_CombinerParameters_s* z)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CombinerParameters->gg.g;
    x->CombinerParameters = z;
    return;
  case -1:
    y = x->CombinerParameters;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameters; n > 1 && y; --n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_CombinerParameters) */

void zx_xa_PolicySet_DEL_CombinerParameters(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_CombinerParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CombinerParameters = (struct zx_xa_CombinerParameters_s*)x->CombinerParameters->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_CombinerParameters_s*)x->CombinerParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameters; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_PolicyCombinerParameters) */

int zx_xa_PolicySet_NUM_PolicyCombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicyCombinerParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicyCombinerParameters; y; ++n, y = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_PolicyCombinerParameters) */

struct zx_xa_PolicyCombinerParameters_s* zx_xa_PolicySet_GET_PolicyCombinerParameters(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicyCombinerParameters_s* y;
  if (!x) return 0;
  for (y = x->PolicyCombinerParameters; n>=0 && y; --n, y = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_PolicyCombinerParameters) */

struct zx_xa_PolicyCombinerParameters_s* zx_xa_PolicySet_POP_PolicyCombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicyCombinerParameters_s* y;
  if (!x) return 0;
  y = x->PolicyCombinerParameters;
  if (y)
    x->PolicyCombinerParameters = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_PolicyCombinerParameters) */

void zx_xa_PolicySet_PUSH_PolicyCombinerParameters(struct zx_xa_PolicySet_s* x, struct zx_xa_PolicyCombinerParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicyCombinerParameters->gg.g;
  x->PolicyCombinerParameters = z;
}

/* FUNC(zx_xa_PolicySet_REV_PolicyCombinerParameters) */

void zx_xa_PolicySet_REV_PolicyCombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicyCombinerParameters_s* nxt;
  struct zx_xa_PolicyCombinerParameters_s* y;
  if (!x) return;
  y = x->PolicyCombinerParameters;
  if (!y) return;
  x->PolicyCombinerParameters = 0;
  while (y) {
    nxt = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicyCombinerParameters->gg.g;
    x->PolicyCombinerParameters = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_PolicyCombinerParameters) */

void zx_xa_PolicySet_PUT_PolicyCombinerParameters(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicyCombinerParameters_s* z)
{
  struct zx_xa_PolicyCombinerParameters_s* y;
  if (!x || !z) return;
  y = x->PolicyCombinerParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicyCombinerParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_PolicyCombinerParameters) */

void zx_xa_PolicySet_ADD_PolicyCombinerParameters(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicyCombinerParameters_s* z)
{
  struct zx_xa_PolicyCombinerParameters_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicyCombinerParameters->gg.g;
    x->PolicyCombinerParameters = z;
    return;
  case -1:
    y = x->PolicyCombinerParameters;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyCombinerParameters; n > 1 && y; --n, y = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_PolicyCombinerParameters) */

void zx_xa_PolicySet_DEL_PolicyCombinerParameters(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicyCombinerParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicyCombinerParameters = (struct zx_xa_PolicyCombinerParameters_s*)x->PolicyCombinerParameters->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_PolicyCombinerParameters_s*)x->PolicyCombinerParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicyCombinerParameters; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicyCombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_PolicySetCombinerParameters) */

int zx_xa_PolicySet_NUM_PolicySetCombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetCombinerParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PolicySetCombinerParameters; y; ++n, y = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_PolicySetCombinerParameters) */

struct zx_xa_PolicySetCombinerParameters_s* zx_xa_PolicySet_GET_PolicySetCombinerParameters(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicySetCombinerParameters_s* y;
  if (!x) return 0;
  for (y = x->PolicySetCombinerParameters; n>=0 && y; --n, y = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_PolicySetCombinerParameters) */

struct zx_xa_PolicySetCombinerParameters_s* zx_xa_PolicySet_POP_PolicySetCombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetCombinerParameters_s* y;
  if (!x) return 0;
  y = x->PolicySetCombinerParameters;
  if (y)
    x->PolicySetCombinerParameters = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_PolicySetCombinerParameters) */

void zx_xa_PolicySet_PUSH_PolicySetCombinerParameters(struct zx_xa_PolicySet_s* x, struct zx_xa_PolicySetCombinerParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PolicySetCombinerParameters->gg.g;
  x->PolicySetCombinerParameters = z;
}

/* FUNC(zx_xa_PolicySet_REV_PolicySetCombinerParameters) */

void zx_xa_PolicySet_REV_PolicySetCombinerParameters(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_PolicySetCombinerParameters_s* nxt;
  struct zx_xa_PolicySetCombinerParameters_s* y;
  if (!x) return;
  y = x->PolicySetCombinerParameters;
  if (!y) return;
  x->PolicySetCombinerParameters = 0;
  while (y) {
    nxt = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->PolicySetCombinerParameters->gg.g;
    x->PolicySetCombinerParameters = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_PolicySetCombinerParameters) */

void zx_xa_PolicySet_PUT_PolicySetCombinerParameters(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicySetCombinerParameters_s* z)
{
  struct zx_xa_PolicySetCombinerParameters_s* y;
  if (!x || !z) return;
  y = x->PolicySetCombinerParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PolicySetCombinerParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_PolicySetCombinerParameters) */

void zx_xa_PolicySet_ADD_PolicySetCombinerParameters(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_PolicySetCombinerParameters_s* z)
{
  struct zx_xa_PolicySetCombinerParameters_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PolicySetCombinerParameters->gg.g;
    x->PolicySetCombinerParameters = z;
    return;
  case -1:
    y = x->PolicySetCombinerParameters;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySetCombinerParameters; n > 1 && y; --n, y = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_PolicySetCombinerParameters) */

void zx_xa_PolicySet_DEL_PolicySetCombinerParameters(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_PolicySetCombinerParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PolicySetCombinerParameters = (struct zx_xa_PolicySetCombinerParameters_s*)x->PolicySetCombinerParameters->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_PolicySetCombinerParameters_s*)x->PolicySetCombinerParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PolicySetCombinerParameters; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_PolicySetCombinerParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySet_NUM_Obligations) */

int zx_xa_PolicySet_NUM_Obligations(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Obligations_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Obligations; y; ++n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySet_GET_Obligations) */

struct zx_xa_Obligations_s* zx_xa_PolicySet_GET_Obligations(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return 0;
  for (y = x->Obligations; n>=0 && y; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySet_POP_Obligations) */

struct zx_xa_Obligations_s* zx_xa_PolicySet_POP_Obligations(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return 0;
  y = x->Obligations;
  if (y)
    x->Obligations = (struct zx_xa_Obligations_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySet_PUSH_Obligations) */

void zx_xa_PolicySet_PUSH_Obligations(struct zx_xa_PolicySet_s* x, struct zx_xa_Obligations_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Obligations->gg.g;
  x->Obligations = z;
}

/* FUNC(zx_xa_PolicySet_REV_Obligations) */

void zx_xa_PolicySet_REV_Obligations(struct zx_xa_PolicySet_s* x)
{
  struct zx_xa_Obligations_s* nxt;
  struct zx_xa_Obligations_s* y;
  if (!x) return;
  y = x->Obligations;
  if (!y) return;
  x->Obligations = 0;
  while (y) {
    nxt = (struct zx_xa_Obligations_s*)y->gg.g.n;
    y->gg.g.n = &x->Obligations->gg.g;
    x->Obligations = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySet_PUT_Obligations) */

void zx_xa_PolicySet_PUT_Obligations(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_Obligations_s* z)
{
  struct zx_xa_Obligations_s* y;
  if (!x || !z) return;
  y = x->Obligations;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Obligations = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySet_ADD_Obligations) */

void zx_xa_PolicySet_ADD_Obligations(struct zx_xa_PolicySet_s* x, int n, struct zx_xa_Obligations_s* z)
{
  struct zx_xa_Obligations_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Obligations->gg.g;
    x->Obligations = z;
    return;
  case -1:
    y = x->Obligations;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Obligations; n > 1 && y; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySet_DEL_Obligations) */

void zx_xa_PolicySet_DEL_Obligations(struct zx_xa_PolicySet_s* x, int n)
{
  struct zx_xa_Obligations_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Obligations = (struct zx_xa_Obligations_s*)x->Obligations->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Obligations_s*)x->Obligations;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Obligations; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Obligations_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_PolicySet_GET_PolicyCombiningAlgId) */
struct zx_str* zx_xa_PolicySet_GET_PolicyCombiningAlgId(struct zx_xa_PolicySet_s* x) { return x->PolicyCombiningAlgId; }
/* FUNC(zx_xa_PolicySet_PUT_PolicyCombiningAlgId) */
void zx_xa_PolicySet_PUT_PolicyCombiningAlgId(struct zx_xa_PolicySet_s* x, struct zx_str* y) { x->PolicyCombiningAlgId = y; }
/* FUNC(zx_xa_PolicySet_GET_PolicySetId) */
struct zx_str* zx_xa_PolicySet_GET_PolicySetId(struct zx_xa_PolicySet_s* x) { return x->PolicySetId; }
/* FUNC(zx_xa_PolicySet_PUT_PolicySetId) */
void zx_xa_PolicySet_PUT_PolicySetId(struct zx_xa_PolicySet_s* x, struct zx_str* y) { x->PolicySetId = y; }
/* FUNC(zx_xa_PolicySet_GET_Version) */
struct zx_str* zx_xa_PolicySet_GET_Version(struct zx_xa_PolicySet_s* x) { return x->Version; }
/* FUNC(zx_xa_PolicySet_PUT_Version) */
void zx_xa_PolicySet_PUT_Version(struct zx_xa_PolicySet_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySetCombinerParameters_NUM_CombinerParameter) */

int zx_xa_PolicySetCombinerParameters_NUM_CombinerParameter(struct zx_xa_PolicySetCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CombinerParameter; y; ++n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySetCombinerParameters_GET_CombinerParameter) */

struct zx_xa_CombinerParameter_s* zx_xa_PolicySetCombinerParameters_GET_CombinerParameter(struct zx_xa_PolicySetCombinerParameters_s* x, int n)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return 0;
  for (y = x->CombinerParameter; n>=0 && y; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySetCombinerParameters_POP_CombinerParameter) */

struct zx_xa_CombinerParameter_s* zx_xa_PolicySetCombinerParameters_POP_CombinerParameter(struct zx_xa_PolicySetCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return 0;
  y = x->CombinerParameter;
  if (y)
    x->CombinerParameter = (struct zx_xa_CombinerParameter_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_PolicySetCombinerParameters_PUSH_CombinerParameter) */

void zx_xa_PolicySetCombinerParameters_PUSH_CombinerParameter(struct zx_xa_PolicySetCombinerParameters_s* x, struct zx_xa_CombinerParameter_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CombinerParameter->gg.g;
  x->CombinerParameter = z;
}

/* FUNC(zx_xa_PolicySetCombinerParameters_REV_CombinerParameter) */

void zx_xa_PolicySetCombinerParameters_REV_CombinerParameter(struct zx_xa_PolicySetCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* nxt;
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return;
  y = x->CombinerParameter;
  if (!y) return;
  x->CombinerParameter = 0;
  while (y) {
    nxt = (struct zx_xa_CombinerParameter_s*)y->gg.g.n;
    y->gg.g.n = &x->CombinerParameter->gg.g;
    x->CombinerParameter = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySetCombinerParameters_PUT_CombinerParameter) */

void zx_xa_PolicySetCombinerParameters_PUT_CombinerParameter(struct zx_xa_PolicySetCombinerParameters_s* x, int n, struct zx_xa_CombinerParameter_s* z)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x || !z) return;
  y = x->CombinerParameter;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CombinerParameter = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_PolicySetCombinerParameters_ADD_CombinerParameter) */

void zx_xa_PolicySetCombinerParameters_ADD_CombinerParameter(struct zx_xa_PolicySetCombinerParameters_s* x, int n, struct zx_xa_CombinerParameter_s* z)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CombinerParameter->gg.g;
    x->CombinerParameter = z;
    return;
  case -1:
    y = x->CombinerParameter;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameter; n > 1 && y; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_PolicySetCombinerParameters_DEL_CombinerParameter) */

void zx_xa_PolicySetCombinerParameters_DEL_CombinerParameter(struct zx_xa_PolicySetCombinerParameters_s* x, int n)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CombinerParameter = (struct zx_xa_CombinerParameter_s*)x->CombinerParameter->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_CombinerParameter_s*)x->CombinerParameter;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameter; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_PolicySetCombinerParameters_GET_PolicySetIdRef) */
struct zx_str* zx_xa_PolicySetCombinerParameters_GET_PolicySetIdRef(struct zx_xa_PolicySetCombinerParameters_s* x) { return x->PolicySetIdRef; }
/* FUNC(zx_xa_PolicySetCombinerParameters_PUT_PolicySetIdRef) */
void zx_xa_PolicySetCombinerParameters_PUT_PolicySetIdRef(struct zx_xa_PolicySetCombinerParameters_s* x, struct zx_str* y) { x->PolicySetIdRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_PolicySetDefaults_NUM_XPathVersion) */

int zx_xa_PolicySetDefaults_NUM_XPathVersion(struct zx_xa_PolicySetDefaults_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->XPathVersion; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xa_PolicySetDefaults_GET_XPathVersion) */

struct zx_elem_s* zx_xa_PolicySetDefaults_GET_XPathVersion(struct zx_xa_PolicySetDefaults_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->XPathVersion; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xa_PolicySetDefaults_POP_XPathVersion) */

struct zx_elem_s* zx_xa_PolicySetDefaults_POP_XPathVersion(struct zx_xa_PolicySetDefaults_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->XPathVersion;
  if (y)
    x->XPathVersion = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xa_PolicySetDefaults_PUSH_XPathVersion) */

void zx_xa_PolicySetDefaults_PUSH_XPathVersion(struct zx_xa_PolicySetDefaults_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->XPathVersion->g;
  x->XPathVersion = z;
}

/* FUNC(zx_xa_PolicySetDefaults_REV_XPathVersion) */

void zx_xa_PolicySetDefaults_REV_XPathVersion(struct zx_xa_PolicySetDefaults_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->XPathVersion;
  if (!y) return;
  x->XPathVersion = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->XPathVersion->g;
    x->XPathVersion = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_PolicySetDefaults_PUT_XPathVersion) */

void zx_xa_PolicySetDefaults_PUT_XPathVersion(struct zx_xa_PolicySetDefaults_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->XPathVersion;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->XPathVersion = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xa_PolicySetDefaults_ADD_XPathVersion) */

void zx_xa_PolicySetDefaults_ADD_XPathVersion(struct zx_xa_PolicySetDefaults_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->XPathVersion->g;
    x->XPathVersion = z;
    return;
  case -1:
    y = x->XPathVersion;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->XPathVersion; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xa_PolicySetDefaults_DEL_XPathVersion) */

void zx_xa_PolicySetDefaults_DEL_XPathVersion(struct zx_xa_PolicySetDefaults_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->XPathVersion = (struct zx_elem_s*)x->XPathVersion->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->XPathVersion;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->XPathVersion; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif






/* FUNC(zx_xa_PolicySetIdReference_GET_EarliestVersion) */
struct zx_str* zx_xa_PolicySetIdReference_GET_EarliestVersion(struct zx_xa_PolicySetIdReference_s* x) { return x->EarliestVersion; }
/* FUNC(zx_xa_PolicySetIdReference_PUT_EarliestVersion) */
void zx_xa_PolicySetIdReference_PUT_EarliestVersion(struct zx_xa_PolicySetIdReference_s* x, struct zx_str* y) { x->EarliestVersion = y; }
/* FUNC(zx_xa_PolicySetIdReference_GET_LatestVersion) */
struct zx_str* zx_xa_PolicySetIdReference_GET_LatestVersion(struct zx_xa_PolicySetIdReference_s* x) { return x->LatestVersion; }
/* FUNC(zx_xa_PolicySetIdReference_PUT_LatestVersion) */
void zx_xa_PolicySetIdReference_PUT_LatestVersion(struct zx_xa_PolicySetIdReference_s* x, struct zx_str* y) { x->LatestVersion = y; }
/* FUNC(zx_xa_PolicySetIdReference_GET_Version) */
struct zx_str* zx_xa_PolicySetIdReference_GET_Version(struct zx_xa_PolicySetIdReference_s* x) { return x->Version; }
/* FUNC(zx_xa_PolicySetIdReference_PUT_Version) */
void zx_xa_PolicySetIdReference_PUT_Version(struct zx_xa_PolicySetIdReference_s* x, struct zx_str* y) { x->Version = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Resource_NUM_ResourceMatch) */

int zx_xa_Resource_NUM_ResourceMatch(struct zx_xa_Resource_s* x)
{
  struct zx_xa_ResourceMatch_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceMatch; y; ++n, y = (struct zx_xa_ResourceMatch_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Resource_GET_ResourceMatch) */

struct zx_xa_ResourceMatch_s* zx_xa_Resource_GET_ResourceMatch(struct zx_xa_Resource_s* x, int n)
{
  struct zx_xa_ResourceMatch_s* y;
  if (!x) return 0;
  for (y = x->ResourceMatch; n>=0 && y; --n, y = (struct zx_xa_ResourceMatch_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Resource_POP_ResourceMatch) */

struct zx_xa_ResourceMatch_s* zx_xa_Resource_POP_ResourceMatch(struct zx_xa_Resource_s* x)
{
  struct zx_xa_ResourceMatch_s* y;
  if (!x) return 0;
  y = x->ResourceMatch;
  if (y)
    x->ResourceMatch = (struct zx_xa_ResourceMatch_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Resource_PUSH_ResourceMatch) */

void zx_xa_Resource_PUSH_ResourceMatch(struct zx_xa_Resource_s* x, struct zx_xa_ResourceMatch_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceMatch->gg.g;
  x->ResourceMatch = z;
}

/* FUNC(zx_xa_Resource_REV_ResourceMatch) */

void zx_xa_Resource_REV_ResourceMatch(struct zx_xa_Resource_s* x)
{
  struct zx_xa_ResourceMatch_s* nxt;
  struct zx_xa_ResourceMatch_s* y;
  if (!x) return;
  y = x->ResourceMatch;
  if (!y) return;
  x->ResourceMatch = 0;
  while (y) {
    nxt = (struct zx_xa_ResourceMatch_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceMatch->gg.g;
    x->ResourceMatch = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Resource_PUT_ResourceMatch) */

void zx_xa_Resource_PUT_ResourceMatch(struct zx_xa_Resource_s* x, int n, struct zx_xa_ResourceMatch_s* z)
{
  struct zx_xa_ResourceMatch_s* y;
  if (!x || !z) return;
  y = x->ResourceMatch;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceMatch = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_ResourceMatch_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Resource_ADD_ResourceMatch) */

void zx_xa_Resource_ADD_ResourceMatch(struct zx_xa_Resource_s* x, int n, struct zx_xa_ResourceMatch_s* z)
{
  struct zx_xa_ResourceMatch_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceMatch->gg.g;
    x->ResourceMatch = z;
    return;
  case -1:
    y = x->ResourceMatch;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_ResourceMatch_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceMatch; n > 1 && y; --n, y = (struct zx_xa_ResourceMatch_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Resource_DEL_ResourceMatch) */

void zx_xa_Resource_DEL_ResourceMatch(struct zx_xa_Resource_s* x, int n)
{
  struct zx_xa_ResourceMatch_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceMatch = (struct zx_xa_ResourceMatch_s*)x->ResourceMatch->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_ResourceMatch_s*)x->ResourceMatch;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_ResourceMatch_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceMatch; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_ResourceMatch_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_xa_ResourceAttributeDesignator_GET_AttributeId) */
struct zx_str* zx_xa_ResourceAttributeDesignator_GET_AttributeId(struct zx_xa_ResourceAttributeDesignator_s* x) { return x->AttributeId; }
/* FUNC(zx_xa_ResourceAttributeDesignator_PUT_AttributeId) */
void zx_xa_ResourceAttributeDesignator_PUT_AttributeId(struct zx_xa_ResourceAttributeDesignator_s* x, struct zx_str* y) { x->AttributeId = y; }
/* FUNC(zx_xa_ResourceAttributeDesignator_GET_DataType) */
struct zx_str* zx_xa_ResourceAttributeDesignator_GET_DataType(struct zx_xa_ResourceAttributeDesignator_s* x) { return x->DataType; }
/* FUNC(zx_xa_ResourceAttributeDesignator_PUT_DataType) */
void zx_xa_ResourceAttributeDesignator_PUT_DataType(struct zx_xa_ResourceAttributeDesignator_s* x, struct zx_str* y) { x->DataType = y; }
/* FUNC(zx_xa_ResourceAttributeDesignator_GET_Issuer) */
struct zx_str* zx_xa_ResourceAttributeDesignator_GET_Issuer(struct zx_xa_ResourceAttributeDesignator_s* x) { return x->Issuer; }
/* FUNC(zx_xa_ResourceAttributeDesignator_PUT_Issuer) */
void zx_xa_ResourceAttributeDesignator_PUT_Issuer(struct zx_xa_ResourceAttributeDesignator_s* x, struct zx_str* y) { x->Issuer = y; }
/* FUNC(zx_xa_ResourceAttributeDesignator_GET_MustBePresent) */
struct zx_str* zx_xa_ResourceAttributeDesignator_GET_MustBePresent(struct zx_xa_ResourceAttributeDesignator_s* x) { return x->MustBePresent; }
/* FUNC(zx_xa_ResourceAttributeDesignator_PUT_MustBePresent) */
void zx_xa_ResourceAttributeDesignator_PUT_MustBePresent(struct zx_xa_ResourceAttributeDesignator_s* x, struct zx_str* y) { x->MustBePresent = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_ResourceMatch_NUM_AttributeValue) */

int zx_xa_ResourceMatch_NUM_AttributeValue(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_ResourceMatch_GET_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_ResourceMatch_GET_AttributeValue(struct zx_xa_ResourceMatch_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_ResourceMatch_POP_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_ResourceMatch_POP_AttributeValue(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_ResourceMatch_PUSH_AttributeValue) */

void zx_xa_ResourceMatch_PUSH_AttributeValue(struct zx_xa_ResourceMatch_s* x, struct zx_xa_AttributeValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeValue->gg.g;
  x->AttributeValue = z;
}

/* FUNC(zx_xa_ResourceMatch_REV_AttributeValue) */

void zx_xa_ResourceMatch_REV_AttributeValue(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_AttributeValue_s* nxt;
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_ResourceMatch_PUT_AttributeValue) */

void zx_xa_ResourceMatch_PUT_AttributeValue(struct zx_xa_ResourceMatch_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_ResourceMatch_ADD_AttributeValue) */

void zx_xa_ResourceMatch_ADD_AttributeValue(struct zx_xa_ResourceMatch_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_ResourceMatch_DEL_AttributeValue) */

void zx_xa_ResourceMatch_DEL_AttributeValue(struct zx_xa_ResourceMatch_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)x->AttributeValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeValue_s*)x->AttributeValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_ResourceMatch_NUM_ResourceAttributeDesignator) */

int zx_xa_ResourceMatch_NUM_ResourceAttributeDesignator(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_ResourceAttributeDesignator_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResourceAttributeDesignator; y; ++n, y = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_ResourceMatch_GET_ResourceAttributeDesignator) */

struct zx_xa_ResourceAttributeDesignator_s* zx_xa_ResourceMatch_GET_ResourceAttributeDesignator(struct zx_xa_ResourceMatch_s* x, int n)
{
  struct zx_xa_ResourceAttributeDesignator_s* y;
  if (!x) return 0;
  for (y = x->ResourceAttributeDesignator; n>=0 && y; --n, y = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_ResourceMatch_POP_ResourceAttributeDesignator) */

struct zx_xa_ResourceAttributeDesignator_s* zx_xa_ResourceMatch_POP_ResourceAttributeDesignator(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_ResourceAttributeDesignator_s* y;
  if (!x) return 0;
  y = x->ResourceAttributeDesignator;
  if (y)
    x->ResourceAttributeDesignator = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_ResourceMatch_PUSH_ResourceAttributeDesignator) */

void zx_xa_ResourceMatch_PUSH_ResourceAttributeDesignator(struct zx_xa_ResourceMatch_s* x, struct zx_xa_ResourceAttributeDesignator_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResourceAttributeDesignator->gg.g;
  x->ResourceAttributeDesignator = z;
}

/* FUNC(zx_xa_ResourceMatch_REV_ResourceAttributeDesignator) */

void zx_xa_ResourceMatch_REV_ResourceAttributeDesignator(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_ResourceAttributeDesignator_s* nxt;
  struct zx_xa_ResourceAttributeDesignator_s* y;
  if (!x) return;
  y = x->ResourceAttributeDesignator;
  if (!y) return;
  x->ResourceAttributeDesignator = 0;
  while (y) {
    nxt = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n;
    y->gg.g.n = &x->ResourceAttributeDesignator->gg.g;
    x->ResourceAttributeDesignator = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_ResourceMatch_PUT_ResourceAttributeDesignator) */

void zx_xa_ResourceMatch_PUT_ResourceAttributeDesignator(struct zx_xa_ResourceMatch_s* x, int n, struct zx_xa_ResourceAttributeDesignator_s* z)
{
  struct zx_xa_ResourceAttributeDesignator_s* y;
  if (!x || !z) return;
  y = x->ResourceAttributeDesignator;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResourceAttributeDesignator = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_ResourceMatch_ADD_ResourceAttributeDesignator) */

void zx_xa_ResourceMatch_ADD_ResourceAttributeDesignator(struct zx_xa_ResourceMatch_s* x, int n, struct zx_xa_ResourceAttributeDesignator_s* z)
{
  struct zx_xa_ResourceAttributeDesignator_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResourceAttributeDesignator->gg.g;
    x->ResourceAttributeDesignator = z;
    return;
  case -1:
    y = x->ResourceAttributeDesignator;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceAttributeDesignator; n > 1 && y; --n, y = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_ResourceMatch_DEL_ResourceAttributeDesignator) */

void zx_xa_ResourceMatch_DEL_ResourceAttributeDesignator(struct zx_xa_ResourceMatch_s* x, int n)
{
  struct zx_xa_ResourceAttributeDesignator_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResourceAttributeDesignator = (struct zx_xa_ResourceAttributeDesignator_s*)x->ResourceAttributeDesignator->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_ResourceAttributeDesignator_s*)x->ResourceAttributeDesignator;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResourceAttributeDesignator; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_ResourceAttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_ResourceMatch_NUM_AttributeSelector) */

int zx_xa_ResourceMatch_NUM_AttributeSelector(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeSelector; y; ++n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_ResourceMatch_GET_AttributeSelector) */

struct zx_xa_AttributeSelector_s* zx_xa_ResourceMatch_GET_AttributeSelector(struct zx_xa_ResourceMatch_s* x, int n)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return 0;
  for (y = x->AttributeSelector; n>=0 && y; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_ResourceMatch_POP_AttributeSelector) */

struct zx_xa_AttributeSelector_s* zx_xa_ResourceMatch_POP_AttributeSelector(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return 0;
  y = x->AttributeSelector;
  if (y)
    x->AttributeSelector = (struct zx_xa_AttributeSelector_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_ResourceMatch_PUSH_AttributeSelector) */

void zx_xa_ResourceMatch_PUSH_AttributeSelector(struct zx_xa_ResourceMatch_s* x, struct zx_xa_AttributeSelector_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeSelector->gg.g;
  x->AttributeSelector = z;
}

/* FUNC(zx_xa_ResourceMatch_REV_AttributeSelector) */

void zx_xa_ResourceMatch_REV_AttributeSelector(struct zx_xa_ResourceMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* nxt;
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return;
  y = x->AttributeSelector;
  if (!y) return;
  x->AttributeSelector = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeSelector_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeSelector->gg.g;
    x->AttributeSelector = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_ResourceMatch_PUT_AttributeSelector) */

void zx_xa_ResourceMatch_PUT_AttributeSelector(struct zx_xa_ResourceMatch_s* x, int n, struct zx_xa_AttributeSelector_s* z)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x || !z) return;
  y = x->AttributeSelector;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeSelector = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_ResourceMatch_ADD_AttributeSelector) */

void zx_xa_ResourceMatch_ADD_AttributeSelector(struct zx_xa_ResourceMatch_s* x, int n, struct zx_xa_AttributeSelector_s* z)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeSelector->gg.g;
    x->AttributeSelector = z;
    return;
  case -1:
    y = x->AttributeSelector;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeSelector; n > 1 && y; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_ResourceMatch_DEL_AttributeSelector) */

void zx_xa_ResourceMatch_DEL_AttributeSelector(struct zx_xa_ResourceMatch_s* x, int n)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeSelector = (struct zx_xa_AttributeSelector_s*)x->AttributeSelector->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeSelector_s*)x->AttributeSelector;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeSelector; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_ResourceMatch_GET_MatchId) */
struct zx_str* zx_xa_ResourceMatch_GET_MatchId(struct zx_xa_ResourceMatch_s* x) { return x->MatchId; }
/* FUNC(zx_xa_ResourceMatch_PUT_MatchId) */
void zx_xa_ResourceMatch_PUT_MatchId(struct zx_xa_ResourceMatch_s* x, struct zx_str* y) { x->MatchId = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Resources_NUM_Resource) */

int zx_xa_Resources_NUM_Resource(struct zx_xa_Resources_s* x)
{
  struct zx_xa_Resource_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Resource; y; ++n, y = (struct zx_xa_Resource_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Resources_GET_Resource) */

struct zx_xa_Resource_s* zx_xa_Resources_GET_Resource(struct zx_xa_Resources_s* x, int n)
{
  struct zx_xa_Resource_s* y;
  if (!x) return 0;
  for (y = x->Resource; n>=0 && y; --n, y = (struct zx_xa_Resource_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Resources_POP_Resource) */

struct zx_xa_Resource_s* zx_xa_Resources_POP_Resource(struct zx_xa_Resources_s* x)
{
  struct zx_xa_Resource_s* y;
  if (!x) return 0;
  y = x->Resource;
  if (y)
    x->Resource = (struct zx_xa_Resource_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Resources_PUSH_Resource) */

void zx_xa_Resources_PUSH_Resource(struct zx_xa_Resources_s* x, struct zx_xa_Resource_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Resource->gg.g;
  x->Resource = z;
}

/* FUNC(zx_xa_Resources_REV_Resource) */

void zx_xa_Resources_REV_Resource(struct zx_xa_Resources_s* x)
{
  struct zx_xa_Resource_s* nxt;
  struct zx_xa_Resource_s* y;
  if (!x) return;
  y = x->Resource;
  if (!y) return;
  x->Resource = 0;
  while (y) {
    nxt = (struct zx_xa_Resource_s*)y->gg.g.n;
    y->gg.g.n = &x->Resource->gg.g;
    x->Resource = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Resources_PUT_Resource) */

void zx_xa_Resources_PUT_Resource(struct zx_xa_Resources_s* x, int n, struct zx_xa_Resource_s* z)
{
  struct zx_xa_Resource_s* y;
  if (!x || !z) return;
  y = x->Resource;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Resource = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Resource_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Resources_ADD_Resource) */

void zx_xa_Resources_ADD_Resource(struct zx_xa_Resources_s* x, int n, struct zx_xa_Resource_s* z)
{
  struct zx_xa_Resource_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Resource->gg.g;
    x->Resource = z;
    return;
  case -1:
    y = x->Resource;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Resource_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Resource; n > 1 && y; --n, y = (struct zx_xa_Resource_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Resources_DEL_Resource) */

void zx_xa_Resources_DEL_Resource(struct zx_xa_Resources_s* x, int n)
{
  struct zx_xa_Resource_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Resource = (struct zx_xa_Resource_s*)x->Resource->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Resource_s*)x->Resource;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Resource_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Resource; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Resource_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Rule_NUM_Description) */

int zx_xa_Rule_NUM_Description(struct zx_xa_Rule_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Description; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xa_Rule_GET_Description) */

struct zx_elem_s* zx_xa_Rule_GET_Description(struct zx_xa_Rule_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Description; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xa_Rule_POP_Description) */

struct zx_elem_s* zx_xa_Rule_POP_Description(struct zx_xa_Rule_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Description;
  if (y)
    x->Description = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xa_Rule_PUSH_Description) */

void zx_xa_Rule_PUSH_Description(struct zx_xa_Rule_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Description->g;
  x->Description = z;
}

/* FUNC(zx_xa_Rule_REV_Description) */

void zx_xa_Rule_REV_Description(struct zx_xa_Rule_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Description;
  if (!y) return;
  x->Description = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Description->g;
    x->Description = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Rule_PUT_Description) */

void zx_xa_Rule_PUT_Description(struct zx_xa_Rule_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Description;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Description = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xa_Rule_ADD_Description) */

void zx_xa_Rule_ADD_Description(struct zx_xa_Rule_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Description->g;
    x->Description = z;
    return;
  case -1:
    y = x->Description;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xa_Rule_DEL_Description) */

void zx_xa_Rule_DEL_Description(struct zx_xa_Rule_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Description = (struct zx_elem_s*)x->Description->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Description;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Description; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Rule_NUM_Target) */

int zx_xa_Rule_NUM_Target(struct zx_xa_Rule_s* x)
{
  struct zx_xa_Target_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Target; y; ++n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Rule_GET_Target) */

struct zx_xa_Target_s* zx_xa_Rule_GET_Target(struct zx_xa_Rule_s* x, int n)
{
  struct zx_xa_Target_s* y;
  if (!x) return 0;
  for (y = x->Target; n>=0 && y; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Rule_POP_Target) */

struct zx_xa_Target_s* zx_xa_Rule_POP_Target(struct zx_xa_Rule_s* x)
{
  struct zx_xa_Target_s* y;
  if (!x) return 0;
  y = x->Target;
  if (y)
    x->Target = (struct zx_xa_Target_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Rule_PUSH_Target) */

void zx_xa_Rule_PUSH_Target(struct zx_xa_Rule_s* x, struct zx_xa_Target_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Target->gg.g;
  x->Target = z;
}

/* FUNC(zx_xa_Rule_REV_Target) */

void zx_xa_Rule_REV_Target(struct zx_xa_Rule_s* x)
{
  struct zx_xa_Target_s* nxt;
  struct zx_xa_Target_s* y;
  if (!x) return;
  y = x->Target;
  if (!y) return;
  x->Target = 0;
  while (y) {
    nxt = (struct zx_xa_Target_s*)y->gg.g.n;
    y->gg.g.n = &x->Target->gg.g;
    x->Target = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Rule_PUT_Target) */

void zx_xa_Rule_PUT_Target(struct zx_xa_Rule_s* x, int n, struct zx_xa_Target_s* z)
{
  struct zx_xa_Target_s* y;
  if (!x || !z) return;
  y = x->Target;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Target = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Rule_ADD_Target) */

void zx_xa_Rule_ADD_Target(struct zx_xa_Rule_s* x, int n, struct zx_xa_Target_s* z)
{
  struct zx_xa_Target_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Target->gg.g;
    x->Target = z;
    return;
  case -1:
    y = x->Target;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Target; n > 1 && y; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Rule_DEL_Target) */

void zx_xa_Rule_DEL_Target(struct zx_xa_Rule_s* x, int n)
{
  struct zx_xa_Target_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Target = (struct zx_xa_Target_s*)x->Target->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Target_s*)x->Target;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Target; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Target_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Rule_NUM_Condition) */

int zx_xa_Rule_NUM_Condition(struct zx_xa_Rule_s* x)
{
  struct zx_xa_Condition_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Condition; y; ++n, y = (struct zx_xa_Condition_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Rule_GET_Condition) */

struct zx_xa_Condition_s* zx_xa_Rule_GET_Condition(struct zx_xa_Rule_s* x, int n)
{
  struct zx_xa_Condition_s* y;
  if (!x) return 0;
  for (y = x->Condition; n>=0 && y; --n, y = (struct zx_xa_Condition_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Rule_POP_Condition) */

struct zx_xa_Condition_s* zx_xa_Rule_POP_Condition(struct zx_xa_Rule_s* x)
{
  struct zx_xa_Condition_s* y;
  if (!x) return 0;
  y = x->Condition;
  if (y)
    x->Condition = (struct zx_xa_Condition_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Rule_PUSH_Condition) */

void zx_xa_Rule_PUSH_Condition(struct zx_xa_Rule_s* x, struct zx_xa_Condition_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Condition->gg.g;
  x->Condition = z;
}

/* FUNC(zx_xa_Rule_REV_Condition) */

void zx_xa_Rule_REV_Condition(struct zx_xa_Rule_s* x)
{
  struct zx_xa_Condition_s* nxt;
  struct zx_xa_Condition_s* y;
  if (!x) return;
  y = x->Condition;
  if (!y) return;
  x->Condition = 0;
  while (y) {
    nxt = (struct zx_xa_Condition_s*)y->gg.g.n;
    y->gg.g.n = &x->Condition->gg.g;
    x->Condition = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Rule_PUT_Condition) */

void zx_xa_Rule_PUT_Condition(struct zx_xa_Rule_s* x, int n, struct zx_xa_Condition_s* z)
{
  struct zx_xa_Condition_s* y;
  if (!x || !z) return;
  y = x->Condition;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Condition = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Condition_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Rule_ADD_Condition) */

void zx_xa_Rule_ADD_Condition(struct zx_xa_Rule_s* x, int n, struct zx_xa_Condition_s* z)
{
  struct zx_xa_Condition_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Condition->gg.g;
    x->Condition = z;
    return;
  case -1:
    y = x->Condition;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Condition_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Condition; n > 1 && y; --n, y = (struct zx_xa_Condition_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Rule_DEL_Condition) */

void zx_xa_Rule_DEL_Condition(struct zx_xa_Rule_s* x, int n)
{
  struct zx_xa_Condition_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Condition = (struct zx_xa_Condition_s*)x->Condition->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Condition_s*)x->Condition;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Condition_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Condition; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Condition_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_Rule_GET_Effect) */
struct zx_str* zx_xa_Rule_GET_Effect(struct zx_xa_Rule_s* x) { return x->Effect; }
/* FUNC(zx_xa_Rule_PUT_Effect) */
void zx_xa_Rule_PUT_Effect(struct zx_xa_Rule_s* x, struct zx_str* y) { x->Effect = y; }
/* FUNC(zx_xa_Rule_GET_RuleId) */
struct zx_str* zx_xa_Rule_GET_RuleId(struct zx_xa_Rule_s* x) { return x->RuleId; }
/* FUNC(zx_xa_Rule_PUT_RuleId) */
void zx_xa_Rule_PUT_RuleId(struct zx_xa_Rule_s* x, struct zx_str* y) { x->RuleId = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_RuleCombinerParameters_NUM_CombinerParameter) */

int zx_xa_RuleCombinerParameters_NUM_CombinerParameter(struct zx_xa_RuleCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CombinerParameter; y; ++n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_RuleCombinerParameters_GET_CombinerParameter) */

struct zx_xa_CombinerParameter_s* zx_xa_RuleCombinerParameters_GET_CombinerParameter(struct zx_xa_RuleCombinerParameters_s* x, int n)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return 0;
  for (y = x->CombinerParameter; n>=0 && y; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_RuleCombinerParameters_POP_CombinerParameter) */

struct zx_xa_CombinerParameter_s* zx_xa_RuleCombinerParameters_POP_CombinerParameter(struct zx_xa_RuleCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return 0;
  y = x->CombinerParameter;
  if (y)
    x->CombinerParameter = (struct zx_xa_CombinerParameter_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_RuleCombinerParameters_PUSH_CombinerParameter) */

void zx_xa_RuleCombinerParameters_PUSH_CombinerParameter(struct zx_xa_RuleCombinerParameters_s* x, struct zx_xa_CombinerParameter_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CombinerParameter->gg.g;
  x->CombinerParameter = z;
}

/* FUNC(zx_xa_RuleCombinerParameters_REV_CombinerParameter) */

void zx_xa_RuleCombinerParameters_REV_CombinerParameter(struct zx_xa_RuleCombinerParameters_s* x)
{
  struct zx_xa_CombinerParameter_s* nxt;
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return;
  y = x->CombinerParameter;
  if (!y) return;
  x->CombinerParameter = 0;
  while (y) {
    nxt = (struct zx_xa_CombinerParameter_s*)y->gg.g.n;
    y->gg.g.n = &x->CombinerParameter->gg.g;
    x->CombinerParameter = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_RuleCombinerParameters_PUT_CombinerParameter) */

void zx_xa_RuleCombinerParameters_PUT_CombinerParameter(struct zx_xa_RuleCombinerParameters_s* x, int n, struct zx_xa_CombinerParameter_s* z)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x || !z) return;
  y = x->CombinerParameter;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CombinerParameter = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_RuleCombinerParameters_ADD_CombinerParameter) */

void zx_xa_RuleCombinerParameters_ADD_CombinerParameter(struct zx_xa_RuleCombinerParameters_s* x, int n, struct zx_xa_CombinerParameter_s* z)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CombinerParameter->gg.g;
    x->CombinerParameter = z;
    return;
  case -1:
    y = x->CombinerParameter;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameter; n > 1 && y; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_RuleCombinerParameters_DEL_CombinerParameter) */

void zx_xa_RuleCombinerParameters_DEL_CombinerParameter(struct zx_xa_RuleCombinerParameters_s* x, int n)
{
  struct zx_xa_CombinerParameter_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CombinerParameter = (struct zx_xa_CombinerParameter_s*)x->CombinerParameter->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_CombinerParameter_s*)x->CombinerParameter;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CombinerParameter; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_CombinerParameter_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_RuleCombinerParameters_GET_RuleIdRef) */
struct zx_str* zx_xa_RuleCombinerParameters_GET_RuleIdRef(struct zx_xa_RuleCombinerParameters_s* x) { return x->RuleIdRef; }
/* FUNC(zx_xa_RuleCombinerParameters_PUT_RuleIdRef) */
void zx_xa_RuleCombinerParameters_PUT_RuleIdRef(struct zx_xa_RuleCombinerParameters_s* x, struct zx_str* y) { x->RuleIdRef = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Subject_NUM_SubjectMatch) */

int zx_xa_Subject_NUM_SubjectMatch(struct zx_xa_Subject_s* x)
{
  struct zx_xa_SubjectMatch_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectMatch; y; ++n, y = (struct zx_xa_SubjectMatch_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Subject_GET_SubjectMatch) */

struct zx_xa_SubjectMatch_s* zx_xa_Subject_GET_SubjectMatch(struct zx_xa_Subject_s* x, int n)
{
  struct zx_xa_SubjectMatch_s* y;
  if (!x) return 0;
  for (y = x->SubjectMatch; n>=0 && y; --n, y = (struct zx_xa_SubjectMatch_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Subject_POP_SubjectMatch) */

struct zx_xa_SubjectMatch_s* zx_xa_Subject_POP_SubjectMatch(struct zx_xa_Subject_s* x)
{
  struct zx_xa_SubjectMatch_s* y;
  if (!x) return 0;
  y = x->SubjectMatch;
  if (y)
    x->SubjectMatch = (struct zx_xa_SubjectMatch_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Subject_PUSH_SubjectMatch) */

void zx_xa_Subject_PUSH_SubjectMatch(struct zx_xa_Subject_s* x, struct zx_xa_SubjectMatch_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectMatch->gg.g;
  x->SubjectMatch = z;
}

/* FUNC(zx_xa_Subject_REV_SubjectMatch) */

void zx_xa_Subject_REV_SubjectMatch(struct zx_xa_Subject_s* x)
{
  struct zx_xa_SubjectMatch_s* nxt;
  struct zx_xa_SubjectMatch_s* y;
  if (!x) return;
  y = x->SubjectMatch;
  if (!y) return;
  x->SubjectMatch = 0;
  while (y) {
    nxt = (struct zx_xa_SubjectMatch_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectMatch->gg.g;
    x->SubjectMatch = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Subject_PUT_SubjectMatch) */

void zx_xa_Subject_PUT_SubjectMatch(struct zx_xa_Subject_s* x, int n, struct zx_xa_SubjectMatch_s* z)
{
  struct zx_xa_SubjectMatch_s* y;
  if (!x || !z) return;
  y = x->SubjectMatch;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectMatch = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_SubjectMatch_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Subject_ADD_SubjectMatch) */

void zx_xa_Subject_ADD_SubjectMatch(struct zx_xa_Subject_s* x, int n, struct zx_xa_SubjectMatch_s* z)
{
  struct zx_xa_SubjectMatch_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectMatch->gg.g;
    x->SubjectMatch = z;
    return;
  case -1:
    y = x->SubjectMatch;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_SubjectMatch_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectMatch; n > 1 && y; --n, y = (struct zx_xa_SubjectMatch_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Subject_DEL_SubjectMatch) */

void zx_xa_Subject_DEL_SubjectMatch(struct zx_xa_Subject_s* x, int n)
{
  struct zx_xa_SubjectMatch_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectMatch = (struct zx_xa_SubjectMatch_s*)x->SubjectMatch->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_SubjectMatch_s*)x->SubjectMatch;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_SubjectMatch_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectMatch; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_SubjectMatch_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* FUNC(zx_xa_SubjectAttributeDesignator_GET_AttributeId) */
struct zx_str* zx_xa_SubjectAttributeDesignator_GET_AttributeId(struct zx_xa_SubjectAttributeDesignator_s* x) { return x->AttributeId; }
/* FUNC(zx_xa_SubjectAttributeDesignator_PUT_AttributeId) */
void zx_xa_SubjectAttributeDesignator_PUT_AttributeId(struct zx_xa_SubjectAttributeDesignator_s* x, struct zx_str* y) { x->AttributeId = y; }
/* FUNC(zx_xa_SubjectAttributeDesignator_GET_DataType) */
struct zx_str* zx_xa_SubjectAttributeDesignator_GET_DataType(struct zx_xa_SubjectAttributeDesignator_s* x) { return x->DataType; }
/* FUNC(zx_xa_SubjectAttributeDesignator_PUT_DataType) */
void zx_xa_SubjectAttributeDesignator_PUT_DataType(struct zx_xa_SubjectAttributeDesignator_s* x, struct zx_str* y) { x->DataType = y; }
/* FUNC(zx_xa_SubjectAttributeDesignator_GET_Issuer) */
struct zx_str* zx_xa_SubjectAttributeDesignator_GET_Issuer(struct zx_xa_SubjectAttributeDesignator_s* x) { return x->Issuer; }
/* FUNC(zx_xa_SubjectAttributeDesignator_PUT_Issuer) */
void zx_xa_SubjectAttributeDesignator_PUT_Issuer(struct zx_xa_SubjectAttributeDesignator_s* x, struct zx_str* y) { x->Issuer = y; }
/* FUNC(zx_xa_SubjectAttributeDesignator_GET_MustBePresent) */
struct zx_str* zx_xa_SubjectAttributeDesignator_GET_MustBePresent(struct zx_xa_SubjectAttributeDesignator_s* x) { return x->MustBePresent; }
/* FUNC(zx_xa_SubjectAttributeDesignator_PUT_MustBePresent) */
void zx_xa_SubjectAttributeDesignator_PUT_MustBePresent(struct zx_xa_SubjectAttributeDesignator_s* x, struct zx_str* y) { x->MustBePresent = y; }
/* FUNC(zx_xa_SubjectAttributeDesignator_GET_SubjectCategory) */
struct zx_str* zx_xa_SubjectAttributeDesignator_GET_SubjectCategory(struct zx_xa_SubjectAttributeDesignator_s* x) { return x->SubjectCategory; }
/* FUNC(zx_xa_SubjectAttributeDesignator_PUT_SubjectCategory) */
void zx_xa_SubjectAttributeDesignator_PUT_SubjectCategory(struct zx_xa_SubjectAttributeDesignator_s* x, struct zx_str* y) { x->SubjectCategory = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_SubjectMatch_NUM_AttributeValue) */

int zx_xa_SubjectMatch_NUM_AttributeValue(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeValue; y; ++n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_SubjectMatch_GET_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_SubjectMatch_GET_AttributeValue(struct zx_xa_SubjectMatch_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  for (y = x->AttributeValue; n>=0 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_SubjectMatch_POP_AttributeValue) */

struct zx_xa_AttributeValue_s* zx_xa_SubjectMatch_POP_AttributeValue(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return 0;
  y = x->AttributeValue;
  if (y)
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_SubjectMatch_PUSH_AttributeValue) */

void zx_xa_SubjectMatch_PUSH_AttributeValue(struct zx_xa_SubjectMatch_s* x, struct zx_xa_AttributeValue_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeValue->gg.g;
  x->AttributeValue = z;
}

/* FUNC(zx_xa_SubjectMatch_REV_AttributeValue) */

void zx_xa_SubjectMatch_REV_AttributeValue(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_AttributeValue_s* nxt;
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  y = x->AttributeValue;
  if (!y) return;
  x->AttributeValue = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeValue_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_SubjectMatch_PUT_AttributeValue) */

void zx_xa_SubjectMatch_PUT_AttributeValue(struct zx_xa_SubjectMatch_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  y = x->AttributeValue;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeValue = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_SubjectMatch_ADD_AttributeValue) */

void zx_xa_SubjectMatch_ADD_AttributeValue(struct zx_xa_SubjectMatch_s* x, int n, struct zx_xa_AttributeValue_s* z)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeValue->gg.g;
    x->AttributeValue = z;
    return;
  case -1:
    y = x->AttributeValue;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_SubjectMatch_DEL_AttributeValue) */

void zx_xa_SubjectMatch_DEL_AttributeValue(struct zx_xa_SubjectMatch_s* x, int n)
{
  struct zx_xa_AttributeValue_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeValue = (struct zx_xa_AttributeValue_s*)x->AttributeValue->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeValue_s*)x->AttributeValue;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeValue; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeValue_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_SubjectMatch_NUM_SubjectAttributeDesignator) */

int zx_xa_SubjectMatch_NUM_SubjectAttributeDesignator(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_SubjectAttributeDesignator_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubjectAttributeDesignator; y; ++n, y = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_SubjectMatch_GET_SubjectAttributeDesignator) */

struct zx_xa_SubjectAttributeDesignator_s* zx_xa_SubjectMatch_GET_SubjectAttributeDesignator(struct zx_xa_SubjectMatch_s* x, int n)
{
  struct zx_xa_SubjectAttributeDesignator_s* y;
  if (!x) return 0;
  for (y = x->SubjectAttributeDesignator; n>=0 && y; --n, y = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_SubjectMatch_POP_SubjectAttributeDesignator) */

struct zx_xa_SubjectAttributeDesignator_s* zx_xa_SubjectMatch_POP_SubjectAttributeDesignator(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_SubjectAttributeDesignator_s* y;
  if (!x) return 0;
  y = x->SubjectAttributeDesignator;
  if (y)
    x->SubjectAttributeDesignator = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_SubjectMatch_PUSH_SubjectAttributeDesignator) */

void zx_xa_SubjectMatch_PUSH_SubjectAttributeDesignator(struct zx_xa_SubjectMatch_s* x, struct zx_xa_SubjectAttributeDesignator_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubjectAttributeDesignator->gg.g;
  x->SubjectAttributeDesignator = z;
}

/* FUNC(zx_xa_SubjectMatch_REV_SubjectAttributeDesignator) */

void zx_xa_SubjectMatch_REV_SubjectAttributeDesignator(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_SubjectAttributeDesignator_s* nxt;
  struct zx_xa_SubjectAttributeDesignator_s* y;
  if (!x) return;
  y = x->SubjectAttributeDesignator;
  if (!y) return;
  x->SubjectAttributeDesignator = 0;
  while (y) {
    nxt = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n;
    y->gg.g.n = &x->SubjectAttributeDesignator->gg.g;
    x->SubjectAttributeDesignator = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_SubjectMatch_PUT_SubjectAttributeDesignator) */

void zx_xa_SubjectMatch_PUT_SubjectAttributeDesignator(struct zx_xa_SubjectMatch_s* x, int n, struct zx_xa_SubjectAttributeDesignator_s* z)
{
  struct zx_xa_SubjectAttributeDesignator_s* y;
  if (!x || !z) return;
  y = x->SubjectAttributeDesignator;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubjectAttributeDesignator = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_SubjectMatch_ADD_SubjectAttributeDesignator) */

void zx_xa_SubjectMatch_ADD_SubjectAttributeDesignator(struct zx_xa_SubjectMatch_s* x, int n, struct zx_xa_SubjectAttributeDesignator_s* z)
{
  struct zx_xa_SubjectAttributeDesignator_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubjectAttributeDesignator->gg.g;
    x->SubjectAttributeDesignator = z;
    return;
  case -1:
    y = x->SubjectAttributeDesignator;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectAttributeDesignator; n > 1 && y; --n, y = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_SubjectMatch_DEL_SubjectAttributeDesignator) */

void zx_xa_SubjectMatch_DEL_SubjectAttributeDesignator(struct zx_xa_SubjectMatch_s* x, int n)
{
  struct zx_xa_SubjectAttributeDesignator_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubjectAttributeDesignator = (struct zx_xa_SubjectAttributeDesignator_s*)x->SubjectAttributeDesignator->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_SubjectAttributeDesignator_s*)x->SubjectAttributeDesignator;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubjectAttributeDesignator; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_SubjectAttributeDesignator_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_SubjectMatch_NUM_AttributeSelector) */

int zx_xa_SubjectMatch_NUM_AttributeSelector(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeSelector; y; ++n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_SubjectMatch_GET_AttributeSelector) */

struct zx_xa_AttributeSelector_s* zx_xa_SubjectMatch_GET_AttributeSelector(struct zx_xa_SubjectMatch_s* x, int n)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return 0;
  for (y = x->AttributeSelector; n>=0 && y; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_SubjectMatch_POP_AttributeSelector) */

struct zx_xa_AttributeSelector_s* zx_xa_SubjectMatch_POP_AttributeSelector(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return 0;
  y = x->AttributeSelector;
  if (y)
    x->AttributeSelector = (struct zx_xa_AttributeSelector_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_SubjectMatch_PUSH_AttributeSelector) */

void zx_xa_SubjectMatch_PUSH_AttributeSelector(struct zx_xa_SubjectMatch_s* x, struct zx_xa_AttributeSelector_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeSelector->gg.g;
  x->AttributeSelector = z;
}

/* FUNC(zx_xa_SubjectMatch_REV_AttributeSelector) */

void zx_xa_SubjectMatch_REV_AttributeSelector(struct zx_xa_SubjectMatch_s* x)
{
  struct zx_xa_AttributeSelector_s* nxt;
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return;
  y = x->AttributeSelector;
  if (!y) return;
  x->AttributeSelector = 0;
  while (y) {
    nxt = (struct zx_xa_AttributeSelector_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeSelector->gg.g;
    x->AttributeSelector = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_SubjectMatch_PUT_AttributeSelector) */

void zx_xa_SubjectMatch_PUT_AttributeSelector(struct zx_xa_SubjectMatch_s* x, int n, struct zx_xa_AttributeSelector_s* z)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x || !z) return;
  y = x->AttributeSelector;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeSelector = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_SubjectMatch_ADD_AttributeSelector) */

void zx_xa_SubjectMatch_ADD_AttributeSelector(struct zx_xa_SubjectMatch_s* x, int n, struct zx_xa_AttributeSelector_s* z)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeSelector->gg.g;
    x->AttributeSelector = z;
    return;
  case -1:
    y = x->AttributeSelector;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeSelector; n > 1 && y; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_SubjectMatch_DEL_AttributeSelector) */

void zx_xa_SubjectMatch_DEL_AttributeSelector(struct zx_xa_SubjectMatch_s* x, int n)
{
  struct zx_xa_AttributeSelector_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeSelector = (struct zx_xa_AttributeSelector_s*)x->AttributeSelector->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_AttributeSelector_s*)x->AttributeSelector;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeSelector; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_AttributeSelector_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_xa_SubjectMatch_GET_MatchId) */
struct zx_str* zx_xa_SubjectMatch_GET_MatchId(struct zx_xa_SubjectMatch_s* x) { return x->MatchId; }
/* FUNC(zx_xa_SubjectMatch_PUT_MatchId) */
void zx_xa_SubjectMatch_PUT_MatchId(struct zx_xa_SubjectMatch_s* x, struct zx_str* y) { x->MatchId = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Subjects_NUM_Subject) */

int zx_xa_Subjects_NUM_Subject(struct zx_xa_Subjects_s* x)
{
  struct zx_xa_Subject_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subject; y; ++n, y = (struct zx_xa_Subject_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Subjects_GET_Subject) */

struct zx_xa_Subject_s* zx_xa_Subjects_GET_Subject(struct zx_xa_Subjects_s* x, int n)
{
  struct zx_xa_Subject_s* y;
  if (!x) return 0;
  for (y = x->Subject; n>=0 && y; --n, y = (struct zx_xa_Subject_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Subjects_POP_Subject) */

struct zx_xa_Subject_s* zx_xa_Subjects_POP_Subject(struct zx_xa_Subjects_s* x)
{
  struct zx_xa_Subject_s* y;
  if (!x) return 0;
  y = x->Subject;
  if (y)
    x->Subject = (struct zx_xa_Subject_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Subjects_PUSH_Subject) */

void zx_xa_Subjects_PUSH_Subject(struct zx_xa_Subjects_s* x, struct zx_xa_Subject_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subject->gg.g;
  x->Subject = z;
}

/* FUNC(zx_xa_Subjects_REV_Subject) */

void zx_xa_Subjects_REV_Subject(struct zx_xa_Subjects_s* x)
{
  struct zx_xa_Subject_s* nxt;
  struct zx_xa_Subject_s* y;
  if (!x) return;
  y = x->Subject;
  if (!y) return;
  x->Subject = 0;
  while (y) {
    nxt = (struct zx_xa_Subject_s*)y->gg.g.n;
    y->gg.g.n = &x->Subject->gg.g;
    x->Subject = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Subjects_PUT_Subject) */

void zx_xa_Subjects_PUT_Subject(struct zx_xa_Subjects_s* x, int n, struct zx_xa_Subject_s* z)
{
  struct zx_xa_Subject_s* y;
  if (!x || !z) return;
  y = x->Subject;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subject = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Subjects_ADD_Subject) */

void zx_xa_Subjects_ADD_Subject(struct zx_xa_Subjects_s* x, int n, struct zx_xa_Subject_s* z)
{
  struct zx_xa_Subject_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subject->gg.g;
    x->Subject = z;
    return;
  case -1:
    y = x->Subject;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y; --n, y = (struct zx_xa_Subject_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Subjects_DEL_Subject) */

void zx_xa_Subjects_DEL_Subject(struct zx_xa_Subjects_s* x, int n)
{
  struct zx_xa_Subject_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subject = (struct zx_xa_Subject_s*)x->Subject->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Subject_s*)x->Subject;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Subject_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subject; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Subject_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Target_NUM_Subjects) */

int zx_xa_Target_NUM_Subjects(struct zx_xa_Target_s* x)
{
  struct zx_xa_Subjects_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Subjects; y; ++n, y = (struct zx_xa_Subjects_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Target_GET_Subjects) */

struct zx_xa_Subjects_s* zx_xa_Target_GET_Subjects(struct zx_xa_Target_s* x, int n)
{
  struct zx_xa_Subjects_s* y;
  if (!x) return 0;
  for (y = x->Subjects; n>=0 && y; --n, y = (struct zx_xa_Subjects_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Target_POP_Subjects) */

struct zx_xa_Subjects_s* zx_xa_Target_POP_Subjects(struct zx_xa_Target_s* x)
{
  struct zx_xa_Subjects_s* y;
  if (!x) return 0;
  y = x->Subjects;
  if (y)
    x->Subjects = (struct zx_xa_Subjects_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Target_PUSH_Subjects) */

void zx_xa_Target_PUSH_Subjects(struct zx_xa_Target_s* x, struct zx_xa_Subjects_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Subjects->gg.g;
  x->Subjects = z;
}

/* FUNC(zx_xa_Target_REV_Subjects) */

void zx_xa_Target_REV_Subjects(struct zx_xa_Target_s* x)
{
  struct zx_xa_Subjects_s* nxt;
  struct zx_xa_Subjects_s* y;
  if (!x) return;
  y = x->Subjects;
  if (!y) return;
  x->Subjects = 0;
  while (y) {
    nxt = (struct zx_xa_Subjects_s*)y->gg.g.n;
    y->gg.g.n = &x->Subjects->gg.g;
    x->Subjects = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Target_PUT_Subjects) */

void zx_xa_Target_PUT_Subjects(struct zx_xa_Target_s* x, int n, struct zx_xa_Subjects_s* z)
{
  struct zx_xa_Subjects_s* y;
  if (!x || !z) return;
  y = x->Subjects;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Subjects = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Subjects_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Target_ADD_Subjects) */

void zx_xa_Target_ADD_Subjects(struct zx_xa_Target_s* x, int n, struct zx_xa_Subjects_s* z)
{
  struct zx_xa_Subjects_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Subjects->gg.g;
    x->Subjects = z;
    return;
  case -1:
    y = x->Subjects;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Subjects_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subjects; n > 1 && y; --n, y = (struct zx_xa_Subjects_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Target_DEL_Subjects) */

void zx_xa_Target_DEL_Subjects(struct zx_xa_Target_s* x, int n)
{
  struct zx_xa_Subjects_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Subjects = (struct zx_xa_Subjects_s*)x->Subjects->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Subjects_s*)x->Subjects;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Subjects_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Subjects; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Subjects_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Target_NUM_Resources) */

int zx_xa_Target_NUM_Resources(struct zx_xa_Target_s* x)
{
  struct zx_xa_Resources_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Resources; y; ++n, y = (struct zx_xa_Resources_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Target_GET_Resources) */

struct zx_xa_Resources_s* zx_xa_Target_GET_Resources(struct zx_xa_Target_s* x, int n)
{
  struct zx_xa_Resources_s* y;
  if (!x) return 0;
  for (y = x->Resources; n>=0 && y; --n, y = (struct zx_xa_Resources_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Target_POP_Resources) */

struct zx_xa_Resources_s* zx_xa_Target_POP_Resources(struct zx_xa_Target_s* x)
{
  struct zx_xa_Resources_s* y;
  if (!x) return 0;
  y = x->Resources;
  if (y)
    x->Resources = (struct zx_xa_Resources_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Target_PUSH_Resources) */

void zx_xa_Target_PUSH_Resources(struct zx_xa_Target_s* x, struct zx_xa_Resources_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Resources->gg.g;
  x->Resources = z;
}

/* FUNC(zx_xa_Target_REV_Resources) */

void zx_xa_Target_REV_Resources(struct zx_xa_Target_s* x)
{
  struct zx_xa_Resources_s* nxt;
  struct zx_xa_Resources_s* y;
  if (!x) return;
  y = x->Resources;
  if (!y) return;
  x->Resources = 0;
  while (y) {
    nxt = (struct zx_xa_Resources_s*)y->gg.g.n;
    y->gg.g.n = &x->Resources->gg.g;
    x->Resources = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Target_PUT_Resources) */

void zx_xa_Target_PUT_Resources(struct zx_xa_Target_s* x, int n, struct zx_xa_Resources_s* z)
{
  struct zx_xa_Resources_s* y;
  if (!x || !z) return;
  y = x->Resources;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Resources = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Resources_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Target_ADD_Resources) */

void zx_xa_Target_ADD_Resources(struct zx_xa_Target_s* x, int n, struct zx_xa_Resources_s* z)
{
  struct zx_xa_Resources_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Resources->gg.g;
    x->Resources = z;
    return;
  case -1:
    y = x->Resources;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Resources_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Resources; n > 1 && y; --n, y = (struct zx_xa_Resources_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Target_DEL_Resources) */

void zx_xa_Target_DEL_Resources(struct zx_xa_Target_s* x, int n)
{
  struct zx_xa_Resources_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Resources = (struct zx_xa_Resources_s*)x->Resources->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Resources_s*)x->Resources;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Resources_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Resources; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Resources_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Target_NUM_Actions) */

int zx_xa_Target_NUM_Actions(struct zx_xa_Target_s* x)
{
  struct zx_xa_Actions_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Actions; y; ++n, y = (struct zx_xa_Actions_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Target_GET_Actions) */

struct zx_xa_Actions_s* zx_xa_Target_GET_Actions(struct zx_xa_Target_s* x, int n)
{
  struct zx_xa_Actions_s* y;
  if (!x) return 0;
  for (y = x->Actions; n>=0 && y; --n, y = (struct zx_xa_Actions_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Target_POP_Actions) */

struct zx_xa_Actions_s* zx_xa_Target_POP_Actions(struct zx_xa_Target_s* x)
{
  struct zx_xa_Actions_s* y;
  if (!x) return 0;
  y = x->Actions;
  if (y)
    x->Actions = (struct zx_xa_Actions_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Target_PUSH_Actions) */

void zx_xa_Target_PUSH_Actions(struct zx_xa_Target_s* x, struct zx_xa_Actions_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Actions->gg.g;
  x->Actions = z;
}

/* FUNC(zx_xa_Target_REV_Actions) */

void zx_xa_Target_REV_Actions(struct zx_xa_Target_s* x)
{
  struct zx_xa_Actions_s* nxt;
  struct zx_xa_Actions_s* y;
  if (!x) return;
  y = x->Actions;
  if (!y) return;
  x->Actions = 0;
  while (y) {
    nxt = (struct zx_xa_Actions_s*)y->gg.g.n;
    y->gg.g.n = &x->Actions->gg.g;
    x->Actions = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Target_PUT_Actions) */

void zx_xa_Target_PUT_Actions(struct zx_xa_Target_s* x, int n, struct zx_xa_Actions_s* z)
{
  struct zx_xa_Actions_s* y;
  if (!x || !z) return;
  y = x->Actions;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Actions = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Actions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Target_ADD_Actions) */

void zx_xa_Target_ADD_Actions(struct zx_xa_Target_s* x, int n, struct zx_xa_Actions_s* z)
{
  struct zx_xa_Actions_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Actions->gg.g;
    x->Actions = z;
    return;
  case -1:
    y = x->Actions;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Actions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Actions; n > 1 && y; --n, y = (struct zx_xa_Actions_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Target_DEL_Actions) */

void zx_xa_Target_DEL_Actions(struct zx_xa_Target_s* x, int n)
{
  struct zx_xa_Actions_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Actions = (struct zx_xa_Actions_s*)x->Actions->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Actions_s*)x->Actions;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Actions_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Actions; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Actions_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_Target_NUM_Environments) */

int zx_xa_Target_NUM_Environments(struct zx_xa_Target_s* x)
{
  struct zx_xa_Environments_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Environments; y; ++n, y = (struct zx_xa_Environments_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_xa_Target_GET_Environments) */

struct zx_xa_Environments_s* zx_xa_Target_GET_Environments(struct zx_xa_Target_s* x, int n)
{
  struct zx_xa_Environments_s* y;
  if (!x) return 0;
  for (y = x->Environments; n>=0 && y; --n, y = (struct zx_xa_Environments_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_xa_Target_POP_Environments) */

struct zx_xa_Environments_s* zx_xa_Target_POP_Environments(struct zx_xa_Target_s* x)
{
  struct zx_xa_Environments_s* y;
  if (!x) return 0;
  y = x->Environments;
  if (y)
    x->Environments = (struct zx_xa_Environments_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_xa_Target_PUSH_Environments) */

void zx_xa_Target_PUSH_Environments(struct zx_xa_Target_s* x, struct zx_xa_Environments_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Environments->gg.g;
  x->Environments = z;
}

/* FUNC(zx_xa_Target_REV_Environments) */

void zx_xa_Target_REV_Environments(struct zx_xa_Target_s* x)
{
  struct zx_xa_Environments_s* nxt;
  struct zx_xa_Environments_s* y;
  if (!x) return;
  y = x->Environments;
  if (!y) return;
  x->Environments = 0;
  while (y) {
    nxt = (struct zx_xa_Environments_s*)y->gg.g.n;
    y->gg.g.n = &x->Environments->gg.g;
    x->Environments = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_Target_PUT_Environments) */

void zx_xa_Target_PUT_Environments(struct zx_xa_Target_s* x, int n, struct zx_xa_Environments_s* z)
{
  struct zx_xa_Environments_s* y;
  if (!x || !z) return;
  y = x->Environments;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Environments = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Environments_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_xa_Target_ADD_Environments) */

void zx_xa_Target_ADD_Environments(struct zx_xa_Target_s* x, int n, struct zx_xa_Environments_s* z)
{
  struct zx_xa_Environments_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Environments->gg.g;
    x->Environments = z;
    return;
  case -1:
    y = x->Environments;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xa_Environments_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Environments; n > 1 && y; --n, y = (struct zx_xa_Environments_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_xa_Target_DEL_Environments) */

void zx_xa_Target_DEL_Environments(struct zx_xa_Target_s* x, int n)
{
  struct zx_xa_Environments_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Environments = (struct zx_xa_Environments_s*)x->Environments->gg.g.n;
    return;
  case -1:
    y = (struct zx_xa_Environments_s*)x->Environments;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xa_Environments_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Environments; n > 1 && y->gg.g.n; --n, y = (struct zx_xa_Environments_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_xa_VariableDefinition_NUM_Expression) */

int zx_xa_VariableDefinition_NUM_Expression(struct zx_xa_VariableDefinition_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Expression; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_xa_VariableDefinition_GET_Expression) */

struct zx_elem_s* zx_xa_VariableDefinition_GET_Expression(struct zx_xa_VariableDefinition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Expression; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_xa_VariableDefinition_POP_Expression) */

struct zx_elem_s* zx_xa_VariableDefinition_POP_Expression(struct zx_xa_VariableDefinition_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Expression;
  if (y)
    x->Expression = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_xa_VariableDefinition_PUSH_Expression) */

void zx_xa_VariableDefinition_PUSH_Expression(struct zx_xa_VariableDefinition_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Expression->g;
  x->Expression = z;
}

/* FUNC(zx_xa_VariableDefinition_REV_Expression) */

void zx_xa_VariableDefinition_REV_Expression(struct zx_xa_VariableDefinition_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Expression;
  if (!y) return;
  x->Expression = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Expression->g;
    x->Expression = y;
    y = nxt;
  }
}

/* FUNC(zx_xa_VariableDefinition_PUT_Expression) */

void zx_xa_VariableDefinition_PUT_Expression(struct zx_xa_VariableDefinition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Expression;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Expression = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_xa_VariableDefinition_ADD_Expression) */

void zx_xa_VariableDefinition_ADD_Expression(struct zx_xa_VariableDefinition_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Expression->g;
    x->Expression = z;
    return;
  case -1:
    y = x->Expression;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Expression; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_xa_VariableDefinition_DEL_Expression) */

void zx_xa_VariableDefinition_DEL_Expression(struct zx_xa_VariableDefinition_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Expression = (struct zx_elem_s*)x->Expression->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Expression;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Expression; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif

/* FUNC(zx_xa_VariableDefinition_GET_VariableId) */
struct zx_str* zx_xa_VariableDefinition_GET_VariableId(struct zx_xa_VariableDefinition_s* x) { return x->VariableId; }
/* FUNC(zx_xa_VariableDefinition_PUT_VariableId) */
void zx_xa_VariableDefinition_PUT_VariableId(struct zx_xa_VariableDefinition_s* x, struct zx_str* y) { x->VariableId = y; }





/* FUNC(zx_xa_VariableReference_GET_VariableId) */
struct zx_str* zx_xa_VariableReference_GET_VariableId(struct zx_xa_VariableReference_s* x) { return x->VariableId; }
/* FUNC(zx_xa_VariableReference_PUT_VariableId) */
void zx_xa_VariableReference_PUT_VariableId(struct zx_xa_VariableReference_s* x, struct zx_str* y) { x->VariableId = y; }





/* EOF -- c/zx-xa-getput.c */