/* c/zx-e-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
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
#include "c/zx-e-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ArtifactResolve) */

int zx_e_Body_NUM_ArtifactResolve(struct zx_e_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResolve; y; ++n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ArtifactResolve) */

struct zx_sp_ArtifactResolve_s* zx_e_Body_GET_ArtifactResolve(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResolve; n>=0 && y; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ArtifactResolve) */

struct zx_sp_ArtifactResolve_s* zx_e_Body_POP_ArtifactResolve(struct zx_e_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return 0;
  y = x->ArtifactResolve;
  if (y)
    x->ArtifactResolve = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ArtifactResolve) */

void zx_e_Body_PUSH_ArtifactResolve(struct zx_e_Body_s* x, struct zx_sp_ArtifactResolve_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResolve->gg.g;
  x->ArtifactResolve = z;
}

/* FUNC(zx_e_Body_REV_ArtifactResolve) */

void zx_e_Body_REV_ArtifactResolve(struct zx_e_Body_s* x)
{
  struct zx_sp_ArtifactResolve_s* nxt;
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return;
  y = x->ArtifactResolve;
  if (!y) return;
  x->ArtifactResolve = 0;
  while (y) {
    nxt = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResolve->gg.g;
    x->ArtifactResolve = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ArtifactResolve) */

void zx_e_Body_PUT_ArtifactResolve(struct zx_e_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x || !z) return;
  y = x->ArtifactResolve;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResolve = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ArtifactResolve) */

void zx_e_Body_ADD_ArtifactResolve(struct zx_e_Body_s* x, int n, struct zx_sp_ArtifactResolve_s* z)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ArtifactResolve->gg.g;
    x->ArtifactResolve = z;
    return;
  case -1:
    y = x->ArtifactResolve;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolve; n > 1 && y; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ArtifactResolve) */

void zx_e_Body_DEL_ArtifactResolve(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_ArtifactResolve_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResolve = (struct zx_sp_ArtifactResolve_s*)x->ArtifactResolve->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ArtifactResolve_s*)x->ArtifactResolve;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResolve; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResolve_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ArtifactResponse) */

int zx_e_Body_NUM_ArtifactResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ArtifactResponse; y; ++n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ArtifactResponse) */

struct zx_sp_ArtifactResponse_s* zx_e_Body_GET_ArtifactResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return 0;
  for (y = x->ArtifactResponse; n>=0 && y; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ArtifactResponse) */

struct zx_sp_ArtifactResponse_s* zx_e_Body_POP_ArtifactResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return 0;
  y = x->ArtifactResponse;
  if (y)
    x->ArtifactResponse = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ArtifactResponse) */

void zx_e_Body_PUSH_ArtifactResponse(struct zx_e_Body_s* x, struct zx_sp_ArtifactResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ArtifactResponse->gg.g;
  x->ArtifactResponse = z;
}

/* FUNC(zx_e_Body_REV_ArtifactResponse) */

void zx_e_Body_REV_ArtifactResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_ArtifactResponse_s* nxt;
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return;
  y = x->ArtifactResponse;
  if (!y) return;
  x->ArtifactResponse = 0;
  while (y) {
    nxt = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ArtifactResponse->gg.g;
    x->ArtifactResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ArtifactResponse) */

void zx_e_Body_PUT_ArtifactResponse(struct zx_e_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x || !z) return;
  y = x->ArtifactResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ArtifactResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ArtifactResponse) */

void zx_e_Body_ADD_ArtifactResponse(struct zx_e_Body_s* x, int n, struct zx_sp_ArtifactResponse_s* z)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ArtifactResponse->gg.g;
    x->ArtifactResponse = z;
    return;
  case -1:
    y = x->ArtifactResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResponse; n > 1 && y; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ArtifactResponse) */

void zx_e_Body_DEL_ArtifactResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_ArtifactResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ArtifactResponse = (struct zx_sp_ArtifactResponse_s*)x->ArtifactResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ArtifactResponse_s*)x->ArtifactResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ArtifactResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ArtifactResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ManageNameIDRequest) */

int zx_e_Body_NUM_ManageNameIDRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; y; ++n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_e_Body_GET_ManageNameIDRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_e_Body_POP_ManageNameIDRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  y = x->ManageNameIDRequest;
  if (y)
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ManageNameIDRequest) */

void zx_e_Body_PUSH_ManageNameIDRequest(struct zx_e_Body_s* x, struct zx_sp_ManageNameIDRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDRequest->gg.g;
  x->ManageNameIDRequest = z;
}

/* FUNC(zx_e_Body_REV_ManageNameIDRequest) */

void zx_e_Body_REV_ManageNameIDRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* nxt;
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  x->ManageNameIDRequest = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ManageNameIDRequest) */

void zx_e_Body_PUT_ManageNameIDRequest(struct zx_e_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ManageNameIDRequest) */

void zx_e_Body_ADD_ManageNameIDRequest(struct zx_e_Body_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = z;
    return;
  case -1:
    y = x->ManageNameIDRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ManageNameIDRequest) */

void zx_e_Body_DEL_ManageNameIDRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ManageNameIDResponse) */

int zx_e_Body_NUM_ManageNameIDResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; y; ++n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_e_Body_GET_ManageNameIDResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_e_Body_POP_ManageNameIDResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  y = x->ManageNameIDResponse;
  if (y)
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ManageNameIDResponse) */

void zx_e_Body_PUSH_ManageNameIDResponse(struct zx_e_Body_s* x, struct zx_sp_ManageNameIDResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDResponse->gg.g;
  x->ManageNameIDResponse = z;
}

/* FUNC(zx_e_Body_REV_ManageNameIDResponse) */

void zx_e_Body_REV_ManageNameIDResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* nxt;
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  x->ManageNameIDResponse = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ManageNameIDResponse) */

void zx_e_Body_PUT_ManageNameIDResponse(struct zx_e_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ManageNameIDResponse) */

void zx_e_Body_ADD_ManageNameIDResponse(struct zx_e_Body_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = z;
    return;
  case -1:
    y = x->ManageNameIDResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ManageNameIDResponse) */

void zx_e_Body_DEL_ManageNameIDResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_LogoutRequest) */

int zx_e_Body_NUM_LogoutRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutRequest; y; ++n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_e_Body_GET_LogoutRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  for (y = x->LogoutRequest; n>=0 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_e_Body_POP_LogoutRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  y = x->LogoutRequest;
  if (y)
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_LogoutRequest) */

void zx_e_Body_PUSH_LogoutRequest(struct zx_e_Body_s* x, struct zx_sp_LogoutRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutRequest->gg.g;
  x->LogoutRequest = z;
}

/* FUNC(zx_e_Body_REV_LogoutRequest) */

void zx_e_Body_REV_LogoutRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_LogoutRequest_s* nxt;
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  y = x->LogoutRequest;
  if (!y) return;
  x->LogoutRequest = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_LogoutRequest) */

void zx_e_Body_PUT_LogoutRequest(struct zx_e_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  y = x->LogoutRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_LogoutRequest) */

void zx_e_Body_ADD_LogoutRequest(struct zx_e_Body_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = z;
    return;
  case -1:
    y = x->LogoutRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_LogoutRequest) */

void zx_e_Body_DEL_LogoutRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_LogoutResponse) */

int zx_e_Body_NUM_LogoutResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutResponse; y; ++n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_e_Body_GET_LogoutResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  for (y = x->LogoutResponse; n>=0 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_e_Body_POP_LogoutResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  y = x->LogoutResponse;
  if (y)
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_LogoutResponse) */

void zx_e_Body_PUSH_LogoutResponse(struct zx_e_Body_s* x, struct zx_sp_LogoutResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutResponse->gg.g;
  x->LogoutResponse = z;
}

/* FUNC(zx_e_Body_REV_LogoutResponse) */

void zx_e_Body_REV_LogoutResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_LogoutResponse_s* nxt;
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  y = x->LogoutResponse;
  if (!y) return;
  x->LogoutResponse = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_LogoutResponse) */

void zx_e_Body_PUT_LogoutResponse(struct zx_e_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  y = x->LogoutResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_LogoutResponse) */

void zx_e_Body_ADD_LogoutResponse(struct zx_e_Body_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = z;
    return;
  case -1:
    y = x->LogoutResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_LogoutResponse) */

void zx_e_Body_DEL_LogoutResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_NameIDMappingRequest) */

int zx_e_Body_NUM_NameIDMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDMappingRequest; y; ++n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_NameIDMappingRequest) */

struct zx_sp_NameIDMappingRequest_s* zx_e_Body_GET_NameIDMappingRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return 0;
  for (y = x->NameIDMappingRequest; n>=0 && y; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_NameIDMappingRequest) */

struct zx_sp_NameIDMappingRequest_s* zx_e_Body_POP_NameIDMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return 0;
  y = x->NameIDMappingRequest;
  if (y)
    x->NameIDMappingRequest = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_NameIDMappingRequest) */

void zx_e_Body_PUSH_NameIDMappingRequest(struct zx_e_Body_s* x, struct zx_sp_NameIDMappingRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDMappingRequest->gg.g;
  x->NameIDMappingRequest = z;
}

/* FUNC(zx_e_Body_REV_NameIDMappingRequest) */

void zx_e_Body_REV_NameIDMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_NameIDMappingRequest_s* nxt;
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return;
  y = x->NameIDMappingRequest;
  if (!y) return;
  x->NameIDMappingRequest = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDMappingRequest->gg.g;
    x->NameIDMappingRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_NameIDMappingRequest) */

void zx_e_Body_PUT_NameIDMappingRequest(struct zx_e_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x || !z) return;
  y = x->NameIDMappingRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDMappingRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_NameIDMappingRequest) */

void zx_e_Body_ADD_NameIDMappingRequest(struct zx_e_Body_s* x, int n, struct zx_sp_NameIDMappingRequest_s* z)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDMappingRequest->gg.g;
    x->NameIDMappingRequest = z;
    return;
  case -1:
    y = x->NameIDMappingRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingRequest; n > 1 && y; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_NameIDMappingRequest) */

void zx_e_Body_DEL_NameIDMappingRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDMappingRequest = (struct zx_sp_NameIDMappingRequest_s*)x->NameIDMappingRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDMappingRequest_s*)x->NameIDMappingRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_NameIDMappingResponse) */

int zx_e_Body_NUM_NameIDMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIDMappingResponse; y; ++n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_NameIDMappingResponse) */

struct zx_sp_NameIDMappingResponse_s* zx_e_Body_GET_NameIDMappingResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return 0;
  for (y = x->NameIDMappingResponse; n>=0 && y; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_NameIDMappingResponse) */

struct zx_sp_NameIDMappingResponse_s* zx_e_Body_POP_NameIDMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return 0;
  y = x->NameIDMappingResponse;
  if (y)
    x->NameIDMappingResponse = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_NameIDMappingResponse) */

void zx_e_Body_PUSH_NameIDMappingResponse(struct zx_e_Body_s* x, struct zx_sp_NameIDMappingResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIDMappingResponse->gg.g;
  x->NameIDMappingResponse = z;
}

/* FUNC(zx_e_Body_REV_NameIDMappingResponse) */

void zx_e_Body_REV_NameIDMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_sp_NameIDMappingResponse_s* nxt;
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return;
  y = x->NameIDMappingResponse;
  if (!y) return;
  x->NameIDMappingResponse = 0;
  while (y) {
    nxt = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIDMappingResponse->gg.g;
    x->NameIDMappingResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_NameIDMappingResponse) */

void zx_e_Body_PUT_NameIDMappingResponse(struct zx_e_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x || !z) return;
  y = x->NameIDMappingResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIDMappingResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_NameIDMappingResponse) */

void zx_e_Body_ADD_NameIDMappingResponse(struct zx_e_Body_s* x, int n, struct zx_sp_NameIDMappingResponse_s* z)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIDMappingResponse->gg.g;
    x->NameIDMappingResponse = z;
    return;
  case -1:
    y = x->NameIDMappingResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingResponse; n > 1 && y; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_NameIDMappingResponse) */

void zx_e_Body_DEL_NameIDMappingResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_NameIDMappingResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIDMappingResponse = (struct zx_sp_NameIDMappingResponse_s*)x->NameIDMappingResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_NameIDMappingResponse_s*)x->NameIDMappingResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIDMappingResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_NameIDMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AttributeQuery) */

int zx_e_Body_NUM_AttributeQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AttributeQuery; y; ++n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AttributeQuery) */

struct zx_sp_AttributeQuery_s* zx_e_Body_GET_AttributeQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return 0;
  for (y = x->AttributeQuery; n>=0 && y; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AttributeQuery) */

struct zx_sp_AttributeQuery_s* zx_e_Body_POP_AttributeQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return 0;
  y = x->AttributeQuery;
  if (y)
    x->AttributeQuery = (struct zx_sp_AttributeQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AttributeQuery) */

void zx_e_Body_PUSH_AttributeQuery(struct zx_e_Body_s* x, struct zx_sp_AttributeQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AttributeQuery->gg.g;
  x->AttributeQuery = z;
}

/* FUNC(zx_e_Body_REV_AttributeQuery) */

void zx_e_Body_REV_AttributeQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AttributeQuery_s* nxt;
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return;
  y = x->AttributeQuery;
  if (!y) return;
  x->AttributeQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AttributeQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AttributeQuery->gg.g;
    x->AttributeQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AttributeQuery) */

void zx_e_Body_PUT_AttributeQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x || !z) return;
  y = x->AttributeQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AttributeQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AttributeQuery) */

void zx_e_Body_ADD_AttributeQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AttributeQuery_s* z)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AttributeQuery->gg.g;
    x->AttributeQuery = z;
    return;
  case -1:
    y = x->AttributeQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeQuery; n > 1 && y; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AttributeQuery) */

void zx_e_Body_DEL_AttributeQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AttributeQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AttributeQuery = (struct zx_sp_AttributeQuery_s*)x->AttributeQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AttributeQuery_s*)x->AttributeQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AttributeQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AttributeQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AuthnQuery) */

int zx_e_Body_NUM_AuthnQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnQuery; y; ++n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AuthnQuery) */

struct zx_sp_AuthnQuery_s* zx_e_Body_GET_AuthnQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return 0;
  for (y = x->AuthnQuery; n>=0 && y; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AuthnQuery) */

struct zx_sp_AuthnQuery_s* zx_e_Body_POP_AuthnQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return 0;
  y = x->AuthnQuery;
  if (y)
    x->AuthnQuery = (struct zx_sp_AuthnQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AuthnQuery) */

void zx_e_Body_PUSH_AuthnQuery(struct zx_e_Body_s* x, struct zx_sp_AuthnQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnQuery->gg.g;
  x->AuthnQuery = z;
}

/* FUNC(zx_e_Body_REV_AuthnQuery) */

void zx_e_Body_REV_AuthnQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthnQuery_s* nxt;
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return;
  y = x->AuthnQuery;
  if (!y) return;
  x->AuthnQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AuthnQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnQuery->gg.g;
    x->AuthnQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AuthnQuery) */

void zx_e_Body_PUT_AuthnQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x || !z) return;
  y = x->AuthnQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AuthnQuery) */

void zx_e_Body_ADD_AuthnQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AuthnQuery_s* z)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnQuery->gg.g;
    x->AuthnQuery = z;
    return;
  case -1:
    y = x->AuthnQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQuery; n > 1 && y; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AuthnQuery) */

void zx_e_Body_DEL_AuthnQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AuthnQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnQuery = (struct zx_sp_AuthnQuery_s*)x->AuthnQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthnQuery_s*)x->AuthnQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AuthzDecisionQuery) */

int zx_e_Body_NUM_AuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthzDecisionQuery; y; ++n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AuthzDecisionQuery) */

struct zx_sp_AuthzDecisionQuery_s* zx_e_Body_GET_AuthzDecisionQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return 0;
  for (y = x->AuthzDecisionQuery; n>=0 && y; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AuthzDecisionQuery) */

struct zx_sp_AuthzDecisionQuery_s* zx_e_Body_POP_AuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return 0;
  y = x->AuthzDecisionQuery;
  if (y)
    x->AuthzDecisionQuery = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AuthzDecisionQuery) */

void zx_e_Body_PUSH_AuthzDecisionQuery(struct zx_e_Body_s* x, struct zx_sp_AuthzDecisionQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthzDecisionQuery->gg.g;
  x->AuthzDecisionQuery = z;
}

/* FUNC(zx_e_Body_REV_AuthzDecisionQuery) */

void zx_e_Body_REV_AuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthzDecisionQuery_s* nxt;
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return;
  y = x->AuthzDecisionQuery;
  if (!y) return;
  x->AuthzDecisionQuery = 0;
  while (y) {
    nxt = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthzDecisionQuery->gg.g;
    x->AuthzDecisionQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AuthzDecisionQuery) */

void zx_e_Body_PUT_AuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x || !z) return;
  y = x->AuthzDecisionQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthzDecisionQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AuthzDecisionQuery) */

void zx_e_Body_ADD_AuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_sp_AuthzDecisionQuery_s* z)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthzDecisionQuery->gg.g;
    x->AuthzDecisionQuery = z;
    return;
  case -1:
    y = x->AuthzDecisionQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionQuery; n > 1 && y; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AuthzDecisionQuery) */

void zx_e_Body_DEL_AuthzDecisionQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AuthzDecisionQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthzDecisionQuery = (struct zx_sp_AuthzDecisionQuery_s*)x->AuthzDecisionQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthzDecisionQuery_s*)x->AuthzDecisionQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthzDecisionQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AssertionIDRequest) */

int zx_e_Body_NUM_AssertionIDRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AssertionIDRequest; y; ++n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AssertionIDRequest) */

struct zx_sp_AssertionIDRequest_s* zx_e_Body_GET_AssertionIDRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return 0;
  for (y = x->AssertionIDRequest; n>=0 && y; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AssertionIDRequest) */

struct zx_sp_AssertionIDRequest_s* zx_e_Body_POP_AssertionIDRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return 0;
  y = x->AssertionIDRequest;
  if (y)
    x->AssertionIDRequest = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AssertionIDRequest) */

void zx_e_Body_PUSH_AssertionIDRequest(struct zx_e_Body_s* x, struct zx_sp_AssertionIDRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AssertionIDRequest->gg.g;
  x->AssertionIDRequest = z;
}

/* FUNC(zx_e_Body_REV_AssertionIDRequest) */

void zx_e_Body_REV_AssertionIDRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_AssertionIDRequest_s* nxt;
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return;
  y = x->AssertionIDRequest;
  if (!y) return;
  x->AssertionIDRequest = 0;
  while (y) {
    nxt = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AssertionIDRequest->gg.g;
    x->AssertionIDRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AssertionIDRequest) */

void zx_e_Body_PUT_AssertionIDRequest(struct zx_e_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x || !z) return;
  y = x->AssertionIDRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AssertionIDRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AssertionIDRequest) */

void zx_e_Body_ADD_AssertionIDRequest(struct zx_e_Body_s* x, int n, struct zx_sp_AssertionIDRequest_s* z)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AssertionIDRequest->gg.g;
    x->AssertionIDRequest = z;
    return;
  case -1:
    y = x->AssertionIDRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequest; n > 1 && y; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AssertionIDRequest) */

void zx_e_Body_DEL_AssertionIDRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AssertionIDRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AssertionIDRequest = (struct zx_sp_AssertionIDRequest_s*)x->AssertionIDRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AssertionIDRequest_s*)x->AssertionIDRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AssertionIDRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AssertionIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Response) */

int zx_e_Body_NUM_Response(struct zx_e_Body_s* x)
{
  struct zx_sp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Response) */

struct zx_sp_Response_s* zx_e_Body_GET_Response(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Response) */

struct zx_sp_Response_s* zx_e_Body_POP_Response(struct zx_e_Body_s* x)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_sp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Response) */

void zx_e_Body_PUSH_Response(struct zx_e_Body_s* x, struct zx_sp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_e_Body_REV_Response) */

void zx_e_Body_REV_Response(struct zx_e_Body_s* x)
{
  struct zx_sp_Response_s* nxt;
  struct zx_sp_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_sp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Response) */

void zx_e_Body_PUT_Response(struct zx_e_Body_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Response) */

void zx_e_Body_ADD_Response(struct zx_e_Body_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Response->gg.g;
    x->Response = z;
    return;
  case -1:
    y = x->Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Response) */

void zx_e_Body_DEL_Response(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_sp_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AuthnRequest) */

int zx_e_Body_NUM_AuthnRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthnRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnRequest; y; ++n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AuthnRequest) */

struct zx_sp_AuthnRequest_s* zx_e_Body_GET_AuthnRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return 0;
  for (y = x->AuthnRequest; n>=0 && y; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AuthnRequest) */

struct zx_sp_AuthnRequest_s* zx_e_Body_POP_AuthnRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return 0;
  y = x->AuthnRequest;
  if (y)
    x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AuthnRequest) */

void zx_e_Body_PUSH_AuthnRequest(struct zx_e_Body_s* x, struct zx_sp_AuthnRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnRequest->gg.g;
  x->AuthnRequest = z;
}

/* FUNC(zx_e_Body_REV_AuthnRequest) */

void zx_e_Body_REV_AuthnRequest(struct zx_e_Body_s* x)
{
  struct zx_sp_AuthnRequest_s* nxt;
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return;
  y = x->AuthnRequest;
  if (!y) return;
  x->AuthnRequest = 0;
  while (y) {
    nxt = (struct zx_sp_AuthnRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnRequest->gg.g;
    x->AuthnRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AuthnRequest) */

void zx_e_Body_PUT_AuthnRequest(struct zx_e_Body_s* x, int n, struct zx_sp_AuthnRequest_s* z)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x || !z) return;
  y = x->AuthnRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AuthnRequest) */

void zx_e_Body_ADD_AuthnRequest(struct zx_e_Body_s* x, int n, struct zx_sp_AuthnRequest_s* z)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnRequest->gg.g;
    x->AuthnRequest = z;
    return;
  case -1:
    y = x->AuthnRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnRequest; n > 1 && y; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AuthnRequest) */

void zx_e_Body_DEL_AuthnRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)x->AuthnRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthnRequest_s*)x->AuthnRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Request) */

int zx_e_Body_NUM_Request(struct zx_e_Body_s* x)
{
  struct zx_sp11_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Request; y; ++n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Request) */

struct zx_sp11_Request_s* zx_e_Body_GET_Request(struct zx_e_Body_s* x, int n)
{
  struct zx_sp11_Request_s* y;
  if (!x) return 0;
  for (y = x->Request; n>=0 && y; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Request) */

struct zx_sp11_Request_s* zx_e_Body_POP_Request(struct zx_e_Body_s* x)
{
  struct zx_sp11_Request_s* y;
  if (!x) return 0;
  y = x->Request;
  if (y)
    x->Request = (struct zx_sp11_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Request) */

void zx_e_Body_PUSH_Request(struct zx_e_Body_s* x, struct zx_sp11_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Request->gg.g;
  x->Request = z;
}

/* FUNC(zx_e_Body_REV_Request) */

void zx_e_Body_REV_Request(struct zx_e_Body_s* x)
{
  struct zx_sp11_Request_s* nxt;
  struct zx_sp11_Request_s* y;
  if (!x) return;
  y = x->Request;
  if (!y) return;
  x->Request = 0;
  while (y) {
    nxt = (struct zx_sp11_Request_s*)y->gg.g.n;
    y->gg.g.n = &x->Request->gg.g;
    x->Request = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Request) */

void zx_e_Body_PUT_Request(struct zx_e_Body_s* x, int n, struct zx_sp11_Request_s* z)
{
  struct zx_sp11_Request_s* y;
  if (!x || !z) return;
  y = x->Request;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Request = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Request) */

void zx_e_Body_ADD_Request(struct zx_e_Body_s* x, int n, struct zx_sp11_Request_s* z)
{
  struct zx_sp11_Request_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Request->gg.g;
    x->Request = z;
    return;
  case -1:
    y = x->Request;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Request) */

void zx_e_Body_DEL_Request(struct zx_e_Body_s* x, int n)
{
  struct zx_sp11_Request_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Request = (struct zx_sp11_Request_s*)x->Request->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_Request_s*)x->Request;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_sp11_Response) */

int zx_e_Body_NUM_sp11_Response(struct zx_e_Body_s* x)
{
  struct zx_sp11_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->sp11_Response; y; ++n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_sp11_Response) */

struct zx_sp11_Response_s* zx_e_Body_GET_sp11_Response(struct zx_e_Body_s* x, int n)
{
  struct zx_sp11_Response_s* y;
  if (!x) return 0;
  for (y = x->sp11_Response; n>=0 && y; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_sp11_Response) */

struct zx_sp11_Response_s* zx_e_Body_POP_sp11_Response(struct zx_e_Body_s* x)
{
  struct zx_sp11_Response_s* y;
  if (!x) return 0;
  y = x->sp11_Response;
  if (y)
    x->sp11_Response = (struct zx_sp11_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_sp11_Response) */

void zx_e_Body_PUSH_sp11_Response(struct zx_e_Body_s* x, struct zx_sp11_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->sp11_Response->gg.g;
  x->sp11_Response = z;
}

/* FUNC(zx_e_Body_REV_sp11_Response) */

void zx_e_Body_REV_sp11_Response(struct zx_e_Body_s* x)
{
  struct zx_sp11_Response_s* nxt;
  struct zx_sp11_Response_s* y;
  if (!x) return;
  y = x->sp11_Response;
  if (!y) return;
  x->sp11_Response = 0;
  while (y) {
    nxt = (struct zx_sp11_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->sp11_Response->gg.g;
    x->sp11_Response = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_sp11_Response) */

void zx_e_Body_PUT_sp11_Response(struct zx_e_Body_s* x, int n, struct zx_sp11_Response_s* z)
{
  struct zx_sp11_Response_s* y;
  if (!x || !z) return;
  y = x->sp11_Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->sp11_Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_sp11_Response) */

void zx_e_Body_ADD_sp11_Response(struct zx_e_Body_s* x, int n, struct zx_sp11_Response_s* z)
{
  struct zx_sp11_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->sp11_Response->gg.g;
    x->sp11_Response = z;
    return;
  case -1:
    y = x->sp11_Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sp11_Response; n > 1 && y; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_sp11_Response) */

void zx_e_Body_DEL_sp11_Response(struct zx_e_Body_s* x, int n)
{
  struct zx_sp11_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->sp11_Response = (struct zx_sp11_Response_s*)x->sp11_Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_Response_s*)x->sp11_Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sp11_Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RegisterNameIdentifierRequest) */

int zx_e_Body_NUM_RegisterNameIdentifierRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierRequest; y; ++n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RegisterNameIdentifierRequest) */

struct zx_ff12_RegisterNameIdentifierRequest_s* zx_e_Body_GET_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierRequest; n>=0 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RegisterNameIdentifierRequest) */

struct zx_ff12_RegisterNameIdentifierRequest_s* zx_e_Body_POP_RegisterNameIdentifierRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierRequest;
  if (y)
    x->RegisterNameIdentifierRequest = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RegisterNameIdentifierRequest) */

void zx_e_Body_PUSH_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
  x->RegisterNameIdentifierRequest = z;
}

/* FUNC(zx_e_Body_REV_RegisterNameIdentifierRequest) */

void zx_e_Body_REV_RegisterNameIdentifierRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* nxt;
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierRequest;
  if (!y) return;
  x->RegisterNameIdentifierRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
    x->RegisterNameIdentifierRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RegisterNameIdentifierRequest) */

void zx_e_Body_PUT_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RegisterNameIdentifierRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RegisterNameIdentifierRequest) */

void zx_e_Body_ADD_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
    x->RegisterNameIdentifierRequest = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierRequest; n > 1 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RegisterNameIdentifierRequest) */

void zx_e_Body_DEL_RegisterNameIdentifierRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierRequest = (struct zx_ff12_RegisterNameIdentifierRequest_s*)x->RegisterNameIdentifierRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)x->RegisterNameIdentifierRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RegisterNameIdentifierResponse) */

int zx_e_Body_NUM_RegisterNameIdentifierResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierResponse; y; ++n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RegisterNameIdentifierResponse) */

struct zx_ff12_RegisterNameIdentifierResponse_s* zx_e_Body_GET_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierResponse; n>=0 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RegisterNameIdentifierResponse) */

struct zx_ff12_RegisterNameIdentifierResponse_s* zx_e_Body_POP_RegisterNameIdentifierResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierResponse;
  if (y)
    x->RegisterNameIdentifierResponse = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RegisterNameIdentifierResponse) */

void zx_e_Body_PUSH_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
  x->RegisterNameIdentifierResponse = z;
}

/* FUNC(zx_e_Body_REV_RegisterNameIdentifierResponse) */

void zx_e_Body_REV_RegisterNameIdentifierResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* nxt;
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierResponse;
  if (!y) return;
  x->RegisterNameIdentifierResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
    x->RegisterNameIdentifierResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RegisterNameIdentifierResponse) */

void zx_e_Body_PUT_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RegisterNameIdentifierResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RegisterNameIdentifierResponse) */

void zx_e_Body_ADD_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
    x->RegisterNameIdentifierResponse = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierResponse; n > 1 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RegisterNameIdentifierResponse) */

void zx_e_Body_DEL_RegisterNameIdentifierResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierResponse = (struct zx_ff12_RegisterNameIdentifierResponse_s*)x->RegisterNameIdentifierResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)x->RegisterNameIdentifierResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_FederationTerminationNotification) */

int zx_e_Body_NUM_FederationTerminationNotification(struct zx_e_Body_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationNotification; y; ++n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_FederationTerminationNotification) */

struct zx_ff12_FederationTerminationNotification_s* zx_e_Body_GET_FederationTerminationNotification(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationNotification; n>=0 && y; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_FederationTerminationNotification) */

struct zx_ff12_FederationTerminationNotification_s* zx_e_Body_POP_FederationTerminationNotification(struct zx_e_Body_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return 0;
  y = x->FederationTerminationNotification;
  if (y)
    x->FederationTerminationNotification = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_FederationTerminationNotification) */

void zx_e_Body_PUSH_FederationTerminationNotification(struct zx_e_Body_s* x, struct zx_ff12_FederationTerminationNotification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FederationTerminationNotification->gg.g;
  x->FederationTerminationNotification = z;
}

/* FUNC(zx_e_Body_REV_FederationTerminationNotification) */

void zx_e_Body_REV_FederationTerminationNotification(struct zx_e_Body_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* nxt;
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return;
  y = x->FederationTerminationNotification;
  if (!y) return;
  x->FederationTerminationNotification = 0;
  while (y) {
    nxt = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n;
    y->gg.g.n = &x->FederationTerminationNotification->gg.g;
    x->FederationTerminationNotification = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_FederationTerminationNotification) */

void zx_e_Body_PUT_FederationTerminationNotification(struct zx_e_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationNotification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FederationTerminationNotification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_FederationTerminationNotification) */

void zx_e_Body_ADD_FederationTerminationNotification(struct zx_e_Body_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->FederationTerminationNotification->gg.g;
    x->FederationTerminationNotification = z;
    return;
  case -1:
    y = x->FederationTerminationNotification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotification; n > 1 && y; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_FederationTerminationNotification) */

void zx_e_Body_DEL_FederationTerminationNotification(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationNotification = (struct zx_ff12_FederationTerminationNotification_s*)x->FederationTerminationNotification->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_FederationTerminationNotification_s*)x->FederationTerminationNotification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotification; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ff12_LogoutRequest) */

int zx_e_Body_NUM_ff12_LogoutRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_LogoutRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_LogoutRequest; y; ++n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ff12_LogoutRequest) */

struct zx_ff12_LogoutRequest_s* zx_e_Body_GET_ff12_LogoutRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return 0;
  for (y = x->ff12_LogoutRequest; n>=0 && y; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ff12_LogoutRequest) */

struct zx_ff12_LogoutRequest_s* zx_e_Body_POP_ff12_LogoutRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return 0;
  y = x->ff12_LogoutRequest;
  if (y)
    x->ff12_LogoutRequest = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ff12_LogoutRequest) */

void zx_e_Body_PUSH_ff12_LogoutRequest(struct zx_e_Body_s* x, struct zx_ff12_LogoutRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_LogoutRequest->gg.g;
  x->ff12_LogoutRequest = z;
}

/* FUNC(zx_e_Body_REV_ff12_LogoutRequest) */

void zx_e_Body_REV_ff12_LogoutRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_LogoutRequest_s* nxt;
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return;
  y = x->ff12_LogoutRequest;
  if (!y) return;
  x->ff12_LogoutRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_LogoutRequest->gg.g;
    x->ff12_LogoutRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ff12_LogoutRequest) */

void zx_e_Body_PUT_ff12_LogoutRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* z)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x || !z) return;
  y = x->ff12_LogoutRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_LogoutRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ff12_LogoutRequest) */

void zx_e_Body_ADD_ff12_LogoutRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_LogoutRequest_s* z)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_LogoutRequest->gg.g;
    x->ff12_LogoutRequest = z;
    return;
  case -1:
    y = x->ff12_LogoutRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutRequest; n > 1 && y; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ff12_LogoutRequest) */

void zx_e_Body_DEL_ff12_LogoutRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_LogoutRequest = (struct zx_ff12_LogoutRequest_s*)x->ff12_LogoutRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_LogoutRequest_s*)x->ff12_LogoutRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ff12_LogoutResponse) */

int zx_e_Body_NUM_ff12_LogoutResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_LogoutResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_LogoutResponse; y; ++n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ff12_LogoutResponse) */

struct zx_ff12_LogoutResponse_s* zx_e_Body_GET_ff12_LogoutResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return 0;
  for (y = x->ff12_LogoutResponse; n>=0 && y; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ff12_LogoutResponse) */

struct zx_ff12_LogoutResponse_s* zx_e_Body_POP_ff12_LogoutResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return 0;
  y = x->ff12_LogoutResponse;
  if (y)
    x->ff12_LogoutResponse = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ff12_LogoutResponse) */

void zx_e_Body_PUSH_ff12_LogoutResponse(struct zx_e_Body_s* x, struct zx_ff12_LogoutResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_LogoutResponse->gg.g;
  x->ff12_LogoutResponse = z;
}

/* FUNC(zx_e_Body_REV_ff12_LogoutResponse) */

void zx_e_Body_REV_ff12_LogoutResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_LogoutResponse_s* nxt;
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return;
  y = x->ff12_LogoutResponse;
  if (!y) return;
  x->ff12_LogoutResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_LogoutResponse->gg.g;
    x->ff12_LogoutResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ff12_LogoutResponse) */

void zx_e_Body_PUT_ff12_LogoutResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* z)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x || !z) return;
  y = x->ff12_LogoutResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_LogoutResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ff12_LogoutResponse) */

void zx_e_Body_ADD_ff12_LogoutResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_LogoutResponse_s* z)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_LogoutResponse->gg.g;
    x->ff12_LogoutResponse = z;
    return;
  case -1:
    y = x->ff12_LogoutResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutResponse; n > 1 && y; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ff12_LogoutResponse) */

void zx_e_Body_DEL_ff12_LogoutResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_LogoutResponse = (struct zx_ff12_LogoutResponse_s*)x->ff12_LogoutResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_LogoutResponse_s*)x->ff12_LogoutResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_NameIdentifierMappingRequest) */

int zx_e_Body_NUM_NameIdentifierMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingRequest; y; ++n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_NameIdentifierMappingRequest) */

struct zx_ff12_NameIdentifierMappingRequest_s* zx_e_Body_GET_NameIdentifierMappingRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingRequest; n>=0 && y; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_NameIdentifierMappingRequest) */

struct zx_ff12_NameIdentifierMappingRequest_s* zx_e_Body_POP_NameIdentifierMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingRequest;
  if (y)
    x->NameIdentifierMappingRequest = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_NameIdentifierMappingRequest) */

void zx_e_Body_PUSH_NameIdentifierMappingRequest(struct zx_e_Body_s* x, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
  x->NameIdentifierMappingRequest = z;
}

/* FUNC(zx_e_Body_REV_NameIdentifierMappingRequest) */

void zx_e_Body_REV_NameIdentifierMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* nxt;
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingRequest;
  if (!y) return;
  x->NameIdentifierMappingRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
    x->NameIdentifierMappingRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_NameIdentifierMappingRequest) */

void zx_e_Body_PUT_NameIdentifierMappingRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIdentifierMappingRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_NameIdentifierMappingRequest) */

void zx_e_Body_ADD_NameIdentifierMappingRequest(struct zx_e_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
    x->NameIdentifierMappingRequest = z;
    return;
  case -1:
    y = x->NameIdentifierMappingRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingRequest; n > 1 && y; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_NameIdentifierMappingRequest) */

void zx_e_Body_DEL_NameIdentifierMappingRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingRequest = (struct zx_ff12_NameIdentifierMappingRequest_s*)x->NameIdentifierMappingRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_NameIdentifierMappingRequest_s*)x->NameIdentifierMappingRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_NameIdentifierMappingResponse) */

int zx_e_Body_NUM_NameIdentifierMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingResponse; y; ++n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_NameIdentifierMappingResponse) */

struct zx_ff12_NameIdentifierMappingResponse_s* zx_e_Body_GET_NameIdentifierMappingResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingResponse; n>=0 && y; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_NameIdentifierMappingResponse) */

struct zx_ff12_NameIdentifierMappingResponse_s* zx_e_Body_POP_NameIdentifierMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingResponse;
  if (y)
    x->NameIdentifierMappingResponse = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_NameIdentifierMappingResponse) */

void zx_e_Body_PUSH_NameIdentifierMappingResponse(struct zx_e_Body_s* x, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
  x->NameIdentifierMappingResponse = z;
}

/* FUNC(zx_e_Body_REV_NameIdentifierMappingResponse) */

void zx_e_Body_REV_NameIdentifierMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* nxt;
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingResponse;
  if (!y) return;
  x->NameIdentifierMappingResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
    x->NameIdentifierMappingResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_NameIdentifierMappingResponse) */

void zx_e_Body_PUT_NameIdentifierMappingResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIdentifierMappingResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_NameIdentifierMappingResponse) */

void zx_e_Body_ADD_NameIdentifierMappingResponse(struct zx_e_Body_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
    x->NameIdentifierMappingResponse = z;
    return;
  case -1:
    y = x->NameIdentifierMappingResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingResponse; n > 1 && y; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_NameIdentifierMappingResponse) */

void zx_e_Body_DEL_NameIdentifierMappingResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingResponse = (struct zx_ff12_NameIdentifierMappingResponse_s*)x->NameIdentifierMappingResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_NameIdentifierMappingResponse_s*)x->NameIdentifierMappingResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_XACMLAuthzDecisionQuery) */

int zx_e_Body_NUM_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->XACMLAuthzDecisionQuery; y; ++n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_XACMLAuthzDecisionQuery) */

struct zx_xasp_XACMLAuthzDecisionQuery_s* zx_e_Body_GET_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x) return 0;
  for (y = x->XACMLAuthzDecisionQuery; n>=0 && y; --n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_XACMLAuthzDecisionQuery) */

struct zx_xasp_XACMLAuthzDecisionQuery_s* zx_e_Body_POP_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x) return 0;
  y = x->XACMLAuthzDecisionQuery;
  if (y)
    x->XACMLAuthzDecisionQuery = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_XACMLAuthzDecisionQuery) */

void zx_e_Body_PUSH_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, struct zx_xasp_XACMLAuthzDecisionQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->XACMLAuthzDecisionQuery->gg.g;
  x->XACMLAuthzDecisionQuery = z;
}

/* FUNC(zx_e_Body_REV_XACMLAuthzDecisionQuery) */

void zx_e_Body_REV_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* nxt;
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x) return;
  y = x->XACMLAuthzDecisionQuery;
  if (!y) return;
  x->XACMLAuthzDecisionQuery = 0;
  while (y) {
    nxt = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->XACMLAuthzDecisionQuery->gg.g;
    x->XACMLAuthzDecisionQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_XACMLAuthzDecisionQuery) */

void zx_e_Body_PUT_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_xasp_XACMLAuthzDecisionQuery_s* z)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x || !z) return;
  y = x->XACMLAuthzDecisionQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->XACMLAuthzDecisionQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_XACMLAuthzDecisionQuery) */

void zx_e_Body_ADD_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_xasp_XACMLAuthzDecisionQuery_s* z)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->XACMLAuthzDecisionQuery->gg.g;
    x->XACMLAuthzDecisionQuery = z;
    return;
  case -1:
    y = x->XACMLAuthzDecisionQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->XACMLAuthzDecisionQuery; n > 1 && y; --n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_XACMLAuthzDecisionQuery) */

void zx_e_Body_DEL_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->XACMLAuthzDecisionQuery = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)x->XACMLAuthzDecisionQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)x->XACMLAuthzDecisionQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->XACMLAuthzDecisionQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_XACMLPolicyQuery) */

int zx_e_Body_NUM_XACMLPolicyQuery(struct zx_e_Body_s* x)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->XACMLPolicyQuery; y; ++n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_XACMLPolicyQuery) */

struct zx_xasp_XACMLPolicyQuery_s* zx_e_Body_GET_XACMLPolicyQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x) return 0;
  for (y = x->XACMLPolicyQuery; n>=0 && y; --n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_XACMLPolicyQuery) */

struct zx_xasp_XACMLPolicyQuery_s* zx_e_Body_POP_XACMLPolicyQuery(struct zx_e_Body_s* x)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x) return 0;
  y = x->XACMLPolicyQuery;
  if (y)
    x->XACMLPolicyQuery = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_XACMLPolicyQuery) */

void zx_e_Body_PUSH_XACMLPolicyQuery(struct zx_e_Body_s* x, struct zx_xasp_XACMLPolicyQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->XACMLPolicyQuery->gg.g;
  x->XACMLPolicyQuery = z;
}

/* FUNC(zx_e_Body_REV_XACMLPolicyQuery) */

void zx_e_Body_REV_XACMLPolicyQuery(struct zx_e_Body_s* x)
{
  struct zx_xasp_XACMLPolicyQuery_s* nxt;
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x) return;
  y = x->XACMLPolicyQuery;
  if (!y) return;
  x->XACMLPolicyQuery = 0;
  while (y) {
    nxt = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->XACMLPolicyQuery->gg.g;
    x->XACMLPolicyQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_XACMLPolicyQuery) */

void zx_e_Body_PUT_XACMLPolicyQuery(struct zx_e_Body_s* x, int n, struct zx_xasp_XACMLPolicyQuery_s* z)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x || !z) return;
  y = x->XACMLPolicyQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->XACMLPolicyQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_XACMLPolicyQuery) */

void zx_e_Body_ADD_XACMLPolicyQuery(struct zx_e_Body_s* x, int n, struct zx_xasp_XACMLPolicyQuery_s* z)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->XACMLPolicyQuery->gg.g;
    x->XACMLPolicyQuery = z;
    return;
  case -1:
    y = x->XACMLPolicyQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->XACMLPolicyQuery; n > 1 && y; --n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_XACMLPolicyQuery) */

void zx_e_Body_DEL_XACMLPolicyQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->XACMLPolicyQuery = (struct zx_xasp_XACMLPolicyQuery_s*)x->XACMLPolicyQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_xasp_XACMLPolicyQuery_s*)x->XACMLPolicyQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->XACMLPolicyQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_xaspcd1_XACMLAuthzDecisionQuery) */

int zx_e_Body_NUM_xaspcd1_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->xaspcd1_XACMLAuthzDecisionQuery; y; ++n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_xaspcd1_XACMLAuthzDecisionQuery) */

struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* zx_e_Body_GET_xaspcd1_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x) return 0;
  for (y = x->xaspcd1_XACMLAuthzDecisionQuery; n>=0 && y; --n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_xaspcd1_XACMLAuthzDecisionQuery) */

struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* zx_e_Body_POP_xaspcd1_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x) return 0;
  y = x->xaspcd1_XACMLAuthzDecisionQuery;
  if (y)
    x->xaspcd1_XACMLAuthzDecisionQuery = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_e_Body_PUSH_xaspcd1_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->xaspcd1_XACMLAuthzDecisionQuery->gg.g;
  x->xaspcd1_XACMLAuthzDecisionQuery = z;
}

/* FUNC(zx_e_Body_REV_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_e_Body_REV_xaspcd1_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* nxt;
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x) return;
  y = x->xaspcd1_XACMLAuthzDecisionQuery;
  if (!y) return;
  x->xaspcd1_XACMLAuthzDecisionQuery = 0;
  while (y) {
    nxt = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->xaspcd1_XACMLAuthzDecisionQuery->gg.g;
    x->xaspcd1_XACMLAuthzDecisionQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_e_Body_PUT_xaspcd1_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* z)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x || !z) return;
  y = x->xaspcd1_XACMLAuthzDecisionQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->xaspcd1_XACMLAuthzDecisionQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_e_Body_ADD_xaspcd1_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n, struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* z)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->xaspcd1_XACMLAuthzDecisionQuery->gg.g;
    x->xaspcd1_XACMLAuthzDecisionQuery = z;
    return;
  case -1:
    y = x->xaspcd1_XACMLAuthzDecisionQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xaspcd1_XACMLAuthzDecisionQuery; n > 1 && y; --n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_e_Body_DEL_xaspcd1_XACMLAuthzDecisionQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->xaspcd1_XACMLAuthzDecisionQuery = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)x->xaspcd1_XACMLAuthzDecisionQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)x->xaspcd1_XACMLAuthzDecisionQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xaspcd1_XACMLAuthzDecisionQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_xaspcd1_XACMLPolicyQuery) */

int zx_e_Body_NUM_xaspcd1_XACMLPolicyQuery(struct zx_e_Body_s* x)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->xaspcd1_XACMLPolicyQuery; y; ++n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_xaspcd1_XACMLPolicyQuery) */

struct zx_xaspcd1_XACMLPolicyQuery_s* zx_e_Body_GET_xaspcd1_XACMLPolicyQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x) return 0;
  for (y = x->xaspcd1_XACMLPolicyQuery; n>=0 && y; --n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_xaspcd1_XACMLPolicyQuery) */

struct zx_xaspcd1_XACMLPolicyQuery_s* zx_e_Body_POP_xaspcd1_XACMLPolicyQuery(struct zx_e_Body_s* x)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x) return 0;
  y = x->xaspcd1_XACMLPolicyQuery;
  if (y)
    x->xaspcd1_XACMLPolicyQuery = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_xaspcd1_XACMLPolicyQuery) */

void zx_e_Body_PUSH_xaspcd1_XACMLPolicyQuery(struct zx_e_Body_s* x, struct zx_xaspcd1_XACMLPolicyQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->xaspcd1_XACMLPolicyQuery->gg.g;
  x->xaspcd1_XACMLPolicyQuery = z;
}

/* FUNC(zx_e_Body_REV_xaspcd1_XACMLPolicyQuery) */

void zx_e_Body_REV_xaspcd1_XACMLPolicyQuery(struct zx_e_Body_s* x)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* nxt;
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x) return;
  y = x->xaspcd1_XACMLPolicyQuery;
  if (!y) return;
  x->xaspcd1_XACMLPolicyQuery = 0;
  while (y) {
    nxt = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->xaspcd1_XACMLPolicyQuery->gg.g;
    x->xaspcd1_XACMLPolicyQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_xaspcd1_XACMLPolicyQuery) */

void zx_e_Body_PUT_xaspcd1_XACMLPolicyQuery(struct zx_e_Body_s* x, int n, struct zx_xaspcd1_XACMLPolicyQuery_s* z)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x || !z) return;
  y = x->xaspcd1_XACMLPolicyQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->xaspcd1_XACMLPolicyQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_xaspcd1_XACMLPolicyQuery) */

void zx_e_Body_ADD_xaspcd1_XACMLPolicyQuery(struct zx_e_Body_s* x, int n, struct zx_xaspcd1_XACMLPolicyQuery_s* z)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->xaspcd1_XACMLPolicyQuery->gg.g;
    x->xaspcd1_XACMLPolicyQuery = z;
    return;
  case -1:
    y = x->xaspcd1_XACMLPolicyQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xaspcd1_XACMLPolicyQuery; n > 1 && y; --n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_xaspcd1_XACMLPolicyQuery) */

void zx_e_Body_DEL_xaspcd1_XACMLPolicyQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->xaspcd1_XACMLPolicyQuery = (struct zx_xaspcd1_XACMLPolicyQuery_s*)x->xaspcd1_XACMLPolicyQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)x->xaspcd1_XACMLPolicyQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xaspcd1_XACMLPolicyQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_xac_Request) */

int zx_e_Body_NUM_xac_Request(struct zx_e_Body_s* x)
{
  struct zx_xac_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->xac_Request; y; ++n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_xac_Request) */

struct zx_xac_Request_s* zx_e_Body_GET_xac_Request(struct zx_e_Body_s* x, int n)
{
  struct zx_xac_Request_s* y;
  if (!x) return 0;
  for (y = x->xac_Request; n>=0 && y; --n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_xac_Request) */

struct zx_xac_Request_s* zx_e_Body_POP_xac_Request(struct zx_e_Body_s* x)
{
  struct zx_xac_Request_s* y;
  if (!x) return 0;
  y = x->xac_Request;
  if (y)
    x->xac_Request = (struct zx_xac_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_xac_Request) */

void zx_e_Body_PUSH_xac_Request(struct zx_e_Body_s* x, struct zx_xac_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->xac_Request->gg.g;
  x->xac_Request = z;
}

/* FUNC(zx_e_Body_REV_xac_Request) */

void zx_e_Body_REV_xac_Request(struct zx_e_Body_s* x)
{
  struct zx_xac_Request_s* nxt;
  struct zx_xac_Request_s* y;
  if (!x) return;
  y = x->xac_Request;
  if (!y) return;
  x->xac_Request = 0;
  while (y) {
    nxt = (struct zx_xac_Request_s*)y->gg.g.n;
    y->gg.g.n = &x->xac_Request->gg.g;
    x->xac_Request = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_xac_Request) */

void zx_e_Body_PUT_xac_Request(struct zx_e_Body_s* x, int n, struct zx_xac_Request_s* z)
{
  struct zx_xac_Request_s* y;
  if (!x || !z) return;
  y = x->xac_Request;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->xac_Request = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_xac_Request) */

void zx_e_Body_ADD_xac_Request(struct zx_e_Body_s* x, int n, struct zx_xac_Request_s* z)
{
  struct zx_xac_Request_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->xac_Request->gg.g;
    x->xac_Request = z;
    return;
  case -1:
    y = x->xac_Request;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xac_Request; n > 1 && y; --n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_xac_Request) */

void zx_e_Body_DEL_xac_Request(struct zx_e_Body_s* x, int n)
{
  struct zx_xac_Request_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->xac_Request = (struct zx_xac_Request_s*)x->xac_Request->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Request_s*)x->xac_Request;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xac_Request; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_xac_Response) */

int zx_e_Body_NUM_xac_Response(struct zx_e_Body_s* x)
{
  struct zx_xac_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->xac_Response; y; ++n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_xac_Response) */

struct zx_xac_Response_s* zx_e_Body_GET_xac_Response(struct zx_e_Body_s* x, int n)
{
  struct zx_xac_Response_s* y;
  if (!x) return 0;
  for (y = x->xac_Response; n>=0 && y; --n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_xac_Response) */

struct zx_xac_Response_s* zx_e_Body_POP_xac_Response(struct zx_e_Body_s* x)
{
  struct zx_xac_Response_s* y;
  if (!x) return 0;
  y = x->xac_Response;
  if (y)
    x->xac_Response = (struct zx_xac_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_xac_Response) */

void zx_e_Body_PUSH_xac_Response(struct zx_e_Body_s* x, struct zx_xac_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->xac_Response->gg.g;
  x->xac_Response = z;
}

/* FUNC(zx_e_Body_REV_xac_Response) */

void zx_e_Body_REV_xac_Response(struct zx_e_Body_s* x)
{
  struct zx_xac_Response_s* nxt;
  struct zx_xac_Response_s* y;
  if (!x) return;
  y = x->xac_Response;
  if (!y) return;
  x->xac_Response = 0;
  while (y) {
    nxt = (struct zx_xac_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->xac_Response->gg.g;
    x->xac_Response = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_xac_Response) */

void zx_e_Body_PUT_xac_Response(struct zx_e_Body_s* x, int n, struct zx_xac_Response_s* z)
{
  struct zx_xac_Response_s* y;
  if (!x || !z) return;
  y = x->xac_Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->xac_Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_xac_Response) */

void zx_e_Body_ADD_xac_Response(struct zx_e_Body_s* x, int n, struct zx_xac_Response_s* z)
{
  struct zx_xac_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->xac_Response->gg.g;
    x->xac_Response = z;
    return;
  case -1:
    y = x->xac_Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xac_Response; n > 1 && y; --n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_xac_Response) */

void zx_e_Body_DEL_xac_Response(struct zx_e_Body_s* x, int n)
{
  struct zx_xac_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->xac_Response = (struct zx_xac_Response_s*)x->xac_Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_xac_Response_s*)x->xac_Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xac_Response; n > 1 && y->gg.g.n; --n, y = (struct zx_xac_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Query) */

int zx_e_Body_NUM_Query(struct zx_e_Body_s* x)
{
  struct zx_di_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Query; y; ++n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Query) */

struct zx_di_Query_s* zx_e_Body_GET_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_di_Query_s* y;
  if (!x) return 0;
  for (y = x->Query; n>=0 && y; --n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Query) */

struct zx_di_Query_s* zx_e_Body_POP_Query(struct zx_e_Body_s* x)
{
  struct zx_di_Query_s* y;
  if (!x) return 0;
  y = x->Query;
  if (y)
    x->Query = (struct zx_di_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Query) */

void zx_e_Body_PUSH_Query(struct zx_e_Body_s* x, struct zx_di_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Query->gg.g;
  x->Query = z;
}

/* FUNC(zx_e_Body_REV_Query) */

void zx_e_Body_REV_Query(struct zx_e_Body_s* x)
{
  struct zx_di_Query_s* nxt;
  struct zx_di_Query_s* y;
  if (!x) return;
  y = x->Query;
  if (!y) return;
  x->Query = 0;
  while (y) {
    nxt = (struct zx_di_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->Query->gg.g;
    x->Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Query) */

void zx_e_Body_PUT_Query(struct zx_e_Body_s* x, int n, struct zx_di_Query_s* z)
{
  struct zx_di_Query_s* y;
  if (!x || !z) return;
  y = x->Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Query) */

void zx_e_Body_ADD_Query(struct zx_e_Body_s* x, int n, struct zx_di_Query_s* z)
{
  struct zx_di_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Query->gg.g;
    x->Query = z;
    return;
  case -1:
    y = x->Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Query; n > 1 && y; --n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Query) */

void zx_e_Body_DEL_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_di_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Query = (struct zx_di_Query_s*)x->Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_Query_s*)x->Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Query; n > 1 && y->gg.g.n; --n, y = (struct zx_di_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_QueryResponse) */

int zx_e_Body_NUM_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryResponse; y; ++n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_QueryResponse) */

struct zx_di_QueryResponse_s* zx_e_Body_GET_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->QueryResponse; n>=0 && y; --n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_QueryResponse) */

struct zx_di_QueryResponse_s* zx_e_Body_POP_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_QueryResponse_s* y;
  if (!x) return 0;
  y = x->QueryResponse;
  if (y)
    x->QueryResponse = (struct zx_di_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_QueryResponse) */

void zx_e_Body_PUSH_QueryResponse(struct zx_e_Body_s* x, struct zx_di_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryResponse->gg.g;
  x->QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_QueryResponse) */

void zx_e_Body_REV_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_QueryResponse_s* nxt;
  struct zx_di_QueryResponse_s* y;
  if (!x) return;
  y = x->QueryResponse;
  if (!y) return;
  x->QueryResponse = 0;
  while (y) {
    nxt = (struct zx_di_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryResponse->gg.g;
    x->QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_QueryResponse) */

void zx_e_Body_PUT_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_QueryResponse_s* z)
{
  struct zx_di_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_QueryResponse) */

void zx_e_Body_ADD_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_QueryResponse_s* z)
{
  struct zx_di_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryResponse->gg.g;
    x->QueryResponse = z;
    return;
  case -1:
    y = x->QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryResponse; n > 1 && y; --n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_QueryResponse) */

void zx_e_Body_DEL_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryResponse = (struct zx_di_QueryResponse_s*)x->QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_QueryResponse_s*)x->QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_di12_Query) */

int zx_e_Body_NUM_di12_Query(struct zx_e_Body_s* x)
{
  struct zx_di12_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->di12_Query; y; ++n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_di12_Query) */

struct zx_di12_Query_s* zx_e_Body_GET_di12_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_Query_s* y;
  if (!x) return 0;
  for (y = x->di12_Query; n>=0 && y; --n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_di12_Query) */

struct zx_di12_Query_s* zx_e_Body_POP_di12_Query(struct zx_e_Body_s* x)
{
  struct zx_di12_Query_s* y;
  if (!x) return 0;
  y = x->di12_Query;
  if (y)
    x->di12_Query = (struct zx_di12_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_di12_Query) */

void zx_e_Body_PUSH_di12_Query(struct zx_e_Body_s* x, struct zx_di12_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->di12_Query->gg.g;
  x->di12_Query = z;
}

/* FUNC(zx_e_Body_REV_di12_Query) */

void zx_e_Body_REV_di12_Query(struct zx_e_Body_s* x)
{
  struct zx_di12_Query_s* nxt;
  struct zx_di12_Query_s* y;
  if (!x) return;
  y = x->di12_Query;
  if (!y) return;
  x->di12_Query = 0;
  while (y) {
    nxt = (struct zx_di12_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->di12_Query->gg.g;
    x->di12_Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_di12_Query) */

void zx_e_Body_PUT_di12_Query(struct zx_e_Body_s* x, int n, struct zx_di12_Query_s* z)
{
  struct zx_di12_Query_s* y;
  if (!x || !z) return;
  y = x->di12_Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->di12_Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_di12_Query) */

void zx_e_Body_ADD_di12_Query(struct zx_e_Body_s* x, int n, struct zx_di12_Query_s* z)
{
  struct zx_di12_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->di12_Query->gg.g;
    x->di12_Query = z;
    return;
  case -1:
    y = x->di12_Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_Query; n > 1 && y; --n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_di12_Query) */

void zx_e_Body_DEL_di12_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->di12_Query = (struct zx_di12_Query_s*)x->di12_Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Query_s*)x->di12_Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_Query; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_di12_QueryResponse) */

int zx_e_Body_NUM_di12_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->di12_QueryResponse; y; ++n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_di12_QueryResponse) */

struct zx_di12_QueryResponse_s* zx_e_Body_GET_di12_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->di12_QueryResponse; n>=0 && y; --n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_di12_QueryResponse) */

struct zx_di12_QueryResponse_s* zx_e_Body_POP_di12_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x) return 0;
  y = x->di12_QueryResponse;
  if (y)
    x->di12_QueryResponse = (struct zx_di12_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_di12_QueryResponse) */

void zx_e_Body_PUSH_di12_QueryResponse(struct zx_e_Body_s* x, struct zx_di12_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->di12_QueryResponse->gg.g;
  x->di12_QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_di12_QueryResponse) */

void zx_e_Body_REV_di12_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_QueryResponse_s* nxt;
  struct zx_di12_QueryResponse_s* y;
  if (!x) return;
  y = x->di12_QueryResponse;
  if (!y) return;
  x->di12_QueryResponse = 0;
  while (y) {
    nxt = (struct zx_di12_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->di12_QueryResponse->gg.g;
    x->di12_QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_di12_QueryResponse) */

void zx_e_Body_PUT_di12_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di12_QueryResponse_s* z)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->di12_QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->di12_QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_di12_QueryResponse) */

void zx_e_Body_ADD_di12_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_di12_QueryResponse_s* z)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->di12_QueryResponse->gg.g;
    x->di12_QueryResponse = z;
    return;
  case -1:
    y = x->di12_QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_QueryResponse; n > 1 && y; --n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_di12_QueryResponse) */

void zx_e_Body_DEL_di12_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->di12_QueryResponse = (struct zx_di12_QueryResponse_s*)x->di12_QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_QueryResponse_s*)x->di12_QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->di12_QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Modify) */

int zx_e_Body_NUM_Modify(struct zx_e_Body_s* x)
{
  struct zx_di12_Modify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Modify; y; ++n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Modify) */

struct zx_di12_Modify_s* zx_e_Body_GET_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_Modify_s* y;
  if (!x) return 0;
  for (y = x->Modify; n>=0 && y; --n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Modify) */

struct zx_di12_Modify_s* zx_e_Body_POP_Modify(struct zx_e_Body_s* x)
{
  struct zx_di12_Modify_s* y;
  if (!x) return 0;
  y = x->Modify;
  if (y)
    x->Modify = (struct zx_di12_Modify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Modify) */

void zx_e_Body_PUSH_Modify(struct zx_e_Body_s* x, struct zx_di12_Modify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Modify->gg.g;
  x->Modify = z;
}

/* FUNC(zx_e_Body_REV_Modify) */

void zx_e_Body_REV_Modify(struct zx_e_Body_s* x)
{
  struct zx_di12_Modify_s* nxt;
  struct zx_di12_Modify_s* y;
  if (!x) return;
  y = x->Modify;
  if (!y) return;
  x->Modify = 0;
  while (y) {
    nxt = (struct zx_di12_Modify_s*)y->gg.g.n;
    y->gg.g.n = &x->Modify->gg.g;
    x->Modify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Modify) */

void zx_e_Body_PUT_Modify(struct zx_e_Body_s* x, int n, struct zx_di12_Modify_s* z)
{
  struct zx_di12_Modify_s* y;
  if (!x || !z) return;
  y = x->Modify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Modify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Modify) */

void zx_e_Body_ADD_Modify(struct zx_e_Body_s* x, int n, struct zx_di12_Modify_s* z)
{
  struct zx_di12_Modify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Modify->gg.g;
    x->Modify = z;
    return;
  case -1:
    y = x->Modify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modify; n > 1 && y; --n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Modify) */

void zx_e_Body_DEL_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_Modify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Modify = (struct zx_di12_Modify_s*)x->Modify->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_Modify_s*)x->Modify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Modify; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ModifyResponse) */

int zx_e_Body_NUM_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_ModifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ModifyResponse; y; ++n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ModifyResponse) */

struct zx_di12_ModifyResponse_s* zx_e_Body_GET_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x) return 0;
  for (y = x->ModifyResponse; n>=0 && y; --n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ModifyResponse) */

struct zx_di12_ModifyResponse_s* zx_e_Body_POP_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x) return 0;
  y = x->ModifyResponse;
  if (y)
    x->ModifyResponse = (struct zx_di12_ModifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ModifyResponse) */

void zx_e_Body_PUSH_ModifyResponse(struct zx_e_Body_s* x, struct zx_di12_ModifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ModifyResponse->gg.g;
  x->ModifyResponse = z;
}

/* FUNC(zx_e_Body_REV_ModifyResponse) */

void zx_e_Body_REV_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_di12_ModifyResponse_s* nxt;
  struct zx_di12_ModifyResponse_s* y;
  if (!x) return;
  y = x->ModifyResponse;
  if (!y) return;
  x->ModifyResponse = 0;
  while (y) {
    nxt = (struct zx_di12_ModifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ModifyResponse->gg.g;
    x->ModifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ModifyResponse) */

void zx_e_Body_PUT_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_di12_ModifyResponse_s* z)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x || !z) return;
  y = x->ModifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ModifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ModifyResponse) */

void zx_e_Body_ADD_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_di12_ModifyResponse_s* z)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ModifyResponse->gg.g;
    x->ModifyResponse = z;
    return;
  case -1:
    y = x->ModifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ModifyResponse; n > 1 && y; --n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ModifyResponse) */

void zx_e_Body_DEL_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di12_ModifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ModifyResponse = (struct zx_di12_ModifyResponse_s*)x->ModifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di12_ModifyResponse_s*)x->ModifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ModifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di12_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Fault) */

int zx_e_Body_NUM_Fault(struct zx_e_Body_s* x)
{
  struct zx_e_Fault_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Fault; y; ++n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Fault) */

struct zx_e_Fault_s* zx_e_Body_GET_Fault(struct zx_e_Body_s* x, int n)
{
  struct zx_e_Fault_s* y;
  if (!x) return 0;
  for (y = x->Fault; n>=0 && y; --n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Fault) */

struct zx_e_Fault_s* zx_e_Body_POP_Fault(struct zx_e_Body_s* x)
{
  struct zx_e_Fault_s* y;
  if (!x) return 0;
  y = x->Fault;
  if (y)
    x->Fault = (struct zx_e_Fault_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Fault) */

void zx_e_Body_PUSH_Fault(struct zx_e_Body_s* x, struct zx_e_Fault_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Fault->gg.g;
  x->Fault = z;
}

/* FUNC(zx_e_Body_REV_Fault) */

void zx_e_Body_REV_Fault(struct zx_e_Body_s* x)
{
  struct zx_e_Fault_s* nxt;
  struct zx_e_Fault_s* y;
  if (!x) return;
  y = x->Fault;
  if (!y) return;
  x->Fault = 0;
  while (y) {
    nxt = (struct zx_e_Fault_s*)y->gg.g.n;
    y->gg.g.n = &x->Fault->gg.g;
    x->Fault = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Fault) */

void zx_e_Body_PUT_Fault(struct zx_e_Body_s* x, int n, struct zx_e_Fault_s* z)
{
  struct zx_e_Fault_s* y;
  if (!x || !z) return;
  y = x->Fault;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Fault = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Fault) */

void zx_e_Body_ADD_Fault(struct zx_e_Body_s* x, int n, struct zx_e_Fault_s* z)
{
  struct zx_e_Fault_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Fault->gg.g;
    x->Fault = z;
    return;
  case -1:
    y = x->Fault;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y; --n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Fault) */

void zx_e_Body_DEL_Fault(struct zx_e_Body_s* x, int n)
{
  struct zx_e_Fault_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Fault = (struct zx_e_Fault_s*)x->Fault->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Fault_s*)x->Fault;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Fault; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Fault_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDAssociationAdd) */

int zx_e_Body_NUM_SvcMDAssociationAdd(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAdd; y; ++n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDAssociationAdd) */

struct zx_di_SvcMDAssociationAdd_s* zx_e_Body_GET_SvcMDAssociationAdd(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAdd; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDAssociationAdd) */

struct zx_di_SvcMDAssociationAdd_s* zx_e_Body_POP_SvcMDAssociationAdd(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationAdd;
  if (y)
    x->SvcMDAssociationAdd = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDAssociationAdd) */

void zx_e_Body_PUSH_SvcMDAssociationAdd(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationAdd_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationAdd->gg.g;
  x->SvcMDAssociationAdd = z;
}

/* FUNC(zx_e_Body_REV_SvcMDAssociationAdd) */

void zx_e_Body_REV_SvcMDAssociationAdd(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationAdd_s* nxt;
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x) return;
  y = x->SvcMDAssociationAdd;
  if (!y) return;
  x->SvcMDAssociationAdd = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationAdd->gg.g;
    x->SvcMDAssociationAdd = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDAssociationAdd) */

void zx_e_Body_PUT_SvcMDAssociationAdd(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationAdd_s* z)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationAdd;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationAdd = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDAssociationAdd) */

void zx_e_Body_ADD_SvcMDAssociationAdd(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationAdd_s* z)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationAdd->gg.g;
    x->SvcMDAssociationAdd = z;
    return;
  case -1:
    y = x->SvcMDAssociationAdd;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAdd; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDAssociationAdd) */

void zx_e_Body_DEL_SvcMDAssociationAdd(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationAdd_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationAdd = (struct zx_di_SvcMDAssociationAdd_s*)x->SvcMDAssociationAdd->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationAdd_s*)x->SvcMDAssociationAdd;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAdd; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationAdd_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDAssociationAddResponse) */

int zx_e_Body_NUM_SvcMDAssociationAddResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAddResponse; y; ++n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDAssociationAddResponse) */

struct zx_di_SvcMDAssociationAddResponse_s* zx_e_Body_GET_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationAddResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDAssociationAddResponse) */

struct zx_di_SvcMDAssociationAddResponse_s* zx_e_Body_POP_SvcMDAssociationAddResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationAddResponse;
  if (y)
    x->SvcMDAssociationAddResponse = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDAssociationAddResponse) */

void zx_e_Body_PUSH_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationAddResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationAddResponse->gg.g;
  x->SvcMDAssociationAddResponse = z;
}

/* FUNC(zx_e_Body_REV_SvcMDAssociationAddResponse) */

void zx_e_Body_REV_SvcMDAssociationAddResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationAddResponse_s* nxt;
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationAddResponse;
  if (!y) return;
  x->SvcMDAssociationAddResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationAddResponse->gg.g;
    x->SvcMDAssociationAddResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDAssociationAddResponse) */

void zx_e_Body_PUT_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationAddResponse_s* z)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationAddResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationAddResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDAssociationAddResponse) */

void zx_e_Body_ADD_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationAddResponse_s* z)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationAddResponse->gg.g;
    x->SvcMDAssociationAddResponse = z;
    return;
  case -1:
    y = x->SvcMDAssociationAddResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAddResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDAssociationAddResponse) */

void zx_e_Body_DEL_SvcMDAssociationAddResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationAddResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationAddResponse = (struct zx_di_SvcMDAssociationAddResponse_s*)x->SvcMDAssociationAddResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationAddResponse_s*)x->SvcMDAssociationAddResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationAddResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationAddResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDAssociationDelete) */

int zx_e_Body_NUM_SvcMDAssociationDelete(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDelete; y; ++n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDAssociationDelete) */

struct zx_di_SvcMDAssociationDelete_s* zx_e_Body_GET_SvcMDAssociationDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDelete; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDAssociationDelete) */

struct zx_di_SvcMDAssociationDelete_s* zx_e_Body_POP_SvcMDAssociationDelete(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationDelete;
  if (y)
    x->SvcMDAssociationDelete = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDAssociationDelete) */

void zx_e_Body_PUSH_SvcMDAssociationDelete(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationDelete->gg.g;
  x->SvcMDAssociationDelete = z;
}

/* FUNC(zx_e_Body_REV_SvcMDAssociationDelete) */

void zx_e_Body_REV_SvcMDAssociationDelete(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationDelete_s* nxt;
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x) return;
  y = x->SvcMDAssociationDelete;
  if (!y) return;
  x->SvcMDAssociationDelete = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationDelete->gg.g;
    x->SvcMDAssociationDelete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDAssociationDelete) */

void zx_e_Body_PUT_SvcMDAssociationDelete(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationDelete_s* z)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDAssociationDelete) */

void zx_e_Body_ADD_SvcMDAssociationDelete(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationDelete_s* z)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationDelete->gg.g;
    x->SvcMDAssociationDelete = z;
    return;
  case -1:
    y = x->SvcMDAssociationDelete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDelete; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDAssociationDelete) */

void zx_e_Body_DEL_SvcMDAssociationDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationDelete = (struct zx_di_SvcMDAssociationDelete_s*)x->SvcMDAssociationDelete->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationDelete_s*)x->SvcMDAssociationDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDelete; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDAssociationDeleteResponse) */

int zx_e_Body_NUM_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDeleteResponse; y; ++n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDAssociationDeleteResponse) */

struct zx_di_SvcMDAssociationDeleteResponse_s* zx_e_Body_GET_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationDeleteResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDAssociationDeleteResponse) */

struct zx_di_SvcMDAssociationDeleteResponse_s* zx_e_Body_POP_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationDeleteResponse;
  if (y)
    x->SvcMDAssociationDeleteResponse = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDAssociationDeleteResponse) */

void zx_e_Body_PUSH_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
  x->SvcMDAssociationDeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_SvcMDAssociationDeleteResponse) */

void zx_e_Body_REV_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* nxt;
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationDeleteResponse;
  if (!y) return;
  x->SvcMDAssociationDeleteResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
    x->SvcMDAssociationDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDAssociationDeleteResponse) */

void zx_e_Body_PUT_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationDeleteResponse_s* z)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDAssociationDeleteResponse) */

void zx_e_Body_ADD_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationDeleteResponse_s* z)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationDeleteResponse->gg.g;
    x->SvcMDAssociationDeleteResponse = z;
    return;
  case -1:
    y = x->SvcMDAssociationDeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDeleteResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDAssociationDeleteResponse) */

void zx_e_Body_DEL_SvcMDAssociationDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationDeleteResponse = (struct zx_di_SvcMDAssociationDeleteResponse_s*)x->SvcMDAssociationDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)x->SvcMDAssociationDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDAssociationQuery) */

int zx_e_Body_NUM_SvcMDAssociationQuery(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQuery; y; ++n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDAssociationQuery) */

struct zx_di_SvcMDAssociationQuery_s* zx_e_Body_GET_SvcMDAssociationQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQuery; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDAssociationQuery) */

struct zx_di_SvcMDAssociationQuery_s* zx_e_Body_POP_SvcMDAssociationQuery(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationQuery;
  if (y)
    x->SvcMDAssociationQuery = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDAssociationQuery) */

void zx_e_Body_PUSH_SvcMDAssociationQuery(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationQuery->gg.g;
  x->SvcMDAssociationQuery = z;
}

/* FUNC(zx_e_Body_REV_SvcMDAssociationQuery) */

void zx_e_Body_REV_SvcMDAssociationQuery(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationQuery_s* nxt;
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x) return;
  y = x->SvcMDAssociationQuery;
  if (!y) return;
  x->SvcMDAssociationQuery = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationQuery->gg.g;
    x->SvcMDAssociationQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDAssociationQuery) */

void zx_e_Body_PUT_SvcMDAssociationQuery(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationQuery_s* z)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDAssociationQuery) */

void zx_e_Body_ADD_SvcMDAssociationQuery(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationQuery_s* z)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationQuery->gg.g;
    x->SvcMDAssociationQuery = z;
    return;
  case -1:
    y = x->SvcMDAssociationQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQuery; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDAssociationQuery) */

void zx_e_Body_DEL_SvcMDAssociationQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationQuery = (struct zx_di_SvcMDAssociationQuery_s*)x->SvcMDAssociationQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationQuery_s*)x->SvcMDAssociationQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDAssociationQueryResponse) */

int zx_e_Body_NUM_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQueryResponse; y; ++n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDAssociationQueryResponse) */

struct zx_di_SvcMDAssociationQueryResponse_s* zx_e_Body_GET_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDAssociationQueryResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDAssociationQueryResponse) */

struct zx_di_SvcMDAssociationQueryResponse_s* zx_e_Body_POP_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDAssociationQueryResponse;
  if (y)
    x->SvcMDAssociationQueryResponse = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDAssociationQueryResponse) */

void zx_e_Body_PUSH_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDAssociationQueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDAssociationQueryResponse->gg.g;
  x->SvcMDAssociationQueryResponse = z;
}

/* FUNC(zx_e_Body_REV_SvcMDAssociationQueryResponse) */

void zx_e_Body_REV_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* nxt;
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return;
  y = x->SvcMDAssociationQueryResponse;
  if (!y) return;
  x->SvcMDAssociationQueryResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDAssociationQueryResponse->gg.g;
    x->SvcMDAssociationQueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDAssociationQueryResponse) */

void zx_e_Body_PUT_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationQueryResponse_s* z)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDAssociationQueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDAssociationQueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDAssociationQueryResponse) */

void zx_e_Body_ADD_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDAssociationQueryResponse_s* z)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDAssociationQueryResponse->gg.g;
    x->SvcMDAssociationQueryResponse = z;
    return;
  case -1:
    y = x->SvcMDAssociationQueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQueryResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDAssociationQueryResponse) */

void zx_e_Body_DEL_SvcMDAssociationQueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDAssociationQueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDAssociationQueryResponse = (struct zx_di_SvcMDAssociationQueryResponse_s*)x->SvcMDAssociationQueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDAssociationQueryResponse_s*)x->SvcMDAssociationQueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDAssociationQueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDAssociationQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDRegister) */

int zx_e_Body_NUM_SvcMDRegister(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDRegister_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDRegister; y; ++n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDRegister) */

struct zx_di_SvcMDRegister_s* zx_e_Body_GET_SvcMDRegister(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x) return 0;
  for (y = x->SvcMDRegister; n>=0 && y; --n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDRegister) */

struct zx_di_SvcMDRegister_s* zx_e_Body_POP_SvcMDRegister(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x) return 0;
  y = x->SvcMDRegister;
  if (y)
    x->SvcMDRegister = (struct zx_di_SvcMDRegister_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDRegister) */

void zx_e_Body_PUSH_SvcMDRegister(struct zx_e_Body_s* x, struct zx_di_SvcMDRegister_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDRegister->gg.g;
  x->SvcMDRegister = z;
}

/* FUNC(zx_e_Body_REV_SvcMDRegister) */

void zx_e_Body_REV_SvcMDRegister(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDRegister_s* nxt;
  struct zx_di_SvcMDRegister_s* y;
  if (!x) return;
  y = x->SvcMDRegister;
  if (!y) return;
  x->SvcMDRegister = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDRegister_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDRegister->gg.g;
    x->SvcMDRegister = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDRegister) */

void zx_e_Body_PUT_SvcMDRegister(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDRegister_s* z)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x || !z) return;
  y = x->SvcMDRegister;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDRegister = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDRegister) */

void zx_e_Body_ADD_SvcMDRegister(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDRegister_s* z)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDRegister->gg.g;
    x->SvcMDRegister = z;
    return;
  case -1:
    y = x->SvcMDRegister;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegister; n > 1 && y; --n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDRegister) */

void zx_e_Body_DEL_SvcMDRegister(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDRegister_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDRegister = (struct zx_di_SvcMDRegister_s*)x->SvcMDRegister->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDRegister_s*)x->SvcMDRegister;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegister; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDRegister_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDRegisterResponse) */

int zx_e_Body_NUM_SvcMDRegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDRegisterResponse; y; ++n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDRegisterResponse) */

struct zx_di_SvcMDRegisterResponse_s* zx_e_Body_GET_SvcMDRegisterResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDRegisterResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDRegisterResponse) */

struct zx_di_SvcMDRegisterResponse_s* zx_e_Body_POP_SvcMDRegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDRegisterResponse;
  if (y)
    x->SvcMDRegisterResponse = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDRegisterResponse) */

void zx_e_Body_PUSH_SvcMDRegisterResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDRegisterResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDRegisterResponse->gg.g;
  x->SvcMDRegisterResponse = z;
}

/* FUNC(zx_e_Body_REV_SvcMDRegisterResponse) */

void zx_e_Body_REV_SvcMDRegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDRegisterResponse_s* nxt;
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x) return;
  y = x->SvcMDRegisterResponse;
  if (!y) return;
  x->SvcMDRegisterResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDRegisterResponse->gg.g;
    x->SvcMDRegisterResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDRegisterResponse) */

void zx_e_Body_PUT_SvcMDRegisterResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDRegisterResponse_s* z)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDRegisterResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDRegisterResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDRegisterResponse) */

void zx_e_Body_ADD_SvcMDRegisterResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDRegisterResponse_s* z)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDRegisterResponse->gg.g;
    x->SvcMDRegisterResponse = z;
    return;
  case -1:
    y = x->SvcMDRegisterResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegisterResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDRegisterResponse) */

void zx_e_Body_DEL_SvcMDRegisterResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDRegisterResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDRegisterResponse = (struct zx_di_SvcMDRegisterResponse_s*)x->SvcMDRegisterResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDRegisterResponse_s*)x->SvcMDRegisterResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDRegisterResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDRegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDDelete) */

int zx_e_Body_NUM_SvcMDDelete(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDDelete; y; ++n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDDelete) */

struct zx_di_SvcMDDelete_s* zx_e_Body_GET_SvcMDDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x) return 0;
  for (y = x->SvcMDDelete; n>=0 && y; --n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDDelete) */

struct zx_di_SvcMDDelete_s* zx_e_Body_POP_SvcMDDelete(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x) return 0;
  y = x->SvcMDDelete;
  if (y)
    x->SvcMDDelete = (struct zx_di_SvcMDDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDDelete) */

void zx_e_Body_PUSH_SvcMDDelete(struct zx_e_Body_s* x, struct zx_di_SvcMDDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDDelete->gg.g;
  x->SvcMDDelete = z;
}

/* FUNC(zx_e_Body_REV_SvcMDDelete) */

void zx_e_Body_REV_SvcMDDelete(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDDelete_s* nxt;
  struct zx_di_SvcMDDelete_s* y;
  if (!x) return;
  y = x->SvcMDDelete;
  if (!y) return;
  x->SvcMDDelete = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDDelete->gg.g;
    x->SvcMDDelete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDDelete) */

void zx_e_Body_PUT_SvcMDDelete(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDDelete_s* z)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x || !z) return;
  y = x->SvcMDDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDDelete) */

void zx_e_Body_ADD_SvcMDDelete(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDDelete_s* z)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDDelete->gg.g;
    x->SvcMDDelete = z;
    return;
  case -1:
    y = x->SvcMDDelete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDelete; n > 1 && y; --n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDDelete) */

void zx_e_Body_DEL_SvcMDDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDDelete = (struct zx_di_SvcMDDelete_s*)x->SvcMDDelete->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDDelete_s*)x->SvcMDDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDelete; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDDeleteResponse) */

int zx_e_Body_NUM_SvcMDDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDDeleteResponse; y; ++n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDDeleteResponse) */

struct zx_di_SvcMDDeleteResponse_s* zx_e_Body_GET_SvcMDDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDDeleteResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDDeleteResponse) */

struct zx_di_SvcMDDeleteResponse_s* zx_e_Body_POP_SvcMDDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDDeleteResponse;
  if (y)
    x->SvcMDDeleteResponse = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDDeleteResponse) */

void zx_e_Body_PUSH_SvcMDDeleteResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDDeleteResponse->gg.g;
  x->SvcMDDeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_SvcMDDeleteResponse) */

void zx_e_Body_REV_SvcMDDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDDeleteResponse_s* nxt;
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x) return;
  y = x->SvcMDDeleteResponse;
  if (!y) return;
  x->SvcMDDeleteResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDDeleteResponse->gg.g;
    x->SvcMDDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDDeleteResponse) */

void zx_e_Body_PUT_SvcMDDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDDeleteResponse_s* z)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDDeleteResponse) */

void zx_e_Body_ADD_SvcMDDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDDeleteResponse_s* z)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDDeleteResponse->gg.g;
    x->SvcMDDeleteResponse = z;
    return;
  case -1:
    y = x->SvcMDDeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDeleteResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDDeleteResponse) */

void zx_e_Body_DEL_SvcMDDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDDeleteResponse = (struct zx_di_SvcMDDeleteResponse_s*)x->SvcMDDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDDeleteResponse_s*)x->SvcMDDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDQuery) */

int zx_e_Body_NUM_SvcMDQuery(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDQuery; y; ++n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDQuery) */

struct zx_di_SvcMDQuery_s* zx_e_Body_GET_SvcMDQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x) return 0;
  for (y = x->SvcMDQuery; n>=0 && y; --n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDQuery) */

struct zx_di_SvcMDQuery_s* zx_e_Body_POP_SvcMDQuery(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x) return 0;
  y = x->SvcMDQuery;
  if (y)
    x->SvcMDQuery = (struct zx_di_SvcMDQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDQuery) */

void zx_e_Body_PUSH_SvcMDQuery(struct zx_e_Body_s* x, struct zx_di_SvcMDQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDQuery->gg.g;
  x->SvcMDQuery = z;
}

/* FUNC(zx_e_Body_REV_SvcMDQuery) */

void zx_e_Body_REV_SvcMDQuery(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDQuery_s* nxt;
  struct zx_di_SvcMDQuery_s* y;
  if (!x) return;
  y = x->SvcMDQuery;
  if (!y) return;
  x->SvcMDQuery = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDQuery->gg.g;
    x->SvcMDQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDQuery) */

void zx_e_Body_PUT_SvcMDQuery(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDQuery_s* z)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x || !z) return;
  y = x->SvcMDQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDQuery) */

void zx_e_Body_ADD_SvcMDQuery(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDQuery_s* z)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDQuery->gg.g;
    x->SvcMDQuery = z;
    return;
  case -1:
    y = x->SvcMDQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQuery; n > 1 && y; --n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDQuery) */

void zx_e_Body_DEL_SvcMDQuery(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDQuery = (struct zx_di_SvcMDQuery_s*)x->SvcMDQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDQuery_s*)x->SvcMDQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDQueryResponse) */

int zx_e_Body_NUM_SvcMDQueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDQueryResponse; y; ++n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDQueryResponse) */

struct zx_di_SvcMDQueryResponse_s* zx_e_Body_GET_SvcMDQueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDQueryResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDQueryResponse) */

struct zx_di_SvcMDQueryResponse_s* zx_e_Body_POP_SvcMDQueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDQueryResponse;
  if (y)
    x->SvcMDQueryResponse = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDQueryResponse) */

void zx_e_Body_PUSH_SvcMDQueryResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDQueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDQueryResponse->gg.g;
  x->SvcMDQueryResponse = z;
}

/* FUNC(zx_e_Body_REV_SvcMDQueryResponse) */

void zx_e_Body_REV_SvcMDQueryResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDQueryResponse_s* nxt;
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x) return;
  y = x->SvcMDQueryResponse;
  if (!y) return;
  x->SvcMDQueryResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDQueryResponse->gg.g;
    x->SvcMDQueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDQueryResponse) */

void zx_e_Body_PUT_SvcMDQueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDQueryResponse_s* z)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDQueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDQueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDQueryResponse) */

void zx_e_Body_ADD_SvcMDQueryResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDQueryResponse_s* z)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDQueryResponse->gg.g;
    x->SvcMDQueryResponse = z;
    return;
  case -1:
    y = x->SvcMDQueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQueryResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDQueryResponse) */

void zx_e_Body_DEL_SvcMDQueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDQueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDQueryResponse = (struct zx_di_SvcMDQueryResponse_s*)x->SvcMDQueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDQueryResponse_s*)x->SvcMDQueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDQueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDQueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDReplace) */

int zx_e_Body_NUM_SvcMDReplace(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDReplace_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDReplace; y; ++n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDReplace) */

struct zx_di_SvcMDReplace_s* zx_e_Body_GET_SvcMDReplace(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x) return 0;
  for (y = x->SvcMDReplace; n>=0 && y; --n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDReplace) */

struct zx_di_SvcMDReplace_s* zx_e_Body_POP_SvcMDReplace(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x) return 0;
  y = x->SvcMDReplace;
  if (y)
    x->SvcMDReplace = (struct zx_di_SvcMDReplace_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDReplace) */

void zx_e_Body_PUSH_SvcMDReplace(struct zx_e_Body_s* x, struct zx_di_SvcMDReplace_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDReplace->gg.g;
  x->SvcMDReplace = z;
}

/* FUNC(zx_e_Body_REV_SvcMDReplace) */

void zx_e_Body_REV_SvcMDReplace(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDReplace_s* nxt;
  struct zx_di_SvcMDReplace_s* y;
  if (!x) return;
  y = x->SvcMDReplace;
  if (!y) return;
  x->SvcMDReplace = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDReplace_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDReplace->gg.g;
    x->SvcMDReplace = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDReplace) */

void zx_e_Body_PUT_SvcMDReplace(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDReplace_s* z)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x || !z) return;
  y = x->SvcMDReplace;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDReplace = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDReplace) */

void zx_e_Body_ADD_SvcMDReplace(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDReplace_s* z)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDReplace->gg.g;
    x->SvcMDReplace = z;
    return;
  case -1:
    y = x->SvcMDReplace;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplace; n > 1 && y; --n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDReplace) */

void zx_e_Body_DEL_SvcMDReplace(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDReplace_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDReplace = (struct zx_di_SvcMDReplace_s*)x->SvcMDReplace->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDReplace_s*)x->SvcMDReplace;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplace; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDReplace_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SvcMDReplaceResponse) */

int zx_e_Body_NUM_SvcMDReplaceResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SvcMDReplaceResponse; y; ++n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SvcMDReplaceResponse) */

struct zx_di_SvcMDReplaceResponse_s* zx_e_Body_GET_SvcMDReplaceResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x) return 0;
  for (y = x->SvcMDReplaceResponse; n>=0 && y; --n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SvcMDReplaceResponse) */

struct zx_di_SvcMDReplaceResponse_s* zx_e_Body_POP_SvcMDReplaceResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x) return 0;
  y = x->SvcMDReplaceResponse;
  if (y)
    x->SvcMDReplaceResponse = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SvcMDReplaceResponse) */

void zx_e_Body_PUSH_SvcMDReplaceResponse(struct zx_e_Body_s* x, struct zx_di_SvcMDReplaceResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SvcMDReplaceResponse->gg.g;
  x->SvcMDReplaceResponse = z;
}

/* FUNC(zx_e_Body_REV_SvcMDReplaceResponse) */

void zx_e_Body_REV_SvcMDReplaceResponse(struct zx_e_Body_s* x)
{
  struct zx_di_SvcMDReplaceResponse_s* nxt;
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x) return;
  y = x->SvcMDReplaceResponse;
  if (!y) return;
  x->SvcMDReplaceResponse = 0;
  while (y) {
    nxt = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SvcMDReplaceResponse->gg.g;
    x->SvcMDReplaceResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SvcMDReplaceResponse) */

void zx_e_Body_PUT_SvcMDReplaceResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDReplaceResponse_s* z)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x || !z) return;
  y = x->SvcMDReplaceResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SvcMDReplaceResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SvcMDReplaceResponse) */

void zx_e_Body_ADD_SvcMDReplaceResponse(struct zx_e_Body_s* x, int n, struct zx_di_SvcMDReplaceResponse_s* z)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SvcMDReplaceResponse->gg.g;
    x->SvcMDReplaceResponse = z;
    return;
  case -1:
    y = x->SvcMDReplaceResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplaceResponse; n > 1 && y; --n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SvcMDReplaceResponse) */

void zx_e_Body_DEL_SvcMDReplaceResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_di_SvcMDReplaceResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SvcMDReplaceResponse = (struct zx_di_SvcMDReplaceResponse_s*)x->SvcMDReplaceResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_di_SvcMDReplaceResponse_s*)x->SvcMDReplaceResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SvcMDReplaceResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_di_SvcMDReplaceResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Create) */

int zx_e_Body_NUM_Create(struct zx_e_Body_s* x)
{
  struct zx_dap_Create_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Create; y; ++n, y = (struct zx_dap_Create_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Create) */

struct zx_dap_Create_s* zx_e_Body_GET_Create(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Create_s* y;
  if (!x) return 0;
  for (y = x->Create; n>=0 && y; --n, y = (struct zx_dap_Create_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Create) */

struct zx_dap_Create_s* zx_e_Body_POP_Create(struct zx_e_Body_s* x)
{
  struct zx_dap_Create_s* y;
  if (!x) return 0;
  y = x->Create;
  if (y)
    x->Create = (struct zx_dap_Create_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Create) */

void zx_e_Body_PUSH_Create(struct zx_e_Body_s* x, struct zx_dap_Create_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Create->gg.g;
  x->Create = z;
}

/* FUNC(zx_e_Body_REV_Create) */

void zx_e_Body_REV_Create(struct zx_e_Body_s* x)
{
  struct zx_dap_Create_s* nxt;
  struct zx_dap_Create_s* y;
  if (!x) return;
  y = x->Create;
  if (!y) return;
  x->Create = 0;
  while (y) {
    nxt = (struct zx_dap_Create_s*)y->gg.g.n;
    y->gg.g.n = &x->Create->gg.g;
    x->Create = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Create) */

void zx_e_Body_PUT_Create(struct zx_e_Body_s* x, int n, struct zx_dap_Create_s* z)
{
  struct zx_dap_Create_s* y;
  if (!x || !z) return;
  y = x->Create;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Create = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Create_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Create) */

void zx_e_Body_ADD_Create(struct zx_e_Body_s* x, int n, struct zx_dap_Create_s* z)
{
  struct zx_dap_Create_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Create->gg.g;
    x->Create = z;
    return;
  case -1:
    y = x->Create;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_Create_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Create; n > 1 && y; --n, y = (struct zx_dap_Create_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Create) */

void zx_e_Body_DEL_Create(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Create_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Create = (struct zx_dap_Create_s*)x->Create->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_Create_s*)x->Create;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_Create_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Create; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Create_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_CreateResponse) */

int zx_e_Body_NUM_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_CreateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CreateResponse; y; ++n, y = (struct zx_dap_CreateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_CreateResponse) */

struct zx_dap_CreateResponse_s* zx_e_Body_GET_CreateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_CreateResponse_s* y;
  if (!x) return 0;
  for (y = x->CreateResponse; n>=0 && y; --n, y = (struct zx_dap_CreateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_CreateResponse) */

struct zx_dap_CreateResponse_s* zx_e_Body_POP_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_CreateResponse_s* y;
  if (!x) return 0;
  y = x->CreateResponse;
  if (y)
    x->CreateResponse = (struct zx_dap_CreateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_CreateResponse) */

void zx_e_Body_PUSH_CreateResponse(struct zx_e_Body_s* x, struct zx_dap_CreateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CreateResponse->gg.g;
  x->CreateResponse = z;
}

/* FUNC(zx_e_Body_REV_CreateResponse) */

void zx_e_Body_REV_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_CreateResponse_s* nxt;
  struct zx_dap_CreateResponse_s* y;
  if (!x) return;
  y = x->CreateResponse;
  if (!y) return;
  x->CreateResponse = 0;
  while (y) {
    nxt = (struct zx_dap_CreateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->CreateResponse->gg.g;
    x->CreateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_CreateResponse) */

void zx_e_Body_PUT_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_dap_CreateResponse_s* z)
{
  struct zx_dap_CreateResponse_s* y;
  if (!x || !z) return;
  y = x->CreateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CreateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_CreateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_CreateResponse) */

void zx_e_Body_ADD_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_dap_CreateResponse_s* z)
{
  struct zx_dap_CreateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CreateResponse->gg.g;
    x->CreateResponse = z;
    return;
  case -1:
    y = x->CreateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_CreateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreateResponse; n > 1 && y; --n, y = (struct zx_dap_CreateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_CreateResponse) */

void zx_e_Body_DEL_CreateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_CreateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CreateResponse = (struct zx_dap_CreateResponse_s*)x->CreateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_CreateResponse_s*)x->CreateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_CreateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_CreateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_dap_Query) */

int zx_e_Body_NUM_dap_Query(struct zx_e_Body_s* x)
{
  struct zx_dap_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->dap_Query; y; ++n, y = (struct zx_dap_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_dap_Query) */

struct zx_dap_Query_s* zx_e_Body_GET_dap_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Query_s* y;
  if (!x) return 0;
  for (y = x->dap_Query; n>=0 && y; --n, y = (struct zx_dap_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_dap_Query) */

struct zx_dap_Query_s* zx_e_Body_POP_dap_Query(struct zx_e_Body_s* x)
{
  struct zx_dap_Query_s* y;
  if (!x) return 0;
  y = x->dap_Query;
  if (y)
    x->dap_Query = (struct zx_dap_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_dap_Query) */

void zx_e_Body_PUSH_dap_Query(struct zx_e_Body_s* x, struct zx_dap_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->dap_Query->gg.g;
  x->dap_Query = z;
}

/* FUNC(zx_e_Body_REV_dap_Query) */

void zx_e_Body_REV_dap_Query(struct zx_e_Body_s* x)
{
  struct zx_dap_Query_s* nxt;
  struct zx_dap_Query_s* y;
  if (!x) return;
  y = x->dap_Query;
  if (!y) return;
  x->dap_Query = 0;
  while (y) {
    nxt = (struct zx_dap_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->dap_Query->gg.g;
    x->dap_Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_dap_Query) */

void zx_e_Body_PUT_dap_Query(struct zx_e_Body_s* x, int n, struct zx_dap_Query_s* z)
{
  struct zx_dap_Query_s* y;
  if (!x || !z) return;
  y = x->dap_Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->dap_Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_dap_Query) */

void zx_e_Body_ADD_dap_Query(struct zx_e_Body_s* x, int n, struct zx_dap_Query_s* z)
{
  struct zx_dap_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->dap_Query->gg.g;
    x->dap_Query = z;
    return;
  case -1:
    y = x->dap_Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dap_Query; n > 1 && y; --n, y = (struct zx_dap_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_dap_Query) */

void zx_e_Body_DEL_dap_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->dap_Query = (struct zx_dap_Query_s*)x->dap_Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_Query_s*)x->dap_Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dap_Query; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_dap_QueryResponse) */

int zx_e_Body_NUM_dap_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->dap_QueryResponse; y; ++n, y = (struct zx_dap_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_dap_QueryResponse) */

struct zx_dap_QueryResponse_s* zx_e_Body_GET_dap_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->dap_QueryResponse; n>=0 && y; --n, y = (struct zx_dap_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_dap_QueryResponse) */

struct zx_dap_QueryResponse_s* zx_e_Body_POP_dap_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_QueryResponse_s* y;
  if (!x) return 0;
  y = x->dap_QueryResponse;
  if (y)
    x->dap_QueryResponse = (struct zx_dap_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_dap_QueryResponse) */

void zx_e_Body_PUSH_dap_QueryResponse(struct zx_e_Body_s* x, struct zx_dap_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->dap_QueryResponse->gg.g;
  x->dap_QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_dap_QueryResponse) */

void zx_e_Body_REV_dap_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_QueryResponse_s* nxt;
  struct zx_dap_QueryResponse_s* y;
  if (!x) return;
  y = x->dap_QueryResponse;
  if (!y) return;
  x->dap_QueryResponse = 0;
  while (y) {
    nxt = (struct zx_dap_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->dap_QueryResponse->gg.g;
    x->dap_QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_dap_QueryResponse) */

void zx_e_Body_PUT_dap_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_dap_QueryResponse_s* z)
{
  struct zx_dap_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->dap_QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->dap_QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_dap_QueryResponse) */

void zx_e_Body_ADD_dap_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_dap_QueryResponse_s* z)
{
  struct zx_dap_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->dap_QueryResponse->gg.g;
    x->dap_QueryResponse = z;
    return;
  case -1:
    y = x->dap_QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dap_QueryResponse; n > 1 && y; --n, y = (struct zx_dap_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_dap_QueryResponse) */

void zx_e_Body_DEL_dap_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->dap_QueryResponse = (struct zx_dap_QueryResponse_s*)x->dap_QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_QueryResponse_s*)x->dap_QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dap_QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_dap_Modify) */

int zx_e_Body_NUM_dap_Modify(struct zx_e_Body_s* x)
{
  struct zx_dap_Modify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->dap_Modify; y; ++n, y = (struct zx_dap_Modify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_dap_Modify) */

struct zx_dap_Modify_s* zx_e_Body_GET_dap_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Modify_s* y;
  if (!x) return 0;
  for (y = x->dap_Modify; n>=0 && y; --n, y = (struct zx_dap_Modify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_dap_Modify) */

struct zx_dap_Modify_s* zx_e_Body_POP_dap_Modify(struct zx_e_Body_s* x)
{
  struct zx_dap_Modify_s* y;
  if (!x) return 0;
  y = x->dap_Modify;
  if (y)
    x->dap_Modify = (struct zx_dap_Modify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_dap_Modify) */

void zx_e_Body_PUSH_dap_Modify(struct zx_e_Body_s* x, struct zx_dap_Modify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->dap_Modify->gg.g;
  x->dap_Modify = z;
}

/* FUNC(zx_e_Body_REV_dap_Modify) */

void zx_e_Body_REV_dap_Modify(struct zx_e_Body_s* x)
{
  struct zx_dap_Modify_s* nxt;
  struct zx_dap_Modify_s* y;
  if (!x) return;
  y = x->dap_Modify;
  if (!y) return;
  x->dap_Modify = 0;
  while (y) {
    nxt = (struct zx_dap_Modify_s*)y->gg.g.n;
    y->gg.g.n = &x->dap_Modify->gg.g;
    x->dap_Modify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_dap_Modify) */

void zx_e_Body_PUT_dap_Modify(struct zx_e_Body_s* x, int n, struct zx_dap_Modify_s* z)
{
  struct zx_dap_Modify_s* y;
  if (!x || !z) return;
  y = x->dap_Modify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->dap_Modify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_dap_Modify) */

void zx_e_Body_ADD_dap_Modify(struct zx_e_Body_s* x, int n, struct zx_dap_Modify_s* z)
{
  struct zx_dap_Modify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->dap_Modify->gg.g;
    x->dap_Modify = z;
    return;
  case -1:
    y = x->dap_Modify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dap_Modify; n > 1 && y; --n, y = (struct zx_dap_Modify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_dap_Modify) */

void zx_e_Body_DEL_dap_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Modify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->dap_Modify = (struct zx_dap_Modify_s*)x->dap_Modify->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_Modify_s*)x->dap_Modify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dap_Modify; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_dap_ModifyResponse) */

int zx_e_Body_NUM_dap_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_ModifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->dap_ModifyResponse; y; ++n, y = (struct zx_dap_ModifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_dap_ModifyResponse) */

struct zx_dap_ModifyResponse_s* zx_e_Body_GET_dap_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_ModifyResponse_s* y;
  if (!x) return 0;
  for (y = x->dap_ModifyResponse; n>=0 && y; --n, y = (struct zx_dap_ModifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_dap_ModifyResponse) */

struct zx_dap_ModifyResponse_s* zx_e_Body_POP_dap_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_ModifyResponse_s* y;
  if (!x) return 0;
  y = x->dap_ModifyResponse;
  if (y)
    x->dap_ModifyResponse = (struct zx_dap_ModifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_dap_ModifyResponse) */

void zx_e_Body_PUSH_dap_ModifyResponse(struct zx_e_Body_s* x, struct zx_dap_ModifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->dap_ModifyResponse->gg.g;
  x->dap_ModifyResponse = z;
}

/* FUNC(zx_e_Body_REV_dap_ModifyResponse) */

void zx_e_Body_REV_dap_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_ModifyResponse_s* nxt;
  struct zx_dap_ModifyResponse_s* y;
  if (!x) return;
  y = x->dap_ModifyResponse;
  if (!y) return;
  x->dap_ModifyResponse = 0;
  while (y) {
    nxt = (struct zx_dap_ModifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->dap_ModifyResponse->gg.g;
    x->dap_ModifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_dap_ModifyResponse) */

void zx_e_Body_PUT_dap_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_dap_ModifyResponse_s* z)
{
  struct zx_dap_ModifyResponse_s* y;
  if (!x || !z) return;
  y = x->dap_ModifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->dap_ModifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_dap_ModifyResponse) */

void zx_e_Body_ADD_dap_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_dap_ModifyResponse_s* z)
{
  struct zx_dap_ModifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->dap_ModifyResponse->gg.g;
    x->dap_ModifyResponse = z;
    return;
  case -1:
    y = x->dap_ModifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dap_ModifyResponse; n > 1 && y; --n, y = (struct zx_dap_ModifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_dap_ModifyResponse) */

void zx_e_Body_DEL_dap_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_ModifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->dap_ModifyResponse = (struct zx_dap_ModifyResponse_s*)x->dap_ModifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_ModifyResponse_s*)x->dap_ModifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->dap_ModifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Delete) */

int zx_e_Body_NUM_Delete(struct zx_e_Body_s* x)
{
  struct zx_dap_Delete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Delete; y; ++n, y = (struct zx_dap_Delete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Delete) */

struct zx_dap_Delete_s* zx_e_Body_GET_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Delete_s* y;
  if (!x) return 0;
  for (y = x->Delete; n>=0 && y; --n, y = (struct zx_dap_Delete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Delete) */

struct zx_dap_Delete_s* zx_e_Body_POP_Delete(struct zx_e_Body_s* x)
{
  struct zx_dap_Delete_s* y;
  if (!x) return 0;
  y = x->Delete;
  if (y)
    x->Delete = (struct zx_dap_Delete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Delete) */

void zx_e_Body_PUSH_Delete(struct zx_e_Body_s* x, struct zx_dap_Delete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Delete->gg.g;
  x->Delete = z;
}

/* FUNC(zx_e_Body_REV_Delete) */

void zx_e_Body_REV_Delete(struct zx_e_Body_s* x)
{
  struct zx_dap_Delete_s* nxt;
  struct zx_dap_Delete_s* y;
  if (!x) return;
  y = x->Delete;
  if (!y) return;
  x->Delete = 0;
  while (y) {
    nxt = (struct zx_dap_Delete_s*)y->gg.g.n;
    y->gg.g.n = &x->Delete->gg.g;
    x->Delete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Delete) */

void zx_e_Body_PUT_Delete(struct zx_e_Body_s* x, int n, struct zx_dap_Delete_s* z)
{
  struct zx_dap_Delete_s* y;
  if (!x || !z) return;
  y = x->Delete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Delete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Delete) */

void zx_e_Body_ADD_Delete(struct zx_e_Body_s* x, int n, struct zx_dap_Delete_s* z)
{
  struct zx_dap_Delete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Delete->gg.g;
    x->Delete = z;
    return;
  case -1:
    y = x->Delete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Delete; n > 1 && y; --n, y = (struct zx_dap_Delete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Delete) */

void zx_e_Body_DEL_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Delete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Delete = (struct zx_dap_Delete_s*)x->Delete->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_Delete_s*)x->Delete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Delete; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_DeleteResponse) */

int zx_e_Body_NUM_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_DeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeleteResponse; y; ++n, y = (struct zx_dap_DeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_DeleteResponse) */

struct zx_dap_DeleteResponse_s* zx_e_Body_GET_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_DeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->DeleteResponse; n>=0 && y; --n, y = (struct zx_dap_DeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_DeleteResponse) */

struct zx_dap_DeleteResponse_s* zx_e_Body_POP_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_DeleteResponse_s* y;
  if (!x) return 0;
  y = x->DeleteResponse;
  if (y)
    x->DeleteResponse = (struct zx_dap_DeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_DeleteResponse) */

void zx_e_Body_PUSH_DeleteResponse(struct zx_e_Body_s* x, struct zx_dap_DeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeleteResponse->gg.g;
  x->DeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_DeleteResponse) */

void zx_e_Body_REV_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_DeleteResponse_s* nxt;
  struct zx_dap_DeleteResponse_s* y;
  if (!x) return;
  y = x->DeleteResponse;
  if (!y) return;
  x->DeleteResponse = 0;
  while (y) {
    nxt = (struct zx_dap_DeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->DeleteResponse->gg.g;
    x->DeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_DeleteResponse) */

void zx_e_Body_PUT_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_dap_DeleteResponse_s* z)
{
  struct zx_dap_DeleteResponse_s* y;
  if (!x || !z) return;
  y = x->DeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_DeleteResponse) */

void zx_e_Body_ADD_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_dap_DeleteResponse_s* z)
{
  struct zx_dap_DeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeleteResponse->gg.g;
    x->DeleteResponse = z;
    return;
  case -1:
    y = x->DeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteResponse; n > 1 && y; --n, y = (struct zx_dap_DeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_DeleteResponse) */

void zx_e_Body_DEL_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_DeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeleteResponse = (struct zx_dap_DeleteResponse_s*)x->DeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_DeleteResponse_s*)x->DeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Notify) */

int zx_e_Body_NUM_Notify(struct zx_e_Body_s* x)
{
  struct zx_dap_Notify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Notify; y; ++n, y = (struct zx_dap_Notify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Notify) */

struct zx_dap_Notify_s* zx_e_Body_GET_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Notify_s* y;
  if (!x) return 0;
  for (y = x->Notify; n>=0 && y; --n, y = (struct zx_dap_Notify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Notify) */

struct zx_dap_Notify_s* zx_e_Body_POP_Notify(struct zx_e_Body_s* x)
{
  struct zx_dap_Notify_s* y;
  if (!x) return 0;
  y = x->Notify;
  if (y)
    x->Notify = (struct zx_dap_Notify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Notify) */

void zx_e_Body_PUSH_Notify(struct zx_e_Body_s* x, struct zx_dap_Notify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Notify->gg.g;
  x->Notify = z;
}

/* FUNC(zx_e_Body_REV_Notify) */

void zx_e_Body_REV_Notify(struct zx_e_Body_s* x)
{
  struct zx_dap_Notify_s* nxt;
  struct zx_dap_Notify_s* y;
  if (!x) return;
  y = x->Notify;
  if (!y) return;
  x->Notify = 0;
  while (y) {
    nxt = (struct zx_dap_Notify_s*)y->gg.g.n;
    y->gg.g.n = &x->Notify->gg.g;
    x->Notify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Notify) */

void zx_e_Body_PUT_Notify(struct zx_e_Body_s* x, int n, struct zx_dap_Notify_s* z)
{
  struct zx_dap_Notify_s* y;
  if (!x || !z) return;
  y = x->Notify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Notify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Notify) */

void zx_e_Body_ADD_Notify(struct zx_e_Body_s* x, int n, struct zx_dap_Notify_s* z)
{
  struct zx_dap_Notify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Notify->gg.g;
    x->Notify = z;
    return;
  case -1:
    y = x->Notify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Notify; n > 1 && y; --n, y = (struct zx_dap_Notify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Notify) */

void zx_e_Body_DEL_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_Notify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Notify = (struct zx_dap_Notify_s*)x->Notify->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_Notify_s*)x->Notify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Notify; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_NotifyResponse) */

int zx_e_Body_NUM_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_NotifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NotifyResponse; y; ++n, y = (struct zx_dap_NotifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_NotifyResponse) */

struct zx_dap_NotifyResponse_s* zx_e_Body_GET_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_NotifyResponse_s* y;
  if (!x) return 0;
  for (y = x->NotifyResponse; n>=0 && y; --n, y = (struct zx_dap_NotifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_NotifyResponse) */

struct zx_dap_NotifyResponse_s* zx_e_Body_POP_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_NotifyResponse_s* y;
  if (!x) return 0;
  y = x->NotifyResponse;
  if (y)
    x->NotifyResponse = (struct zx_dap_NotifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_NotifyResponse) */

void zx_e_Body_PUSH_NotifyResponse(struct zx_e_Body_s* x, struct zx_dap_NotifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NotifyResponse->gg.g;
  x->NotifyResponse = z;
}

/* FUNC(zx_e_Body_REV_NotifyResponse) */

void zx_e_Body_REV_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_dap_NotifyResponse_s* nxt;
  struct zx_dap_NotifyResponse_s* y;
  if (!x) return;
  y = x->NotifyResponse;
  if (!y) return;
  x->NotifyResponse = 0;
  while (y) {
    nxt = (struct zx_dap_NotifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->NotifyResponse->gg.g;
    x->NotifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_NotifyResponse) */

void zx_e_Body_PUT_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_dap_NotifyResponse_s* z)
{
  struct zx_dap_NotifyResponse_s* y;
  if (!x || !z) return;
  y = x->NotifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NotifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_NotifyResponse) */

void zx_e_Body_ADD_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_dap_NotifyResponse_s* z)
{
  struct zx_dap_NotifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NotifyResponse->gg.g;
    x->NotifyResponse = z;
    return;
  case -1:
    y = x->NotifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_dap_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyResponse; n > 1 && y; --n, y = (struct zx_dap_NotifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_NotifyResponse) */

void zx_e_Body_DEL_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_dap_NotifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NotifyResponse = (struct zx_dap_NotifyResponse_s*)x->NotifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_dap_NotifyResponse_s*)x->NotifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_dap_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NotifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_dap_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AddEntityRequest) */

int zx_e_Body_NUM_AddEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddEntityRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AddEntityRequest; y; ++n, y = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AddEntityRequest) */

struct zx_ps_AddEntityRequest_s* zx_e_Body_GET_AddEntityRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddEntityRequest_s* y;
  if (!x) return 0;
  for (y = x->AddEntityRequest; n>=0 && y; --n, y = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AddEntityRequest) */

struct zx_ps_AddEntityRequest_s* zx_e_Body_POP_AddEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddEntityRequest_s* y;
  if (!x) return 0;
  y = x->AddEntityRequest;
  if (y)
    x->AddEntityRequest = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AddEntityRequest) */

void zx_e_Body_PUSH_AddEntityRequest(struct zx_e_Body_s* x, struct zx_ps_AddEntityRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AddEntityRequest->gg.g;
  x->AddEntityRequest = z;
}

/* FUNC(zx_e_Body_REV_AddEntityRequest) */

void zx_e_Body_REV_AddEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddEntityRequest_s* nxt;
  struct zx_ps_AddEntityRequest_s* y;
  if (!x) return;
  y = x->AddEntityRequest;
  if (!y) return;
  x->AddEntityRequest = 0;
  while (y) {
    nxt = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AddEntityRequest->gg.g;
    x->AddEntityRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AddEntityRequest) */

void zx_e_Body_PUT_AddEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddEntityRequest_s* z)
{
  struct zx_ps_AddEntityRequest_s* y;
  if (!x || !z) return;
  y = x->AddEntityRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AddEntityRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AddEntityRequest) */

void zx_e_Body_ADD_AddEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddEntityRequest_s* z)
{
  struct zx_ps_AddEntityRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AddEntityRequest->gg.g;
    x->AddEntityRequest = z;
    return;
  case -1:
    y = x->AddEntityRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddEntityRequest; n > 1 && y; --n, y = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AddEntityRequest) */

void zx_e_Body_DEL_AddEntityRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddEntityRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AddEntityRequest = (struct zx_ps_AddEntityRequest_s*)x->AddEntityRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_AddEntityRequest_s*)x->AddEntityRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddEntityRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddEntityRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AddEntityResponse) */

int zx_e_Body_NUM_AddEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddEntityResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AddEntityResponse; y; ++n, y = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AddEntityResponse) */

struct zx_ps_AddEntityResponse_s* zx_e_Body_GET_AddEntityResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddEntityResponse_s* y;
  if (!x) return 0;
  for (y = x->AddEntityResponse; n>=0 && y; --n, y = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AddEntityResponse) */

struct zx_ps_AddEntityResponse_s* zx_e_Body_POP_AddEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddEntityResponse_s* y;
  if (!x) return 0;
  y = x->AddEntityResponse;
  if (y)
    x->AddEntityResponse = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AddEntityResponse) */

void zx_e_Body_PUSH_AddEntityResponse(struct zx_e_Body_s* x, struct zx_ps_AddEntityResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AddEntityResponse->gg.g;
  x->AddEntityResponse = z;
}

/* FUNC(zx_e_Body_REV_AddEntityResponse) */

void zx_e_Body_REV_AddEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddEntityResponse_s* nxt;
  struct zx_ps_AddEntityResponse_s* y;
  if (!x) return;
  y = x->AddEntityResponse;
  if (!y) return;
  x->AddEntityResponse = 0;
  while (y) {
    nxt = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->AddEntityResponse->gg.g;
    x->AddEntityResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AddEntityResponse) */

void zx_e_Body_PUT_AddEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddEntityResponse_s* z)
{
  struct zx_ps_AddEntityResponse_s* y;
  if (!x || !z) return;
  y = x->AddEntityResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AddEntityResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AddEntityResponse) */

void zx_e_Body_ADD_AddEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddEntityResponse_s* z)
{
  struct zx_ps_AddEntityResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AddEntityResponse->gg.g;
    x->AddEntityResponse = z;
    return;
  case -1:
    y = x->AddEntityResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddEntityResponse; n > 1 && y; --n, y = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AddEntityResponse) */

void zx_e_Body_DEL_AddEntityResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddEntityResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AddEntityResponse = (struct zx_ps_AddEntityResponse_s*)x->AddEntityResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_AddEntityResponse_s*)x->AddEntityResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddEntityResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddEntityResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AddKnownEntityRequest) */

int zx_e_Body_NUM_AddKnownEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddKnownEntityRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AddKnownEntityRequest; y; ++n, y = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AddKnownEntityRequest) */

struct zx_ps_AddKnownEntityRequest_s* zx_e_Body_GET_AddKnownEntityRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddKnownEntityRequest_s* y;
  if (!x) return 0;
  for (y = x->AddKnownEntityRequest; n>=0 && y; --n, y = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AddKnownEntityRequest) */

struct zx_ps_AddKnownEntityRequest_s* zx_e_Body_POP_AddKnownEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddKnownEntityRequest_s* y;
  if (!x) return 0;
  y = x->AddKnownEntityRequest;
  if (y)
    x->AddKnownEntityRequest = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AddKnownEntityRequest) */

void zx_e_Body_PUSH_AddKnownEntityRequest(struct zx_e_Body_s* x, struct zx_ps_AddKnownEntityRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AddKnownEntityRequest->gg.g;
  x->AddKnownEntityRequest = z;
}

/* FUNC(zx_e_Body_REV_AddKnownEntityRequest) */

void zx_e_Body_REV_AddKnownEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddKnownEntityRequest_s* nxt;
  struct zx_ps_AddKnownEntityRequest_s* y;
  if (!x) return;
  y = x->AddKnownEntityRequest;
  if (!y) return;
  x->AddKnownEntityRequest = 0;
  while (y) {
    nxt = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AddKnownEntityRequest->gg.g;
    x->AddKnownEntityRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AddKnownEntityRequest) */

void zx_e_Body_PUT_AddKnownEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddKnownEntityRequest_s* z)
{
  struct zx_ps_AddKnownEntityRequest_s* y;
  if (!x || !z) return;
  y = x->AddKnownEntityRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AddKnownEntityRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AddKnownEntityRequest) */

void zx_e_Body_ADD_AddKnownEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddKnownEntityRequest_s* z)
{
  struct zx_ps_AddKnownEntityRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AddKnownEntityRequest->gg.g;
    x->AddKnownEntityRequest = z;
    return;
  case -1:
    y = x->AddKnownEntityRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddKnownEntityRequest; n > 1 && y; --n, y = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AddKnownEntityRequest) */

void zx_e_Body_DEL_AddKnownEntityRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddKnownEntityRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AddKnownEntityRequest = (struct zx_ps_AddKnownEntityRequest_s*)x->AddKnownEntityRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_AddKnownEntityRequest_s*)x->AddKnownEntityRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddKnownEntityRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddKnownEntityRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AddKnownEntityResponse) */

int zx_e_Body_NUM_AddKnownEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddKnownEntityResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AddKnownEntityResponse; y; ++n, y = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AddKnownEntityResponse) */

struct zx_ps_AddKnownEntityResponse_s* zx_e_Body_GET_AddKnownEntityResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddKnownEntityResponse_s* y;
  if (!x) return 0;
  for (y = x->AddKnownEntityResponse; n>=0 && y; --n, y = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AddKnownEntityResponse) */

struct zx_ps_AddKnownEntityResponse_s* zx_e_Body_POP_AddKnownEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddKnownEntityResponse_s* y;
  if (!x) return 0;
  y = x->AddKnownEntityResponse;
  if (y)
    x->AddKnownEntityResponse = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AddKnownEntityResponse) */

void zx_e_Body_PUSH_AddKnownEntityResponse(struct zx_e_Body_s* x, struct zx_ps_AddKnownEntityResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AddKnownEntityResponse->gg.g;
  x->AddKnownEntityResponse = z;
}

/* FUNC(zx_e_Body_REV_AddKnownEntityResponse) */

void zx_e_Body_REV_AddKnownEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddKnownEntityResponse_s* nxt;
  struct zx_ps_AddKnownEntityResponse_s* y;
  if (!x) return;
  y = x->AddKnownEntityResponse;
  if (!y) return;
  x->AddKnownEntityResponse = 0;
  while (y) {
    nxt = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->AddKnownEntityResponse->gg.g;
    x->AddKnownEntityResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AddKnownEntityResponse) */

void zx_e_Body_PUT_AddKnownEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddKnownEntityResponse_s* z)
{
  struct zx_ps_AddKnownEntityResponse_s* y;
  if (!x || !z) return;
  y = x->AddKnownEntityResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AddKnownEntityResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AddKnownEntityResponse) */

void zx_e_Body_ADD_AddKnownEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddKnownEntityResponse_s* z)
{
  struct zx_ps_AddKnownEntityResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AddKnownEntityResponse->gg.g;
    x->AddKnownEntityResponse = z;
    return;
  case -1:
    y = x->AddKnownEntityResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddKnownEntityResponse; n > 1 && y; --n, y = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AddKnownEntityResponse) */

void zx_e_Body_DEL_AddKnownEntityResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddKnownEntityResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AddKnownEntityResponse = (struct zx_ps_AddKnownEntityResponse_s*)x->AddKnownEntityResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_AddKnownEntityResponse_s*)x->AddKnownEntityResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddKnownEntityResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddKnownEntityResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AddCollectionRequest) */

int zx_e_Body_NUM_AddCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddCollectionRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AddCollectionRequest; y; ++n, y = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AddCollectionRequest) */

struct zx_ps_AddCollectionRequest_s* zx_e_Body_GET_AddCollectionRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddCollectionRequest_s* y;
  if (!x) return 0;
  for (y = x->AddCollectionRequest; n>=0 && y; --n, y = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AddCollectionRequest) */

struct zx_ps_AddCollectionRequest_s* zx_e_Body_POP_AddCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddCollectionRequest_s* y;
  if (!x) return 0;
  y = x->AddCollectionRequest;
  if (y)
    x->AddCollectionRequest = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AddCollectionRequest) */

void zx_e_Body_PUSH_AddCollectionRequest(struct zx_e_Body_s* x, struct zx_ps_AddCollectionRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AddCollectionRequest->gg.g;
  x->AddCollectionRequest = z;
}

/* FUNC(zx_e_Body_REV_AddCollectionRequest) */

void zx_e_Body_REV_AddCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddCollectionRequest_s* nxt;
  struct zx_ps_AddCollectionRequest_s* y;
  if (!x) return;
  y = x->AddCollectionRequest;
  if (!y) return;
  x->AddCollectionRequest = 0;
  while (y) {
    nxt = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AddCollectionRequest->gg.g;
    x->AddCollectionRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AddCollectionRequest) */

void zx_e_Body_PUT_AddCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddCollectionRequest_s* z)
{
  struct zx_ps_AddCollectionRequest_s* y;
  if (!x || !z) return;
  y = x->AddCollectionRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AddCollectionRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AddCollectionRequest) */

void zx_e_Body_ADD_AddCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddCollectionRequest_s* z)
{
  struct zx_ps_AddCollectionRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AddCollectionRequest->gg.g;
    x->AddCollectionRequest = z;
    return;
  case -1:
    y = x->AddCollectionRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddCollectionRequest; n > 1 && y; --n, y = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AddCollectionRequest) */

void zx_e_Body_DEL_AddCollectionRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddCollectionRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AddCollectionRequest = (struct zx_ps_AddCollectionRequest_s*)x->AddCollectionRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_AddCollectionRequest_s*)x->AddCollectionRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddCollectionRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddCollectionRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AddCollectionResponse) */

int zx_e_Body_NUM_AddCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddCollectionResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AddCollectionResponse; y; ++n, y = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AddCollectionResponse) */

struct zx_ps_AddCollectionResponse_s* zx_e_Body_GET_AddCollectionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddCollectionResponse_s* y;
  if (!x) return 0;
  for (y = x->AddCollectionResponse; n>=0 && y; --n, y = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AddCollectionResponse) */

struct zx_ps_AddCollectionResponse_s* zx_e_Body_POP_AddCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddCollectionResponse_s* y;
  if (!x) return 0;
  y = x->AddCollectionResponse;
  if (y)
    x->AddCollectionResponse = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AddCollectionResponse) */

void zx_e_Body_PUSH_AddCollectionResponse(struct zx_e_Body_s* x, struct zx_ps_AddCollectionResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AddCollectionResponse->gg.g;
  x->AddCollectionResponse = z;
}

/* FUNC(zx_e_Body_REV_AddCollectionResponse) */

void zx_e_Body_REV_AddCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddCollectionResponse_s* nxt;
  struct zx_ps_AddCollectionResponse_s* y;
  if (!x) return;
  y = x->AddCollectionResponse;
  if (!y) return;
  x->AddCollectionResponse = 0;
  while (y) {
    nxt = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->AddCollectionResponse->gg.g;
    x->AddCollectionResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AddCollectionResponse) */

void zx_e_Body_PUT_AddCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddCollectionResponse_s* z)
{
  struct zx_ps_AddCollectionResponse_s* y;
  if (!x || !z) return;
  y = x->AddCollectionResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AddCollectionResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AddCollectionResponse) */

void zx_e_Body_ADD_AddCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddCollectionResponse_s* z)
{
  struct zx_ps_AddCollectionResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AddCollectionResponse->gg.g;
    x->AddCollectionResponse = z;
    return;
  case -1:
    y = x->AddCollectionResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddCollectionResponse; n > 1 && y; --n, y = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AddCollectionResponse) */

void zx_e_Body_DEL_AddCollectionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddCollectionResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AddCollectionResponse = (struct zx_ps_AddCollectionResponse_s*)x->AddCollectionResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_AddCollectionResponse_s*)x->AddCollectionResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddCollectionResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddCollectionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AddToCollectionRequest) */

int zx_e_Body_NUM_AddToCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddToCollectionRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AddToCollectionRequest; y; ++n, y = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AddToCollectionRequest) */

struct zx_ps_AddToCollectionRequest_s* zx_e_Body_GET_AddToCollectionRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddToCollectionRequest_s* y;
  if (!x) return 0;
  for (y = x->AddToCollectionRequest; n>=0 && y; --n, y = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AddToCollectionRequest) */

struct zx_ps_AddToCollectionRequest_s* zx_e_Body_POP_AddToCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddToCollectionRequest_s* y;
  if (!x) return 0;
  y = x->AddToCollectionRequest;
  if (y)
    x->AddToCollectionRequest = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AddToCollectionRequest) */

void zx_e_Body_PUSH_AddToCollectionRequest(struct zx_e_Body_s* x, struct zx_ps_AddToCollectionRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AddToCollectionRequest->gg.g;
  x->AddToCollectionRequest = z;
}

/* FUNC(zx_e_Body_REV_AddToCollectionRequest) */

void zx_e_Body_REV_AddToCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_AddToCollectionRequest_s* nxt;
  struct zx_ps_AddToCollectionRequest_s* y;
  if (!x) return;
  y = x->AddToCollectionRequest;
  if (!y) return;
  x->AddToCollectionRequest = 0;
  while (y) {
    nxt = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AddToCollectionRequest->gg.g;
    x->AddToCollectionRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AddToCollectionRequest) */

void zx_e_Body_PUT_AddToCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddToCollectionRequest_s* z)
{
  struct zx_ps_AddToCollectionRequest_s* y;
  if (!x || !z) return;
  y = x->AddToCollectionRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AddToCollectionRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AddToCollectionRequest) */

void zx_e_Body_ADD_AddToCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_AddToCollectionRequest_s* z)
{
  struct zx_ps_AddToCollectionRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AddToCollectionRequest->gg.g;
    x->AddToCollectionRequest = z;
    return;
  case -1:
    y = x->AddToCollectionRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddToCollectionRequest; n > 1 && y; --n, y = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AddToCollectionRequest) */

void zx_e_Body_DEL_AddToCollectionRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddToCollectionRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AddToCollectionRequest = (struct zx_ps_AddToCollectionRequest_s*)x->AddToCollectionRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_AddToCollectionRequest_s*)x->AddToCollectionRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddToCollectionRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddToCollectionRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_AddToCollectionResponse) */

int zx_e_Body_NUM_AddToCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddToCollectionResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AddToCollectionResponse; y; ++n, y = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_AddToCollectionResponse) */

struct zx_ps_AddToCollectionResponse_s* zx_e_Body_GET_AddToCollectionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddToCollectionResponse_s* y;
  if (!x) return 0;
  for (y = x->AddToCollectionResponse; n>=0 && y; --n, y = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_AddToCollectionResponse) */

struct zx_ps_AddToCollectionResponse_s* zx_e_Body_POP_AddToCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddToCollectionResponse_s* y;
  if (!x) return 0;
  y = x->AddToCollectionResponse;
  if (y)
    x->AddToCollectionResponse = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_AddToCollectionResponse) */

void zx_e_Body_PUSH_AddToCollectionResponse(struct zx_e_Body_s* x, struct zx_ps_AddToCollectionResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AddToCollectionResponse->gg.g;
  x->AddToCollectionResponse = z;
}

/* FUNC(zx_e_Body_REV_AddToCollectionResponse) */

void zx_e_Body_REV_AddToCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_AddToCollectionResponse_s* nxt;
  struct zx_ps_AddToCollectionResponse_s* y;
  if (!x) return;
  y = x->AddToCollectionResponse;
  if (!y) return;
  x->AddToCollectionResponse = 0;
  while (y) {
    nxt = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->AddToCollectionResponse->gg.g;
    x->AddToCollectionResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_AddToCollectionResponse) */

void zx_e_Body_PUT_AddToCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddToCollectionResponse_s* z)
{
  struct zx_ps_AddToCollectionResponse_s* y;
  if (!x || !z) return;
  y = x->AddToCollectionResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AddToCollectionResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_AddToCollectionResponse) */

void zx_e_Body_ADD_AddToCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_AddToCollectionResponse_s* z)
{
  struct zx_ps_AddToCollectionResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AddToCollectionResponse->gg.g;
    x->AddToCollectionResponse = z;
    return;
  case -1:
    y = x->AddToCollectionResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddToCollectionResponse; n > 1 && y; --n, y = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_AddToCollectionResponse) */

void zx_e_Body_DEL_AddToCollectionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_AddToCollectionResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AddToCollectionResponse = (struct zx_ps_AddToCollectionResponse_s*)x->AddToCollectionResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_AddToCollectionResponse_s*)x->AddToCollectionResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AddToCollectionResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_AddToCollectionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RemoveEntityRequest) */

int zx_e_Body_NUM_RemoveEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveEntityRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RemoveEntityRequest; y; ++n, y = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RemoveEntityRequest) */

struct zx_ps_RemoveEntityRequest_s* zx_e_Body_GET_RemoveEntityRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveEntityRequest_s* y;
  if (!x) return 0;
  for (y = x->RemoveEntityRequest; n>=0 && y; --n, y = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RemoveEntityRequest) */

struct zx_ps_RemoveEntityRequest_s* zx_e_Body_POP_RemoveEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveEntityRequest_s* y;
  if (!x) return 0;
  y = x->RemoveEntityRequest;
  if (y)
    x->RemoveEntityRequest = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RemoveEntityRequest) */

void zx_e_Body_PUSH_RemoveEntityRequest(struct zx_e_Body_s* x, struct zx_ps_RemoveEntityRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RemoveEntityRequest->gg.g;
  x->RemoveEntityRequest = z;
}

/* FUNC(zx_e_Body_REV_RemoveEntityRequest) */

void zx_e_Body_REV_RemoveEntityRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveEntityRequest_s* nxt;
  struct zx_ps_RemoveEntityRequest_s* y;
  if (!x) return;
  y = x->RemoveEntityRequest;
  if (!y) return;
  x->RemoveEntityRequest = 0;
  while (y) {
    nxt = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RemoveEntityRequest->gg.g;
    x->RemoveEntityRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RemoveEntityRequest) */

void zx_e_Body_PUT_RemoveEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveEntityRequest_s* z)
{
  struct zx_ps_RemoveEntityRequest_s* y;
  if (!x || !z) return;
  y = x->RemoveEntityRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RemoveEntityRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RemoveEntityRequest) */

void zx_e_Body_ADD_RemoveEntityRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveEntityRequest_s* z)
{
  struct zx_ps_RemoveEntityRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RemoveEntityRequest->gg.g;
    x->RemoveEntityRequest = z;
    return;
  case -1:
    y = x->RemoveEntityRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveEntityRequest; n > 1 && y; --n, y = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RemoveEntityRequest) */

void zx_e_Body_DEL_RemoveEntityRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveEntityRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RemoveEntityRequest = (struct zx_ps_RemoveEntityRequest_s*)x->RemoveEntityRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_RemoveEntityRequest_s*)x->RemoveEntityRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveEntityRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveEntityRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RemoveEntityResponse) */

int zx_e_Body_NUM_RemoveEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveEntityResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RemoveEntityResponse; y; ++n, y = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RemoveEntityResponse) */

struct zx_ps_RemoveEntityResponse_s* zx_e_Body_GET_RemoveEntityResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveEntityResponse_s* y;
  if (!x) return 0;
  for (y = x->RemoveEntityResponse; n>=0 && y; --n, y = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RemoveEntityResponse) */

struct zx_ps_RemoveEntityResponse_s* zx_e_Body_POP_RemoveEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveEntityResponse_s* y;
  if (!x) return 0;
  y = x->RemoveEntityResponse;
  if (y)
    x->RemoveEntityResponse = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RemoveEntityResponse) */

void zx_e_Body_PUSH_RemoveEntityResponse(struct zx_e_Body_s* x, struct zx_ps_RemoveEntityResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RemoveEntityResponse->gg.g;
  x->RemoveEntityResponse = z;
}

/* FUNC(zx_e_Body_REV_RemoveEntityResponse) */

void zx_e_Body_REV_RemoveEntityResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveEntityResponse_s* nxt;
  struct zx_ps_RemoveEntityResponse_s* y;
  if (!x) return;
  y = x->RemoveEntityResponse;
  if (!y) return;
  x->RemoveEntityResponse = 0;
  while (y) {
    nxt = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RemoveEntityResponse->gg.g;
    x->RemoveEntityResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RemoveEntityResponse) */

void zx_e_Body_PUT_RemoveEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveEntityResponse_s* z)
{
  struct zx_ps_RemoveEntityResponse_s* y;
  if (!x || !z) return;
  y = x->RemoveEntityResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RemoveEntityResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RemoveEntityResponse) */

void zx_e_Body_ADD_RemoveEntityResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveEntityResponse_s* z)
{
  struct zx_ps_RemoveEntityResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RemoveEntityResponse->gg.g;
    x->RemoveEntityResponse = z;
    return;
  case -1:
    y = x->RemoveEntityResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveEntityResponse; n > 1 && y; --n, y = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RemoveEntityResponse) */

void zx_e_Body_DEL_RemoveEntityResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveEntityResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RemoveEntityResponse = (struct zx_ps_RemoveEntityResponse_s*)x->RemoveEntityResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_RemoveEntityResponse_s*)x->RemoveEntityResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveEntityResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveEntityResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RemoveCollectionRequest) */

int zx_e_Body_NUM_RemoveCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveCollectionRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RemoveCollectionRequest; y; ++n, y = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RemoveCollectionRequest) */

struct zx_ps_RemoveCollectionRequest_s* zx_e_Body_GET_RemoveCollectionRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveCollectionRequest_s* y;
  if (!x) return 0;
  for (y = x->RemoveCollectionRequest; n>=0 && y; --n, y = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RemoveCollectionRequest) */

struct zx_ps_RemoveCollectionRequest_s* zx_e_Body_POP_RemoveCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveCollectionRequest_s* y;
  if (!x) return 0;
  y = x->RemoveCollectionRequest;
  if (y)
    x->RemoveCollectionRequest = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RemoveCollectionRequest) */

void zx_e_Body_PUSH_RemoveCollectionRequest(struct zx_e_Body_s* x, struct zx_ps_RemoveCollectionRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RemoveCollectionRequest->gg.g;
  x->RemoveCollectionRequest = z;
}

/* FUNC(zx_e_Body_REV_RemoveCollectionRequest) */

void zx_e_Body_REV_RemoveCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveCollectionRequest_s* nxt;
  struct zx_ps_RemoveCollectionRequest_s* y;
  if (!x) return;
  y = x->RemoveCollectionRequest;
  if (!y) return;
  x->RemoveCollectionRequest = 0;
  while (y) {
    nxt = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RemoveCollectionRequest->gg.g;
    x->RemoveCollectionRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RemoveCollectionRequest) */

void zx_e_Body_PUT_RemoveCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveCollectionRequest_s* z)
{
  struct zx_ps_RemoveCollectionRequest_s* y;
  if (!x || !z) return;
  y = x->RemoveCollectionRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RemoveCollectionRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RemoveCollectionRequest) */

void zx_e_Body_ADD_RemoveCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveCollectionRequest_s* z)
{
  struct zx_ps_RemoveCollectionRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RemoveCollectionRequest->gg.g;
    x->RemoveCollectionRequest = z;
    return;
  case -1:
    y = x->RemoveCollectionRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveCollectionRequest; n > 1 && y; --n, y = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RemoveCollectionRequest) */

void zx_e_Body_DEL_RemoveCollectionRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveCollectionRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RemoveCollectionRequest = (struct zx_ps_RemoveCollectionRequest_s*)x->RemoveCollectionRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_RemoveCollectionRequest_s*)x->RemoveCollectionRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveCollectionRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveCollectionRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RemoveCollectionResponse) */

int zx_e_Body_NUM_RemoveCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveCollectionResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RemoveCollectionResponse; y; ++n, y = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RemoveCollectionResponse) */

struct zx_ps_RemoveCollectionResponse_s* zx_e_Body_GET_RemoveCollectionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveCollectionResponse_s* y;
  if (!x) return 0;
  for (y = x->RemoveCollectionResponse; n>=0 && y; --n, y = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RemoveCollectionResponse) */

struct zx_ps_RemoveCollectionResponse_s* zx_e_Body_POP_RemoveCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveCollectionResponse_s* y;
  if (!x) return 0;
  y = x->RemoveCollectionResponse;
  if (y)
    x->RemoveCollectionResponse = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RemoveCollectionResponse) */

void zx_e_Body_PUSH_RemoveCollectionResponse(struct zx_e_Body_s* x, struct zx_ps_RemoveCollectionResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RemoveCollectionResponse->gg.g;
  x->RemoveCollectionResponse = z;
}

/* FUNC(zx_e_Body_REV_RemoveCollectionResponse) */

void zx_e_Body_REV_RemoveCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveCollectionResponse_s* nxt;
  struct zx_ps_RemoveCollectionResponse_s* y;
  if (!x) return;
  y = x->RemoveCollectionResponse;
  if (!y) return;
  x->RemoveCollectionResponse = 0;
  while (y) {
    nxt = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RemoveCollectionResponse->gg.g;
    x->RemoveCollectionResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RemoveCollectionResponse) */

void zx_e_Body_PUT_RemoveCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveCollectionResponse_s* z)
{
  struct zx_ps_RemoveCollectionResponse_s* y;
  if (!x || !z) return;
  y = x->RemoveCollectionResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RemoveCollectionResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RemoveCollectionResponse) */

void zx_e_Body_ADD_RemoveCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveCollectionResponse_s* z)
{
  struct zx_ps_RemoveCollectionResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RemoveCollectionResponse->gg.g;
    x->RemoveCollectionResponse = z;
    return;
  case -1:
    y = x->RemoveCollectionResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveCollectionResponse; n > 1 && y; --n, y = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RemoveCollectionResponse) */

void zx_e_Body_DEL_RemoveCollectionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveCollectionResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RemoveCollectionResponse = (struct zx_ps_RemoveCollectionResponse_s*)x->RemoveCollectionResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_RemoveCollectionResponse_s*)x->RemoveCollectionResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveCollectionResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveCollectionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RemoveFromCollectionRequest) */

int zx_e_Body_NUM_RemoveFromCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveFromCollectionRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RemoveFromCollectionRequest; y; ++n, y = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RemoveFromCollectionRequest) */

struct zx_ps_RemoveFromCollectionRequest_s* zx_e_Body_GET_RemoveFromCollectionRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveFromCollectionRequest_s* y;
  if (!x) return 0;
  for (y = x->RemoveFromCollectionRequest; n>=0 && y; --n, y = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RemoveFromCollectionRequest) */

struct zx_ps_RemoveFromCollectionRequest_s* zx_e_Body_POP_RemoveFromCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveFromCollectionRequest_s* y;
  if (!x) return 0;
  y = x->RemoveFromCollectionRequest;
  if (y)
    x->RemoveFromCollectionRequest = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RemoveFromCollectionRequest) */

void zx_e_Body_PUSH_RemoveFromCollectionRequest(struct zx_e_Body_s* x, struct zx_ps_RemoveFromCollectionRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RemoveFromCollectionRequest->gg.g;
  x->RemoveFromCollectionRequest = z;
}

/* FUNC(zx_e_Body_REV_RemoveFromCollectionRequest) */

void zx_e_Body_REV_RemoveFromCollectionRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveFromCollectionRequest_s* nxt;
  struct zx_ps_RemoveFromCollectionRequest_s* y;
  if (!x) return;
  y = x->RemoveFromCollectionRequest;
  if (!y) return;
  x->RemoveFromCollectionRequest = 0;
  while (y) {
    nxt = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RemoveFromCollectionRequest->gg.g;
    x->RemoveFromCollectionRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RemoveFromCollectionRequest) */

void zx_e_Body_PUT_RemoveFromCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveFromCollectionRequest_s* z)
{
  struct zx_ps_RemoveFromCollectionRequest_s* y;
  if (!x || !z) return;
  y = x->RemoveFromCollectionRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RemoveFromCollectionRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RemoveFromCollectionRequest) */

void zx_e_Body_ADD_RemoveFromCollectionRequest(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveFromCollectionRequest_s* z)
{
  struct zx_ps_RemoveFromCollectionRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RemoveFromCollectionRequest->gg.g;
    x->RemoveFromCollectionRequest = z;
    return;
  case -1:
    y = x->RemoveFromCollectionRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveFromCollectionRequest; n > 1 && y; --n, y = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RemoveFromCollectionRequest) */

void zx_e_Body_DEL_RemoveFromCollectionRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveFromCollectionRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RemoveFromCollectionRequest = (struct zx_ps_RemoveFromCollectionRequest_s*)x->RemoveFromCollectionRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_RemoveFromCollectionRequest_s*)x->RemoveFromCollectionRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveFromCollectionRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveFromCollectionRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RemoveFromCollectionResponse) */

int zx_e_Body_NUM_RemoveFromCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveFromCollectionResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RemoveFromCollectionResponse; y; ++n, y = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RemoveFromCollectionResponse) */

struct zx_ps_RemoveFromCollectionResponse_s* zx_e_Body_GET_RemoveFromCollectionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveFromCollectionResponse_s* y;
  if (!x) return 0;
  for (y = x->RemoveFromCollectionResponse; n>=0 && y; --n, y = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RemoveFromCollectionResponse) */

struct zx_ps_RemoveFromCollectionResponse_s* zx_e_Body_POP_RemoveFromCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveFromCollectionResponse_s* y;
  if (!x) return 0;
  y = x->RemoveFromCollectionResponse;
  if (y)
    x->RemoveFromCollectionResponse = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RemoveFromCollectionResponse) */

void zx_e_Body_PUSH_RemoveFromCollectionResponse(struct zx_e_Body_s* x, struct zx_ps_RemoveFromCollectionResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RemoveFromCollectionResponse->gg.g;
  x->RemoveFromCollectionResponse = z;
}

/* FUNC(zx_e_Body_REV_RemoveFromCollectionResponse) */

void zx_e_Body_REV_RemoveFromCollectionResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_RemoveFromCollectionResponse_s* nxt;
  struct zx_ps_RemoveFromCollectionResponse_s* y;
  if (!x) return;
  y = x->RemoveFromCollectionResponse;
  if (!y) return;
  x->RemoveFromCollectionResponse = 0;
  while (y) {
    nxt = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RemoveFromCollectionResponse->gg.g;
    x->RemoveFromCollectionResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RemoveFromCollectionResponse) */

void zx_e_Body_PUT_RemoveFromCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveFromCollectionResponse_s* z)
{
  struct zx_ps_RemoveFromCollectionResponse_s* y;
  if (!x || !z) return;
  y = x->RemoveFromCollectionResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RemoveFromCollectionResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RemoveFromCollectionResponse) */

void zx_e_Body_ADD_RemoveFromCollectionResponse(struct zx_e_Body_s* x, int n, struct zx_ps_RemoveFromCollectionResponse_s* z)
{
  struct zx_ps_RemoveFromCollectionResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RemoveFromCollectionResponse->gg.g;
    x->RemoveFromCollectionResponse = z;
    return;
  case -1:
    y = x->RemoveFromCollectionResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveFromCollectionResponse; n > 1 && y; --n, y = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RemoveFromCollectionResponse) */

void zx_e_Body_DEL_RemoveFromCollectionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_RemoveFromCollectionResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RemoveFromCollectionResponse = (struct zx_ps_RemoveFromCollectionResponse_s*)x->RemoveFromCollectionResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_RemoveFromCollectionResponse_s*)x->RemoveFromCollectionResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RemoveFromCollectionResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_RemoveFromCollectionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ListMembersRequest) */

int zx_e_Body_NUM_ListMembersRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_ListMembersRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ListMembersRequest; y; ++n, y = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ListMembersRequest) */

struct zx_ps_ListMembersRequest_s* zx_e_Body_GET_ListMembersRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_ListMembersRequest_s* y;
  if (!x) return 0;
  for (y = x->ListMembersRequest; n>=0 && y; --n, y = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ListMembersRequest) */

struct zx_ps_ListMembersRequest_s* zx_e_Body_POP_ListMembersRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_ListMembersRequest_s* y;
  if (!x) return 0;
  y = x->ListMembersRequest;
  if (y)
    x->ListMembersRequest = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ListMembersRequest) */

void zx_e_Body_PUSH_ListMembersRequest(struct zx_e_Body_s* x, struct zx_ps_ListMembersRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ListMembersRequest->gg.g;
  x->ListMembersRequest = z;
}

/* FUNC(zx_e_Body_REV_ListMembersRequest) */

void zx_e_Body_REV_ListMembersRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_ListMembersRequest_s* nxt;
  struct zx_ps_ListMembersRequest_s* y;
  if (!x) return;
  y = x->ListMembersRequest;
  if (!y) return;
  x->ListMembersRequest = 0;
  while (y) {
    nxt = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ListMembersRequest->gg.g;
    x->ListMembersRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ListMembersRequest) */

void zx_e_Body_PUT_ListMembersRequest(struct zx_e_Body_s* x, int n, struct zx_ps_ListMembersRequest_s* z)
{
  struct zx_ps_ListMembersRequest_s* y;
  if (!x || !z) return;
  y = x->ListMembersRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ListMembersRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ListMembersRequest) */

void zx_e_Body_ADD_ListMembersRequest(struct zx_e_Body_s* x, int n, struct zx_ps_ListMembersRequest_s* z)
{
  struct zx_ps_ListMembersRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ListMembersRequest->gg.g;
    x->ListMembersRequest = z;
    return;
  case -1:
    y = x->ListMembersRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ListMembersRequest; n > 1 && y; --n, y = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ListMembersRequest) */

void zx_e_Body_DEL_ListMembersRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_ListMembersRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ListMembersRequest = (struct zx_ps_ListMembersRequest_s*)x->ListMembersRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_ListMembersRequest_s*)x->ListMembersRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ListMembersRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_ListMembersRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ListMembersResponse) */

int zx_e_Body_NUM_ListMembersResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_ListMembersResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ListMembersResponse; y; ++n, y = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ListMembersResponse) */

struct zx_ps_ListMembersResponse_s* zx_e_Body_GET_ListMembersResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_ListMembersResponse_s* y;
  if (!x) return 0;
  for (y = x->ListMembersResponse; n>=0 && y; --n, y = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ListMembersResponse) */

struct zx_ps_ListMembersResponse_s* zx_e_Body_POP_ListMembersResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_ListMembersResponse_s* y;
  if (!x) return 0;
  y = x->ListMembersResponse;
  if (y)
    x->ListMembersResponse = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ListMembersResponse) */

void zx_e_Body_PUSH_ListMembersResponse(struct zx_e_Body_s* x, struct zx_ps_ListMembersResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ListMembersResponse->gg.g;
  x->ListMembersResponse = z;
}

/* FUNC(zx_e_Body_REV_ListMembersResponse) */

void zx_e_Body_REV_ListMembersResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_ListMembersResponse_s* nxt;
  struct zx_ps_ListMembersResponse_s* y;
  if (!x) return;
  y = x->ListMembersResponse;
  if (!y) return;
  x->ListMembersResponse = 0;
  while (y) {
    nxt = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ListMembersResponse->gg.g;
    x->ListMembersResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ListMembersResponse) */

void zx_e_Body_PUT_ListMembersResponse(struct zx_e_Body_s* x, int n, struct zx_ps_ListMembersResponse_s* z)
{
  struct zx_ps_ListMembersResponse_s* y;
  if (!x || !z) return;
  y = x->ListMembersResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ListMembersResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ListMembersResponse) */

void zx_e_Body_ADD_ListMembersResponse(struct zx_e_Body_s* x, int n, struct zx_ps_ListMembersResponse_s* z)
{
  struct zx_ps_ListMembersResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ListMembersResponse->gg.g;
    x->ListMembersResponse = z;
    return;
  case -1:
    y = x->ListMembersResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ListMembersResponse; n > 1 && y; --n, y = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ListMembersResponse) */

void zx_e_Body_DEL_ListMembersResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_ListMembersResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ListMembersResponse = (struct zx_ps_ListMembersResponse_s*)x->ListMembersResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_ListMembersResponse_s*)x->ListMembersResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ListMembersResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_ListMembersResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_QueryObjectsRequest) */

int zx_e_Body_NUM_QueryObjectsRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_QueryObjectsRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryObjectsRequest; y; ++n, y = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_QueryObjectsRequest) */

struct zx_ps_QueryObjectsRequest_s* zx_e_Body_GET_QueryObjectsRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_QueryObjectsRequest_s* y;
  if (!x) return 0;
  for (y = x->QueryObjectsRequest; n>=0 && y; --n, y = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_QueryObjectsRequest) */

struct zx_ps_QueryObjectsRequest_s* zx_e_Body_POP_QueryObjectsRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_QueryObjectsRequest_s* y;
  if (!x) return 0;
  y = x->QueryObjectsRequest;
  if (y)
    x->QueryObjectsRequest = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_QueryObjectsRequest) */

void zx_e_Body_PUSH_QueryObjectsRequest(struct zx_e_Body_s* x, struct zx_ps_QueryObjectsRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryObjectsRequest->gg.g;
  x->QueryObjectsRequest = z;
}

/* FUNC(zx_e_Body_REV_QueryObjectsRequest) */

void zx_e_Body_REV_QueryObjectsRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_QueryObjectsRequest_s* nxt;
  struct zx_ps_QueryObjectsRequest_s* y;
  if (!x) return;
  y = x->QueryObjectsRequest;
  if (!y) return;
  x->QueryObjectsRequest = 0;
  while (y) {
    nxt = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryObjectsRequest->gg.g;
    x->QueryObjectsRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_QueryObjectsRequest) */

void zx_e_Body_PUT_QueryObjectsRequest(struct zx_e_Body_s* x, int n, struct zx_ps_QueryObjectsRequest_s* z)
{
  struct zx_ps_QueryObjectsRequest_s* y;
  if (!x || !z) return;
  y = x->QueryObjectsRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryObjectsRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_QueryObjectsRequest) */

void zx_e_Body_ADD_QueryObjectsRequest(struct zx_e_Body_s* x, int n, struct zx_ps_QueryObjectsRequest_s* z)
{
  struct zx_ps_QueryObjectsRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryObjectsRequest->gg.g;
    x->QueryObjectsRequest = z;
    return;
  case -1:
    y = x->QueryObjectsRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryObjectsRequest; n > 1 && y; --n, y = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_QueryObjectsRequest) */

void zx_e_Body_DEL_QueryObjectsRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_QueryObjectsRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryObjectsRequest = (struct zx_ps_QueryObjectsRequest_s*)x->QueryObjectsRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_QueryObjectsRequest_s*)x->QueryObjectsRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryObjectsRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_QueryObjectsRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_QueryObjectsResponse) */

int zx_e_Body_NUM_QueryObjectsResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_QueryObjectsResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryObjectsResponse; y; ++n, y = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_QueryObjectsResponse) */

struct zx_ps_QueryObjectsResponse_s* zx_e_Body_GET_QueryObjectsResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_QueryObjectsResponse_s* y;
  if (!x) return 0;
  for (y = x->QueryObjectsResponse; n>=0 && y; --n, y = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_QueryObjectsResponse) */

struct zx_ps_QueryObjectsResponse_s* zx_e_Body_POP_QueryObjectsResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_QueryObjectsResponse_s* y;
  if (!x) return 0;
  y = x->QueryObjectsResponse;
  if (y)
    x->QueryObjectsResponse = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_QueryObjectsResponse) */

void zx_e_Body_PUSH_QueryObjectsResponse(struct zx_e_Body_s* x, struct zx_ps_QueryObjectsResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryObjectsResponse->gg.g;
  x->QueryObjectsResponse = z;
}

/* FUNC(zx_e_Body_REV_QueryObjectsResponse) */

void zx_e_Body_REV_QueryObjectsResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_QueryObjectsResponse_s* nxt;
  struct zx_ps_QueryObjectsResponse_s* y;
  if (!x) return;
  y = x->QueryObjectsResponse;
  if (!y) return;
  x->QueryObjectsResponse = 0;
  while (y) {
    nxt = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryObjectsResponse->gg.g;
    x->QueryObjectsResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_QueryObjectsResponse) */

void zx_e_Body_PUT_QueryObjectsResponse(struct zx_e_Body_s* x, int n, struct zx_ps_QueryObjectsResponse_s* z)
{
  struct zx_ps_QueryObjectsResponse_s* y;
  if (!x || !z) return;
  y = x->QueryObjectsResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryObjectsResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_QueryObjectsResponse) */

void zx_e_Body_ADD_QueryObjectsResponse(struct zx_e_Body_s* x, int n, struct zx_ps_QueryObjectsResponse_s* z)
{
  struct zx_ps_QueryObjectsResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryObjectsResponse->gg.g;
    x->QueryObjectsResponse = z;
    return;
  case -1:
    y = x->QueryObjectsResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryObjectsResponse; n > 1 && y; --n, y = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_QueryObjectsResponse) */

void zx_e_Body_DEL_QueryObjectsResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_QueryObjectsResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryObjectsResponse = (struct zx_ps_QueryObjectsResponse_s*)x->QueryObjectsResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_QueryObjectsResponse_s*)x->QueryObjectsResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryObjectsResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_QueryObjectsResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetObjectInfoRequest) */

int zx_e_Body_NUM_GetObjectInfoRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_GetObjectInfoRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetObjectInfoRequest; y; ++n, y = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetObjectInfoRequest) */

struct zx_ps_GetObjectInfoRequest_s* zx_e_Body_GET_GetObjectInfoRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_GetObjectInfoRequest_s* y;
  if (!x) return 0;
  for (y = x->GetObjectInfoRequest; n>=0 && y; --n, y = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetObjectInfoRequest) */

struct zx_ps_GetObjectInfoRequest_s* zx_e_Body_POP_GetObjectInfoRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_GetObjectInfoRequest_s* y;
  if (!x) return 0;
  y = x->GetObjectInfoRequest;
  if (y)
    x->GetObjectInfoRequest = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetObjectInfoRequest) */

void zx_e_Body_PUSH_GetObjectInfoRequest(struct zx_e_Body_s* x, struct zx_ps_GetObjectInfoRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetObjectInfoRequest->gg.g;
  x->GetObjectInfoRequest = z;
}

/* FUNC(zx_e_Body_REV_GetObjectInfoRequest) */

void zx_e_Body_REV_GetObjectInfoRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_GetObjectInfoRequest_s* nxt;
  struct zx_ps_GetObjectInfoRequest_s* y;
  if (!x) return;
  y = x->GetObjectInfoRequest;
  if (!y) return;
  x->GetObjectInfoRequest = 0;
  while (y) {
    nxt = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->GetObjectInfoRequest->gg.g;
    x->GetObjectInfoRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetObjectInfoRequest) */

void zx_e_Body_PUT_GetObjectInfoRequest(struct zx_e_Body_s* x, int n, struct zx_ps_GetObjectInfoRequest_s* z)
{
  struct zx_ps_GetObjectInfoRequest_s* y;
  if (!x || !z) return;
  y = x->GetObjectInfoRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetObjectInfoRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetObjectInfoRequest) */

void zx_e_Body_ADD_GetObjectInfoRequest(struct zx_e_Body_s* x, int n, struct zx_ps_GetObjectInfoRequest_s* z)
{
  struct zx_ps_GetObjectInfoRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetObjectInfoRequest->gg.g;
    x->GetObjectInfoRequest = z;
    return;
  case -1:
    y = x->GetObjectInfoRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectInfoRequest; n > 1 && y; --n, y = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetObjectInfoRequest) */

void zx_e_Body_DEL_GetObjectInfoRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_GetObjectInfoRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetObjectInfoRequest = (struct zx_ps_GetObjectInfoRequest_s*)x->GetObjectInfoRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_GetObjectInfoRequest_s*)x->GetObjectInfoRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectInfoRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_GetObjectInfoRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetObjectInfoResponse) */

int zx_e_Body_NUM_GetObjectInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_GetObjectInfoResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetObjectInfoResponse; y; ++n, y = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetObjectInfoResponse) */

struct zx_ps_GetObjectInfoResponse_s* zx_e_Body_GET_GetObjectInfoResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_GetObjectInfoResponse_s* y;
  if (!x) return 0;
  for (y = x->GetObjectInfoResponse; n>=0 && y; --n, y = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetObjectInfoResponse) */

struct zx_ps_GetObjectInfoResponse_s* zx_e_Body_POP_GetObjectInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_GetObjectInfoResponse_s* y;
  if (!x) return 0;
  y = x->GetObjectInfoResponse;
  if (y)
    x->GetObjectInfoResponse = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetObjectInfoResponse) */

void zx_e_Body_PUSH_GetObjectInfoResponse(struct zx_e_Body_s* x, struct zx_ps_GetObjectInfoResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetObjectInfoResponse->gg.g;
  x->GetObjectInfoResponse = z;
}

/* FUNC(zx_e_Body_REV_GetObjectInfoResponse) */

void zx_e_Body_REV_GetObjectInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_GetObjectInfoResponse_s* nxt;
  struct zx_ps_GetObjectInfoResponse_s* y;
  if (!x) return;
  y = x->GetObjectInfoResponse;
  if (!y) return;
  x->GetObjectInfoResponse = 0;
  while (y) {
    nxt = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->GetObjectInfoResponse->gg.g;
    x->GetObjectInfoResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetObjectInfoResponse) */

void zx_e_Body_PUT_GetObjectInfoResponse(struct zx_e_Body_s* x, int n, struct zx_ps_GetObjectInfoResponse_s* z)
{
  struct zx_ps_GetObjectInfoResponse_s* y;
  if (!x || !z) return;
  y = x->GetObjectInfoResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetObjectInfoResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetObjectInfoResponse) */

void zx_e_Body_ADD_GetObjectInfoResponse(struct zx_e_Body_s* x, int n, struct zx_ps_GetObjectInfoResponse_s* z)
{
  struct zx_ps_GetObjectInfoResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetObjectInfoResponse->gg.g;
    x->GetObjectInfoResponse = z;
    return;
  case -1:
    y = x->GetObjectInfoResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectInfoResponse; n > 1 && y; --n, y = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetObjectInfoResponse) */

void zx_e_Body_DEL_GetObjectInfoResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_GetObjectInfoResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetObjectInfoResponse = (struct zx_ps_GetObjectInfoResponse_s*)x->GetObjectInfoResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_GetObjectInfoResponse_s*)x->GetObjectInfoResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectInfoResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_GetObjectInfoResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SetObjectInfoRequest) */

int zx_e_Body_NUM_SetObjectInfoRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_SetObjectInfoRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SetObjectInfoRequest; y; ++n, y = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SetObjectInfoRequest) */

struct zx_ps_SetObjectInfoRequest_s* zx_e_Body_GET_SetObjectInfoRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_SetObjectInfoRequest_s* y;
  if (!x) return 0;
  for (y = x->SetObjectInfoRequest; n>=0 && y; --n, y = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SetObjectInfoRequest) */

struct zx_ps_SetObjectInfoRequest_s* zx_e_Body_POP_SetObjectInfoRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_SetObjectInfoRequest_s* y;
  if (!x) return 0;
  y = x->SetObjectInfoRequest;
  if (y)
    x->SetObjectInfoRequest = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SetObjectInfoRequest) */

void zx_e_Body_PUSH_SetObjectInfoRequest(struct zx_e_Body_s* x, struct zx_ps_SetObjectInfoRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SetObjectInfoRequest->gg.g;
  x->SetObjectInfoRequest = z;
}

/* FUNC(zx_e_Body_REV_SetObjectInfoRequest) */

void zx_e_Body_REV_SetObjectInfoRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_SetObjectInfoRequest_s* nxt;
  struct zx_ps_SetObjectInfoRequest_s* y;
  if (!x) return;
  y = x->SetObjectInfoRequest;
  if (!y) return;
  x->SetObjectInfoRequest = 0;
  while (y) {
    nxt = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->SetObjectInfoRequest->gg.g;
    x->SetObjectInfoRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SetObjectInfoRequest) */

void zx_e_Body_PUT_SetObjectInfoRequest(struct zx_e_Body_s* x, int n, struct zx_ps_SetObjectInfoRequest_s* z)
{
  struct zx_ps_SetObjectInfoRequest_s* y;
  if (!x || !z) return;
  y = x->SetObjectInfoRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SetObjectInfoRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SetObjectInfoRequest) */

void zx_e_Body_ADD_SetObjectInfoRequest(struct zx_e_Body_s* x, int n, struct zx_ps_SetObjectInfoRequest_s* z)
{
  struct zx_ps_SetObjectInfoRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SetObjectInfoRequest->gg.g;
    x->SetObjectInfoRequest = z;
    return;
  case -1:
    y = x->SetObjectInfoRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetObjectInfoRequest; n > 1 && y; --n, y = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SetObjectInfoRequest) */

void zx_e_Body_DEL_SetObjectInfoRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_SetObjectInfoRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SetObjectInfoRequest = (struct zx_ps_SetObjectInfoRequest_s*)x->SetObjectInfoRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_SetObjectInfoRequest_s*)x->SetObjectInfoRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetObjectInfoRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_SetObjectInfoRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SetObjectInfoResponse) */

int zx_e_Body_NUM_SetObjectInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_SetObjectInfoResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SetObjectInfoResponse; y; ++n, y = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SetObjectInfoResponse) */

struct zx_ps_SetObjectInfoResponse_s* zx_e_Body_GET_SetObjectInfoResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_SetObjectInfoResponse_s* y;
  if (!x) return 0;
  for (y = x->SetObjectInfoResponse; n>=0 && y; --n, y = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SetObjectInfoResponse) */

struct zx_ps_SetObjectInfoResponse_s* zx_e_Body_POP_SetObjectInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_SetObjectInfoResponse_s* y;
  if (!x) return 0;
  y = x->SetObjectInfoResponse;
  if (y)
    x->SetObjectInfoResponse = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SetObjectInfoResponse) */

void zx_e_Body_PUSH_SetObjectInfoResponse(struct zx_e_Body_s* x, struct zx_ps_SetObjectInfoResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SetObjectInfoResponse->gg.g;
  x->SetObjectInfoResponse = z;
}

/* FUNC(zx_e_Body_REV_SetObjectInfoResponse) */

void zx_e_Body_REV_SetObjectInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_SetObjectInfoResponse_s* nxt;
  struct zx_ps_SetObjectInfoResponse_s* y;
  if (!x) return;
  y = x->SetObjectInfoResponse;
  if (!y) return;
  x->SetObjectInfoResponse = 0;
  while (y) {
    nxt = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SetObjectInfoResponse->gg.g;
    x->SetObjectInfoResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SetObjectInfoResponse) */

void zx_e_Body_PUT_SetObjectInfoResponse(struct zx_e_Body_s* x, int n, struct zx_ps_SetObjectInfoResponse_s* z)
{
  struct zx_ps_SetObjectInfoResponse_s* y;
  if (!x || !z) return;
  y = x->SetObjectInfoResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SetObjectInfoResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SetObjectInfoResponse) */

void zx_e_Body_ADD_SetObjectInfoResponse(struct zx_e_Body_s* x, int n, struct zx_ps_SetObjectInfoResponse_s* z)
{
  struct zx_ps_SetObjectInfoResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SetObjectInfoResponse->gg.g;
    x->SetObjectInfoResponse = z;
    return;
  case -1:
    y = x->SetObjectInfoResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetObjectInfoResponse; n > 1 && y; --n, y = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SetObjectInfoResponse) */

void zx_e_Body_DEL_SetObjectInfoResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_SetObjectInfoResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SetObjectInfoResponse = (struct zx_ps_SetObjectInfoResponse_s*)x->SetObjectInfoResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_SetObjectInfoResponse_s*)x->SetObjectInfoResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetObjectInfoResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_SetObjectInfoResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_TestMembershipRequest) */

int zx_e_Body_NUM_TestMembershipRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_TestMembershipRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TestMembershipRequest; y; ++n, y = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_TestMembershipRequest) */

struct zx_ps_TestMembershipRequest_s* zx_e_Body_GET_TestMembershipRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_TestMembershipRequest_s* y;
  if (!x) return 0;
  for (y = x->TestMembershipRequest; n>=0 && y; --n, y = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_TestMembershipRequest) */

struct zx_ps_TestMembershipRequest_s* zx_e_Body_POP_TestMembershipRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_TestMembershipRequest_s* y;
  if (!x) return 0;
  y = x->TestMembershipRequest;
  if (y)
    x->TestMembershipRequest = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_TestMembershipRequest) */

void zx_e_Body_PUSH_TestMembershipRequest(struct zx_e_Body_s* x, struct zx_ps_TestMembershipRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TestMembershipRequest->gg.g;
  x->TestMembershipRequest = z;
}

/* FUNC(zx_e_Body_REV_TestMembershipRequest) */

void zx_e_Body_REV_TestMembershipRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_TestMembershipRequest_s* nxt;
  struct zx_ps_TestMembershipRequest_s* y;
  if (!x) return;
  y = x->TestMembershipRequest;
  if (!y) return;
  x->TestMembershipRequest = 0;
  while (y) {
    nxt = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->TestMembershipRequest->gg.g;
    x->TestMembershipRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_TestMembershipRequest) */

void zx_e_Body_PUT_TestMembershipRequest(struct zx_e_Body_s* x, int n, struct zx_ps_TestMembershipRequest_s* z)
{
  struct zx_ps_TestMembershipRequest_s* y;
  if (!x || !z) return;
  y = x->TestMembershipRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TestMembershipRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_TestMembershipRequest) */

void zx_e_Body_ADD_TestMembershipRequest(struct zx_e_Body_s* x, int n, struct zx_ps_TestMembershipRequest_s* z)
{
  struct zx_ps_TestMembershipRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TestMembershipRequest->gg.g;
    x->TestMembershipRequest = z;
    return;
  case -1:
    y = x->TestMembershipRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestMembershipRequest; n > 1 && y; --n, y = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_TestMembershipRequest) */

void zx_e_Body_DEL_TestMembershipRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_TestMembershipRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TestMembershipRequest = (struct zx_ps_TestMembershipRequest_s*)x->TestMembershipRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_TestMembershipRequest_s*)x->TestMembershipRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestMembershipRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_TestMembershipRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_TestMembershipResponse) */

int zx_e_Body_NUM_TestMembershipResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_TestMembershipResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TestMembershipResponse; y; ++n, y = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_TestMembershipResponse) */

struct zx_ps_TestMembershipResponse_s* zx_e_Body_GET_TestMembershipResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_TestMembershipResponse_s* y;
  if (!x) return 0;
  for (y = x->TestMembershipResponse; n>=0 && y; --n, y = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_TestMembershipResponse) */

struct zx_ps_TestMembershipResponse_s* zx_e_Body_POP_TestMembershipResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_TestMembershipResponse_s* y;
  if (!x) return 0;
  y = x->TestMembershipResponse;
  if (y)
    x->TestMembershipResponse = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_TestMembershipResponse) */

void zx_e_Body_PUSH_TestMembershipResponse(struct zx_e_Body_s* x, struct zx_ps_TestMembershipResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TestMembershipResponse->gg.g;
  x->TestMembershipResponse = z;
}

/* FUNC(zx_e_Body_REV_TestMembershipResponse) */

void zx_e_Body_REV_TestMembershipResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_TestMembershipResponse_s* nxt;
  struct zx_ps_TestMembershipResponse_s* y;
  if (!x) return;
  y = x->TestMembershipResponse;
  if (!y) return;
  x->TestMembershipResponse = 0;
  while (y) {
    nxt = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->TestMembershipResponse->gg.g;
    x->TestMembershipResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_TestMembershipResponse) */

void zx_e_Body_PUT_TestMembershipResponse(struct zx_e_Body_s* x, int n, struct zx_ps_TestMembershipResponse_s* z)
{
  struct zx_ps_TestMembershipResponse_s* y;
  if (!x || !z) return;
  y = x->TestMembershipResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TestMembershipResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_TestMembershipResponse) */

void zx_e_Body_ADD_TestMembershipResponse(struct zx_e_Body_s* x, int n, struct zx_ps_TestMembershipResponse_s* z)
{
  struct zx_ps_TestMembershipResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TestMembershipResponse->gg.g;
    x->TestMembershipResponse = z;
    return;
  case -1:
    y = x->TestMembershipResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestMembershipResponse; n > 1 && y; --n, y = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_TestMembershipResponse) */

void zx_e_Body_DEL_TestMembershipResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_TestMembershipResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TestMembershipResponse = (struct zx_ps_TestMembershipResponse_s*)x->TestMembershipResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_TestMembershipResponse_s*)x->TestMembershipResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TestMembershipResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_TestMembershipResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ResolveIdentifierRequest) */

int zx_e_Body_NUM_ResolveIdentifierRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_ResolveIdentifierRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResolveIdentifierRequest; y; ++n, y = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ResolveIdentifierRequest) */

struct zx_ps_ResolveIdentifierRequest_s* zx_e_Body_GET_ResolveIdentifierRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_ResolveIdentifierRequest_s* y;
  if (!x) return 0;
  for (y = x->ResolveIdentifierRequest; n>=0 && y; --n, y = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ResolveIdentifierRequest) */

struct zx_ps_ResolveIdentifierRequest_s* zx_e_Body_POP_ResolveIdentifierRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_ResolveIdentifierRequest_s* y;
  if (!x) return 0;
  y = x->ResolveIdentifierRequest;
  if (y)
    x->ResolveIdentifierRequest = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ResolveIdentifierRequest) */

void zx_e_Body_PUSH_ResolveIdentifierRequest(struct zx_e_Body_s* x, struct zx_ps_ResolveIdentifierRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResolveIdentifierRequest->gg.g;
  x->ResolveIdentifierRequest = z;
}

/* FUNC(zx_e_Body_REV_ResolveIdentifierRequest) */

void zx_e_Body_REV_ResolveIdentifierRequest(struct zx_e_Body_s* x)
{
  struct zx_ps_ResolveIdentifierRequest_s* nxt;
  struct zx_ps_ResolveIdentifierRequest_s* y;
  if (!x) return;
  y = x->ResolveIdentifierRequest;
  if (!y) return;
  x->ResolveIdentifierRequest = 0;
  while (y) {
    nxt = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ResolveIdentifierRequest->gg.g;
    x->ResolveIdentifierRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ResolveIdentifierRequest) */

void zx_e_Body_PUT_ResolveIdentifierRequest(struct zx_e_Body_s* x, int n, struct zx_ps_ResolveIdentifierRequest_s* z)
{
  struct zx_ps_ResolveIdentifierRequest_s* y;
  if (!x || !z) return;
  y = x->ResolveIdentifierRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResolveIdentifierRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ResolveIdentifierRequest) */

void zx_e_Body_ADD_ResolveIdentifierRequest(struct zx_e_Body_s* x, int n, struct zx_ps_ResolveIdentifierRequest_s* z)
{
  struct zx_ps_ResolveIdentifierRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResolveIdentifierRequest->gg.g;
    x->ResolveIdentifierRequest = z;
    return;
  case -1:
    y = x->ResolveIdentifierRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResolveIdentifierRequest; n > 1 && y; --n, y = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ResolveIdentifierRequest) */

void zx_e_Body_DEL_ResolveIdentifierRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_ResolveIdentifierRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResolveIdentifierRequest = (struct zx_ps_ResolveIdentifierRequest_s*)x->ResolveIdentifierRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_ResolveIdentifierRequest_s*)x->ResolveIdentifierRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResolveIdentifierRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_ResolveIdentifierRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ResolveIdentifierResponse) */

int zx_e_Body_NUM_ResolveIdentifierResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_ResolveIdentifierResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ResolveIdentifierResponse; y; ++n, y = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ResolveIdentifierResponse) */

struct zx_ps_ResolveIdentifierResponse_s* zx_e_Body_GET_ResolveIdentifierResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_ResolveIdentifierResponse_s* y;
  if (!x) return 0;
  for (y = x->ResolveIdentifierResponse; n>=0 && y; --n, y = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ResolveIdentifierResponse) */

struct zx_ps_ResolveIdentifierResponse_s* zx_e_Body_POP_ResolveIdentifierResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_ResolveIdentifierResponse_s* y;
  if (!x) return 0;
  y = x->ResolveIdentifierResponse;
  if (y)
    x->ResolveIdentifierResponse = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ResolveIdentifierResponse) */

void zx_e_Body_PUSH_ResolveIdentifierResponse(struct zx_e_Body_s* x, struct zx_ps_ResolveIdentifierResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ResolveIdentifierResponse->gg.g;
  x->ResolveIdentifierResponse = z;
}

/* FUNC(zx_e_Body_REV_ResolveIdentifierResponse) */

void zx_e_Body_REV_ResolveIdentifierResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_ResolveIdentifierResponse_s* nxt;
  struct zx_ps_ResolveIdentifierResponse_s* y;
  if (!x) return;
  y = x->ResolveIdentifierResponse;
  if (!y) return;
  x->ResolveIdentifierResponse = 0;
  while (y) {
    nxt = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ResolveIdentifierResponse->gg.g;
    x->ResolveIdentifierResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ResolveIdentifierResponse) */

void zx_e_Body_PUT_ResolveIdentifierResponse(struct zx_e_Body_s* x, int n, struct zx_ps_ResolveIdentifierResponse_s* z)
{
  struct zx_ps_ResolveIdentifierResponse_s* y;
  if (!x || !z) return;
  y = x->ResolveIdentifierResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ResolveIdentifierResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ResolveIdentifierResponse) */

void zx_e_Body_ADD_ResolveIdentifierResponse(struct zx_e_Body_s* x, int n, struct zx_ps_ResolveIdentifierResponse_s* z)
{
  struct zx_ps_ResolveIdentifierResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ResolveIdentifierResponse->gg.g;
    x->ResolveIdentifierResponse = z;
    return;
  case -1:
    y = x->ResolveIdentifierResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResolveIdentifierResponse; n > 1 && y; --n, y = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ResolveIdentifierResponse) */

void zx_e_Body_DEL_ResolveIdentifierResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_ResolveIdentifierResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ResolveIdentifierResponse = (struct zx_ps_ResolveIdentifierResponse_s*)x->ResolveIdentifierResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_ResolveIdentifierResponse_s*)x->ResolveIdentifierResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ResolveIdentifierResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_ResolveIdentifierResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ps_Notify) */

int zx_e_Body_NUM_ps_Notify(struct zx_e_Body_s* x)
{
  struct zx_ps_Notify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ps_Notify; y; ++n, y = (struct zx_ps_Notify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ps_Notify) */

struct zx_ps_Notify_s* zx_e_Body_GET_ps_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_Notify_s* y;
  if (!x) return 0;
  for (y = x->ps_Notify; n>=0 && y; --n, y = (struct zx_ps_Notify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ps_Notify) */

struct zx_ps_Notify_s* zx_e_Body_POP_ps_Notify(struct zx_e_Body_s* x)
{
  struct zx_ps_Notify_s* y;
  if (!x) return 0;
  y = x->ps_Notify;
  if (y)
    x->ps_Notify = (struct zx_ps_Notify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ps_Notify) */

void zx_e_Body_PUSH_ps_Notify(struct zx_e_Body_s* x, struct zx_ps_Notify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ps_Notify->gg.g;
  x->ps_Notify = z;
}

/* FUNC(zx_e_Body_REV_ps_Notify) */

void zx_e_Body_REV_ps_Notify(struct zx_e_Body_s* x)
{
  struct zx_ps_Notify_s* nxt;
  struct zx_ps_Notify_s* y;
  if (!x) return;
  y = x->ps_Notify;
  if (!y) return;
  x->ps_Notify = 0;
  while (y) {
    nxt = (struct zx_ps_Notify_s*)y->gg.g.n;
    y->gg.g.n = &x->ps_Notify->gg.g;
    x->ps_Notify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ps_Notify) */

void zx_e_Body_PUT_ps_Notify(struct zx_e_Body_s* x, int n, struct zx_ps_Notify_s* z)
{
  struct zx_ps_Notify_s* y;
  if (!x || !z) return;
  y = x->ps_Notify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ps_Notify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ps_Notify) */

void zx_e_Body_ADD_ps_Notify(struct zx_e_Body_s* x, int n, struct zx_ps_Notify_s* z)
{
  struct zx_ps_Notify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ps_Notify->gg.g;
    x->ps_Notify = z;
    return;
  case -1:
    y = x->ps_Notify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ps_Notify; n > 1 && y; --n, y = (struct zx_ps_Notify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ps_Notify) */

void zx_e_Body_DEL_ps_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_Notify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ps_Notify = (struct zx_ps_Notify_s*)x->ps_Notify->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_Notify_s*)x->ps_Notify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ps_Notify; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ps_NotifyResponse) */

int zx_e_Body_NUM_ps_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_NotifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ps_NotifyResponse; y; ++n, y = (struct zx_ps_NotifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ps_NotifyResponse) */

struct zx_ps_NotifyResponse_s* zx_e_Body_GET_ps_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_NotifyResponse_s* y;
  if (!x) return 0;
  for (y = x->ps_NotifyResponse; n>=0 && y; --n, y = (struct zx_ps_NotifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ps_NotifyResponse) */

struct zx_ps_NotifyResponse_s* zx_e_Body_POP_ps_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_NotifyResponse_s* y;
  if (!x) return 0;
  y = x->ps_NotifyResponse;
  if (y)
    x->ps_NotifyResponse = (struct zx_ps_NotifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ps_NotifyResponse) */

void zx_e_Body_PUSH_ps_NotifyResponse(struct zx_e_Body_s* x, struct zx_ps_NotifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ps_NotifyResponse->gg.g;
  x->ps_NotifyResponse = z;
}

/* FUNC(zx_e_Body_REV_ps_NotifyResponse) */

void zx_e_Body_REV_ps_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_ps_NotifyResponse_s* nxt;
  struct zx_ps_NotifyResponse_s* y;
  if (!x) return;
  y = x->ps_NotifyResponse;
  if (!y) return;
  x->ps_NotifyResponse = 0;
  while (y) {
    nxt = (struct zx_ps_NotifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ps_NotifyResponse->gg.g;
    x->ps_NotifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ps_NotifyResponse) */

void zx_e_Body_PUT_ps_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_ps_NotifyResponse_s* z)
{
  struct zx_ps_NotifyResponse_s* y;
  if (!x || !z) return;
  y = x->ps_NotifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ps_NotifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ps_NotifyResponse) */

void zx_e_Body_ADD_ps_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_ps_NotifyResponse_s* z)
{
  struct zx_ps_NotifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ps_NotifyResponse->gg.g;
    x->ps_NotifyResponse = z;
    return;
  case -1:
    y = x->ps_NotifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ps_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ps_NotifyResponse; n > 1 && y; --n, y = (struct zx_ps_NotifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ps_NotifyResponse) */

void zx_e_Body_DEL_ps_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_ps_NotifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ps_NotifyResponse = (struct zx_ps_NotifyResponse_s*)x->ps_NotifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ps_NotifyResponse_s*)x->ps_NotifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ps_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ps_NotifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ps_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_IdentityMappingRequest) */

int zx_e_Body_NUM_IdentityMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_im_IdentityMappingRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IdentityMappingRequest; y; ++n, y = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_IdentityMappingRequest) */

struct zx_im_IdentityMappingRequest_s* zx_e_Body_GET_IdentityMappingRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_im_IdentityMappingRequest_s* y;
  if (!x) return 0;
  for (y = x->IdentityMappingRequest; n>=0 && y; --n, y = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_IdentityMappingRequest) */

struct zx_im_IdentityMappingRequest_s* zx_e_Body_POP_IdentityMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_im_IdentityMappingRequest_s* y;
  if (!x) return 0;
  y = x->IdentityMappingRequest;
  if (y)
    x->IdentityMappingRequest = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_IdentityMappingRequest) */

void zx_e_Body_PUSH_IdentityMappingRequest(struct zx_e_Body_s* x, struct zx_im_IdentityMappingRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IdentityMappingRequest->gg.g;
  x->IdentityMappingRequest = z;
}

/* FUNC(zx_e_Body_REV_IdentityMappingRequest) */

void zx_e_Body_REV_IdentityMappingRequest(struct zx_e_Body_s* x)
{
  struct zx_im_IdentityMappingRequest_s* nxt;
  struct zx_im_IdentityMappingRequest_s* y;
  if (!x) return;
  y = x->IdentityMappingRequest;
  if (!y) return;
  x->IdentityMappingRequest = 0;
  while (y) {
    nxt = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->IdentityMappingRequest->gg.g;
    x->IdentityMappingRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_IdentityMappingRequest) */

void zx_e_Body_PUT_IdentityMappingRequest(struct zx_e_Body_s* x, int n, struct zx_im_IdentityMappingRequest_s* z)
{
  struct zx_im_IdentityMappingRequest_s* y;
  if (!x || !z) return;
  y = x->IdentityMappingRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IdentityMappingRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_IdentityMappingRequest) */

void zx_e_Body_ADD_IdentityMappingRequest(struct zx_e_Body_s* x, int n, struct zx_im_IdentityMappingRequest_s* z)
{
  struct zx_im_IdentityMappingRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IdentityMappingRequest->gg.g;
    x->IdentityMappingRequest = z;
    return;
  case -1:
    y = x->IdentityMappingRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IdentityMappingRequest; n > 1 && y; --n, y = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_IdentityMappingRequest) */

void zx_e_Body_DEL_IdentityMappingRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_im_IdentityMappingRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IdentityMappingRequest = (struct zx_im_IdentityMappingRequest_s*)x->IdentityMappingRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_im_IdentityMappingRequest_s*)x->IdentityMappingRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IdentityMappingRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_im_IdentityMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_IdentityMappingResponse) */

int zx_e_Body_NUM_IdentityMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_im_IdentityMappingResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->IdentityMappingResponse; y; ++n, y = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_IdentityMappingResponse) */

struct zx_im_IdentityMappingResponse_s* zx_e_Body_GET_IdentityMappingResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_im_IdentityMappingResponse_s* y;
  if (!x) return 0;
  for (y = x->IdentityMappingResponse; n>=0 && y; --n, y = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_IdentityMappingResponse) */

struct zx_im_IdentityMappingResponse_s* zx_e_Body_POP_IdentityMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_im_IdentityMappingResponse_s* y;
  if (!x) return 0;
  y = x->IdentityMappingResponse;
  if (y)
    x->IdentityMappingResponse = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_IdentityMappingResponse) */

void zx_e_Body_PUSH_IdentityMappingResponse(struct zx_e_Body_s* x, struct zx_im_IdentityMappingResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->IdentityMappingResponse->gg.g;
  x->IdentityMappingResponse = z;
}

/* FUNC(zx_e_Body_REV_IdentityMappingResponse) */

void zx_e_Body_REV_IdentityMappingResponse(struct zx_e_Body_s* x)
{
  struct zx_im_IdentityMappingResponse_s* nxt;
  struct zx_im_IdentityMappingResponse_s* y;
  if (!x) return;
  y = x->IdentityMappingResponse;
  if (!y) return;
  x->IdentityMappingResponse = 0;
  while (y) {
    nxt = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->IdentityMappingResponse->gg.g;
    x->IdentityMappingResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_IdentityMappingResponse) */

void zx_e_Body_PUT_IdentityMappingResponse(struct zx_e_Body_s* x, int n, struct zx_im_IdentityMappingResponse_s* z)
{
  struct zx_im_IdentityMappingResponse_s* y;
  if (!x || !z) return;
  y = x->IdentityMappingResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->IdentityMappingResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_IdentityMappingResponse) */

void zx_e_Body_ADD_IdentityMappingResponse(struct zx_e_Body_s* x, int n, struct zx_im_IdentityMappingResponse_s* z)
{
  struct zx_im_IdentityMappingResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->IdentityMappingResponse->gg.g;
    x->IdentityMappingResponse = z;
    return;
  case -1:
    y = x->IdentityMappingResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IdentityMappingResponse; n > 1 && y; --n, y = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_IdentityMappingResponse) */

void zx_e_Body_DEL_IdentityMappingResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_im_IdentityMappingResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->IdentityMappingResponse = (struct zx_im_IdentityMappingResponse_s*)x->IdentityMappingResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_im_IdentityMappingResponse_s*)x->IdentityMappingResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->IdentityMappingResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_im_IdentityMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SASLRequest) */

int zx_e_Body_NUM_SASLRequest(struct zx_e_Body_s* x)
{
  struct zx_as_SASLRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SASLRequest; y; ++n, y = (struct zx_as_SASLRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SASLRequest) */

struct zx_as_SASLRequest_s* zx_e_Body_GET_SASLRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_as_SASLRequest_s* y;
  if (!x) return 0;
  for (y = x->SASLRequest; n>=0 && y; --n, y = (struct zx_as_SASLRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SASLRequest) */

struct zx_as_SASLRequest_s* zx_e_Body_POP_SASLRequest(struct zx_e_Body_s* x)
{
  struct zx_as_SASLRequest_s* y;
  if (!x) return 0;
  y = x->SASLRequest;
  if (y)
    x->SASLRequest = (struct zx_as_SASLRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SASLRequest) */

void zx_e_Body_PUSH_SASLRequest(struct zx_e_Body_s* x, struct zx_as_SASLRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SASLRequest->gg.g;
  x->SASLRequest = z;
}

/* FUNC(zx_e_Body_REV_SASLRequest) */

void zx_e_Body_REV_SASLRequest(struct zx_e_Body_s* x)
{
  struct zx_as_SASLRequest_s* nxt;
  struct zx_as_SASLRequest_s* y;
  if (!x) return;
  y = x->SASLRequest;
  if (!y) return;
  x->SASLRequest = 0;
  while (y) {
    nxt = (struct zx_as_SASLRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->SASLRequest->gg.g;
    x->SASLRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SASLRequest) */

void zx_e_Body_PUT_SASLRequest(struct zx_e_Body_s* x, int n, struct zx_as_SASLRequest_s* z)
{
  struct zx_as_SASLRequest_s* y;
  if (!x || !z) return;
  y = x->SASLRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SASLRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_as_SASLRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SASLRequest) */

void zx_e_Body_ADD_SASLRequest(struct zx_e_Body_s* x, int n, struct zx_as_SASLRequest_s* z)
{
  struct zx_as_SASLRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SASLRequest->gg.g;
    x->SASLRequest = z;
    return;
  case -1:
    y = x->SASLRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_as_SASLRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SASLRequest; n > 1 && y; --n, y = (struct zx_as_SASLRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SASLRequest) */

void zx_e_Body_DEL_SASLRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_as_SASLRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SASLRequest = (struct zx_as_SASLRequest_s*)x->SASLRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_as_SASLRequest_s*)x->SASLRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_as_SASLRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SASLRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_as_SASLRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SASLResponse) */

int zx_e_Body_NUM_SASLResponse(struct zx_e_Body_s* x)
{
  struct zx_as_SASLResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SASLResponse; y; ++n, y = (struct zx_as_SASLResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SASLResponse) */

struct zx_as_SASLResponse_s* zx_e_Body_GET_SASLResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_as_SASLResponse_s* y;
  if (!x) return 0;
  for (y = x->SASLResponse; n>=0 && y; --n, y = (struct zx_as_SASLResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SASLResponse) */

struct zx_as_SASLResponse_s* zx_e_Body_POP_SASLResponse(struct zx_e_Body_s* x)
{
  struct zx_as_SASLResponse_s* y;
  if (!x) return 0;
  y = x->SASLResponse;
  if (y)
    x->SASLResponse = (struct zx_as_SASLResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SASLResponse) */

void zx_e_Body_PUSH_SASLResponse(struct zx_e_Body_s* x, struct zx_as_SASLResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SASLResponse->gg.g;
  x->SASLResponse = z;
}

/* FUNC(zx_e_Body_REV_SASLResponse) */

void zx_e_Body_REV_SASLResponse(struct zx_e_Body_s* x)
{
  struct zx_as_SASLResponse_s* nxt;
  struct zx_as_SASLResponse_s* y;
  if (!x) return;
  y = x->SASLResponse;
  if (!y) return;
  x->SASLResponse = 0;
  while (y) {
    nxt = (struct zx_as_SASLResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SASLResponse->gg.g;
    x->SASLResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SASLResponse) */

void zx_e_Body_PUT_SASLResponse(struct zx_e_Body_s* x, int n, struct zx_as_SASLResponse_s* z)
{
  struct zx_as_SASLResponse_s* y;
  if (!x || !z) return;
  y = x->SASLResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SASLResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_as_SASLResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SASLResponse) */

void zx_e_Body_ADD_SASLResponse(struct zx_e_Body_s* x, int n, struct zx_as_SASLResponse_s* z)
{
  struct zx_as_SASLResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SASLResponse->gg.g;
    x->SASLResponse = z;
    return;
  case -1:
    y = x->SASLResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_as_SASLResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SASLResponse; n > 1 && y; --n, y = (struct zx_as_SASLResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SASLResponse) */

void zx_e_Body_DEL_SASLResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_as_SASLResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SASLResponse = (struct zx_as_SASLResponse_s*)x->SASLResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_as_SASLResponse_s*)x->SASLResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_as_SASLResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SASLResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_as_SASLResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SubmitReq) */

int zx_e_Body_NUM_SubmitReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_SubmitReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubmitReq; y; ++n, y = (struct zx_mm7_SubmitReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SubmitReq) */

struct zx_mm7_SubmitReq_s* zx_e_Body_GET_SubmitReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_SubmitReq_s* y;
  if (!x) return 0;
  for (y = x->SubmitReq; n>=0 && y; --n, y = (struct zx_mm7_SubmitReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SubmitReq) */

struct zx_mm7_SubmitReq_s* zx_e_Body_POP_SubmitReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_SubmitReq_s* y;
  if (!x) return 0;
  y = x->SubmitReq;
  if (y)
    x->SubmitReq = (struct zx_mm7_SubmitReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SubmitReq) */

void zx_e_Body_PUSH_SubmitReq(struct zx_e_Body_s* x, struct zx_mm7_SubmitReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubmitReq->gg.g;
  x->SubmitReq = z;
}

/* FUNC(zx_e_Body_REV_SubmitReq) */

void zx_e_Body_REV_SubmitReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_SubmitReq_s* nxt;
  struct zx_mm7_SubmitReq_s* y;
  if (!x) return;
  y = x->SubmitReq;
  if (!y) return;
  x->SubmitReq = 0;
  while (y) {
    nxt = (struct zx_mm7_SubmitReq_s*)y->gg.g.n;
    y->gg.g.n = &x->SubmitReq->gg.g;
    x->SubmitReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SubmitReq) */

void zx_e_Body_PUT_SubmitReq(struct zx_e_Body_s* x, int n, struct zx_mm7_SubmitReq_s* z)
{
  struct zx_mm7_SubmitReq_s* y;
  if (!x || !z) return;
  y = x->SubmitReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubmitReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SubmitReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SubmitReq) */

void zx_e_Body_ADD_SubmitReq(struct zx_e_Body_s* x, int n, struct zx_mm7_SubmitReq_s* z)
{
  struct zx_mm7_SubmitReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubmitReq->gg.g;
    x->SubmitReq = z;
    return;
  case -1:
    y = x->SubmitReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_SubmitReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubmitReq; n > 1 && y; --n, y = (struct zx_mm7_SubmitReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SubmitReq) */

void zx_e_Body_DEL_SubmitReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_SubmitReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubmitReq = (struct zx_mm7_SubmitReq_s*)x->SubmitReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_SubmitReq_s*)x->SubmitReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_SubmitReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubmitReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SubmitReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SubmitRsp) */

int zx_e_Body_NUM_SubmitRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_SubmitRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SubmitRsp; y; ++n, y = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SubmitRsp) */

struct zx_mm7_SubmitRsp_s* zx_e_Body_GET_SubmitRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_SubmitRsp_s* y;
  if (!x) return 0;
  for (y = x->SubmitRsp; n>=0 && y; --n, y = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SubmitRsp) */

struct zx_mm7_SubmitRsp_s* zx_e_Body_POP_SubmitRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_SubmitRsp_s* y;
  if (!x) return 0;
  y = x->SubmitRsp;
  if (y)
    x->SubmitRsp = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SubmitRsp) */

void zx_e_Body_PUSH_SubmitRsp(struct zx_e_Body_s* x, struct zx_mm7_SubmitRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SubmitRsp->gg.g;
  x->SubmitRsp = z;
}

/* FUNC(zx_e_Body_REV_SubmitRsp) */

void zx_e_Body_REV_SubmitRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_SubmitRsp_s* nxt;
  struct zx_mm7_SubmitRsp_s* y;
  if (!x) return;
  y = x->SubmitRsp;
  if (!y) return;
  x->SubmitRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->SubmitRsp->gg.g;
    x->SubmitRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SubmitRsp) */

void zx_e_Body_PUT_SubmitRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_SubmitRsp_s* z)
{
  struct zx_mm7_SubmitRsp_s* y;
  if (!x || !z) return;
  y = x->SubmitRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SubmitRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SubmitRsp) */

void zx_e_Body_ADD_SubmitRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_SubmitRsp_s* z)
{
  struct zx_mm7_SubmitRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SubmitRsp->gg.g;
    x->SubmitRsp = z;
    return;
  case -1:
    y = x->SubmitRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubmitRsp; n > 1 && y; --n, y = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SubmitRsp) */

void zx_e_Body_DEL_SubmitRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_SubmitRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SubmitRsp = (struct zx_mm7_SubmitRsp_s*)x->SubmitRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_SubmitRsp_s*)x->SubmitRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SubmitRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_SubmitRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_DeliverReq) */

int zx_e_Body_NUM_DeliverReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliverReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeliverReq; y; ++n, y = (struct zx_mm7_DeliverReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_DeliverReq) */

struct zx_mm7_DeliverReq_s* zx_e_Body_GET_DeliverReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_DeliverReq_s* y;
  if (!x) return 0;
  for (y = x->DeliverReq; n>=0 && y; --n, y = (struct zx_mm7_DeliverReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_DeliverReq) */

struct zx_mm7_DeliverReq_s* zx_e_Body_POP_DeliverReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliverReq_s* y;
  if (!x) return 0;
  y = x->DeliverReq;
  if (y)
    x->DeliverReq = (struct zx_mm7_DeliverReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_DeliverReq) */

void zx_e_Body_PUSH_DeliverReq(struct zx_e_Body_s* x, struct zx_mm7_DeliverReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeliverReq->gg.g;
  x->DeliverReq = z;
}

/* FUNC(zx_e_Body_REV_DeliverReq) */

void zx_e_Body_REV_DeliverReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliverReq_s* nxt;
  struct zx_mm7_DeliverReq_s* y;
  if (!x) return;
  y = x->DeliverReq;
  if (!y) return;
  x->DeliverReq = 0;
  while (y) {
    nxt = (struct zx_mm7_DeliverReq_s*)y->gg.g.n;
    y->gg.g.n = &x->DeliverReq->gg.g;
    x->DeliverReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_DeliverReq) */

void zx_e_Body_PUT_DeliverReq(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliverReq_s* z)
{
  struct zx_mm7_DeliverReq_s* y;
  if (!x || !z) return;
  y = x->DeliverReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeliverReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliverReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_DeliverReq) */

void zx_e_Body_ADD_DeliverReq(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliverReq_s* z)
{
  struct zx_mm7_DeliverReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeliverReq->gg.g;
    x->DeliverReq = z;
    return;
  case -1:
    y = x->DeliverReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliverReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliverReq; n > 1 && y; --n, y = (struct zx_mm7_DeliverReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_DeliverReq) */

void zx_e_Body_DEL_DeliverReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_DeliverReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeliverReq = (struct zx_mm7_DeliverReq_s*)x->DeliverReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_DeliverReq_s*)x->DeliverReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliverReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliverReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliverReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_DeliverRsp) */

int zx_e_Body_NUM_DeliverRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliverRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeliverRsp; y; ++n, y = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_DeliverRsp) */

struct zx_mm7_DeliverRsp_s* zx_e_Body_GET_DeliverRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_DeliverRsp_s* y;
  if (!x) return 0;
  for (y = x->DeliverRsp; n>=0 && y; --n, y = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_DeliverRsp) */

struct zx_mm7_DeliverRsp_s* zx_e_Body_POP_DeliverRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliverRsp_s* y;
  if (!x) return 0;
  y = x->DeliverRsp;
  if (y)
    x->DeliverRsp = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_DeliverRsp) */

void zx_e_Body_PUSH_DeliverRsp(struct zx_e_Body_s* x, struct zx_mm7_DeliverRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeliverRsp->gg.g;
  x->DeliverRsp = z;
}

/* FUNC(zx_e_Body_REV_DeliverRsp) */

void zx_e_Body_REV_DeliverRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliverRsp_s* nxt;
  struct zx_mm7_DeliverRsp_s* y;
  if (!x) return;
  y = x->DeliverRsp;
  if (!y) return;
  x->DeliverRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->DeliverRsp->gg.g;
    x->DeliverRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_DeliverRsp) */

void zx_e_Body_PUT_DeliverRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliverRsp_s* z)
{
  struct zx_mm7_DeliverRsp_s* y;
  if (!x || !z) return;
  y = x->DeliverRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeliverRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_DeliverRsp) */

void zx_e_Body_ADD_DeliverRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliverRsp_s* z)
{
  struct zx_mm7_DeliverRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeliverRsp->gg.g;
    x->DeliverRsp = z;
    return;
  case -1:
    y = x->DeliverRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliverRsp; n > 1 && y; --n, y = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_DeliverRsp) */

void zx_e_Body_DEL_DeliverRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_DeliverRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeliverRsp = (struct zx_mm7_DeliverRsp_s*)x->DeliverRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_DeliverRsp_s*)x->DeliverRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliverRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliverRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_CancelReq) */

int zx_e_Body_NUM_CancelReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_CancelReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CancelReq; y; ++n, y = (struct zx_mm7_CancelReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_CancelReq) */

struct zx_mm7_CancelReq_s* zx_e_Body_GET_CancelReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_CancelReq_s* y;
  if (!x) return 0;
  for (y = x->CancelReq; n>=0 && y; --n, y = (struct zx_mm7_CancelReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_CancelReq) */

struct zx_mm7_CancelReq_s* zx_e_Body_POP_CancelReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_CancelReq_s* y;
  if (!x) return 0;
  y = x->CancelReq;
  if (y)
    x->CancelReq = (struct zx_mm7_CancelReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_CancelReq) */

void zx_e_Body_PUSH_CancelReq(struct zx_e_Body_s* x, struct zx_mm7_CancelReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CancelReq->gg.g;
  x->CancelReq = z;
}

/* FUNC(zx_e_Body_REV_CancelReq) */

void zx_e_Body_REV_CancelReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_CancelReq_s* nxt;
  struct zx_mm7_CancelReq_s* y;
  if (!x) return;
  y = x->CancelReq;
  if (!y) return;
  x->CancelReq = 0;
  while (y) {
    nxt = (struct zx_mm7_CancelReq_s*)y->gg.g.n;
    y->gg.g.n = &x->CancelReq->gg.g;
    x->CancelReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_CancelReq) */

void zx_e_Body_PUT_CancelReq(struct zx_e_Body_s* x, int n, struct zx_mm7_CancelReq_s* z)
{
  struct zx_mm7_CancelReq_s* y;
  if (!x || !z) return;
  y = x->CancelReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CancelReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_CancelReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_CancelReq) */

void zx_e_Body_ADD_CancelReq(struct zx_e_Body_s* x, int n, struct zx_mm7_CancelReq_s* z)
{
  struct zx_mm7_CancelReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CancelReq->gg.g;
    x->CancelReq = z;
    return;
  case -1:
    y = x->CancelReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_CancelReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CancelReq; n > 1 && y; --n, y = (struct zx_mm7_CancelReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_CancelReq) */

void zx_e_Body_DEL_CancelReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_CancelReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CancelReq = (struct zx_mm7_CancelReq_s*)x->CancelReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_CancelReq_s*)x->CancelReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_CancelReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CancelReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_CancelReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_CancelRsp) */

int zx_e_Body_NUM_CancelRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_CancelRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CancelRsp; y; ++n, y = (struct zx_mm7_CancelRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_CancelRsp) */

struct zx_mm7_CancelRsp_s* zx_e_Body_GET_CancelRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_CancelRsp_s* y;
  if (!x) return 0;
  for (y = x->CancelRsp; n>=0 && y; --n, y = (struct zx_mm7_CancelRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_CancelRsp) */

struct zx_mm7_CancelRsp_s* zx_e_Body_POP_CancelRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_CancelRsp_s* y;
  if (!x) return 0;
  y = x->CancelRsp;
  if (y)
    x->CancelRsp = (struct zx_mm7_CancelRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_CancelRsp) */

void zx_e_Body_PUSH_CancelRsp(struct zx_e_Body_s* x, struct zx_mm7_CancelRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CancelRsp->gg.g;
  x->CancelRsp = z;
}

/* FUNC(zx_e_Body_REV_CancelRsp) */

void zx_e_Body_REV_CancelRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_CancelRsp_s* nxt;
  struct zx_mm7_CancelRsp_s* y;
  if (!x) return;
  y = x->CancelRsp;
  if (!y) return;
  x->CancelRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_CancelRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->CancelRsp->gg.g;
    x->CancelRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_CancelRsp) */

void zx_e_Body_PUT_CancelRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_CancelRsp_s* z)
{
  struct zx_mm7_CancelRsp_s* y;
  if (!x || !z) return;
  y = x->CancelRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CancelRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_CancelRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_CancelRsp) */

void zx_e_Body_ADD_CancelRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_CancelRsp_s* z)
{
  struct zx_mm7_CancelRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CancelRsp->gg.g;
    x->CancelRsp = z;
    return;
  case -1:
    y = x->CancelRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_CancelRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CancelRsp; n > 1 && y; --n, y = (struct zx_mm7_CancelRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_CancelRsp) */

void zx_e_Body_DEL_CancelRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_CancelRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CancelRsp = (struct zx_mm7_CancelRsp_s*)x->CancelRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_CancelRsp_s*)x->CancelRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_CancelRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CancelRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_CancelRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ReplaceReq) */

int zx_e_Body_NUM_ReplaceReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReplaceReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplaceReq; y; ++n, y = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ReplaceReq) */

struct zx_mm7_ReplaceReq_s* zx_e_Body_GET_ReplaceReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_ReplaceReq_s* y;
  if (!x) return 0;
  for (y = x->ReplaceReq; n>=0 && y; --n, y = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ReplaceReq) */

struct zx_mm7_ReplaceReq_s* zx_e_Body_POP_ReplaceReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReplaceReq_s* y;
  if (!x) return 0;
  y = x->ReplaceReq;
  if (y)
    x->ReplaceReq = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ReplaceReq) */

void zx_e_Body_PUSH_ReplaceReq(struct zx_e_Body_s* x, struct zx_mm7_ReplaceReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReplaceReq->gg.g;
  x->ReplaceReq = z;
}

/* FUNC(zx_e_Body_REV_ReplaceReq) */

void zx_e_Body_REV_ReplaceReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReplaceReq_s* nxt;
  struct zx_mm7_ReplaceReq_s* y;
  if (!x) return;
  y = x->ReplaceReq;
  if (!y) return;
  x->ReplaceReq = 0;
  while (y) {
    nxt = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n;
    y->gg.g.n = &x->ReplaceReq->gg.g;
    x->ReplaceReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ReplaceReq) */

void zx_e_Body_PUT_ReplaceReq(struct zx_e_Body_s* x, int n, struct zx_mm7_ReplaceReq_s* z)
{
  struct zx_mm7_ReplaceReq_s* y;
  if (!x || !z) return;
  y = x->ReplaceReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReplaceReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ReplaceReq) */

void zx_e_Body_ADD_ReplaceReq(struct zx_e_Body_s* x, int n, struct zx_mm7_ReplaceReq_s* z)
{
  struct zx_mm7_ReplaceReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReplaceReq->gg.g;
    x->ReplaceReq = z;
    return;
  case -1:
    y = x->ReplaceReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplaceReq; n > 1 && y; --n, y = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ReplaceReq) */

void zx_e_Body_DEL_ReplaceReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_ReplaceReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplaceReq = (struct zx_mm7_ReplaceReq_s*)x->ReplaceReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ReplaceReq_s*)x->ReplaceReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplaceReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReplaceReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ReplaceRsp) */

int zx_e_Body_NUM_ReplaceRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReplaceRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplaceRsp; y; ++n, y = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ReplaceRsp) */

struct zx_mm7_ReplaceRsp_s* zx_e_Body_GET_ReplaceRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_ReplaceRsp_s* y;
  if (!x) return 0;
  for (y = x->ReplaceRsp; n>=0 && y; --n, y = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ReplaceRsp) */

struct zx_mm7_ReplaceRsp_s* zx_e_Body_POP_ReplaceRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReplaceRsp_s* y;
  if (!x) return 0;
  y = x->ReplaceRsp;
  if (y)
    x->ReplaceRsp = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ReplaceRsp) */

void zx_e_Body_PUSH_ReplaceRsp(struct zx_e_Body_s* x, struct zx_mm7_ReplaceRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReplaceRsp->gg.g;
  x->ReplaceRsp = z;
}

/* FUNC(zx_e_Body_REV_ReplaceRsp) */

void zx_e_Body_REV_ReplaceRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReplaceRsp_s* nxt;
  struct zx_mm7_ReplaceRsp_s* y;
  if (!x) return;
  y = x->ReplaceRsp;
  if (!y) return;
  x->ReplaceRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->ReplaceRsp->gg.g;
    x->ReplaceRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ReplaceRsp) */

void zx_e_Body_PUT_ReplaceRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_ReplaceRsp_s* z)
{
  struct zx_mm7_ReplaceRsp_s* y;
  if (!x || !z) return;
  y = x->ReplaceRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReplaceRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ReplaceRsp) */

void zx_e_Body_ADD_ReplaceRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_ReplaceRsp_s* z)
{
  struct zx_mm7_ReplaceRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReplaceRsp->gg.g;
    x->ReplaceRsp = z;
    return;
  case -1:
    y = x->ReplaceRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplaceRsp; n > 1 && y; --n, y = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ReplaceRsp) */

void zx_e_Body_DEL_ReplaceRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_ReplaceRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplaceRsp = (struct zx_mm7_ReplaceRsp_s*)x->ReplaceRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ReplaceRsp_s*)x->ReplaceRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplaceRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReplaceRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_extendedCancelReq) */

int zx_e_Body_NUM_extendedCancelReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedCancelReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->extendedCancelReq; y; ++n, y = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_extendedCancelReq) */

struct zx_mm7_extendedCancelReq_s* zx_e_Body_GET_extendedCancelReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_extendedCancelReq_s* y;
  if (!x) return 0;
  for (y = x->extendedCancelReq; n>=0 && y; --n, y = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_extendedCancelReq) */

struct zx_mm7_extendedCancelReq_s* zx_e_Body_POP_extendedCancelReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedCancelReq_s* y;
  if (!x) return 0;
  y = x->extendedCancelReq;
  if (y)
    x->extendedCancelReq = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_extendedCancelReq) */

void zx_e_Body_PUSH_extendedCancelReq(struct zx_e_Body_s* x, struct zx_mm7_extendedCancelReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->extendedCancelReq->gg.g;
  x->extendedCancelReq = z;
}

/* FUNC(zx_e_Body_REV_extendedCancelReq) */

void zx_e_Body_REV_extendedCancelReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedCancelReq_s* nxt;
  struct zx_mm7_extendedCancelReq_s* y;
  if (!x) return;
  y = x->extendedCancelReq;
  if (!y) return;
  x->extendedCancelReq = 0;
  while (y) {
    nxt = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n;
    y->gg.g.n = &x->extendedCancelReq->gg.g;
    x->extendedCancelReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_extendedCancelReq) */

void zx_e_Body_PUT_extendedCancelReq(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedCancelReq_s* z)
{
  struct zx_mm7_extendedCancelReq_s* y;
  if (!x || !z) return;
  y = x->extendedCancelReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->extendedCancelReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_extendedCancelReq) */

void zx_e_Body_ADD_extendedCancelReq(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedCancelReq_s* z)
{
  struct zx_mm7_extendedCancelReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->extendedCancelReq->gg.g;
    x->extendedCancelReq = z;
    return;
  case -1:
    y = x->extendedCancelReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->extendedCancelReq; n > 1 && y; --n, y = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_extendedCancelReq) */

void zx_e_Body_DEL_extendedCancelReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_extendedCancelReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->extendedCancelReq = (struct zx_mm7_extendedCancelReq_s*)x->extendedCancelReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_extendedCancelReq_s*)x->extendedCancelReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->extendedCancelReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_extendedCancelReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_extendedCancelRsp) */

int zx_e_Body_NUM_extendedCancelRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedCancelRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->extendedCancelRsp; y; ++n, y = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_extendedCancelRsp) */

struct zx_mm7_extendedCancelRsp_s* zx_e_Body_GET_extendedCancelRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_extendedCancelRsp_s* y;
  if (!x) return 0;
  for (y = x->extendedCancelRsp; n>=0 && y; --n, y = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_extendedCancelRsp) */

struct zx_mm7_extendedCancelRsp_s* zx_e_Body_POP_extendedCancelRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedCancelRsp_s* y;
  if (!x) return 0;
  y = x->extendedCancelRsp;
  if (y)
    x->extendedCancelRsp = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_extendedCancelRsp) */

void zx_e_Body_PUSH_extendedCancelRsp(struct zx_e_Body_s* x, struct zx_mm7_extendedCancelRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->extendedCancelRsp->gg.g;
  x->extendedCancelRsp = z;
}

/* FUNC(zx_e_Body_REV_extendedCancelRsp) */

void zx_e_Body_REV_extendedCancelRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedCancelRsp_s* nxt;
  struct zx_mm7_extendedCancelRsp_s* y;
  if (!x) return;
  y = x->extendedCancelRsp;
  if (!y) return;
  x->extendedCancelRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->extendedCancelRsp->gg.g;
    x->extendedCancelRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_extendedCancelRsp) */

void zx_e_Body_PUT_extendedCancelRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedCancelRsp_s* z)
{
  struct zx_mm7_extendedCancelRsp_s* y;
  if (!x || !z) return;
  y = x->extendedCancelRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->extendedCancelRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_extendedCancelRsp) */

void zx_e_Body_ADD_extendedCancelRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedCancelRsp_s* z)
{
  struct zx_mm7_extendedCancelRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->extendedCancelRsp->gg.g;
    x->extendedCancelRsp = z;
    return;
  case -1:
    y = x->extendedCancelRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->extendedCancelRsp; n > 1 && y; --n, y = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_extendedCancelRsp) */

void zx_e_Body_DEL_extendedCancelRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_extendedCancelRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->extendedCancelRsp = (struct zx_mm7_extendedCancelRsp_s*)x->extendedCancelRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_extendedCancelRsp_s*)x->extendedCancelRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->extendedCancelRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_extendedCancelRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_extendedReplaceReq) */

int zx_e_Body_NUM_extendedReplaceReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedReplaceReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->extendedReplaceReq; y; ++n, y = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_extendedReplaceReq) */

struct zx_mm7_extendedReplaceReq_s* zx_e_Body_GET_extendedReplaceReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_extendedReplaceReq_s* y;
  if (!x) return 0;
  for (y = x->extendedReplaceReq; n>=0 && y; --n, y = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_extendedReplaceReq) */

struct zx_mm7_extendedReplaceReq_s* zx_e_Body_POP_extendedReplaceReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedReplaceReq_s* y;
  if (!x) return 0;
  y = x->extendedReplaceReq;
  if (y)
    x->extendedReplaceReq = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_extendedReplaceReq) */

void zx_e_Body_PUSH_extendedReplaceReq(struct zx_e_Body_s* x, struct zx_mm7_extendedReplaceReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->extendedReplaceReq->gg.g;
  x->extendedReplaceReq = z;
}

/* FUNC(zx_e_Body_REV_extendedReplaceReq) */

void zx_e_Body_REV_extendedReplaceReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedReplaceReq_s* nxt;
  struct zx_mm7_extendedReplaceReq_s* y;
  if (!x) return;
  y = x->extendedReplaceReq;
  if (!y) return;
  x->extendedReplaceReq = 0;
  while (y) {
    nxt = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n;
    y->gg.g.n = &x->extendedReplaceReq->gg.g;
    x->extendedReplaceReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_extendedReplaceReq) */

void zx_e_Body_PUT_extendedReplaceReq(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedReplaceReq_s* z)
{
  struct zx_mm7_extendedReplaceReq_s* y;
  if (!x || !z) return;
  y = x->extendedReplaceReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->extendedReplaceReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_extendedReplaceReq) */

void zx_e_Body_ADD_extendedReplaceReq(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedReplaceReq_s* z)
{
  struct zx_mm7_extendedReplaceReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->extendedReplaceReq->gg.g;
    x->extendedReplaceReq = z;
    return;
  case -1:
    y = x->extendedReplaceReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->extendedReplaceReq; n > 1 && y; --n, y = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_extendedReplaceReq) */

void zx_e_Body_DEL_extendedReplaceReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_extendedReplaceReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->extendedReplaceReq = (struct zx_mm7_extendedReplaceReq_s*)x->extendedReplaceReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_extendedReplaceReq_s*)x->extendedReplaceReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->extendedReplaceReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_extendedReplaceReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_extendedReplaceRsp) */

int zx_e_Body_NUM_extendedReplaceRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedReplaceRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->extendedReplaceRsp; y; ++n, y = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_extendedReplaceRsp) */

struct zx_mm7_extendedReplaceRsp_s* zx_e_Body_GET_extendedReplaceRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_extendedReplaceRsp_s* y;
  if (!x) return 0;
  for (y = x->extendedReplaceRsp; n>=0 && y; --n, y = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_extendedReplaceRsp) */

struct zx_mm7_extendedReplaceRsp_s* zx_e_Body_POP_extendedReplaceRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedReplaceRsp_s* y;
  if (!x) return 0;
  y = x->extendedReplaceRsp;
  if (y)
    x->extendedReplaceRsp = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_extendedReplaceRsp) */

void zx_e_Body_PUSH_extendedReplaceRsp(struct zx_e_Body_s* x, struct zx_mm7_extendedReplaceRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->extendedReplaceRsp->gg.g;
  x->extendedReplaceRsp = z;
}

/* FUNC(zx_e_Body_REV_extendedReplaceRsp) */

void zx_e_Body_REV_extendedReplaceRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_extendedReplaceRsp_s* nxt;
  struct zx_mm7_extendedReplaceRsp_s* y;
  if (!x) return;
  y = x->extendedReplaceRsp;
  if (!y) return;
  x->extendedReplaceRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->extendedReplaceRsp->gg.g;
    x->extendedReplaceRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_extendedReplaceRsp) */

void zx_e_Body_PUT_extendedReplaceRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedReplaceRsp_s* z)
{
  struct zx_mm7_extendedReplaceRsp_s* y;
  if (!x || !z) return;
  y = x->extendedReplaceRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->extendedReplaceRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_extendedReplaceRsp) */

void zx_e_Body_ADD_extendedReplaceRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_extendedReplaceRsp_s* z)
{
  struct zx_mm7_extendedReplaceRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->extendedReplaceRsp->gg.g;
    x->extendedReplaceRsp = z;
    return;
  case -1:
    y = x->extendedReplaceRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->extendedReplaceRsp; n > 1 && y; --n, y = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_extendedReplaceRsp) */

void zx_e_Body_DEL_extendedReplaceRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_extendedReplaceRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->extendedReplaceRsp = (struct zx_mm7_extendedReplaceRsp_s*)x->extendedReplaceRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_extendedReplaceRsp_s*)x->extendedReplaceRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->extendedReplaceRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_extendedReplaceRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_DeliveryReportReq) */

int zx_e_Body_NUM_DeliveryReportReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliveryReportReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeliveryReportReq; y; ++n, y = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_DeliveryReportReq) */

struct zx_mm7_DeliveryReportReq_s* zx_e_Body_GET_DeliveryReportReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_DeliveryReportReq_s* y;
  if (!x) return 0;
  for (y = x->DeliveryReportReq; n>=0 && y; --n, y = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_DeliveryReportReq) */

struct zx_mm7_DeliveryReportReq_s* zx_e_Body_POP_DeliveryReportReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliveryReportReq_s* y;
  if (!x) return 0;
  y = x->DeliveryReportReq;
  if (y)
    x->DeliveryReportReq = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_DeliveryReportReq) */

void zx_e_Body_PUSH_DeliveryReportReq(struct zx_e_Body_s* x, struct zx_mm7_DeliveryReportReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeliveryReportReq->gg.g;
  x->DeliveryReportReq = z;
}

/* FUNC(zx_e_Body_REV_DeliveryReportReq) */

void zx_e_Body_REV_DeliveryReportReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliveryReportReq_s* nxt;
  struct zx_mm7_DeliveryReportReq_s* y;
  if (!x) return;
  y = x->DeliveryReportReq;
  if (!y) return;
  x->DeliveryReportReq = 0;
  while (y) {
    nxt = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n;
    y->gg.g.n = &x->DeliveryReportReq->gg.g;
    x->DeliveryReportReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_DeliveryReportReq) */

void zx_e_Body_PUT_DeliveryReportReq(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliveryReportReq_s* z)
{
  struct zx_mm7_DeliveryReportReq_s* y;
  if (!x || !z) return;
  y = x->DeliveryReportReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeliveryReportReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_DeliveryReportReq) */

void zx_e_Body_ADD_DeliveryReportReq(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliveryReportReq_s* z)
{
  struct zx_mm7_DeliveryReportReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeliveryReportReq->gg.g;
    x->DeliveryReportReq = z;
    return;
  case -1:
    y = x->DeliveryReportReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliveryReportReq; n > 1 && y; --n, y = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_DeliveryReportReq) */

void zx_e_Body_DEL_DeliveryReportReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_DeliveryReportReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeliveryReportReq = (struct zx_mm7_DeliveryReportReq_s*)x->DeliveryReportReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_DeliveryReportReq_s*)x->DeliveryReportReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliveryReportReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliveryReportReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_DeliveryReportRsp) */

int zx_e_Body_NUM_DeliveryReportRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliveryReportRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeliveryReportRsp; y; ++n, y = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_DeliveryReportRsp) */

struct zx_mm7_DeliveryReportRsp_s* zx_e_Body_GET_DeliveryReportRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_DeliveryReportRsp_s* y;
  if (!x) return 0;
  for (y = x->DeliveryReportRsp; n>=0 && y; --n, y = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_DeliveryReportRsp) */

struct zx_mm7_DeliveryReportRsp_s* zx_e_Body_POP_DeliveryReportRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliveryReportRsp_s* y;
  if (!x) return 0;
  y = x->DeliveryReportRsp;
  if (y)
    x->DeliveryReportRsp = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_DeliveryReportRsp) */

void zx_e_Body_PUSH_DeliveryReportRsp(struct zx_e_Body_s* x, struct zx_mm7_DeliveryReportRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeliveryReportRsp->gg.g;
  x->DeliveryReportRsp = z;
}

/* FUNC(zx_e_Body_REV_DeliveryReportRsp) */

void zx_e_Body_REV_DeliveryReportRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_DeliveryReportRsp_s* nxt;
  struct zx_mm7_DeliveryReportRsp_s* y;
  if (!x) return;
  y = x->DeliveryReportRsp;
  if (!y) return;
  x->DeliveryReportRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->DeliveryReportRsp->gg.g;
    x->DeliveryReportRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_DeliveryReportRsp) */

void zx_e_Body_PUT_DeliveryReportRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliveryReportRsp_s* z)
{
  struct zx_mm7_DeliveryReportRsp_s* y;
  if (!x || !z) return;
  y = x->DeliveryReportRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeliveryReportRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_DeliveryReportRsp) */

void zx_e_Body_ADD_DeliveryReportRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_DeliveryReportRsp_s* z)
{
  struct zx_mm7_DeliveryReportRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeliveryReportRsp->gg.g;
    x->DeliveryReportRsp = z;
    return;
  case -1:
    y = x->DeliveryReportRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliveryReportRsp; n > 1 && y; --n, y = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_DeliveryReportRsp) */

void zx_e_Body_DEL_DeliveryReportRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_DeliveryReportRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeliveryReportRsp = (struct zx_mm7_DeliveryReportRsp_s*)x->DeliveryReportRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_DeliveryReportRsp_s*)x->DeliveryReportRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeliveryReportRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_DeliveryReportRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ReadReplyReq) */

int zx_e_Body_NUM_ReadReplyReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReadReplyReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReadReplyReq; y; ++n, y = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ReadReplyReq) */

struct zx_mm7_ReadReplyReq_s* zx_e_Body_GET_ReadReplyReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_ReadReplyReq_s* y;
  if (!x) return 0;
  for (y = x->ReadReplyReq; n>=0 && y; --n, y = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ReadReplyReq) */

struct zx_mm7_ReadReplyReq_s* zx_e_Body_POP_ReadReplyReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReadReplyReq_s* y;
  if (!x) return 0;
  y = x->ReadReplyReq;
  if (y)
    x->ReadReplyReq = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ReadReplyReq) */

void zx_e_Body_PUSH_ReadReplyReq(struct zx_e_Body_s* x, struct zx_mm7_ReadReplyReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReadReplyReq->gg.g;
  x->ReadReplyReq = z;
}

/* FUNC(zx_e_Body_REV_ReadReplyReq) */

void zx_e_Body_REV_ReadReplyReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReadReplyReq_s* nxt;
  struct zx_mm7_ReadReplyReq_s* y;
  if (!x) return;
  y = x->ReadReplyReq;
  if (!y) return;
  x->ReadReplyReq = 0;
  while (y) {
    nxt = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n;
    y->gg.g.n = &x->ReadReplyReq->gg.g;
    x->ReadReplyReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ReadReplyReq) */

void zx_e_Body_PUT_ReadReplyReq(struct zx_e_Body_s* x, int n, struct zx_mm7_ReadReplyReq_s* z)
{
  struct zx_mm7_ReadReplyReq_s* y;
  if (!x || !z) return;
  y = x->ReadReplyReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReadReplyReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ReadReplyReq) */

void zx_e_Body_ADD_ReadReplyReq(struct zx_e_Body_s* x, int n, struct zx_mm7_ReadReplyReq_s* z)
{
  struct zx_mm7_ReadReplyReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReadReplyReq->gg.g;
    x->ReadReplyReq = z;
    return;
  case -1:
    y = x->ReadReplyReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReadReplyReq; n > 1 && y; --n, y = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ReadReplyReq) */

void zx_e_Body_DEL_ReadReplyReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_ReadReplyReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReadReplyReq = (struct zx_mm7_ReadReplyReq_s*)x->ReadReplyReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ReadReplyReq_s*)x->ReadReplyReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReadReplyReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReadReplyReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ReadReplyRsp) */

int zx_e_Body_NUM_ReadReplyRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReadReplyRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReadReplyRsp; y; ++n, y = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ReadReplyRsp) */

struct zx_mm7_ReadReplyRsp_s* zx_e_Body_GET_ReadReplyRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_ReadReplyRsp_s* y;
  if (!x) return 0;
  for (y = x->ReadReplyRsp; n>=0 && y; --n, y = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ReadReplyRsp) */

struct zx_mm7_ReadReplyRsp_s* zx_e_Body_POP_ReadReplyRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReadReplyRsp_s* y;
  if (!x) return 0;
  y = x->ReadReplyRsp;
  if (y)
    x->ReadReplyRsp = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ReadReplyRsp) */

void zx_e_Body_PUSH_ReadReplyRsp(struct zx_e_Body_s* x, struct zx_mm7_ReadReplyRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReadReplyRsp->gg.g;
  x->ReadReplyRsp = z;
}

/* FUNC(zx_e_Body_REV_ReadReplyRsp) */

void zx_e_Body_REV_ReadReplyRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_ReadReplyRsp_s* nxt;
  struct zx_mm7_ReadReplyRsp_s* y;
  if (!x) return;
  y = x->ReadReplyRsp;
  if (!y) return;
  x->ReadReplyRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->ReadReplyRsp->gg.g;
    x->ReadReplyRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ReadReplyRsp) */

void zx_e_Body_PUT_ReadReplyRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_ReadReplyRsp_s* z)
{
  struct zx_mm7_ReadReplyRsp_s* y;
  if (!x || !z) return;
  y = x->ReadReplyRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReadReplyRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ReadReplyRsp) */

void zx_e_Body_ADD_ReadReplyRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_ReadReplyRsp_s* z)
{
  struct zx_mm7_ReadReplyRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReadReplyRsp->gg.g;
    x->ReadReplyRsp = z;
    return;
  case -1:
    y = x->ReadReplyRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReadReplyRsp; n > 1 && y; --n, y = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ReadReplyRsp) */

void zx_e_Body_DEL_ReadReplyRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_ReadReplyRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReadReplyRsp = (struct zx_mm7_ReadReplyRsp_s*)x->ReadReplyRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_ReadReplyRsp_s*)x->ReadReplyRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReadReplyRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_ReadReplyRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RSErrorRsp) */

int zx_e_Body_NUM_RSErrorRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_RSErrorRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RSErrorRsp; y; ++n, y = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RSErrorRsp) */

struct zx_mm7_RSErrorRsp_s* zx_e_Body_GET_RSErrorRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_RSErrorRsp_s* y;
  if (!x) return 0;
  for (y = x->RSErrorRsp; n>=0 && y; --n, y = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RSErrorRsp) */

struct zx_mm7_RSErrorRsp_s* zx_e_Body_POP_RSErrorRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_RSErrorRsp_s* y;
  if (!x) return 0;
  y = x->RSErrorRsp;
  if (y)
    x->RSErrorRsp = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RSErrorRsp) */

void zx_e_Body_PUSH_RSErrorRsp(struct zx_e_Body_s* x, struct zx_mm7_RSErrorRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RSErrorRsp->gg.g;
  x->RSErrorRsp = z;
}

/* FUNC(zx_e_Body_REV_RSErrorRsp) */

void zx_e_Body_REV_RSErrorRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_RSErrorRsp_s* nxt;
  struct zx_mm7_RSErrorRsp_s* y;
  if (!x) return;
  y = x->RSErrorRsp;
  if (!y) return;
  x->RSErrorRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->RSErrorRsp->gg.g;
    x->RSErrorRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RSErrorRsp) */

void zx_e_Body_PUT_RSErrorRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_RSErrorRsp_s* z)
{
  struct zx_mm7_RSErrorRsp_s* y;
  if (!x || !z) return;
  y = x->RSErrorRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RSErrorRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RSErrorRsp) */

void zx_e_Body_ADD_RSErrorRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_RSErrorRsp_s* z)
{
  struct zx_mm7_RSErrorRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RSErrorRsp->gg.g;
    x->RSErrorRsp = z;
    return;
  case -1:
    y = x->RSErrorRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RSErrorRsp; n > 1 && y; --n, y = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RSErrorRsp) */

void zx_e_Body_DEL_RSErrorRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_RSErrorRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RSErrorRsp = (struct zx_mm7_RSErrorRsp_s*)x->RSErrorRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_RSErrorRsp_s*)x->RSErrorRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RSErrorRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_RSErrorRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_VASPErrorRsp) */

int zx_e_Body_NUM_VASPErrorRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_VASPErrorRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->VASPErrorRsp; y; ++n, y = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_VASPErrorRsp) */

struct zx_mm7_VASPErrorRsp_s* zx_e_Body_GET_VASPErrorRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_VASPErrorRsp_s* y;
  if (!x) return 0;
  for (y = x->VASPErrorRsp; n>=0 && y; --n, y = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_VASPErrorRsp) */

struct zx_mm7_VASPErrorRsp_s* zx_e_Body_POP_VASPErrorRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_VASPErrorRsp_s* y;
  if (!x) return 0;
  y = x->VASPErrorRsp;
  if (y)
    x->VASPErrorRsp = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_VASPErrorRsp) */

void zx_e_Body_PUSH_VASPErrorRsp(struct zx_e_Body_s* x, struct zx_mm7_VASPErrorRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->VASPErrorRsp->gg.g;
  x->VASPErrorRsp = z;
}

/* FUNC(zx_e_Body_REV_VASPErrorRsp) */

void zx_e_Body_REV_VASPErrorRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_VASPErrorRsp_s* nxt;
  struct zx_mm7_VASPErrorRsp_s* y;
  if (!x) return;
  y = x->VASPErrorRsp;
  if (!y) return;
  x->VASPErrorRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->VASPErrorRsp->gg.g;
    x->VASPErrorRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_VASPErrorRsp) */

void zx_e_Body_PUT_VASPErrorRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_VASPErrorRsp_s* z)
{
  struct zx_mm7_VASPErrorRsp_s* y;
  if (!x || !z) return;
  y = x->VASPErrorRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->VASPErrorRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_VASPErrorRsp) */

void zx_e_Body_ADD_VASPErrorRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_VASPErrorRsp_s* z)
{
  struct zx_mm7_VASPErrorRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->VASPErrorRsp->gg.g;
    x->VASPErrorRsp = z;
    return;
  case -1:
    y = x->VASPErrorRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->VASPErrorRsp; n > 1 && y; --n, y = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_VASPErrorRsp) */

void zx_e_Body_DEL_VASPErrorRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_VASPErrorRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->VASPErrorRsp = (struct zx_mm7_VASPErrorRsp_s*)x->VASPErrorRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_VASPErrorRsp_s*)x->VASPErrorRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->VASPErrorRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_VASPErrorRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_QueryStatusReq) */

int zx_e_Body_NUM_QueryStatusReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_QueryStatusReq_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryStatusReq; y; ++n, y = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_QueryStatusReq) */

struct zx_mm7_QueryStatusReq_s* zx_e_Body_GET_QueryStatusReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_QueryStatusReq_s* y;
  if (!x) return 0;
  for (y = x->QueryStatusReq; n>=0 && y; --n, y = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_QueryStatusReq) */

struct zx_mm7_QueryStatusReq_s* zx_e_Body_POP_QueryStatusReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_QueryStatusReq_s* y;
  if (!x) return 0;
  y = x->QueryStatusReq;
  if (y)
    x->QueryStatusReq = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_QueryStatusReq) */

void zx_e_Body_PUSH_QueryStatusReq(struct zx_e_Body_s* x, struct zx_mm7_QueryStatusReq_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryStatusReq->gg.g;
  x->QueryStatusReq = z;
}

/* FUNC(zx_e_Body_REV_QueryStatusReq) */

void zx_e_Body_REV_QueryStatusReq(struct zx_e_Body_s* x)
{
  struct zx_mm7_QueryStatusReq_s* nxt;
  struct zx_mm7_QueryStatusReq_s* y;
  if (!x) return;
  y = x->QueryStatusReq;
  if (!y) return;
  x->QueryStatusReq = 0;
  while (y) {
    nxt = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryStatusReq->gg.g;
    x->QueryStatusReq = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_QueryStatusReq) */

void zx_e_Body_PUT_QueryStatusReq(struct zx_e_Body_s* x, int n, struct zx_mm7_QueryStatusReq_s* z)
{
  struct zx_mm7_QueryStatusReq_s* y;
  if (!x || !z) return;
  y = x->QueryStatusReq;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryStatusReq = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_QueryStatusReq) */

void zx_e_Body_ADD_QueryStatusReq(struct zx_e_Body_s* x, int n, struct zx_mm7_QueryStatusReq_s* z)
{
  struct zx_mm7_QueryStatusReq_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryStatusReq->gg.g;
    x->QueryStatusReq = z;
    return;
  case -1:
    y = x->QueryStatusReq;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryStatusReq; n > 1 && y; --n, y = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_QueryStatusReq) */

void zx_e_Body_DEL_QueryStatusReq(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_QueryStatusReq_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryStatusReq = (struct zx_mm7_QueryStatusReq_s*)x->QueryStatusReq->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_QueryStatusReq_s*)x->QueryStatusReq;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryStatusReq; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_QueryStatusReq_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_QueryStatusRsp) */

int zx_e_Body_NUM_QueryStatusRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_QueryStatusRsp_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryStatusRsp; y; ++n, y = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_QueryStatusRsp) */

struct zx_mm7_QueryStatusRsp_s* zx_e_Body_GET_QueryStatusRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_QueryStatusRsp_s* y;
  if (!x) return 0;
  for (y = x->QueryStatusRsp; n>=0 && y; --n, y = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_QueryStatusRsp) */

struct zx_mm7_QueryStatusRsp_s* zx_e_Body_POP_QueryStatusRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_QueryStatusRsp_s* y;
  if (!x) return 0;
  y = x->QueryStatusRsp;
  if (y)
    x->QueryStatusRsp = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_QueryStatusRsp) */

void zx_e_Body_PUSH_QueryStatusRsp(struct zx_e_Body_s* x, struct zx_mm7_QueryStatusRsp_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryStatusRsp->gg.g;
  x->QueryStatusRsp = z;
}

/* FUNC(zx_e_Body_REV_QueryStatusRsp) */

void zx_e_Body_REV_QueryStatusRsp(struct zx_e_Body_s* x)
{
  struct zx_mm7_QueryStatusRsp_s* nxt;
  struct zx_mm7_QueryStatusRsp_s* y;
  if (!x) return;
  y = x->QueryStatusRsp;
  if (!y) return;
  x->QueryStatusRsp = 0;
  while (y) {
    nxt = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryStatusRsp->gg.g;
    x->QueryStatusRsp = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_QueryStatusRsp) */

void zx_e_Body_PUT_QueryStatusRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_QueryStatusRsp_s* z)
{
  struct zx_mm7_QueryStatusRsp_s* y;
  if (!x || !z) return;
  y = x->QueryStatusRsp;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryStatusRsp = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_QueryStatusRsp) */

void zx_e_Body_ADD_QueryStatusRsp(struct zx_e_Body_s* x, int n, struct zx_mm7_QueryStatusRsp_s* z)
{
  struct zx_mm7_QueryStatusRsp_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryStatusRsp->gg.g;
    x->QueryStatusRsp = z;
    return;
  case -1:
    y = x->QueryStatusRsp;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryStatusRsp; n > 1 && y; --n, y = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_QueryStatusRsp) */

void zx_e_Body_DEL_QueryStatusRsp(struct zx_e_Body_s* x, int n)
{
  struct zx_mm7_QueryStatusRsp_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryStatusRsp = (struct zx_mm7_QueryStatusRsp_s*)x->QueryStatusRsp->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_QueryStatusRsp_s*)x->QueryStatusRsp;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryStatusRsp; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_QueryStatusRsp_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_Query) */

int zx_e_Body_NUM_cb_Query(struct zx_e_Body_s* x)
{
  struct zx_cb_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_Query; y; ++n, y = (struct zx_cb_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_Query) */

struct zx_cb_Query_s* zx_e_Body_GET_cb_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Query_s* y;
  if (!x) return 0;
  for (y = x->cb_Query; n>=0 && y; --n, y = (struct zx_cb_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_Query) */

struct zx_cb_Query_s* zx_e_Body_POP_cb_Query(struct zx_e_Body_s* x)
{
  struct zx_cb_Query_s* y;
  if (!x) return 0;
  y = x->cb_Query;
  if (y)
    x->cb_Query = (struct zx_cb_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_Query) */

void zx_e_Body_PUSH_cb_Query(struct zx_e_Body_s* x, struct zx_cb_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_Query->gg.g;
  x->cb_Query = z;
}

/* FUNC(zx_e_Body_REV_cb_Query) */

void zx_e_Body_REV_cb_Query(struct zx_e_Body_s* x)
{
  struct zx_cb_Query_s* nxt;
  struct zx_cb_Query_s* y;
  if (!x) return;
  y = x->cb_Query;
  if (!y) return;
  x->cb_Query = 0;
  while (y) {
    nxt = (struct zx_cb_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_Query->gg.g;
    x->cb_Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_Query) */

void zx_e_Body_PUT_cb_Query(struct zx_e_Body_s* x, int n, struct zx_cb_Query_s* z)
{
  struct zx_cb_Query_s* y;
  if (!x || !z) return;
  y = x->cb_Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_Query) */

void zx_e_Body_ADD_cb_Query(struct zx_e_Body_s* x, int n, struct zx_cb_Query_s* z)
{
  struct zx_cb_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_Query->gg.g;
    x->cb_Query = z;
    return;
  case -1:
    y = x->cb_Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Query; n > 1 && y; --n, y = (struct zx_cb_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_Query) */

void zx_e_Body_DEL_cb_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_Query = (struct zx_cb_Query_s*)x->cb_Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Query_s*)x->cb_Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Query; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_QueryResponse) */

int zx_e_Body_NUM_cb_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_QueryResponse; y; ++n, y = (struct zx_cb_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_QueryResponse) */

struct zx_cb_QueryResponse_s* zx_e_Body_GET_cb_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->cb_QueryResponse; n>=0 && y; --n, y = (struct zx_cb_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_QueryResponse) */

struct zx_cb_QueryResponse_s* zx_e_Body_POP_cb_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_QueryResponse_s* y;
  if (!x) return 0;
  y = x->cb_QueryResponse;
  if (y)
    x->cb_QueryResponse = (struct zx_cb_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_QueryResponse) */

void zx_e_Body_PUSH_cb_QueryResponse(struct zx_e_Body_s* x, struct zx_cb_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_QueryResponse->gg.g;
  x->cb_QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_cb_QueryResponse) */

void zx_e_Body_REV_cb_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_QueryResponse_s* nxt;
  struct zx_cb_QueryResponse_s* y;
  if (!x) return;
  y = x->cb_QueryResponse;
  if (!y) return;
  x->cb_QueryResponse = 0;
  while (y) {
    nxt = (struct zx_cb_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_QueryResponse->gg.g;
    x->cb_QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_QueryResponse) */

void zx_e_Body_PUT_cb_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_cb_QueryResponse_s* z)
{
  struct zx_cb_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->cb_QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_QueryResponse) */

void zx_e_Body_ADD_cb_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_cb_QueryResponse_s* z)
{
  struct zx_cb_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_QueryResponse->gg.g;
    x->cb_QueryResponse = z;
    return;
  case -1:
    y = x->cb_QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_QueryResponse; n > 1 && y; --n, y = (struct zx_cb_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_QueryResponse) */

void zx_e_Body_DEL_cb_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_QueryResponse = (struct zx_cb_QueryResponse_s*)x->cb_QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_QueryResponse_s*)x->cb_QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_Create) */

int zx_e_Body_NUM_cb_Create(struct zx_e_Body_s* x)
{
  struct zx_cb_Create_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_Create; y; ++n, y = (struct zx_cb_Create_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_Create) */

struct zx_cb_Create_s* zx_e_Body_GET_cb_Create(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Create_s* y;
  if (!x) return 0;
  for (y = x->cb_Create; n>=0 && y; --n, y = (struct zx_cb_Create_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_Create) */

struct zx_cb_Create_s* zx_e_Body_POP_cb_Create(struct zx_e_Body_s* x)
{
  struct zx_cb_Create_s* y;
  if (!x) return 0;
  y = x->cb_Create;
  if (y)
    x->cb_Create = (struct zx_cb_Create_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_Create) */

void zx_e_Body_PUSH_cb_Create(struct zx_e_Body_s* x, struct zx_cb_Create_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_Create->gg.g;
  x->cb_Create = z;
}

/* FUNC(zx_e_Body_REV_cb_Create) */

void zx_e_Body_REV_cb_Create(struct zx_e_Body_s* x)
{
  struct zx_cb_Create_s* nxt;
  struct zx_cb_Create_s* y;
  if (!x) return;
  y = x->cb_Create;
  if (!y) return;
  x->cb_Create = 0;
  while (y) {
    nxt = (struct zx_cb_Create_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_Create->gg.g;
    x->cb_Create = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_Create) */

void zx_e_Body_PUT_cb_Create(struct zx_e_Body_s* x, int n, struct zx_cb_Create_s* z)
{
  struct zx_cb_Create_s* y;
  if (!x || !z) return;
  y = x->cb_Create;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_Create = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Create_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_Create) */

void zx_e_Body_ADD_cb_Create(struct zx_e_Body_s* x, int n, struct zx_cb_Create_s* z)
{
  struct zx_cb_Create_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_Create->gg.g;
    x->cb_Create = z;
    return;
  case -1:
    y = x->cb_Create;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Create_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Create; n > 1 && y; --n, y = (struct zx_cb_Create_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_Create) */

void zx_e_Body_DEL_cb_Create(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Create_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_Create = (struct zx_cb_Create_s*)x->cb_Create->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Create_s*)x->cb_Create;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Create_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Create; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Create_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_CreateResponse) */

int zx_e_Body_NUM_cb_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_CreateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_CreateResponse; y; ++n, y = (struct zx_cb_CreateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_CreateResponse) */

struct zx_cb_CreateResponse_s* zx_e_Body_GET_cb_CreateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_CreateResponse_s* y;
  if (!x) return 0;
  for (y = x->cb_CreateResponse; n>=0 && y; --n, y = (struct zx_cb_CreateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_CreateResponse) */

struct zx_cb_CreateResponse_s* zx_e_Body_POP_cb_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_CreateResponse_s* y;
  if (!x) return 0;
  y = x->cb_CreateResponse;
  if (y)
    x->cb_CreateResponse = (struct zx_cb_CreateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_CreateResponse) */

void zx_e_Body_PUSH_cb_CreateResponse(struct zx_e_Body_s* x, struct zx_cb_CreateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_CreateResponse->gg.g;
  x->cb_CreateResponse = z;
}

/* FUNC(zx_e_Body_REV_cb_CreateResponse) */

void zx_e_Body_REV_cb_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_CreateResponse_s* nxt;
  struct zx_cb_CreateResponse_s* y;
  if (!x) return;
  y = x->cb_CreateResponse;
  if (!y) return;
  x->cb_CreateResponse = 0;
  while (y) {
    nxt = (struct zx_cb_CreateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_CreateResponse->gg.g;
    x->cb_CreateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_CreateResponse) */

void zx_e_Body_PUT_cb_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_cb_CreateResponse_s* z)
{
  struct zx_cb_CreateResponse_s* y;
  if (!x || !z) return;
  y = x->cb_CreateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_CreateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_CreateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_CreateResponse) */

void zx_e_Body_ADD_cb_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_cb_CreateResponse_s* z)
{
  struct zx_cb_CreateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_CreateResponse->gg.g;
    x->cb_CreateResponse = z;
    return;
  case -1:
    y = x->cb_CreateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_CreateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_CreateResponse; n > 1 && y; --n, y = (struct zx_cb_CreateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_CreateResponse) */

void zx_e_Body_DEL_cb_CreateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_CreateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_CreateResponse = (struct zx_cb_CreateResponse_s*)x->cb_CreateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_CreateResponse_s*)x->cb_CreateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_CreateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_CreateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_CreateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_Delete) */

int zx_e_Body_NUM_cb_Delete(struct zx_e_Body_s* x)
{
  struct zx_cb_Delete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_Delete; y; ++n, y = (struct zx_cb_Delete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_Delete) */

struct zx_cb_Delete_s* zx_e_Body_GET_cb_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Delete_s* y;
  if (!x) return 0;
  for (y = x->cb_Delete; n>=0 && y; --n, y = (struct zx_cb_Delete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_Delete) */

struct zx_cb_Delete_s* zx_e_Body_POP_cb_Delete(struct zx_e_Body_s* x)
{
  struct zx_cb_Delete_s* y;
  if (!x) return 0;
  y = x->cb_Delete;
  if (y)
    x->cb_Delete = (struct zx_cb_Delete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_Delete) */

void zx_e_Body_PUSH_cb_Delete(struct zx_e_Body_s* x, struct zx_cb_Delete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_Delete->gg.g;
  x->cb_Delete = z;
}

/* FUNC(zx_e_Body_REV_cb_Delete) */

void zx_e_Body_REV_cb_Delete(struct zx_e_Body_s* x)
{
  struct zx_cb_Delete_s* nxt;
  struct zx_cb_Delete_s* y;
  if (!x) return;
  y = x->cb_Delete;
  if (!y) return;
  x->cb_Delete = 0;
  while (y) {
    nxt = (struct zx_cb_Delete_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_Delete->gg.g;
    x->cb_Delete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_Delete) */

void zx_e_Body_PUT_cb_Delete(struct zx_e_Body_s* x, int n, struct zx_cb_Delete_s* z)
{
  struct zx_cb_Delete_s* y;
  if (!x || !z) return;
  y = x->cb_Delete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_Delete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_Delete) */

void zx_e_Body_ADD_cb_Delete(struct zx_e_Body_s* x, int n, struct zx_cb_Delete_s* z)
{
  struct zx_cb_Delete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_Delete->gg.g;
    x->cb_Delete = z;
    return;
  case -1:
    y = x->cb_Delete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Delete; n > 1 && y; --n, y = (struct zx_cb_Delete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_Delete) */

void zx_e_Body_DEL_cb_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Delete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_Delete = (struct zx_cb_Delete_s*)x->cb_Delete->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Delete_s*)x->cb_Delete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Delete; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_DeleteResponse) */

int zx_e_Body_NUM_cb_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_DeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_DeleteResponse; y; ++n, y = (struct zx_cb_DeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_DeleteResponse) */

struct zx_cb_DeleteResponse_s* zx_e_Body_GET_cb_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_DeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->cb_DeleteResponse; n>=0 && y; --n, y = (struct zx_cb_DeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_DeleteResponse) */

struct zx_cb_DeleteResponse_s* zx_e_Body_POP_cb_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_DeleteResponse_s* y;
  if (!x) return 0;
  y = x->cb_DeleteResponse;
  if (y)
    x->cb_DeleteResponse = (struct zx_cb_DeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_DeleteResponse) */

void zx_e_Body_PUSH_cb_DeleteResponse(struct zx_e_Body_s* x, struct zx_cb_DeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_DeleteResponse->gg.g;
  x->cb_DeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_cb_DeleteResponse) */

void zx_e_Body_REV_cb_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_DeleteResponse_s* nxt;
  struct zx_cb_DeleteResponse_s* y;
  if (!x) return;
  y = x->cb_DeleteResponse;
  if (!y) return;
  x->cb_DeleteResponse = 0;
  while (y) {
    nxt = (struct zx_cb_DeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_DeleteResponse->gg.g;
    x->cb_DeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_DeleteResponse) */

void zx_e_Body_PUT_cb_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_cb_DeleteResponse_s* z)
{
  struct zx_cb_DeleteResponse_s* y;
  if (!x || !z) return;
  y = x->cb_DeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_DeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_DeleteResponse) */

void zx_e_Body_ADD_cb_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_cb_DeleteResponse_s* z)
{
  struct zx_cb_DeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_DeleteResponse->gg.g;
    x->cb_DeleteResponse = z;
    return;
  case -1:
    y = x->cb_DeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_DeleteResponse; n > 1 && y; --n, y = (struct zx_cb_DeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_DeleteResponse) */

void zx_e_Body_DEL_cb_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_DeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_DeleteResponse = (struct zx_cb_DeleteResponse_s*)x->cb_DeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_DeleteResponse_s*)x->cb_DeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_DeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_Modify) */

int zx_e_Body_NUM_cb_Modify(struct zx_e_Body_s* x)
{
  struct zx_cb_Modify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_Modify; y; ++n, y = (struct zx_cb_Modify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_Modify) */

struct zx_cb_Modify_s* zx_e_Body_GET_cb_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Modify_s* y;
  if (!x) return 0;
  for (y = x->cb_Modify; n>=0 && y; --n, y = (struct zx_cb_Modify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_Modify) */

struct zx_cb_Modify_s* zx_e_Body_POP_cb_Modify(struct zx_e_Body_s* x)
{
  struct zx_cb_Modify_s* y;
  if (!x) return 0;
  y = x->cb_Modify;
  if (y)
    x->cb_Modify = (struct zx_cb_Modify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_Modify) */

void zx_e_Body_PUSH_cb_Modify(struct zx_e_Body_s* x, struct zx_cb_Modify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_Modify->gg.g;
  x->cb_Modify = z;
}

/* FUNC(zx_e_Body_REV_cb_Modify) */

void zx_e_Body_REV_cb_Modify(struct zx_e_Body_s* x)
{
  struct zx_cb_Modify_s* nxt;
  struct zx_cb_Modify_s* y;
  if (!x) return;
  y = x->cb_Modify;
  if (!y) return;
  x->cb_Modify = 0;
  while (y) {
    nxt = (struct zx_cb_Modify_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_Modify->gg.g;
    x->cb_Modify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_Modify) */

void zx_e_Body_PUT_cb_Modify(struct zx_e_Body_s* x, int n, struct zx_cb_Modify_s* z)
{
  struct zx_cb_Modify_s* y;
  if (!x || !z) return;
  y = x->cb_Modify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_Modify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_Modify) */

void zx_e_Body_ADD_cb_Modify(struct zx_e_Body_s* x, int n, struct zx_cb_Modify_s* z)
{
  struct zx_cb_Modify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_Modify->gg.g;
    x->cb_Modify = z;
    return;
  case -1:
    y = x->cb_Modify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Modify; n > 1 && y; --n, y = (struct zx_cb_Modify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_Modify) */

void zx_e_Body_DEL_cb_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Modify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_Modify = (struct zx_cb_Modify_s*)x->cb_Modify->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Modify_s*)x->cb_Modify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Modify; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_ModifyResponse) */

int zx_e_Body_NUM_cb_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_ModifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_ModifyResponse; y; ++n, y = (struct zx_cb_ModifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_ModifyResponse) */

struct zx_cb_ModifyResponse_s* zx_e_Body_GET_cb_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_ModifyResponse_s* y;
  if (!x) return 0;
  for (y = x->cb_ModifyResponse; n>=0 && y; --n, y = (struct zx_cb_ModifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_ModifyResponse) */

struct zx_cb_ModifyResponse_s* zx_e_Body_POP_cb_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_ModifyResponse_s* y;
  if (!x) return 0;
  y = x->cb_ModifyResponse;
  if (y)
    x->cb_ModifyResponse = (struct zx_cb_ModifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_ModifyResponse) */

void zx_e_Body_PUSH_cb_ModifyResponse(struct zx_e_Body_s* x, struct zx_cb_ModifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_ModifyResponse->gg.g;
  x->cb_ModifyResponse = z;
}

/* FUNC(zx_e_Body_REV_cb_ModifyResponse) */

void zx_e_Body_REV_cb_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_ModifyResponse_s* nxt;
  struct zx_cb_ModifyResponse_s* y;
  if (!x) return;
  y = x->cb_ModifyResponse;
  if (!y) return;
  x->cb_ModifyResponse = 0;
  while (y) {
    nxt = (struct zx_cb_ModifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_ModifyResponse->gg.g;
    x->cb_ModifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_ModifyResponse) */

void zx_e_Body_PUT_cb_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_cb_ModifyResponse_s* z)
{
  struct zx_cb_ModifyResponse_s* y;
  if (!x || !z) return;
  y = x->cb_ModifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_ModifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_ModifyResponse) */

void zx_e_Body_ADD_cb_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_cb_ModifyResponse_s* z)
{
  struct zx_cb_ModifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_ModifyResponse->gg.g;
    x->cb_ModifyResponse = z;
    return;
  case -1:
    y = x->cb_ModifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_ModifyResponse; n > 1 && y; --n, y = (struct zx_cb_ModifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_ModifyResponse) */

void zx_e_Body_DEL_cb_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_ModifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_ModifyResponse = (struct zx_cb_ModifyResponse_s*)x->cb_ModifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ModifyResponse_s*)x->cb_ModifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_ModifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_Notify) */

int zx_e_Body_NUM_cb_Notify(struct zx_e_Body_s* x)
{
  struct zx_cb_Notify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_Notify; y; ++n, y = (struct zx_cb_Notify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_Notify) */

struct zx_cb_Notify_s* zx_e_Body_GET_cb_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Notify_s* y;
  if (!x) return 0;
  for (y = x->cb_Notify; n>=0 && y; --n, y = (struct zx_cb_Notify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_Notify) */

struct zx_cb_Notify_s* zx_e_Body_POP_cb_Notify(struct zx_e_Body_s* x)
{
  struct zx_cb_Notify_s* y;
  if (!x) return 0;
  y = x->cb_Notify;
  if (y)
    x->cb_Notify = (struct zx_cb_Notify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_Notify) */

void zx_e_Body_PUSH_cb_Notify(struct zx_e_Body_s* x, struct zx_cb_Notify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_Notify->gg.g;
  x->cb_Notify = z;
}

/* FUNC(zx_e_Body_REV_cb_Notify) */

void zx_e_Body_REV_cb_Notify(struct zx_e_Body_s* x)
{
  struct zx_cb_Notify_s* nxt;
  struct zx_cb_Notify_s* y;
  if (!x) return;
  y = x->cb_Notify;
  if (!y) return;
  x->cb_Notify = 0;
  while (y) {
    nxt = (struct zx_cb_Notify_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_Notify->gg.g;
    x->cb_Notify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_Notify) */

void zx_e_Body_PUT_cb_Notify(struct zx_e_Body_s* x, int n, struct zx_cb_Notify_s* z)
{
  struct zx_cb_Notify_s* y;
  if (!x || !z) return;
  y = x->cb_Notify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_Notify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_Notify) */

void zx_e_Body_ADD_cb_Notify(struct zx_e_Body_s* x, int n, struct zx_cb_Notify_s* z)
{
  struct zx_cb_Notify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_Notify->gg.g;
    x->cb_Notify = z;
    return;
  case -1:
    y = x->cb_Notify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Notify; n > 1 && y; --n, y = (struct zx_cb_Notify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_Notify) */

void zx_e_Body_DEL_cb_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_Notify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_Notify = (struct zx_cb_Notify_s*)x->cb_Notify->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_Notify_s*)x->cb_Notify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_Notify; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_cb_NotifyResponse) */

int zx_e_Body_NUM_cb_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_NotifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->cb_NotifyResponse; y; ++n, y = (struct zx_cb_NotifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_cb_NotifyResponse) */

struct zx_cb_NotifyResponse_s* zx_e_Body_GET_cb_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_NotifyResponse_s* y;
  if (!x) return 0;
  for (y = x->cb_NotifyResponse; n>=0 && y; --n, y = (struct zx_cb_NotifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_cb_NotifyResponse) */

struct zx_cb_NotifyResponse_s* zx_e_Body_POP_cb_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_NotifyResponse_s* y;
  if (!x) return 0;
  y = x->cb_NotifyResponse;
  if (y)
    x->cb_NotifyResponse = (struct zx_cb_NotifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_cb_NotifyResponse) */

void zx_e_Body_PUSH_cb_NotifyResponse(struct zx_e_Body_s* x, struct zx_cb_NotifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->cb_NotifyResponse->gg.g;
  x->cb_NotifyResponse = z;
}

/* FUNC(zx_e_Body_REV_cb_NotifyResponse) */

void zx_e_Body_REV_cb_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_NotifyResponse_s* nxt;
  struct zx_cb_NotifyResponse_s* y;
  if (!x) return;
  y = x->cb_NotifyResponse;
  if (!y) return;
  x->cb_NotifyResponse = 0;
  while (y) {
    nxt = (struct zx_cb_NotifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->cb_NotifyResponse->gg.g;
    x->cb_NotifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_cb_NotifyResponse) */

void zx_e_Body_PUT_cb_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_cb_NotifyResponse_s* z)
{
  struct zx_cb_NotifyResponse_s* y;
  if (!x || !z) return;
  y = x->cb_NotifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->cb_NotifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_cb_NotifyResponse) */

void zx_e_Body_ADD_cb_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_cb_NotifyResponse_s* z)
{
  struct zx_cb_NotifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->cb_NotifyResponse->gg.g;
    x->cb_NotifyResponse = z;
    return;
  case -1:
    y = x->cb_NotifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_NotifyResponse; n > 1 && y; --n, y = (struct zx_cb_NotifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_cb_NotifyResponse) */

void zx_e_Body_DEL_cb_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_NotifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->cb_NotifyResponse = (struct zx_cb_NotifyResponse_s*)x->cb_NotifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_NotifyResponse_s*)x->cb_NotifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->cb_NotifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ReportUsage) */

int zx_e_Body_NUM_ReportUsage(struct zx_e_Body_s* x)
{
  struct zx_cb_ReportUsage_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReportUsage; y; ++n, y = (struct zx_cb_ReportUsage_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ReportUsage) */

struct zx_cb_ReportUsage_s* zx_e_Body_GET_ReportUsage(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_ReportUsage_s* y;
  if (!x) return 0;
  for (y = x->ReportUsage; n>=0 && y; --n, y = (struct zx_cb_ReportUsage_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ReportUsage) */

struct zx_cb_ReportUsage_s* zx_e_Body_POP_ReportUsage(struct zx_e_Body_s* x)
{
  struct zx_cb_ReportUsage_s* y;
  if (!x) return 0;
  y = x->ReportUsage;
  if (y)
    x->ReportUsage = (struct zx_cb_ReportUsage_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ReportUsage) */

void zx_e_Body_PUSH_ReportUsage(struct zx_e_Body_s* x, struct zx_cb_ReportUsage_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReportUsage->gg.g;
  x->ReportUsage = z;
}

/* FUNC(zx_e_Body_REV_ReportUsage) */

void zx_e_Body_REV_ReportUsage(struct zx_e_Body_s* x)
{
  struct zx_cb_ReportUsage_s* nxt;
  struct zx_cb_ReportUsage_s* y;
  if (!x) return;
  y = x->ReportUsage;
  if (!y) return;
  x->ReportUsage = 0;
  while (y) {
    nxt = (struct zx_cb_ReportUsage_s*)y->gg.g.n;
    y->gg.g.n = &x->ReportUsage->gg.g;
    x->ReportUsage = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ReportUsage) */

void zx_e_Body_PUT_ReportUsage(struct zx_e_Body_s* x, int n, struct zx_cb_ReportUsage_s* z)
{
  struct zx_cb_ReportUsage_s* y;
  if (!x || !z) return;
  y = x->ReportUsage;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReportUsage = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ReportUsage_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ReportUsage) */

void zx_e_Body_ADD_ReportUsage(struct zx_e_Body_s* x, int n, struct zx_cb_ReportUsage_s* z)
{
  struct zx_cb_ReportUsage_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReportUsage->gg.g;
    x->ReportUsage = z;
    return;
  case -1:
    y = x->ReportUsage;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ReportUsage_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReportUsage; n > 1 && y; --n, y = (struct zx_cb_ReportUsage_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ReportUsage) */

void zx_e_Body_DEL_ReportUsage(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_ReportUsage_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReportUsage = (struct zx_cb_ReportUsage_s*)x->ReportUsage->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ReportUsage_s*)x->ReportUsage;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ReportUsage_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReportUsage; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ReportUsage_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ReportUsageResponse) */

int zx_e_Body_NUM_ReportUsageResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_ReportUsageResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReportUsageResponse; y; ++n, y = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ReportUsageResponse) */

struct zx_cb_ReportUsageResponse_s* zx_e_Body_GET_ReportUsageResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_ReportUsageResponse_s* y;
  if (!x) return 0;
  for (y = x->ReportUsageResponse; n>=0 && y; --n, y = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ReportUsageResponse) */

struct zx_cb_ReportUsageResponse_s* zx_e_Body_POP_ReportUsageResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_ReportUsageResponse_s* y;
  if (!x) return 0;
  y = x->ReportUsageResponse;
  if (y)
    x->ReportUsageResponse = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ReportUsageResponse) */

void zx_e_Body_PUSH_ReportUsageResponse(struct zx_e_Body_s* x, struct zx_cb_ReportUsageResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReportUsageResponse->gg.g;
  x->ReportUsageResponse = z;
}

/* FUNC(zx_e_Body_REV_ReportUsageResponse) */

void zx_e_Body_REV_ReportUsageResponse(struct zx_e_Body_s* x)
{
  struct zx_cb_ReportUsageResponse_s* nxt;
  struct zx_cb_ReportUsageResponse_s* y;
  if (!x) return;
  y = x->ReportUsageResponse;
  if (!y) return;
  x->ReportUsageResponse = 0;
  while (y) {
    nxt = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ReportUsageResponse->gg.g;
    x->ReportUsageResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ReportUsageResponse) */

void zx_e_Body_PUT_ReportUsageResponse(struct zx_e_Body_s* x, int n, struct zx_cb_ReportUsageResponse_s* z)
{
  struct zx_cb_ReportUsageResponse_s* y;
  if (!x || !z) return;
  y = x->ReportUsageResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReportUsageResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ReportUsageResponse) */

void zx_e_Body_ADD_ReportUsageResponse(struct zx_e_Body_s* x, int n, struct zx_cb_ReportUsageResponse_s* z)
{
  struct zx_cb_ReportUsageResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReportUsageResponse->gg.g;
    x->ReportUsageResponse = z;
    return;
  case -1:
    y = x->ReportUsageResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReportUsageResponse; n > 1 && y; --n, y = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ReportUsageResponse) */

void zx_e_Body_DEL_ReportUsageResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_cb_ReportUsageResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReportUsageResponse = (struct zx_cb_ReportUsageResponse_s*)x->ReportUsageResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_cb_ReportUsageResponse_s*)x->ReportUsageResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReportUsageResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_cb_ReportUsageResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_Query) */

int zx_e_Body_NUM_gl_Query(struct zx_e_Body_s* x)
{
  struct zx_gl_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_Query; y; ++n, y = (struct zx_gl_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_Query) */

struct zx_gl_Query_s* zx_e_Body_GET_gl_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Query_s* y;
  if (!x) return 0;
  for (y = x->gl_Query; n>=0 && y; --n, y = (struct zx_gl_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_Query) */

struct zx_gl_Query_s* zx_e_Body_POP_gl_Query(struct zx_e_Body_s* x)
{
  struct zx_gl_Query_s* y;
  if (!x) return 0;
  y = x->gl_Query;
  if (y)
    x->gl_Query = (struct zx_gl_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_Query) */

void zx_e_Body_PUSH_gl_Query(struct zx_e_Body_s* x, struct zx_gl_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_Query->gg.g;
  x->gl_Query = z;
}

/* FUNC(zx_e_Body_REV_gl_Query) */

void zx_e_Body_REV_gl_Query(struct zx_e_Body_s* x)
{
  struct zx_gl_Query_s* nxt;
  struct zx_gl_Query_s* y;
  if (!x) return;
  y = x->gl_Query;
  if (!y) return;
  x->gl_Query = 0;
  while (y) {
    nxt = (struct zx_gl_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_Query->gg.g;
    x->gl_Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_Query) */

void zx_e_Body_PUT_gl_Query(struct zx_e_Body_s* x, int n, struct zx_gl_Query_s* z)
{
  struct zx_gl_Query_s* y;
  if (!x || !z) return;
  y = x->gl_Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_Query) */

void zx_e_Body_ADD_gl_Query(struct zx_e_Body_s* x, int n, struct zx_gl_Query_s* z)
{
  struct zx_gl_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_Query->gg.g;
    x->gl_Query = z;
    return;
  case -1:
    y = x->gl_Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Query; n > 1 && y; --n, y = (struct zx_gl_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_Query) */

void zx_e_Body_DEL_gl_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_Query = (struct zx_gl_Query_s*)x->gl_Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Query_s*)x->gl_Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Query; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_QueryResponse) */

int zx_e_Body_NUM_gl_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_QueryResponse; y; ++n, y = (struct zx_gl_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_QueryResponse) */

struct zx_gl_QueryResponse_s* zx_e_Body_GET_gl_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->gl_QueryResponse; n>=0 && y; --n, y = (struct zx_gl_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_QueryResponse) */

struct zx_gl_QueryResponse_s* zx_e_Body_POP_gl_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_QueryResponse_s* y;
  if (!x) return 0;
  y = x->gl_QueryResponse;
  if (y)
    x->gl_QueryResponse = (struct zx_gl_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_QueryResponse) */

void zx_e_Body_PUSH_gl_QueryResponse(struct zx_e_Body_s* x, struct zx_gl_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_QueryResponse->gg.g;
  x->gl_QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_gl_QueryResponse) */

void zx_e_Body_REV_gl_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_QueryResponse_s* nxt;
  struct zx_gl_QueryResponse_s* y;
  if (!x) return;
  y = x->gl_QueryResponse;
  if (!y) return;
  x->gl_QueryResponse = 0;
  while (y) {
    nxt = (struct zx_gl_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_QueryResponse->gg.g;
    x->gl_QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_QueryResponse) */

void zx_e_Body_PUT_gl_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_gl_QueryResponse_s* z)
{
  struct zx_gl_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->gl_QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_QueryResponse) */

void zx_e_Body_ADD_gl_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_gl_QueryResponse_s* z)
{
  struct zx_gl_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_QueryResponse->gg.g;
    x->gl_QueryResponse = z;
    return;
  case -1:
    y = x->gl_QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_QueryResponse; n > 1 && y; --n, y = (struct zx_gl_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_QueryResponse) */

void zx_e_Body_DEL_gl_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_QueryResponse = (struct zx_gl_QueryResponse_s*)x->gl_QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_QueryResponse_s*)x->gl_QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_Create) */

int zx_e_Body_NUM_gl_Create(struct zx_e_Body_s* x)
{
  struct zx_gl_Create_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_Create; y; ++n, y = (struct zx_gl_Create_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_Create) */

struct zx_gl_Create_s* zx_e_Body_GET_gl_Create(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Create_s* y;
  if (!x) return 0;
  for (y = x->gl_Create; n>=0 && y; --n, y = (struct zx_gl_Create_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_Create) */

struct zx_gl_Create_s* zx_e_Body_POP_gl_Create(struct zx_e_Body_s* x)
{
  struct zx_gl_Create_s* y;
  if (!x) return 0;
  y = x->gl_Create;
  if (y)
    x->gl_Create = (struct zx_gl_Create_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_Create) */

void zx_e_Body_PUSH_gl_Create(struct zx_e_Body_s* x, struct zx_gl_Create_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_Create->gg.g;
  x->gl_Create = z;
}

/* FUNC(zx_e_Body_REV_gl_Create) */

void zx_e_Body_REV_gl_Create(struct zx_e_Body_s* x)
{
  struct zx_gl_Create_s* nxt;
  struct zx_gl_Create_s* y;
  if (!x) return;
  y = x->gl_Create;
  if (!y) return;
  x->gl_Create = 0;
  while (y) {
    nxt = (struct zx_gl_Create_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_Create->gg.g;
    x->gl_Create = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_Create) */

void zx_e_Body_PUT_gl_Create(struct zx_e_Body_s* x, int n, struct zx_gl_Create_s* z)
{
  struct zx_gl_Create_s* y;
  if (!x || !z) return;
  y = x->gl_Create;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_Create = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Create_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_Create) */

void zx_e_Body_ADD_gl_Create(struct zx_e_Body_s* x, int n, struct zx_gl_Create_s* z)
{
  struct zx_gl_Create_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_Create->gg.g;
    x->gl_Create = z;
    return;
  case -1:
    y = x->gl_Create;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Create_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Create; n > 1 && y; --n, y = (struct zx_gl_Create_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_Create) */

void zx_e_Body_DEL_gl_Create(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Create_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_Create = (struct zx_gl_Create_s*)x->gl_Create->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Create_s*)x->gl_Create;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Create_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Create; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Create_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_CreateResponse) */

int zx_e_Body_NUM_gl_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_CreateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_CreateResponse; y; ++n, y = (struct zx_gl_CreateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_CreateResponse) */

struct zx_gl_CreateResponse_s* zx_e_Body_GET_gl_CreateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_CreateResponse_s* y;
  if (!x) return 0;
  for (y = x->gl_CreateResponse; n>=0 && y; --n, y = (struct zx_gl_CreateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_CreateResponse) */

struct zx_gl_CreateResponse_s* zx_e_Body_POP_gl_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_CreateResponse_s* y;
  if (!x) return 0;
  y = x->gl_CreateResponse;
  if (y)
    x->gl_CreateResponse = (struct zx_gl_CreateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_CreateResponse) */

void zx_e_Body_PUSH_gl_CreateResponse(struct zx_e_Body_s* x, struct zx_gl_CreateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_CreateResponse->gg.g;
  x->gl_CreateResponse = z;
}

/* FUNC(zx_e_Body_REV_gl_CreateResponse) */

void zx_e_Body_REV_gl_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_CreateResponse_s* nxt;
  struct zx_gl_CreateResponse_s* y;
  if (!x) return;
  y = x->gl_CreateResponse;
  if (!y) return;
  x->gl_CreateResponse = 0;
  while (y) {
    nxt = (struct zx_gl_CreateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_CreateResponse->gg.g;
    x->gl_CreateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_CreateResponse) */

void zx_e_Body_PUT_gl_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_gl_CreateResponse_s* z)
{
  struct zx_gl_CreateResponse_s* y;
  if (!x || !z) return;
  y = x->gl_CreateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_CreateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CreateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_CreateResponse) */

void zx_e_Body_ADD_gl_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_gl_CreateResponse_s* z)
{
  struct zx_gl_CreateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_CreateResponse->gg.g;
    x->gl_CreateResponse = z;
    return;
  case -1:
    y = x->gl_CreateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_CreateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_CreateResponse; n > 1 && y; --n, y = (struct zx_gl_CreateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_CreateResponse) */

void zx_e_Body_DEL_gl_CreateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_CreateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_CreateResponse = (struct zx_gl_CreateResponse_s*)x->gl_CreateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_CreateResponse_s*)x->gl_CreateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_CreateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_CreateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_CreateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_Delete) */

int zx_e_Body_NUM_gl_Delete(struct zx_e_Body_s* x)
{
  struct zx_gl_Delete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_Delete; y; ++n, y = (struct zx_gl_Delete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_Delete) */

struct zx_gl_Delete_s* zx_e_Body_GET_gl_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Delete_s* y;
  if (!x) return 0;
  for (y = x->gl_Delete; n>=0 && y; --n, y = (struct zx_gl_Delete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_Delete) */

struct zx_gl_Delete_s* zx_e_Body_POP_gl_Delete(struct zx_e_Body_s* x)
{
  struct zx_gl_Delete_s* y;
  if (!x) return 0;
  y = x->gl_Delete;
  if (y)
    x->gl_Delete = (struct zx_gl_Delete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_Delete) */

void zx_e_Body_PUSH_gl_Delete(struct zx_e_Body_s* x, struct zx_gl_Delete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_Delete->gg.g;
  x->gl_Delete = z;
}

/* FUNC(zx_e_Body_REV_gl_Delete) */

void zx_e_Body_REV_gl_Delete(struct zx_e_Body_s* x)
{
  struct zx_gl_Delete_s* nxt;
  struct zx_gl_Delete_s* y;
  if (!x) return;
  y = x->gl_Delete;
  if (!y) return;
  x->gl_Delete = 0;
  while (y) {
    nxt = (struct zx_gl_Delete_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_Delete->gg.g;
    x->gl_Delete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_Delete) */

void zx_e_Body_PUT_gl_Delete(struct zx_e_Body_s* x, int n, struct zx_gl_Delete_s* z)
{
  struct zx_gl_Delete_s* y;
  if (!x || !z) return;
  y = x->gl_Delete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_Delete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_Delete) */

void zx_e_Body_ADD_gl_Delete(struct zx_e_Body_s* x, int n, struct zx_gl_Delete_s* z)
{
  struct zx_gl_Delete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_Delete->gg.g;
    x->gl_Delete = z;
    return;
  case -1:
    y = x->gl_Delete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Delete; n > 1 && y; --n, y = (struct zx_gl_Delete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_Delete) */

void zx_e_Body_DEL_gl_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Delete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_Delete = (struct zx_gl_Delete_s*)x->gl_Delete->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Delete_s*)x->gl_Delete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Delete; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_DeleteResponse) */

int zx_e_Body_NUM_gl_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_DeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_DeleteResponse; y; ++n, y = (struct zx_gl_DeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_DeleteResponse) */

struct zx_gl_DeleteResponse_s* zx_e_Body_GET_gl_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_DeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->gl_DeleteResponse; n>=0 && y; --n, y = (struct zx_gl_DeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_DeleteResponse) */

struct zx_gl_DeleteResponse_s* zx_e_Body_POP_gl_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_DeleteResponse_s* y;
  if (!x) return 0;
  y = x->gl_DeleteResponse;
  if (y)
    x->gl_DeleteResponse = (struct zx_gl_DeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_DeleteResponse) */

void zx_e_Body_PUSH_gl_DeleteResponse(struct zx_e_Body_s* x, struct zx_gl_DeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_DeleteResponse->gg.g;
  x->gl_DeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_gl_DeleteResponse) */

void zx_e_Body_REV_gl_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_DeleteResponse_s* nxt;
  struct zx_gl_DeleteResponse_s* y;
  if (!x) return;
  y = x->gl_DeleteResponse;
  if (!y) return;
  x->gl_DeleteResponse = 0;
  while (y) {
    nxt = (struct zx_gl_DeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_DeleteResponse->gg.g;
    x->gl_DeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_DeleteResponse) */

void zx_e_Body_PUT_gl_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_gl_DeleteResponse_s* z)
{
  struct zx_gl_DeleteResponse_s* y;
  if (!x || !z) return;
  y = x->gl_DeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_DeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_DeleteResponse) */

void zx_e_Body_ADD_gl_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_gl_DeleteResponse_s* z)
{
  struct zx_gl_DeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_DeleteResponse->gg.g;
    x->gl_DeleteResponse = z;
    return;
  case -1:
    y = x->gl_DeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_DeleteResponse; n > 1 && y; --n, y = (struct zx_gl_DeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_DeleteResponse) */

void zx_e_Body_DEL_gl_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_DeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_DeleteResponse = (struct zx_gl_DeleteResponse_s*)x->gl_DeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_DeleteResponse_s*)x->gl_DeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_DeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_Modify) */

int zx_e_Body_NUM_gl_Modify(struct zx_e_Body_s* x)
{
  struct zx_gl_Modify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_Modify; y; ++n, y = (struct zx_gl_Modify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_Modify) */

struct zx_gl_Modify_s* zx_e_Body_GET_gl_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Modify_s* y;
  if (!x) return 0;
  for (y = x->gl_Modify; n>=0 && y; --n, y = (struct zx_gl_Modify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_Modify) */

struct zx_gl_Modify_s* zx_e_Body_POP_gl_Modify(struct zx_e_Body_s* x)
{
  struct zx_gl_Modify_s* y;
  if (!x) return 0;
  y = x->gl_Modify;
  if (y)
    x->gl_Modify = (struct zx_gl_Modify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_Modify) */

void zx_e_Body_PUSH_gl_Modify(struct zx_e_Body_s* x, struct zx_gl_Modify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_Modify->gg.g;
  x->gl_Modify = z;
}

/* FUNC(zx_e_Body_REV_gl_Modify) */

void zx_e_Body_REV_gl_Modify(struct zx_e_Body_s* x)
{
  struct zx_gl_Modify_s* nxt;
  struct zx_gl_Modify_s* y;
  if (!x) return;
  y = x->gl_Modify;
  if (!y) return;
  x->gl_Modify = 0;
  while (y) {
    nxt = (struct zx_gl_Modify_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_Modify->gg.g;
    x->gl_Modify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_Modify) */

void zx_e_Body_PUT_gl_Modify(struct zx_e_Body_s* x, int n, struct zx_gl_Modify_s* z)
{
  struct zx_gl_Modify_s* y;
  if (!x || !z) return;
  y = x->gl_Modify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_Modify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_Modify) */

void zx_e_Body_ADD_gl_Modify(struct zx_e_Body_s* x, int n, struct zx_gl_Modify_s* z)
{
  struct zx_gl_Modify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_Modify->gg.g;
    x->gl_Modify = z;
    return;
  case -1:
    y = x->gl_Modify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Modify; n > 1 && y; --n, y = (struct zx_gl_Modify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_Modify) */

void zx_e_Body_DEL_gl_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Modify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_Modify = (struct zx_gl_Modify_s*)x->gl_Modify->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Modify_s*)x->gl_Modify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Modify; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_ModifyResponse) */

int zx_e_Body_NUM_gl_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_ModifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_ModifyResponse; y; ++n, y = (struct zx_gl_ModifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_ModifyResponse) */

struct zx_gl_ModifyResponse_s* zx_e_Body_GET_gl_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_ModifyResponse_s* y;
  if (!x) return 0;
  for (y = x->gl_ModifyResponse; n>=0 && y; --n, y = (struct zx_gl_ModifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_ModifyResponse) */

struct zx_gl_ModifyResponse_s* zx_e_Body_POP_gl_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_ModifyResponse_s* y;
  if (!x) return 0;
  y = x->gl_ModifyResponse;
  if (y)
    x->gl_ModifyResponse = (struct zx_gl_ModifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_ModifyResponse) */

void zx_e_Body_PUSH_gl_ModifyResponse(struct zx_e_Body_s* x, struct zx_gl_ModifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_ModifyResponse->gg.g;
  x->gl_ModifyResponse = z;
}

/* FUNC(zx_e_Body_REV_gl_ModifyResponse) */

void zx_e_Body_REV_gl_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_ModifyResponse_s* nxt;
  struct zx_gl_ModifyResponse_s* y;
  if (!x) return;
  y = x->gl_ModifyResponse;
  if (!y) return;
  x->gl_ModifyResponse = 0;
  while (y) {
    nxt = (struct zx_gl_ModifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_ModifyResponse->gg.g;
    x->gl_ModifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_ModifyResponse) */

void zx_e_Body_PUT_gl_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_gl_ModifyResponse_s* z)
{
  struct zx_gl_ModifyResponse_s* y;
  if (!x || !z) return;
  y = x->gl_ModifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_ModifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_ModifyResponse) */

void zx_e_Body_ADD_gl_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_gl_ModifyResponse_s* z)
{
  struct zx_gl_ModifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_ModifyResponse->gg.g;
    x->gl_ModifyResponse = z;
    return;
  case -1:
    y = x->gl_ModifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_ModifyResponse; n > 1 && y; --n, y = (struct zx_gl_ModifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_ModifyResponse) */

void zx_e_Body_DEL_gl_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_ModifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_ModifyResponse = (struct zx_gl_ModifyResponse_s*)x->gl_ModifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_ModifyResponse_s*)x->gl_ModifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_ModifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_Notify) */

int zx_e_Body_NUM_gl_Notify(struct zx_e_Body_s* x)
{
  struct zx_gl_Notify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_Notify; y; ++n, y = (struct zx_gl_Notify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_Notify) */

struct zx_gl_Notify_s* zx_e_Body_GET_gl_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Notify_s* y;
  if (!x) return 0;
  for (y = x->gl_Notify; n>=0 && y; --n, y = (struct zx_gl_Notify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_Notify) */

struct zx_gl_Notify_s* zx_e_Body_POP_gl_Notify(struct zx_e_Body_s* x)
{
  struct zx_gl_Notify_s* y;
  if (!x) return 0;
  y = x->gl_Notify;
  if (y)
    x->gl_Notify = (struct zx_gl_Notify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_Notify) */

void zx_e_Body_PUSH_gl_Notify(struct zx_e_Body_s* x, struct zx_gl_Notify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_Notify->gg.g;
  x->gl_Notify = z;
}

/* FUNC(zx_e_Body_REV_gl_Notify) */

void zx_e_Body_REV_gl_Notify(struct zx_e_Body_s* x)
{
  struct zx_gl_Notify_s* nxt;
  struct zx_gl_Notify_s* y;
  if (!x) return;
  y = x->gl_Notify;
  if (!y) return;
  x->gl_Notify = 0;
  while (y) {
    nxt = (struct zx_gl_Notify_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_Notify->gg.g;
    x->gl_Notify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_Notify) */

void zx_e_Body_PUT_gl_Notify(struct zx_e_Body_s* x, int n, struct zx_gl_Notify_s* z)
{
  struct zx_gl_Notify_s* y;
  if (!x || !z) return;
  y = x->gl_Notify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_Notify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_Notify) */

void zx_e_Body_ADD_gl_Notify(struct zx_e_Body_s* x, int n, struct zx_gl_Notify_s* z)
{
  struct zx_gl_Notify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_Notify->gg.g;
    x->gl_Notify = z;
    return;
  case -1:
    y = x->gl_Notify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Notify; n > 1 && y; --n, y = (struct zx_gl_Notify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_Notify) */

void zx_e_Body_DEL_gl_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_Notify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_Notify = (struct zx_gl_Notify_s*)x->gl_Notify->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_Notify_s*)x->gl_Notify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_Notify; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_gl_NotifyResponse) */

int zx_e_Body_NUM_gl_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_NotifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->gl_NotifyResponse; y; ++n, y = (struct zx_gl_NotifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_gl_NotifyResponse) */

struct zx_gl_NotifyResponse_s* zx_e_Body_GET_gl_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_NotifyResponse_s* y;
  if (!x) return 0;
  for (y = x->gl_NotifyResponse; n>=0 && y; --n, y = (struct zx_gl_NotifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_gl_NotifyResponse) */

struct zx_gl_NotifyResponse_s* zx_e_Body_POP_gl_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_NotifyResponse_s* y;
  if (!x) return 0;
  y = x->gl_NotifyResponse;
  if (y)
    x->gl_NotifyResponse = (struct zx_gl_NotifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_gl_NotifyResponse) */

void zx_e_Body_PUSH_gl_NotifyResponse(struct zx_e_Body_s* x, struct zx_gl_NotifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->gl_NotifyResponse->gg.g;
  x->gl_NotifyResponse = z;
}

/* FUNC(zx_e_Body_REV_gl_NotifyResponse) */

void zx_e_Body_REV_gl_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_gl_NotifyResponse_s* nxt;
  struct zx_gl_NotifyResponse_s* y;
  if (!x) return;
  y = x->gl_NotifyResponse;
  if (!y) return;
  x->gl_NotifyResponse = 0;
  while (y) {
    nxt = (struct zx_gl_NotifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->gl_NotifyResponse->gg.g;
    x->gl_NotifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_gl_NotifyResponse) */

void zx_e_Body_PUT_gl_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_gl_NotifyResponse_s* z)
{
  struct zx_gl_NotifyResponse_s* y;
  if (!x || !z) return;
  y = x->gl_NotifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->gl_NotifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_gl_NotifyResponse) */

void zx_e_Body_ADD_gl_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_gl_NotifyResponse_s* z)
{
  struct zx_gl_NotifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->gl_NotifyResponse->gg.g;
    x->gl_NotifyResponse = z;
    return;
  case -1:
    y = x->gl_NotifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_gl_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_NotifyResponse; n > 1 && y; --n, y = (struct zx_gl_NotifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_gl_NotifyResponse) */

void zx_e_Body_DEL_gl_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_gl_NotifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->gl_NotifyResponse = (struct zx_gl_NotifyResponse_s*)x->gl_NotifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_gl_NotifyResponse_s*)x->gl_NotifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_gl_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->gl_NotifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_gl_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_StoreObjectRequest) */

int zx_e_Body_NUM_StoreObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_StoreObjectRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StoreObjectRequest; y; ++n, y = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_StoreObjectRequest) */

struct zx_demomed_StoreObjectRequest_s* zx_e_Body_GET_StoreObjectRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_StoreObjectRequest_s* y;
  if (!x) return 0;
  for (y = x->StoreObjectRequest; n>=0 && y; --n, y = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_StoreObjectRequest) */

struct zx_demomed_StoreObjectRequest_s* zx_e_Body_POP_StoreObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_StoreObjectRequest_s* y;
  if (!x) return 0;
  y = x->StoreObjectRequest;
  if (y)
    x->StoreObjectRequest = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_StoreObjectRequest) */

void zx_e_Body_PUSH_StoreObjectRequest(struct zx_e_Body_s* x, struct zx_demomed_StoreObjectRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StoreObjectRequest->gg.g;
  x->StoreObjectRequest = z;
}

/* FUNC(zx_e_Body_REV_StoreObjectRequest) */

void zx_e_Body_REV_StoreObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_StoreObjectRequest_s* nxt;
  struct zx_demomed_StoreObjectRequest_s* y;
  if (!x) return;
  y = x->StoreObjectRequest;
  if (!y) return;
  x->StoreObjectRequest = 0;
  while (y) {
    nxt = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->StoreObjectRequest->gg.g;
    x->StoreObjectRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_StoreObjectRequest) */

void zx_e_Body_PUT_StoreObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_StoreObjectRequest_s* z)
{
  struct zx_demomed_StoreObjectRequest_s* y;
  if (!x || !z) return;
  y = x->StoreObjectRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StoreObjectRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_StoreObjectRequest) */

void zx_e_Body_ADD_StoreObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_StoreObjectRequest_s* z)
{
  struct zx_demomed_StoreObjectRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->StoreObjectRequest->gg.g;
    x->StoreObjectRequest = z;
    return;
  case -1:
    y = x->StoreObjectRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StoreObjectRequest; n > 1 && y; --n, y = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_StoreObjectRequest) */

void zx_e_Body_DEL_StoreObjectRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_StoreObjectRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StoreObjectRequest = (struct zx_demomed_StoreObjectRequest_s*)x->StoreObjectRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_demomed_StoreObjectRequest_s*)x->StoreObjectRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StoreObjectRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_StoreObjectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_StoreObjectResponse) */

int zx_e_Body_NUM_StoreObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_StoreObjectResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->StoreObjectResponse; y; ++n, y = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_StoreObjectResponse) */

struct zx_demomed_StoreObjectResponse_s* zx_e_Body_GET_StoreObjectResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_StoreObjectResponse_s* y;
  if (!x) return 0;
  for (y = x->StoreObjectResponse; n>=0 && y; --n, y = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_StoreObjectResponse) */

struct zx_demomed_StoreObjectResponse_s* zx_e_Body_POP_StoreObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_StoreObjectResponse_s* y;
  if (!x) return 0;
  y = x->StoreObjectResponse;
  if (y)
    x->StoreObjectResponse = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_StoreObjectResponse) */

void zx_e_Body_PUSH_StoreObjectResponse(struct zx_e_Body_s* x, struct zx_demomed_StoreObjectResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->StoreObjectResponse->gg.g;
  x->StoreObjectResponse = z;
}

/* FUNC(zx_e_Body_REV_StoreObjectResponse) */

void zx_e_Body_REV_StoreObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_StoreObjectResponse_s* nxt;
  struct zx_demomed_StoreObjectResponse_s* y;
  if (!x) return;
  y = x->StoreObjectResponse;
  if (!y) return;
  x->StoreObjectResponse = 0;
  while (y) {
    nxt = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->StoreObjectResponse->gg.g;
    x->StoreObjectResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_StoreObjectResponse) */

void zx_e_Body_PUT_StoreObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_StoreObjectResponse_s* z)
{
  struct zx_demomed_StoreObjectResponse_s* y;
  if (!x || !z) return;
  y = x->StoreObjectResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->StoreObjectResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_StoreObjectResponse) */

void zx_e_Body_ADD_StoreObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_StoreObjectResponse_s* z)
{
  struct zx_demomed_StoreObjectResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->StoreObjectResponse->gg.g;
    x->StoreObjectResponse = z;
    return;
  case -1:
    y = x->StoreObjectResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StoreObjectResponse; n > 1 && y; --n, y = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_StoreObjectResponse) */

void zx_e_Body_DEL_StoreObjectResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_StoreObjectResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->StoreObjectResponse = (struct zx_demomed_StoreObjectResponse_s*)x->StoreObjectResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_demomed_StoreObjectResponse_s*)x->StoreObjectResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->StoreObjectResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_StoreObjectResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetObjectListRequest) */

int zx_e_Body_NUM_GetObjectListRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectListRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetObjectListRequest; y; ++n, y = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetObjectListRequest) */

struct zx_demomed_GetObjectListRequest_s* zx_e_Body_GET_GetObjectListRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_GetObjectListRequest_s* y;
  if (!x) return 0;
  for (y = x->GetObjectListRequest; n>=0 && y; --n, y = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetObjectListRequest) */

struct zx_demomed_GetObjectListRequest_s* zx_e_Body_POP_GetObjectListRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectListRequest_s* y;
  if (!x) return 0;
  y = x->GetObjectListRequest;
  if (y)
    x->GetObjectListRequest = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetObjectListRequest) */

void zx_e_Body_PUSH_GetObjectListRequest(struct zx_e_Body_s* x, struct zx_demomed_GetObjectListRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetObjectListRequest->gg.g;
  x->GetObjectListRequest = z;
}

/* FUNC(zx_e_Body_REV_GetObjectListRequest) */

void zx_e_Body_REV_GetObjectListRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectListRequest_s* nxt;
  struct zx_demomed_GetObjectListRequest_s* y;
  if (!x) return;
  y = x->GetObjectListRequest;
  if (!y) return;
  x->GetObjectListRequest = 0;
  while (y) {
    nxt = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->GetObjectListRequest->gg.g;
    x->GetObjectListRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetObjectListRequest) */

void zx_e_Body_PUT_GetObjectListRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectListRequest_s* z)
{
  struct zx_demomed_GetObjectListRequest_s* y;
  if (!x || !z) return;
  y = x->GetObjectListRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetObjectListRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetObjectListRequest) */

void zx_e_Body_ADD_GetObjectListRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectListRequest_s* z)
{
  struct zx_demomed_GetObjectListRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetObjectListRequest->gg.g;
    x->GetObjectListRequest = z;
    return;
  case -1:
    y = x->GetObjectListRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectListRequest; n > 1 && y; --n, y = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetObjectListRequest) */

void zx_e_Body_DEL_GetObjectListRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_GetObjectListRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetObjectListRequest = (struct zx_demomed_GetObjectListRequest_s*)x->GetObjectListRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_demomed_GetObjectListRequest_s*)x->GetObjectListRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectListRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_GetObjectListRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetObjectListResponse) */

int zx_e_Body_NUM_GetObjectListResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectListResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetObjectListResponse; y; ++n, y = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetObjectListResponse) */

struct zx_demomed_GetObjectListResponse_s* zx_e_Body_GET_GetObjectListResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_GetObjectListResponse_s* y;
  if (!x) return 0;
  for (y = x->GetObjectListResponse; n>=0 && y; --n, y = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetObjectListResponse) */

struct zx_demomed_GetObjectListResponse_s* zx_e_Body_POP_GetObjectListResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectListResponse_s* y;
  if (!x) return 0;
  y = x->GetObjectListResponse;
  if (y)
    x->GetObjectListResponse = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetObjectListResponse) */

void zx_e_Body_PUSH_GetObjectListResponse(struct zx_e_Body_s* x, struct zx_demomed_GetObjectListResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetObjectListResponse->gg.g;
  x->GetObjectListResponse = z;
}

/* FUNC(zx_e_Body_REV_GetObjectListResponse) */

void zx_e_Body_REV_GetObjectListResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectListResponse_s* nxt;
  struct zx_demomed_GetObjectListResponse_s* y;
  if (!x) return;
  y = x->GetObjectListResponse;
  if (!y) return;
  x->GetObjectListResponse = 0;
  while (y) {
    nxt = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->GetObjectListResponse->gg.g;
    x->GetObjectListResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetObjectListResponse) */

void zx_e_Body_PUT_GetObjectListResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectListResponse_s* z)
{
  struct zx_demomed_GetObjectListResponse_s* y;
  if (!x || !z) return;
  y = x->GetObjectListResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetObjectListResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetObjectListResponse) */

void zx_e_Body_ADD_GetObjectListResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectListResponse_s* z)
{
  struct zx_demomed_GetObjectListResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetObjectListResponse->gg.g;
    x->GetObjectListResponse = z;
    return;
  case -1:
    y = x->GetObjectListResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectListResponse; n > 1 && y; --n, y = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetObjectListResponse) */

void zx_e_Body_DEL_GetObjectListResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_GetObjectListResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetObjectListResponse = (struct zx_demomed_GetObjectListResponse_s*)x->GetObjectListResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_demomed_GetObjectListResponse_s*)x->GetObjectListResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectListResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_GetObjectListResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetObjectRequest) */

int zx_e_Body_NUM_GetObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetObjectRequest; y; ++n, y = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetObjectRequest) */

struct zx_demomed_GetObjectRequest_s* zx_e_Body_GET_GetObjectRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_GetObjectRequest_s* y;
  if (!x) return 0;
  for (y = x->GetObjectRequest; n>=0 && y; --n, y = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetObjectRequest) */

struct zx_demomed_GetObjectRequest_s* zx_e_Body_POP_GetObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectRequest_s* y;
  if (!x) return 0;
  y = x->GetObjectRequest;
  if (y)
    x->GetObjectRequest = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetObjectRequest) */

void zx_e_Body_PUSH_GetObjectRequest(struct zx_e_Body_s* x, struct zx_demomed_GetObjectRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetObjectRequest->gg.g;
  x->GetObjectRequest = z;
}

/* FUNC(zx_e_Body_REV_GetObjectRequest) */

void zx_e_Body_REV_GetObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectRequest_s* nxt;
  struct zx_demomed_GetObjectRequest_s* y;
  if (!x) return;
  y = x->GetObjectRequest;
  if (!y) return;
  x->GetObjectRequest = 0;
  while (y) {
    nxt = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->GetObjectRequest->gg.g;
    x->GetObjectRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetObjectRequest) */

void zx_e_Body_PUT_GetObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectRequest_s* z)
{
  struct zx_demomed_GetObjectRequest_s* y;
  if (!x || !z) return;
  y = x->GetObjectRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetObjectRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetObjectRequest) */

void zx_e_Body_ADD_GetObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectRequest_s* z)
{
  struct zx_demomed_GetObjectRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetObjectRequest->gg.g;
    x->GetObjectRequest = z;
    return;
  case -1:
    y = x->GetObjectRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectRequest; n > 1 && y; --n, y = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetObjectRequest) */

void zx_e_Body_DEL_GetObjectRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_GetObjectRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetObjectRequest = (struct zx_demomed_GetObjectRequest_s*)x->GetObjectRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_demomed_GetObjectRequest_s*)x->GetObjectRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_GetObjectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetObjectResponse) */

int zx_e_Body_NUM_GetObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetObjectResponse; y; ++n, y = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetObjectResponse) */

struct zx_demomed_GetObjectResponse_s* zx_e_Body_GET_GetObjectResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_GetObjectResponse_s* y;
  if (!x) return 0;
  for (y = x->GetObjectResponse; n>=0 && y; --n, y = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetObjectResponse) */

struct zx_demomed_GetObjectResponse_s* zx_e_Body_POP_GetObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectResponse_s* y;
  if (!x) return 0;
  y = x->GetObjectResponse;
  if (y)
    x->GetObjectResponse = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetObjectResponse) */

void zx_e_Body_PUSH_GetObjectResponse(struct zx_e_Body_s* x, struct zx_demomed_GetObjectResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetObjectResponse->gg.g;
  x->GetObjectResponse = z;
}

/* FUNC(zx_e_Body_REV_GetObjectResponse) */

void zx_e_Body_REV_GetObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_GetObjectResponse_s* nxt;
  struct zx_demomed_GetObjectResponse_s* y;
  if (!x) return;
  y = x->GetObjectResponse;
  if (!y) return;
  x->GetObjectResponse = 0;
  while (y) {
    nxt = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->GetObjectResponse->gg.g;
    x->GetObjectResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetObjectResponse) */

void zx_e_Body_PUT_GetObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectResponse_s* z)
{
  struct zx_demomed_GetObjectResponse_s* y;
  if (!x || !z) return;
  y = x->GetObjectResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetObjectResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetObjectResponse) */

void zx_e_Body_ADD_GetObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_GetObjectResponse_s* z)
{
  struct zx_demomed_GetObjectResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetObjectResponse->gg.g;
    x->GetObjectResponse = z;
    return;
  case -1:
    y = x->GetObjectResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectResponse; n > 1 && y; --n, y = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetObjectResponse) */

void zx_e_Body_DEL_GetObjectResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_GetObjectResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetObjectResponse = (struct zx_demomed_GetObjectResponse_s*)x->GetObjectResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_demomed_GetObjectResponse_s*)x->GetObjectResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetObjectResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_GetObjectResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_DeleteObjectRequest) */

int zx_e_Body_NUM_DeleteObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_DeleteObjectRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeleteObjectRequest; y; ++n, y = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_DeleteObjectRequest) */

struct zx_demomed_DeleteObjectRequest_s* zx_e_Body_GET_DeleteObjectRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_DeleteObjectRequest_s* y;
  if (!x) return 0;
  for (y = x->DeleteObjectRequest; n>=0 && y; --n, y = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_DeleteObjectRequest) */

struct zx_demomed_DeleteObjectRequest_s* zx_e_Body_POP_DeleteObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_DeleteObjectRequest_s* y;
  if (!x) return 0;
  y = x->DeleteObjectRequest;
  if (y)
    x->DeleteObjectRequest = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_DeleteObjectRequest) */

void zx_e_Body_PUSH_DeleteObjectRequest(struct zx_e_Body_s* x, struct zx_demomed_DeleteObjectRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeleteObjectRequest->gg.g;
  x->DeleteObjectRequest = z;
}

/* FUNC(zx_e_Body_REV_DeleteObjectRequest) */

void zx_e_Body_REV_DeleteObjectRequest(struct zx_e_Body_s* x)
{
  struct zx_demomed_DeleteObjectRequest_s* nxt;
  struct zx_demomed_DeleteObjectRequest_s* y;
  if (!x) return;
  y = x->DeleteObjectRequest;
  if (!y) return;
  x->DeleteObjectRequest = 0;
  while (y) {
    nxt = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->DeleteObjectRequest->gg.g;
    x->DeleteObjectRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_DeleteObjectRequest) */

void zx_e_Body_PUT_DeleteObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_DeleteObjectRequest_s* z)
{
  struct zx_demomed_DeleteObjectRequest_s* y;
  if (!x || !z) return;
  y = x->DeleteObjectRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeleteObjectRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_DeleteObjectRequest) */

void zx_e_Body_ADD_DeleteObjectRequest(struct zx_e_Body_s* x, int n, struct zx_demomed_DeleteObjectRequest_s* z)
{
  struct zx_demomed_DeleteObjectRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeleteObjectRequest->gg.g;
    x->DeleteObjectRequest = z;
    return;
  case -1:
    y = x->DeleteObjectRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteObjectRequest; n > 1 && y; --n, y = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_DeleteObjectRequest) */

void zx_e_Body_DEL_DeleteObjectRequest(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_DeleteObjectRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeleteObjectRequest = (struct zx_demomed_DeleteObjectRequest_s*)x->DeleteObjectRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_demomed_DeleteObjectRequest_s*)x->DeleteObjectRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteObjectRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_DeleteObjectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_DeleteObjectResponse) */

int zx_e_Body_NUM_DeleteObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_DeleteObjectResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->DeleteObjectResponse; y; ++n, y = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_DeleteObjectResponse) */

struct zx_demomed_DeleteObjectResponse_s* zx_e_Body_GET_DeleteObjectResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_DeleteObjectResponse_s* y;
  if (!x) return 0;
  for (y = x->DeleteObjectResponse; n>=0 && y; --n, y = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_DeleteObjectResponse) */

struct zx_demomed_DeleteObjectResponse_s* zx_e_Body_POP_DeleteObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_DeleteObjectResponse_s* y;
  if (!x) return 0;
  y = x->DeleteObjectResponse;
  if (y)
    x->DeleteObjectResponse = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_DeleteObjectResponse) */

void zx_e_Body_PUSH_DeleteObjectResponse(struct zx_e_Body_s* x, struct zx_demomed_DeleteObjectResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->DeleteObjectResponse->gg.g;
  x->DeleteObjectResponse = z;
}

/* FUNC(zx_e_Body_REV_DeleteObjectResponse) */

void zx_e_Body_REV_DeleteObjectResponse(struct zx_e_Body_s* x)
{
  struct zx_demomed_DeleteObjectResponse_s* nxt;
  struct zx_demomed_DeleteObjectResponse_s* y;
  if (!x) return;
  y = x->DeleteObjectResponse;
  if (!y) return;
  x->DeleteObjectResponse = 0;
  while (y) {
    nxt = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->DeleteObjectResponse->gg.g;
    x->DeleteObjectResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_DeleteObjectResponse) */

void zx_e_Body_PUT_DeleteObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_DeleteObjectResponse_s* z)
{
  struct zx_demomed_DeleteObjectResponse_s* y;
  if (!x || !z) return;
  y = x->DeleteObjectResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->DeleteObjectResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_DeleteObjectResponse) */

void zx_e_Body_ADD_DeleteObjectResponse(struct zx_e_Body_s* x, int n, struct zx_demomed_DeleteObjectResponse_s* z)
{
  struct zx_demomed_DeleteObjectResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->DeleteObjectResponse->gg.g;
    x->DeleteObjectResponse = z;
    return;
  case -1:
    y = x->DeleteObjectResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteObjectResponse; n > 1 && y; --n, y = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_DeleteObjectResponse) */

void zx_e_Body_DEL_DeleteObjectResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_demomed_DeleteObjectResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->DeleteObjectResponse = (struct zx_demomed_DeleteObjectResponse_s*)x->DeleteObjectResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_demomed_DeleteObjectResponse_s*)x->DeleteObjectResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->DeleteObjectResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_demomed_DeleteObjectResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Provision) */

int zx_e_Body_NUM_Provision(struct zx_e_Body_s* x)
{
  struct zx_pmm_Provision_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Provision; y; ++n, y = (struct zx_pmm_Provision_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Provision) */

struct zx_pmm_Provision_s* zx_e_Body_GET_Provision(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_Provision_s* y;
  if (!x) return 0;
  for (y = x->Provision; n>=0 && y; --n, y = (struct zx_pmm_Provision_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Provision) */

struct zx_pmm_Provision_s* zx_e_Body_POP_Provision(struct zx_e_Body_s* x)
{
  struct zx_pmm_Provision_s* y;
  if (!x) return 0;
  y = x->Provision;
  if (y)
    x->Provision = (struct zx_pmm_Provision_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Provision) */

void zx_e_Body_PUSH_Provision(struct zx_e_Body_s* x, struct zx_pmm_Provision_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Provision->gg.g;
  x->Provision = z;
}

/* FUNC(zx_e_Body_REV_Provision) */

void zx_e_Body_REV_Provision(struct zx_e_Body_s* x)
{
  struct zx_pmm_Provision_s* nxt;
  struct zx_pmm_Provision_s* y;
  if (!x) return;
  y = x->Provision;
  if (!y) return;
  x->Provision = 0;
  while (y) {
    nxt = (struct zx_pmm_Provision_s*)y->gg.g.n;
    y->gg.g.n = &x->Provision->gg.g;
    x->Provision = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Provision) */

void zx_e_Body_PUT_Provision(struct zx_e_Body_s* x, int n, struct zx_pmm_Provision_s* z)
{
  struct zx_pmm_Provision_s* y;
  if (!x || !z) return;
  y = x->Provision;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Provision = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_Provision_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Provision) */

void zx_e_Body_ADD_Provision(struct zx_e_Body_s* x, int n, struct zx_pmm_Provision_s* z)
{
  struct zx_pmm_Provision_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Provision->gg.g;
    x->Provision = z;
    return;
  case -1:
    y = x->Provision;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_Provision_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Provision; n > 1 && y; --n, y = (struct zx_pmm_Provision_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Provision) */

void zx_e_Body_DEL_Provision(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_Provision_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Provision = (struct zx_pmm_Provision_s*)x->Provision->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_Provision_s*)x->Provision;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_Provision_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Provision; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_Provision_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ProvisionResponse) */

int zx_e_Body_NUM_ProvisionResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_ProvisionResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProvisionResponse; y; ++n, y = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ProvisionResponse) */

struct zx_pmm_ProvisionResponse_s* zx_e_Body_GET_ProvisionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_ProvisionResponse_s* y;
  if (!x) return 0;
  for (y = x->ProvisionResponse; n>=0 && y; --n, y = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ProvisionResponse) */

struct zx_pmm_ProvisionResponse_s* zx_e_Body_POP_ProvisionResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_ProvisionResponse_s* y;
  if (!x) return 0;
  y = x->ProvisionResponse;
  if (y)
    x->ProvisionResponse = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ProvisionResponse) */

void zx_e_Body_PUSH_ProvisionResponse(struct zx_e_Body_s* x, struct zx_pmm_ProvisionResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProvisionResponse->gg.g;
  x->ProvisionResponse = z;
}

/* FUNC(zx_e_Body_REV_ProvisionResponse) */

void zx_e_Body_REV_ProvisionResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_ProvisionResponse_s* nxt;
  struct zx_pmm_ProvisionResponse_s* y;
  if (!x) return;
  y = x->ProvisionResponse;
  if (!y) return;
  x->ProvisionResponse = 0;
  while (y) {
    nxt = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ProvisionResponse->gg.g;
    x->ProvisionResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ProvisionResponse) */

void zx_e_Body_PUT_ProvisionResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_ProvisionResponse_s* z)
{
  struct zx_pmm_ProvisionResponse_s* y;
  if (!x || !z) return;
  y = x->ProvisionResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProvisionResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ProvisionResponse) */

void zx_e_Body_ADD_ProvisionResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_ProvisionResponse_s* z)
{
  struct zx_pmm_ProvisionResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProvisionResponse->gg.g;
    x->ProvisionResponse = z;
    return;
  case -1:
    y = x->ProvisionResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProvisionResponse; n > 1 && y; --n, y = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ProvisionResponse) */

void zx_e_Body_DEL_ProvisionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_ProvisionResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProvisionResponse = (struct zx_pmm_ProvisionResponse_s*)x->ProvisionResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_ProvisionResponse_s*)x->ProvisionResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProvisionResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_ProvisionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMActivate) */

int zx_e_Body_NUM_PMActivate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMActivate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMActivate; y; ++n, y = (struct zx_pmm_PMActivate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMActivate) */

struct zx_pmm_PMActivate_s* zx_e_Body_GET_PMActivate(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMActivate_s* y;
  if (!x) return 0;
  for (y = x->PMActivate; n>=0 && y; --n, y = (struct zx_pmm_PMActivate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMActivate) */

struct zx_pmm_PMActivate_s* zx_e_Body_POP_PMActivate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMActivate_s* y;
  if (!x) return 0;
  y = x->PMActivate;
  if (y)
    x->PMActivate = (struct zx_pmm_PMActivate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMActivate) */

void zx_e_Body_PUSH_PMActivate(struct zx_e_Body_s* x, struct zx_pmm_PMActivate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMActivate->gg.g;
  x->PMActivate = z;
}

/* FUNC(zx_e_Body_REV_PMActivate) */

void zx_e_Body_REV_PMActivate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMActivate_s* nxt;
  struct zx_pmm_PMActivate_s* y;
  if (!x) return;
  y = x->PMActivate;
  if (!y) return;
  x->PMActivate = 0;
  while (y) {
    nxt = (struct zx_pmm_PMActivate_s*)y->gg.g.n;
    y->gg.g.n = &x->PMActivate->gg.g;
    x->PMActivate = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMActivate) */

void zx_e_Body_PUT_PMActivate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMActivate_s* z)
{
  struct zx_pmm_PMActivate_s* y;
  if (!x || !z) return;
  y = x->PMActivate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMActivate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMActivate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMActivate) */

void zx_e_Body_ADD_PMActivate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMActivate_s* z)
{
  struct zx_pmm_PMActivate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMActivate->gg.g;
    x->PMActivate = z;
    return;
  case -1:
    y = x->PMActivate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMActivate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMActivate; n > 1 && y; --n, y = (struct zx_pmm_PMActivate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMActivate) */

void zx_e_Body_DEL_PMActivate(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMActivate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMActivate = (struct zx_pmm_PMActivate_s*)x->PMActivate->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMActivate_s*)x->PMActivate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMActivate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMActivate; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMActivate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMActivateResponse) */

int zx_e_Body_NUM_PMActivateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMActivateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMActivateResponse; y; ++n, y = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMActivateResponse) */

struct zx_pmm_PMActivateResponse_s* zx_e_Body_GET_PMActivateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMActivateResponse_s* y;
  if (!x) return 0;
  for (y = x->PMActivateResponse; n>=0 && y; --n, y = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMActivateResponse) */

struct zx_pmm_PMActivateResponse_s* zx_e_Body_POP_PMActivateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMActivateResponse_s* y;
  if (!x) return 0;
  y = x->PMActivateResponse;
  if (y)
    x->PMActivateResponse = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMActivateResponse) */

void zx_e_Body_PUSH_PMActivateResponse(struct zx_e_Body_s* x, struct zx_pmm_PMActivateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMActivateResponse->gg.g;
  x->PMActivateResponse = z;
}

/* FUNC(zx_e_Body_REV_PMActivateResponse) */

void zx_e_Body_REV_PMActivateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMActivateResponse_s* nxt;
  struct zx_pmm_PMActivateResponse_s* y;
  if (!x) return;
  y = x->PMActivateResponse;
  if (!y) return;
  x->PMActivateResponse = 0;
  while (y) {
    nxt = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMActivateResponse->gg.g;
    x->PMActivateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMActivateResponse) */

void zx_e_Body_PUT_PMActivateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMActivateResponse_s* z)
{
  struct zx_pmm_PMActivateResponse_s* y;
  if (!x || !z) return;
  y = x->PMActivateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMActivateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMActivateResponse) */

void zx_e_Body_ADD_PMActivateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMActivateResponse_s* z)
{
  struct zx_pmm_PMActivateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMActivateResponse->gg.g;
    x->PMActivateResponse = z;
    return;
  case -1:
    y = x->PMActivateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMActivateResponse; n > 1 && y; --n, y = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMActivateResponse) */

void zx_e_Body_DEL_PMActivateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMActivateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMActivateResponse = (struct zx_pmm_PMActivateResponse_s*)x->PMActivateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMActivateResponse_s*)x->PMActivateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMActivateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMActivateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMDeactivate) */

int zx_e_Body_NUM_PMDeactivate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeactivate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDeactivate; y; ++n, y = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMDeactivate) */

struct zx_pmm_PMDeactivate_s* zx_e_Body_GET_PMDeactivate(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMDeactivate_s* y;
  if (!x) return 0;
  for (y = x->PMDeactivate; n>=0 && y; --n, y = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMDeactivate) */

struct zx_pmm_PMDeactivate_s* zx_e_Body_POP_PMDeactivate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeactivate_s* y;
  if (!x) return 0;
  y = x->PMDeactivate;
  if (y)
    x->PMDeactivate = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMDeactivate) */

void zx_e_Body_PUSH_PMDeactivate(struct zx_e_Body_s* x, struct zx_pmm_PMDeactivate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDeactivate->gg.g;
  x->PMDeactivate = z;
}

/* FUNC(zx_e_Body_REV_PMDeactivate) */

void zx_e_Body_REV_PMDeactivate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeactivate_s* nxt;
  struct zx_pmm_PMDeactivate_s* y;
  if (!x) return;
  y = x->PMDeactivate;
  if (!y) return;
  x->PMDeactivate = 0;
  while (y) {
    nxt = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDeactivate->gg.g;
    x->PMDeactivate = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMDeactivate) */

void zx_e_Body_PUT_PMDeactivate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeactivate_s* z)
{
  struct zx_pmm_PMDeactivate_s* y;
  if (!x || !z) return;
  y = x->PMDeactivate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDeactivate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMDeactivate) */

void zx_e_Body_ADD_PMDeactivate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeactivate_s* z)
{
  struct zx_pmm_PMDeactivate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDeactivate->gg.g;
    x->PMDeactivate = z;
    return;
  case -1:
    y = x->PMDeactivate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeactivate; n > 1 && y; --n, y = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMDeactivate) */

void zx_e_Body_DEL_PMDeactivate(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMDeactivate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDeactivate = (struct zx_pmm_PMDeactivate_s*)x->PMDeactivate->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMDeactivate_s*)x->PMDeactivate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeactivate; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMDeactivate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMDeactivateResponse) */

int zx_e_Body_NUM_PMDeactivateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeactivateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDeactivateResponse; y; ++n, y = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMDeactivateResponse) */

struct zx_pmm_PMDeactivateResponse_s* zx_e_Body_GET_PMDeactivateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMDeactivateResponse_s* y;
  if (!x) return 0;
  for (y = x->PMDeactivateResponse; n>=0 && y; --n, y = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMDeactivateResponse) */

struct zx_pmm_PMDeactivateResponse_s* zx_e_Body_POP_PMDeactivateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeactivateResponse_s* y;
  if (!x) return 0;
  y = x->PMDeactivateResponse;
  if (y)
    x->PMDeactivateResponse = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMDeactivateResponse) */

void zx_e_Body_PUSH_PMDeactivateResponse(struct zx_e_Body_s* x, struct zx_pmm_PMDeactivateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDeactivateResponse->gg.g;
  x->PMDeactivateResponse = z;
}

/* FUNC(zx_e_Body_REV_PMDeactivateResponse) */

void zx_e_Body_REV_PMDeactivateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeactivateResponse_s* nxt;
  struct zx_pmm_PMDeactivateResponse_s* y;
  if (!x) return;
  y = x->PMDeactivateResponse;
  if (!y) return;
  x->PMDeactivateResponse = 0;
  while (y) {
    nxt = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDeactivateResponse->gg.g;
    x->PMDeactivateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMDeactivateResponse) */

void zx_e_Body_PUT_PMDeactivateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeactivateResponse_s* z)
{
  struct zx_pmm_PMDeactivateResponse_s* y;
  if (!x || !z) return;
  y = x->PMDeactivateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDeactivateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMDeactivateResponse) */

void zx_e_Body_ADD_PMDeactivateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeactivateResponse_s* z)
{
  struct zx_pmm_PMDeactivateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDeactivateResponse->gg.g;
    x->PMDeactivateResponse = z;
    return;
  case -1:
    y = x->PMDeactivateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeactivateResponse; n > 1 && y; --n, y = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMDeactivateResponse) */

void zx_e_Body_DEL_PMDeactivateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMDeactivateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDeactivateResponse = (struct zx_pmm_PMDeactivateResponse_s*)x->PMDeactivateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMDeactivateResponse_s*)x->PMDeactivateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeactivateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMDeactivateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMDelete) */

int zx_e_Body_NUM_PMDelete(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDelete; y; ++n, y = (struct zx_pmm_PMDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMDelete) */

struct zx_pmm_PMDelete_s* zx_e_Body_GET_PMDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMDelete_s* y;
  if (!x) return 0;
  for (y = x->PMDelete; n>=0 && y; --n, y = (struct zx_pmm_PMDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMDelete) */

struct zx_pmm_PMDelete_s* zx_e_Body_POP_PMDelete(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDelete_s* y;
  if (!x) return 0;
  y = x->PMDelete;
  if (y)
    x->PMDelete = (struct zx_pmm_PMDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMDelete) */

void zx_e_Body_PUSH_PMDelete(struct zx_e_Body_s* x, struct zx_pmm_PMDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDelete->gg.g;
  x->PMDelete = z;
}

/* FUNC(zx_e_Body_REV_PMDelete) */

void zx_e_Body_REV_PMDelete(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDelete_s* nxt;
  struct zx_pmm_PMDelete_s* y;
  if (!x) return;
  y = x->PMDelete;
  if (!y) return;
  x->PMDelete = 0;
  while (y) {
    nxt = (struct zx_pmm_PMDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDelete->gg.g;
    x->PMDelete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMDelete) */

void zx_e_Body_PUT_PMDelete(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDelete_s* z)
{
  struct zx_pmm_PMDelete_s* y;
  if (!x || !z) return;
  y = x->PMDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMDelete) */

void zx_e_Body_ADD_PMDelete(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDelete_s* z)
{
  struct zx_pmm_PMDelete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDelete->gg.g;
    x->PMDelete = z;
    return;
  case -1:
    y = x->PMDelete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDelete; n > 1 && y; --n, y = (struct zx_pmm_PMDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMDelete) */

void zx_e_Body_DEL_PMDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDelete = (struct zx_pmm_PMDelete_s*)x->PMDelete->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMDelete_s*)x->PMDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDelete; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMDeleteResponse) */

int zx_e_Body_NUM_PMDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMDeleteResponse; y; ++n, y = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMDeleteResponse) */

struct zx_pmm_PMDeleteResponse_s* zx_e_Body_GET_PMDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->PMDeleteResponse; n>=0 && y; --n, y = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMDeleteResponse) */

struct zx_pmm_PMDeleteResponse_s* zx_e_Body_POP_PMDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeleteResponse_s* y;
  if (!x) return 0;
  y = x->PMDeleteResponse;
  if (y)
    x->PMDeleteResponse = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMDeleteResponse) */

void zx_e_Body_PUSH_PMDeleteResponse(struct zx_e_Body_s* x, struct zx_pmm_PMDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMDeleteResponse->gg.g;
  x->PMDeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_PMDeleteResponse) */

void zx_e_Body_REV_PMDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMDeleteResponse_s* nxt;
  struct zx_pmm_PMDeleteResponse_s* y;
  if (!x) return;
  y = x->PMDeleteResponse;
  if (!y) return;
  x->PMDeleteResponse = 0;
  while (y) {
    nxt = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMDeleteResponse->gg.g;
    x->PMDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMDeleteResponse) */

void zx_e_Body_PUT_PMDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeleteResponse_s* z)
{
  struct zx_pmm_PMDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->PMDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMDeleteResponse) */

void zx_e_Body_ADD_PMDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMDeleteResponse_s* z)
{
  struct zx_pmm_PMDeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMDeleteResponse->gg.g;
    x->PMDeleteResponse = z;
    return;
  case -1:
    y = x->PMDeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeleteResponse; n > 1 && y; --n, y = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMDeleteResponse) */

void zx_e_Body_DEL_PMDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMDeleteResponse = (struct zx_pmm_PMDeleteResponse_s*)x->PMDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMDeleteResponse_s*)x->PMDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMUpdate) */

int zx_e_Body_NUM_PMUpdate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMUpdate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMUpdate; y; ++n, y = (struct zx_pmm_PMUpdate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMUpdate) */

struct zx_pmm_PMUpdate_s* zx_e_Body_GET_PMUpdate(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMUpdate_s* y;
  if (!x) return 0;
  for (y = x->PMUpdate; n>=0 && y; --n, y = (struct zx_pmm_PMUpdate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMUpdate) */

struct zx_pmm_PMUpdate_s* zx_e_Body_POP_PMUpdate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMUpdate_s* y;
  if (!x) return 0;
  y = x->PMUpdate;
  if (y)
    x->PMUpdate = (struct zx_pmm_PMUpdate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMUpdate) */

void zx_e_Body_PUSH_PMUpdate(struct zx_e_Body_s* x, struct zx_pmm_PMUpdate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMUpdate->gg.g;
  x->PMUpdate = z;
}

/* FUNC(zx_e_Body_REV_PMUpdate) */

void zx_e_Body_REV_PMUpdate(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMUpdate_s* nxt;
  struct zx_pmm_PMUpdate_s* y;
  if (!x) return;
  y = x->PMUpdate;
  if (!y) return;
  x->PMUpdate = 0;
  while (y) {
    nxt = (struct zx_pmm_PMUpdate_s*)y->gg.g.n;
    y->gg.g.n = &x->PMUpdate->gg.g;
    x->PMUpdate = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMUpdate) */

void zx_e_Body_PUT_PMUpdate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMUpdate_s* z)
{
  struct zx_pmm_PMUpdate_s* y;
  if (!x || !z) return;
  y = x->PMUpdate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMUpdate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMUpdate) */

void zx_e_Body_ADD_PMUpdate(struct zx_e_Body_s* x, int n, struct zx_pmm_PMUpdate_s* z)
{
  struct zx_pmm_PMUpdate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMUpdate->gg.g;
    x->PMUpdate = z;
    return;
  case -1:
    y = x->PMUpdate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMUpdate; n > 1 && y; --n, y = (struct zx_pmm_PMUpdate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMUpdate) */

void zx_e_Body_DEL_PMUpdate(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMUpdate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMUpdate = (struct zx_pmm_PMUpdate_s*)x->PMUpdate->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMUpdate_s*)x->PMUpdate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMUpdate; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMUpdateResponse) */

int zx_e_Body_NUM_PMUpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMUpdateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMUpdateResponse; y; ++n, y = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMUpdateResponse) */

struct zx_pmm_PMUpdateResponse_s* zx_e_Body_GET_PMUpdateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMUpdateResponse_s* y;
  if (!x) return 0;
  for (y = x->PMUpdateResponse; n>=0 && y; --n, y = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMUpdateResponse) */

struct zx_pmm_PMUpdateResponse_s* zx_e_Body_POP_PMUpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMUpdateResponse_s* y;
  if (!x) return 0;
  y = x->PMUpdateResponse;
  if (y)
    x->PMUpdateResponse = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMUpdateResponse) */

void zx_e_Body_PUSH_PMUpdateResponse(struct zx_e_Body_s* x, struct zx_pmm_PMUpdateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMUpdateResponse->gg.g;
  x->PMUpdateResponse = z;
}

/* FUNC(zx_e_Body_REV_PMUpdateResponse) */

void zx_e_Body_REV_PMUpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMUpdateResponse_s* nxt;
  struct zx_pmm_PMUpdateResponse_s* y;
  if (!x) return;
  y = x->PMUpdateResponse;
  if (!y) return;
  x->PMUpdateResponse = 0;
  while (y) {
    nxt = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMUpdateResponse->gg.g;
    x->PMUpdateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMUpdateResponse) */

void zx_e_Body_PUT_PMUpdateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMUpdateResponse_s* z)
{
  struct zx_pmm_PMUpdateResponse_s* y;
  if (!x || !z) return;
  y = x->PMUpdateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMUpdateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMUpdateResponse) */

void zx_e_Body_ADD_PMUpdateResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMUpdateResponse_s* z)
{
  struct zx_pmm_PMUpdateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMUpdateResponse->gg.g;
    x->PMUpdateResponse = z;
    return;
  case -1:
    y = x->PMUpdateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMUpdateResponse; n > 1 && y; --n, y = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMUpdateResponse) */

void zx_e_Body_DEL_PMUpdateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMUpdateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMUpdateResponse = (struct zx_pmm_PMUpdateResponse_s*)x->PMUpdateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMUpdateResponse_s*)x->PMUpdateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMUpdateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMUpdateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMGetStatus) */

int zx_e_Body_NUM_PMGetStatus(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMGetStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMGetStatus; y; ++n, y = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMGetStatus) */

struct zx_pmm_PMGetStatus_s* zx_e_Body_GET_PMGetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMGetStatus_s* y;
  if (!x) return 0;
  for (y = x->PMGetStatus; n>=0 && y; --n, y = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMGetStatus) */

struct zx_pmm_PMGetStatus_s* zx_e_Body_POP_PMGetStatus(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMGetStatus_s* y;
  if (!x) return 0;
  y = x->PMGetStatus;
  if (y)
    x->PMGetStatus = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMGetStatus) */

void zx_e_Body_PUSH_PMGetStatus(struct zx_e_Body_s* x, struct zx_pmm_PMGetStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMGetStatus->gg.g;
  x->PMGetStatus = z;
}

/* FUNC(zx_e_Body_REV_PMGetStatus) */

void zx_e_Body_REV_PMGetStatus(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMGetStatus_s* nxt;
  struct zx_pmm_PMGetStatus_s* y;
  if (!x) return;
  y = x->PMGetStatus;
  if (!y) return;
  x->PMGetStatus = 0;
  while (y) {
    nxt = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->PMGetStatus->gg.g;
    x->PMGetStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMGetStatus) */

void zx_e_Body_PUT_PMGetStatus(struct zx_e_Body_s* x, int n, struct zx_pmm_PMGetStatus_s* z)
{
  struct zx_pmm_PMGetStatus_s* y;
  if (!x || !z) return;
  y = x->PMGetStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMGetStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMGetStatus) */

void zx_e_Body_ADD_PMGetStatus(struct zx_e_Body_s* x, int n, struct zx_pmm_PMGetStatus_s* z)
{
  struct zx_pmm_PMGetStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMGetStatus->gg.g;
    x->PMGetStatus = z;
    return;
  case -1:
    y = x->PMGetStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMGetStatus; n > 1 && y; --n, y = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMGetStatus) */

void zx_e_Body_DEL_PMGetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMGetStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMGetStatus = (struct zx_pmm_PMGetStatus_s*)x->PMGetStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMGetStatus_s*)x->PMGetStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMGetStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMGetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMGetStatusResponse) */

int zx_e_Body_NUM_PMGetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMGetStatusResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMGetStatusResponse; y; ++n, y = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMGetStatusResponse) */

struct zx_pmm_PMGetStatusResponse_s* zx_e_Body_GET_PMGetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMGetStatusResponse_s* y;
  if (!x) return 0;
  for (y = x->PMGetStatusResponse; n>=0 && y; --n, y = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMGetStatusResponse) */

struct zx_pmm_PMGetStatusResponse_s* zx_e_Body_POP_PMGetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMGetStatusResponse_s* y;
  if (!x) return 0;
  y = x->PMGetStatusResponse;
  if (y)
    x->PMGetStatusResponse = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMGetStatusResponse) */

void zx_e_Body_PUSH_PMGetStatusResponse(struct zx_e_Body_s* x, struct zx_pmm_PMGetStatusResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMGetStatusResponse->gg.g;
  x->PMGetStatusResponse = z;
}

/* FUNC(zx_e_Body_REV_PMGetStatusResponse) */

void zx_e_Body_REV_PMGetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMGetStatusResponse_s* nxt;
  struct zx_pmm_PMGetStatusResponse_s* y;
  if (!x) return;
  y = x->PMGetStatusResponse;
  if (!y) return;
  x->PMGetStatusResponse = 0;
  while (y) {
    nxt = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMGetStatusResponse->gg.g;
    x->PMGetStatusResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMGetStatusResponse) */

void zx_e_Body_PUT_PMGetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMGetStatusResponse_s* z)
{
  struct zx_pmm_PMGetStatusResponse_s* y;
  if (!x || !z) return;
  y = x->PMGetStatusResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMGetStatusResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMGetStatusResponse) */

void zx_e_Body_ADD_PMGetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMGetStatusResponse_s* z)
{
  struct zx_pmm_PMGetStatusResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMGetStatusResponse->gg.g;
    x->PMGetStatusResponse = z;
    return;
  case -1:
    y = x->PMGetStatusResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMGetStatusResponse; n > 1 && y; --n, y = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMGetStatusResponse) */

void zx_e_Body_DEL_PMGetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMGetStatusResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMGetStatusResponse = (struct zx_pmm_PMGetStatusResponse_s*)x->PMGetStatusResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMGetStatusResponse_s*)x->PMGetStatusResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMGetStatusResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMGetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMSetStatus) */

int zx_e_Body_NUM_PMSetStatus(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMSetStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMSetStatus; y; ++n, y = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMSetStatus) */

struct zx_pmm_PMSetStatus_s* zx_e_Body_GET_PMSetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMSetStatus_s* y;
  if (!x) return 0;
  for (y = x->PMSetStatus; n>=0 && y; --n, y = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMSetStatus) */

struct zx_pmm_PMSetStatus_s* zx_e_Body_POP_PMSetStatus(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMSetStatus_s* y;
  if (!x) return 0;
  y = x->PMSetStatus;
  if (y)
    x->PMSetStatus = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMSetStatus) */

void zx_e_Body_PUSH_PMSetStatus(struct zx_e_Body_s* x, struct zx_pmm_PMSetStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMSetStatus->gg.g;
  x->PMSetStatus = z;
}

/* FUNC(zx_e_Body_REV_PMSetStatus) */

void zx_e_Body_REV_PMSetStatus(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMSetStatus_s* nxt;
  struct zx_pmm_PMSetStatus_s* y;
  if (!x) return;
  y = x->PMSetStatus;
  if (!y) return;
  x->PMSetStatus = 0;
  while (y) {
    nxt = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->PMSetStatus->gg.g;
    x->PMSetStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMSetStatus) */

void zx_e_Body_PUT_PMSetStatus(struct zx_e_Body_s* x, int n, struct zx_pmm_PMSetStatus_s* z)
{
  struct zx_pmm_PMSetStatus_s* y;
  if (!x || !z) return;
  y = x->PMSetStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMSetStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMSetStatus) */

void zx_e_Body_ADD_PMSetStatus(struct zx_e_Body_s* x, int n, struct zx_pmm_PMSetStatus_s* z)
{
  struct zx_pmm_PMSetStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMSetStatus->gg.g;
    x->PMSetStatus = z;
    return;
  case -1:
    y = x->PMSetStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMSetStatus; n > 1 && y; --n, y = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMSetStatus) */

void zx_e_Body_DEL_PMSetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMSetStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMSetStatus = (struct zx_pmm_PMSetStatus_s*)x->PMSetStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMSetStatus_s*)x->PMSetStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMSetStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMSetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMSetStatusResponse) */

int zx_e_Body_NUM_PMSetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMSetStatusResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMSetStatusResponse; y; ++n, y = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMSetStatusResponse) */

struct zx_pmm_PMSetStatusResponse_s* zx_e_Body_GET_PMSetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMSetStatusResponse_s* y;
  if (!x) return 0;
  for (y = x->PMSetStatusResponse; n>=0 && y; --n, y = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMSetStatusResponse) */

struct zx_pmm_PMSetStatusResponse_s* zx_e_Body_POP_PMSetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMSetStatusResponse_s* y;
  if (!x) return 0;
  y = x->PMSetStatusResponse;
  if (y)
    x->PMSetStatusResponse = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMSetStatusResponse) */

void zx_e_Body_PUSH_PMSetStatusResponse(struct zx_e_Body_s* x, struct zx_pmm_PMSetStatusResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMSetStatusResponse->gg.g;
  x->PMSetStatusResponse = z;
}

/* FUNC(zx_e_Body_REV_PMSetStatusResponse) */

void zx_e_Body_REV_PMSetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_pmm_PMSetStatusResponse_s* nxt;
  struct zx_pmm_PMSetStatusResponse_s* y;
  if (!x) return;
  y = x->PMSetStatusResponse;
  if (!y) return;
  x->PMSetStatusResponse = 0;
  while (y) {
    nxt = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMSetStatusResponse->gg.g;
    x->PMSetStatusResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMSetStatusResponse) */

void zx_e_Body_PUT_PMSetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMSetStatusResponse_s* z)
{
  struct zx_pmm_PMSetStatusResponse_s* y;
  if (!x || !z) return;
  y = x->PMSetStatusResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMSetStatusResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMSetStatusResponse) */

void zx_e_Body_ADD_PMSetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_pmm_PMSetStatusResponse_s* z)
{
  struct zx_pmm_PMSetStatusResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMSetStatusResponse->gg.g;
    x->PMSetStatusResponse = z;
    return;
  case -1:
    y = x->PMSetStatusResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMSetStatusResponse; n > 1 && y; --n, y = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMSetStatusResponse) */

void zx_e_Body_DEL_PMSetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_pmm_PMSetStatusResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMSetStatusResponse = (struct zx_pmm_PMSetStatusResponse_s*)x->PMSetStatusResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_pmm_PMSetStatusResponse_s*)x->PMSetStatusResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMSetStatusResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_pmm_PMSetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMERegister) */

int zx_e_Body_NUM_PMERegister(struct zx_e_Body_s* x)
{
  struct zx_prov_PMERegister_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMERegister; y; ++n, y = (struct zx_prov_PMERegister_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMERegister) */

struct zx_prov_PMERegister_s* zx_e_Body_GET_PMERegister(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMERegister_s* y;
  if (!x) return 0;
  for (y = x->PMERegister; n>=0 && y; --n, y = (struct zx_prov_PMERegister_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMERegister) */

struct zx_prov_PMERegister_s* zx_e_Body_POP_PMERegister(struct zx_e_Body_s* x)
{
  struct zx_prov_PMERegister_s* y;
  if (!x) return 0;
  y = x->PMERegister;
  if (y)
    x->PMERegister = (struct zx_prov_PMERegister_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMERegister) */

void zx_e_Body_PUSH_PMERegister(struct zx_e_Body_s* x, struct zx_prov_PMERegister_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMERegister->gg.g;
  x->PMERegister = z;
}

/* FUNC(zx_e_Body_REV_PMERegister) */

void zx_e_Body_REV_PMERegister(struct zx_e_Body_s* x)
{
  struct zx_prov_PMERegister_s* nxt;
  struct zx_prov_PMERegister_s* y;
  if (!x) return;
  y = x->PMERegister;
  if (!y) return;
  x->PMERegister = 0;
  while (y) {
    nxt = (struct zx_prov_PMERegister_s*)y->gg.g.n;
    y->gg.g.n = &x->PMERegister->gg.g;
    x->PMERegister = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMERegister) */

void zx_e_Body_PUT_PMERegister(struct zx_e_Body_s* x, int n, struct zx_prov_PMERegister_s* z)
{
  struct zx_prov_PMERegister_s* y;
  if (!x || !z) return;
  y = x->PMERegister;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMERegister = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMERegister_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMERegister) */

void zx_e_Body_ADD_PMERegister(struct zx_e_Body_s* x, int n, struct zx_prov_PMERegister_s* z)
{
  struct zx_prov_PMERegister_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMERegister->gg.g;
    x->PMERegister = z;
    return;
  case -1:
    y = x->PMERegister;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMERegister_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMERegister; n > 1 && y; --n, y = (struct zx_prov_PMERegister_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMERegister) */

void zx_e_Body_DEL_PMERegister(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMERegister_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMERegister = (struct zx_prov_PMERegister_s*)x->PMERegister->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMERegister_s*)x->PMERegister;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMERegister_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMERegister; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMERegister_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMERegisterResponse) */

int zx_e_Body_NUM_PMERegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMERegisterResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMERegisterResponse; y; ++n, y = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMERegisterResponse) */

struct zx_prov_PMERegisterResponse_s* zx_e_Body_GET_PMERegisterResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMERegisterResponse_s* y;
  if (!x) return 0;
  for (y = x->PMERegisterResponse; n>=0 && y; --n, y = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMERegisterResponse) */

struct zx_prov_PMERegisterResponse_s* zx_e_Body_POP_PMERegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMERegisterResponse_s* y;
  if (!x) return 0;
  y = x->PMERegisterResponse;
  if (y)
    x->PMERegisterResponse = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMERegisterResponse) */

void zx_e_Body_PUSH_PMERegisterResponse(struct zx_e_Body_s* x, struct zx_prov_PMERegisterResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMERegisterResponse->gg.g;
  x->PMERegisterResponse = z;
}

/* FUNC(zx_e_Body_REV_PMERegisterResponse) */

void zx_e_Body_REV_PMERegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMERegisterResponse_s* nxt;
  struct zx_prov_PMERegisterResponse_s* y;
  if (!x) return;
  y = x->PMERegisterResponse;
  if (!y) return;
  x->PMERegisterResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMERegisterResponse->gg.g;
    x->PMERegisterResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMERegisterResponse) */

void zx_e_Body_PUT_PMERegisterResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMERegisterResponse_s* z)
{
  struct zx_prov_PMERegisterResponse_s* y;
  if (!x || !z) return;
  y = x->PMERegisterResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMERegisterResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMERegisterResponse) */

void zx_e_Body_ADD_PMERegisterResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMERegisterResponse_s* z)
{
  struct zx_prov_PMERegisterResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMERegisterResponse->gg.g;
    x->PMERegisterResponse = z;
    return;
  case -1:
    y = x->PMERegisterResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMERegisterResponse; n > 1 && y; --n, y = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMERegisterResponse) */

void zx_e_Body_DEL_PMERegisterResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMERegisterResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMERegisterResponse = (struct zx_prov_PMERegisterResponse_s*)x->PMERegisterResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMERegisterResponse_s*)x->PMERegisterResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMERegisterResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMERegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEUpload) */

int zx_e_Body_NUM_PMEUpload(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEUpload_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEUpload; y; ++n, y = (struct zx_prov_PMEUpload_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEUpload) */

struct zx_prov_PMEUpload_s* zx_e_Body_GET_PMEUpload(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEUpload_s* y;
  if (!x) return 0;
  for (y = x->PMEUpload; n>=0 && y; --n, y = (struct zx_prov_PMEUpload_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEUpload) */

struct zx_prov_PMEUpload_s* zx_e_Body_POP_PMEUpload(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEUpload_s* y;
  if (!x) return 0;
  y = x->PMEUpload;
  if (y)
    x->PMEUpload = (struct zx_prov_PMEUpload_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEUpload) */

void zx_e_Body_PUSH_PMEUpload(struct zx_e_Body_s* x, struct zx_prov_PMEUpload_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEUpload->gg.g;
  x->PMEUpload = z;
}

/* FUNC(zx_e_Body_REV_PMEUpload) */

void zx_e_Body_REV_PMEUpload(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEUpload_s* nxt;
  struct zx_prov_PMEUpload_s* y;
  if (!x) return;
  y = x->PMEUpload;
  if (!y) return;
  x->PMEUpload = 0;
  while (y) {
    nxt = (struct zx_prov_PMEUpload_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEUpload->gg.g;
    x->PMEUpload = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEUpload) */

void zx_e_Body_PUT_PMEUpload(struct zx_e_Body_s* x, int n, struct zx_prov_PMEUpload_s* z)
{
  struct zx_prov_PMEUpload_s* y;
  if (!x || !z) return;
  y = x->PMEUpload;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEUpload = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEUpload_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEUpload) */

void zx_e_Body_ADD_PMEUpload(struct zx_e_Body_s* x, int n, struct zx_prov_PMEUpload_s* z)
{
  struct zx_prov_PMEUpload_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEUpload->gg.g;
    x->PMEUpload = z;
    return;
  case -1:
    y = x->PMEUpload;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEUpload_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEUpload; n > 1 && y; --n, y = (struct zx_prov_PMEUpload_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEUpload) */

void zx_e_Body_DEL_PMEUpload(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEUpload_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEUpload = (struct zx_prov_PMEUpload_s*)x->PMEUpload->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEUpload_s*)x->PMEUpload;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEUpload_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEUpload; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEUpload_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEUploadResponse) */

int zx_e_Body_NUM_PMEUploadResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEUploadResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEUploadResponse; y; ++n, y = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEUploadResponse) */

struct zx_prov_PMEUploadResponse_s* zx_e_Body_GET_PMEUploadResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEUploadResponse_s* y;
  if (!x) return 0;
  for (y = x->PMEUploadResponse; n>=0 && y; --n, y = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEUploadResponse) */

struct zx_prov_PMEUploadResponse_s* zx_e_Body_POP_PMEUploadResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEUploadResponse_s* y;
  if (!x) return 0;
  y = x->PMEUploadResponse;
  if (y)
    x->PMEUploadResponse = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEUploadResponse) */

void zx_e_Body_PUSH_PMEUploadResponse(struct zx_e_Body_s* x, struct zx_prov_PMEUploadResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEUploadResponse->gg.g;
  x->PMEUploadResponse = z;
}

/* FUNC(zx_e_Body_REV_PMEUploadResponse) */

void zx_e_Body_REV_PMEUploadResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEUploadResponse_s* nxt;
  struct zx_prov_PMEUploadResponse_s* y;
  if (!x) return;
  y = x->PMEUploadResponse;
  if (!y) return;
  x->PMEUploadResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEUploadResponse->gg.g;
    x->PMEUploadResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEUploadResponse) */

void zx_e_Body_PUT_PMEUploadResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEUploadResponse_s* z)
{
  struct zx_prov_PMEUploadResponse_s* y;
  if (!x || !z) return;
  y = x->PMEUploadResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEUploadResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEUploadResponse) */

void zx_e_Body_ADD_PMEUploadResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEUploadResponse_s* z)
{
  struct zx_prov_PMEUploadResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEUploadResponse->gg.g;
    x->PMEUploadResponse = z;
    return;
  case -1:
    y = x->PMEUploadResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEUploadResponse; n > 1 && y; --n, y = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEUploadResponse) */

void zx_e_Body_DEL_PMEUploadResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEUploadResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEUploadResponse = (struct zx_prov_PMEUploadResponse_s*)x->PMEUploadResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEUploadResponse_s*)x->PMEUploadResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEUploadResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEUploadResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEDownload) */

int zx_e_Body_NUM_PMEDownload(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDownload_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEDownload; y; ++n, y = (struct zx_prov_PMEDownload_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEDownload) */

struct zx_prov_PMEDownload_s* zx_e_Body_GET_PMEDownload(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDownload_s* y;
  if (!x) return 0;
  for (y = x->PMEDownload; n>=0 && y; --n, y = (struct zx_prov_PMEDownload_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEDownload) */

struct zx_prov_PMEDownload_s* zx_e_Body_POP_PMEDownload(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDownload_s* y;
  if (!x) return 0;
  y = x->PMEDownload;
  if (y)
    x->PMEDownload = (struct zx_prov_PMEDownload_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEDownload) */

void zx_e_Body_PUSH_PMEDownload(struct zx_e_Body_s* x, struct zx_prov_PMEDownload_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEDownload->gg.g;
  x->PMEDownload = z;
}

/* FUNC(zx_e_Body_REV_PMEDownload) */

void zx_e_Body_REV_PMEDownload(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDownload_s* nxt;
  struct zx_prov_PMEDownload_s* y;
  if (!x) return;
  y = x->PMEDownload;
  if (!y) return;
  x->PMEDownload = 0;
  while (y) {
    nxt = (struct zx_prov_PMEDownload_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEDownload->gg.g;
    x->PMEDownload = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEDownload) */

void zx_e_Body_PUT_PMEDownload(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDownload_s* z)
{
  struct zx_prov_PMEDownload_s* y;
  if (!x || !z) return;
  y = x->PMEDownload;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEDownload = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDownload_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEDownload) */

void zx_e_Body_ADD_PMEDownload(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDownload_s* z)
{
  struct zx_prov_PMEDownload_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEDownload->gg.g;
    x->PMEDownload = z;
    return;
  case -1:
    y = x->PMEDownload;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDownload_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDownload; n > 1 && y; --n, y = (struct zx_prov_PMEDownload_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEDownload) */

void zx_e_Body_DEL_PMEDownload(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDownload_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEDownload = (struct zx_prov_PMEDownload_s*)x->PMEDownload->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEDownload_s*)x->PMEDownload;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDownload_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDownload; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDownload_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEDownloadResponse) */

int zx_e_Body_NUM_PMEDownloadResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDownloadResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEDownloadResponse; y; ++n, y = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEDownloadResponse) */

struct zx_prov_PMEDownloadResponse_s* zx_e_Body_GET_PMEDownloadResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDownloadResponse_s* y;
  if (!x) return 0;
  for (y = x->PMEDownloadResponse; n>=0 && y; --n, y = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEDownloadResponse) */

struct zx_prov_PMEDownloadResponse_s* zx_e_Body_POP_PMEDownloadResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDownloadResponse_s* y;
  if (!x) return 0;
  y = x->PMEDownloadResponse;
  if (y)
    x->PMEDownloadResponse = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEDownloadResponse) */

void zx_e_Body_PUSH_PMEDownloadResponse(struct zx_e_Body_s* x, struct zx_prov_PMEDownloadResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEDownloadResponse->gg.g;
  x->PMEDownloadResponse = z;
}

/* FUNC(zx_e_Body_REV_PMEDownloadResponse) */

void zx_e_Body_REV_PMEDownloadResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDownloadResponse_s* nxt;
  struct zx_prov_PMEDownloadResponse_s* y;
  if (!x) return;
  y = x->PMEDownloadResponse;
  if (!y) return;
  x->PMEDownloadResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEDownloadResponse->gg.g;
    x->PMEDownloadResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEDownloadResponse) */

void zx_e_Body_PUT_PMEDownloadResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDownloadResponse_s* z)
{
  struct zx_prov_PMEDownloadResponse_s* y;
  if (!x || !z) return;
  y = x->PMEDownloadResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEDownloadResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEDownloadResponse) */

void zx_e_Body_ADD_PMEDownloadResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDownloadResponse_s* z)
{
  struct zx_prov_PMEDownloadResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEDownloadResponse->gg.g;
    x->PMEDownloadResponse = z;
    return;
  case -1:
    y = x->PMEDownloadResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDownloadResponse; n > 1 && y; --n, y = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEDownloadResponse) */

void zx_e_Body_DEL_PMEDownloadResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDownloadResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEDownloadResponse = (struct zx_prov_PMEDownloadResponse_s*)x->PMEDownloadResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEDownloadResponse_s*)x->PMEDownloadResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDownloadResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDownloadResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEEnable) */

int zx_e_Body_NUM_PMEEnable(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEEnable_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEEnable; y; ++n, y = (struct zx_prov_PMEEnable_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEEnable) */

struct zx_prov_PMEEnable_s* zx_e_Body_GET_PMEEnable(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEEnable_s* y;
  if (!x) return 0;
  for (y = x->PMEEnable; n>=0 && y; --n, y = (struct zx_prov_PMEEnable_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEEnable) */

struct zx_prov_PMEEnable_s* zx_e_Body_POP_PMEEnable(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEEnable_s* y;
  if (!x) return 0;
  y = x->PMEEnable;
  if (y)
    x->PMEEnable = (struct zx_prov_PMEEnable_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEEnable) */

void zx_e_Body_PUSH_PMEEnable(struct zx_e_Body_s* x, struct zx_prov_PMEEnable_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEEnable->gg.g;
  x->PMEEnable = z;
}

/* FUNC(zx_e_Body_REV_PMEEnable) */

void zx_e_Body_REV_PMEEnable(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEEnable_s* nxt;
  struct zx_prov_PMEEnable_s* y;
  if (!x) return;
  y = x->PMEEnable;
  if (!y) return;
  x->PMEEnable = 0;
  while (y) {
    nxt = (struct zx_prov_PMEEnable_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEEnable->gg.g;
    x->PMEEnable = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEEnable) */

void zx_e_Body_PUT_PMEEnable(struct zx_e_Body_s* x, int n, struct zx_prov_PMEEnable_s* z)
{
  struct zx_prov_PMEEnable_s* y;
  if (!x || !z) return;
  y = x->PMEEnable;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEEnable = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEEnable_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEEnable) */

void zx_e_Body_ADD_PMEEnable(struct zx_e_Body_s* x, int n, struct zx_prov_PMEEnable_s* z)
{
  struct zx_prov_PMEEnable_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEEnable->gg.g;
    x->PMEEnable = z;
    return;
  case -1:
    y = x->PMEEnable;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEEnable_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEEnable; n > 1 && y; --n, y = (struct zx_prov_PMEEnable_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEEnable) */

void zx_e_Body_DEL_PMEEnable(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEEnable_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEEnable = (struct zx_prov_PMEEnable_s*)x->PMEEnable->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEEnable_s*)x->PMEEnable;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEEnable_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEEnable; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEEnable_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEEnableResponse) */

int zx_e_Body_NUM_PMEEnableResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEEnableResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEEnableResponse; y; ++n, y = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEEnableResponse) */

struct zx_prov_PMEEnableResponse_s* zx_e_Body_GET_PMEEnableResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEEnableResponse_s* y;
  if (!x) return 0;
  for (y = x->PMEEnableResponse; n>=0 && y; --n, y = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEEnableResponse) */

struct zx_prov_PMEEnableResponse_s* zx_e_Body_POP_PMEEnableResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEEnableResponse_s* y;
  if (!x) return 0;
  y = x->PMEEnableResponse;
  if (y)
    x->PMEEnableResponse = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEEnableResponse) */

void zx_e_Body_PUSH_PMEEnableResponse(struct zx_e_Body_s* x, struct zx_prov_PMEEnableResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEEnableResponse->gg.g;
  x->PMEEnableResponse = z;
}

/* FUNC(zx_e_Body_REV_PMEEnableResponse) */

void zx_e_Body_REV_PMEEnableResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEEnableResponse_s* nxt;
  struct zx_prov_PMEEnableResponse_s* y;
  if (!x) return;
  y = x->PMEEnableResponse;
  if (!y) return;
  x->PMEEnableResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEEnableResponse->gg.g;
    x->PMEEnableResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEEnableResponse) */

void zx_e_Body_PUT_PMEEnableResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEEnableResponse_s* z)
{
  struct zx_prov_PMEEnableResponse_s* y;
  if (!x || !z) return;
  y = x->PMEEnableResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEEnableResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEEnableResponse) */

void zx_e_Body_ADD_PMEEnableResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEEnableResponse_s* z)
{
  struct zx_prov_PMEEnableResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEEnableResponse->gg.g;
    x->PMEEnableResponse = z;
    return;
  case -1:
    y = x->PMEEnableResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEEnableResponse; n > 1 && y; --n, y = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEEnableResponse) */

void zx_e_Body_DEL_PMEEnableResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEEnableResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEEnableResponse = (struct zx_prov_PMEEnableResponse_s*)x->PMEEnableResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEEnableResponse_s*)x->PMEEnableResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEEnableResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEEnableResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEDisable) */

int zx_e_Body_NUM_PMEDisable(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDisable_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEDisable; y; ++n, y = (struct zx_prov_PMEDisable_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEDisable) */

struct zx_prov_PMEDisable_s* zx_e_Body_GET_PMEDisable(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDisable_s* y;
  if (!x) return 0;
  for (y = x->PMEDisable; n>=0 && y; --n, y = (struct zx_prov_PMEDisable_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEDisable) */

struct zx_prov_PMEDisable_s* zx_e_Body_POP_PMEDisable(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDisable_s* y;
  if (!x) return 0;
  y = x->PMEDisable;
  if (y)
    x->PMEDisable = (struct zx_prov_PMEDisable_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEDisable) */

void zx_e_Body_PUSH_PMEDisable(struct zx_e_Body_s* x, struct zx_prov_PMEDisable_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEDisable->gg.g;
  x->PMEDisable = z;
}

/* FUNC(zx_e_Body_REV_PMEDisable) */

void zx_e_Body_REV_PMEDisable(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDisable_s* nxt;
  struct zx_prov_PMEDisable_s* y;
  if (!x) return;
  y = x->PMEDisable;
  if (!y) return;
  x->PMEDisable = 0;
  while (y) {
    nxt = (struct zx_prov_PMEDisable_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEDisable->gg.g;
    x->PMEDisable = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEDisable) */

void zx_e_Body_PUT_PMEDisable(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDisable_s* z)
{
  struct zx_prov_PMEDisable_s* y;
  if (!x || !z) return;
  y = x->PMEDisable;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEDisable = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDisable_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEDisable) */

void zx_e_Body_ADD_PMEDisable(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDisable_s* z)
{
  struct zx_prov_PMEDisable_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEDisable->gg.g;
    x->PMEDisable = z;
    return;
  case -1:
    y = x->PMEDisable;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDisable_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDisable; n > 1 && y; --n, y = (struct zx_prov_PMEDisable_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEDisable) */

void zx_e_Body_DEL_PMEDisable(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDisable_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEDisable = (struct zx_prov_PMEDisable_s*)x->PMEDisable->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEDisable_s*)x->PMEDisable;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDisable_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDisable; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDisable_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEDisableResponse) */

int zx_e_Body_NUM_PMEDisableResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDisableResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEDisableResponse; y; ++n, y = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEDisableResponse) */

struct zx_prov_PMEDisableResponse_s* zx_e_Body_GET_PMEDisableResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDisableResponse_s* y;
  if (!x) return 0;
  for (y = x->PMEDisableResponse; n>=0 && y; --n, y = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEDisableResponse) */

struct zx_prov_PMEDisableResponse_s* zx_e_Body_POP_PMEDisableResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDisableResponse_s* y;
  if (!x) return 0;
  y = x->PMEDisableResponse;
  if (y)
    x->PMEDisableResponse = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEDisableResponse) */

void zx_e_Body_PUSH_PMEDisableResponse(struct zx_e_Body_s* x, struct zx_prov_PMEDisableResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEDisableResponse->gg.g;
  x->PMEDisableResponse = z;
}

/* FUNC(zx_e_Body_REV_PMEDisableResponse) */

void zx_e_Body_REV_PMEDisableResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDisableResponse_s* nxt;
  struct zx_prov_PMEDisableResponse_s* y;
  if (!x) return;
  y = x->PMEDisableResponse;
  if (!y) return;
  x->PMEDisableResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEDisableResponse->gg.g;
    x->PMEDisableResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEDisableResponse) */

void zx_e_Body_PUT_PMEDisableResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDisableResponse_s* z)
{
  struct zx_prov_PMEDisableResponse_s* y;
  if (!x || !z) return;
  y = x->PMEDisableResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEDisableResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEDisableResponse) */

void zx_e_Body_ADD_PMEDisableResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDisableResponse_s* z)
{
  struct zx_prov_PMEDisableResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEDisableResponse->gg.g;
    x->PMEDisableResponse = z;
    return;
  case -1:
    y = x->PMEDisableResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDisableResponse; n > 1 && y; --n, y = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEDisableResponse) */

void zx_e_Body_DEL_PMEDisableResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDisableResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEDisableResponse = (struct zx_prov_PMEDisableResponse_s*)x->PMEDisableResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEDisableResponse_s*)x->PMEDisableResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDisableResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDisableResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEDelete) */

int zx_e_Body_NUM_PMEDelete(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEDelete; y; ++n, y = (struct zx_prov_PMEDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEDelete) */

struct zx_prov_PMEDelete_s* zx_e_Body_GET_PMEDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDelete_s* y;
  if (!x) return 0;
  for (y = x->PMEDelete; n>=0 && y; --n, y = (struct zx_prov_PMEDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEDelete) */

struct zx_prov_PMEDelete_s* zx_e_Body_POP_PMEDelete(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDelete_s* y;
  if (!x) return 0;
  y = x->PMEDelete;
  if (y)
    x->PMEDelete = (struct zx_prov_PMEDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEDelete) */

void zx_e_Body_PUSH_PMEDelete(struct zx_e_Body_s* x, struct zx_prov_PMEDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEDelete->gg.g;
  x->PMEDelete = z;
}

/* FUNC(zx_e_Body_REV_PMEDelete) */

void zx_e_Body_REV_PMEDelete(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDelete_s* nxt;
  struct zx_prov_PMEDelete_s* y;
  if (!x) return;
  y = x->PMEDelete;
  if (!y) return;
  x->PMEDelete = 0;
  while (y) {
    nxt = (struct zx_prov_PMEDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEDelete->gg.g;
    x->PMEDelete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEDelete) */

void zx_e_Body_PUT_PMEDelete(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDelete_s* z)
{
  struct zx_prov_PMEDelete_s* y;
  if (!x || !z) return;
  y = x->PMEDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEDelete) */

void zx_e_Body_ADD_PMEDelete(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDelete_s* z)
{
  struct zx_prov_PMEDelete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEDelete->gg.g;
    x->PMEDelete = z;
    return;
  case -1:
    y = x->PMEDelete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDelete; n > 1 && y; --n, y = (struct zx_prov_PMEDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEDelete) */

void zx_e_Body_DEL_PMEDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEDelete = (struct zx_prov_PMEDelete_s*)x->PMEDelete->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEDelete_s*)x->PMEDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDelete; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEDeleteResponse) */

int zx_e_Body_NUM_PMEDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEDeleteResponse; y; ++n, y = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEDeleteResponse) */

struct zx_prov_PMEDeleteResponse_s* zx_e_Body_GET_PMEDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->PMEDeleteResponse; n>=0 && y; --n, y = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEDeleteResponse) */

struct zx_prov_PMEDeleteResponse_s* zx_e_Body_POP_PMEDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDeleteResponse_s* y;
  if (!x) return 0;
  y = x->PMEDeleteResponse;
  if (y)
    x->PMEDeleteResponse = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEDeleteResponse) */

void zx_e_Body_PUSH_PMEDeleteResponse(struct zx_e_Body_s* x, struct zx_prov_PMEDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEDeleteResponse->gg.g;
  x->PMEDeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_PMEDeleteResponse) */

void zx_e_Body_REV_PMEDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEDeleteResponse_s* nxt;
  struct zx_prov_PMEDeleteResponse_s* y;
  if (!x) return;
  y = x->PMEDeleteResponse;
  if (!y) return;
  x->PMEDeleteResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEDeleteResponse->gg.g;
    x->PMEDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEDeleteResponse) */

void zx_e_Body_PUT_PMEDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDeleteResponse_s* z)
{
  struct zx_prov_PMEDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->PMEDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEDeleteResponse) */

void zx_e_Body_ADD_PMEDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEDeleteResponse_s* z)
{
  struct zx_prov_PMEDeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEDeleteResponse->gg.g;
    x->PMEDeleteResponse = z;
    return;
  case -1:
    y = x->PMEDeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDeleteResponse; n > 1 && y; --n, y = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEDeleteResponse) */

void zx_e_Body_DEL_PMEDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEDeleteResponse = (struct zx_prov_PMEDeleteResponse_s*)x->PMEDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEDeleteResponse_s*)x->PMEDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEGetInfo) */

int zx_e_Body_NUM_PMEGetInfo(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEGetInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEGetInfo; y; ++n, y = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEGetInfo) */

struct zx_prov_PMEGetInfo_s* zx_e_Body_GET_PMEGetInfo(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEGetInfo_s* y;
  if (!x) return 0;
  for (y = x->PMEGetInfo; n>=0 && y; --n, y = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEGetInfo) */

struct zx_prov_PMEGetInfo_s* zx_e_Body_POP_PMEGetInfo(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEGetInfo_s* y;
  if (!x) return 0;
  y = x->PMEGetInfo;
  if (y)
    x->PMEGetInfo = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEGetInfo) */

void zx_e_Body_PUSH_PMEGetInfo(struct zx_e_Body_s* x, struct zx_prov_PMEGetInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEGetInfo->gg.g;
  x->PMEGetInfo = z;
}

/* FUNC(zx_e_Body_REV_PMEGetInfo) */

void zx_e_Body_REV_PMEGetInfo(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEGetInfo_s* nxt;
  struct zx_prov_PMEGetInfo_s* y;
  if (!x) return;
  y = x->PMEGetInfo;
  if (!y) return;
  x->PMEGetInfo = 0;
  while (y) {
    nxt = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEGetInfo->gg.g;
    x->PMEGetInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEGetInfo) */

void zx_e_Body_PUT_PMEGetInfo(struct zx_e_Body_s* x, int n, struct zx_prov_PMEGetInfo_s* z)
{
  struct zx_prov_PMEGetInfo_s* y;
  if (!x || !z) return;
  y = x->PMEGetInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEGetInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEGetInfo) */

void zx_e_Body_ADD_PMEGetInfo(struct zx_e_Body_s* x, int n, struct zx_prov_PMEGetInfo_s* z)
{
  struct zx_prov_PMEGetInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEGetInfo->gg.g;
    x->PMEGetInfo = z;
    return;
  case -1:
    y = x->PMEGetInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEGetInfo; n > 1 && y; --n, y = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEGetInfo) */

void zx_e_Body_DEL_PMEGetInfo(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEGetInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEGetInfo = (struct zx_prov_PMEGetInfo_s*)x->PMEGetInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEGetInfo_s*)x->PMEGetInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEGetInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEGetInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMEGetInfoResponse) */

int zx_e_Body_NUM_PMEGetInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEGetInfoResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMEGetInfoResponse; y; ++n, y = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMEGetInfoResponse) */

struct zx_prov_PMEGetInfoResponse_s* zx_e_Body_GET_PMEGetInfoResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEGetInfoResponse_s* y;
  if (!x) return 0;
  for (y = x->PMEGetInfoResponse; n>=0 && y; --n, y = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMEGetInfoResponse) */

struct zx_prov_PMEGetInfoResponse_s* zx_e_Body_POP_PMEGetInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEGetInfoResponse_s* y;
  if (!x) return 0;
  y = x->PMEGetInfoResponse;
  if (y)
    x->PMEGetInfoResponse = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMEGetInfoResponse) */

void zx_e_Body_PUSH_PMEGetInfoResponse(struct zx_e_Body_s* x, struct zx_prov_PMEGetInfoResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMEGetInfoResponse->gg.g;
  x->PMEGetInfoResponse = z;
}

/* FUNC(zx_e_Body_REV_PMEGetInfoResponse) */

void zx_e_Body_REV_PMEGetInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMEGetInfoResponse_s* nxt;
  struct zx_prov_PMEGetInfoResponse_s* y;
  if (!x) return;
  y = x->PMEGetInfoResponse;
  if (!y) return;
  x->PMEGetInfoResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMEGetInfoResponse->gg.g;
    x->PMEGetInfoResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMEGetInfoResponse) */

void zx_e_Body_PUT_PMEGetInfoResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEGetInfoResponse_s* z)
{
  struct zx_prov_PMEGetInfoResponse_s* y;
  if (!x || !z) return;
  y = x->PMEGetInfoResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMEGetInfoResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMEGetInfoResponse) */

void zx_e_Body_ADD_PMEGetInfoResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMEGetInfoResponse_s* z)
{
  struct zx_prov_PMEGetInfoResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMEGetInfoResponse->gg.g;
    x->PMEGetInfoResponse = z;
    return;
  case -1:
    y = x->PMEGetInfoResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEGetInfoResponse; n > 1 && y; --n, y = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMEGetInfoResponse) */

void zx_e_Body_DEL_PMEGetInfoResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMEGetInfoResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMEGetInfoResponse = (struct zx_prov_PMEGetInfoResponse_s*)x->PMEGetInfoResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMEGetInfoResponse_s*)x->PMEGetInfoResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMEGetInfoResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMEGetInfoResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMGetStatus) */

int zx_e_Body_NUM_prov_PMGetStatus(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMGetStatus; y; ++n, y = (struct zx_prov_PMGetStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMGetStatus) */

struct zx_prov_PMGetStatus_s* zx_e_Body_GET_prov_PMGetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMGetStatus_s* y;
  if (!x) return 0;
  for (y = x->prov_PMGetStatus; n>=0 && y; --n, y = (struct zx_prov_PMGetStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMGetStatus) */

struct zx_prov_PMGetStatus_s* zx_e_Body_POP_prov_PMGetStatus(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetStatus_s* y;
  if (!x) return 0;
  y = x->prov_PMGetStatus;
  if (y)
    x->prov_PMGetStatus = (struct zx_prov_PMGetStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMGetStatus) */

void zx_e_Body_PUSH_prov_PMGetStatus(struct zx_e_Body_s* x, struct zx_prov_PMGetStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMGetStatus->gg.g;
  x->prov_PMGetStatus = z;
}

/* FUNC(zx_e_Body_REV_prov_PMGetStatus) */

void zx_e_Body_REV_prov_PMGetStatus(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetStatus_s* nxt;
  struct zx_prov_PMGetStatus_s* y;
  if (!x) return;
  y = x->prov_PMGetStatus;
  if (!y) return;
  x->prov_PMGetStatus = 0;
  while (y) {
    nxt = (struct zx_prov_PMGetStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMGetStatus->gg.g;
    x->prov_PMGetStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMGetStatus) */

void zx_e_Body_PUT_prov_PMGetStatus(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetStatus_s* z)
{
  struct zx_prov_PMGetStatus_s* y;
  if (!x || !z) return;
  y = x->prov_PMGetStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMGetStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMGetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMGetStatus) */

void zx_e_Body_ADD_prov_PMGetStatus(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetStatus_s* z)
{
  struct zx_prov_PMGetStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMGetStatus->gg.g;
    x->prov_PMGetStatus = z;
    return;
  case -1:
    y = x->prov_PMGetStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMGetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMGetStatus; n > 1 && y; --n, y = (struct zx_prov_PMGetStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMGetStatus) */

void zx_e_Body_DEL_prov_PMGetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMGetStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMGetStatus = (struct zx_prov_PMGetStatus_s*)x->prov_PMGetStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMGetStatus_s*)x->prov_PMGetStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMGetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMGetStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMGetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMGetStatusResponse) */

int zx_e_Body_NUM_prov_PMGetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetStatusResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMGetStatusResponse; y; ++n, y = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMGetStatusResponse) */

struct zx_prov_PMGetStatusResponse_s* zx_e_Body_GET_prov_PMGetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMGetStatusResponse_s* y;
  if (!x) return 0;
  for (y = x->prov_PMGetStatusResponse; n>=0 && y; --n, y = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMGetStatusResponse) */

struct zx_prov_PMGetStatusResponse_s* zx_e_Body_POP_prov_PMGetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetStatusResponse_s* y;
  if (!x) return 0;
  y = x->prov_PMGetStatusResponse;
  if (y)
    x->prov_PMGetStatusResponse = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMGetStatusResponse) */

void zx_e_Body_PUSH_prov_PMGetStatusResponse(struct zx_e_Body_s* x, struct zx_prov_PMGetStatusResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMGetStatusResponse->gg.g;
  x->prov_PMGetStatusResponse = z;
}

/* FUNC(zx_e_Body_REV_prov_PMGetStatusResponse) */

void zx_e_Body_REV_prov_PMGetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetStatusResponse_s* nxt;
  struct zx_prov_PMGetStatusResponse_s* y;
  if (!x) return;
  y = x->prov_PMGetStatusResponse;
  if (!y) return;
  x->prov_PMGetStatusResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMGetStatusResponse->gg.g;
    x->prov_PMGetStatusResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMGetStatusResponse) */

void zx_e_Body_PUT_prov_PMGetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetStatusResponse_s* z)
{
  struct zx_prov_PMGetStatusResponse_s* y;
  if (!x || !z) return;
  y = x->prov_PMGetStatusResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMGetStatusResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMGetStatusResponse) */

void zx_e_Body_ADD_prov_PMGetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetStatusResponse_s* z)
{
  struct zx_prov_PMGetStatusResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMGetStatusResponse->gg.g;
    x->prov_PMGetStatusResponse = z;
    return;
  case -1:
    y = x->prov_PMGetStatusResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMGetStatusResponse; n > 1 && y; --n, y = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMGetStatusResponse) */

void zx_e_Body_DEL_prov_PMGetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMGetStatusResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMGetStatusResponse = (struct zx_prov_PMGetStatusResponse_s*)x->prov_PMGetStatusResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMGetStatusResponse_s*)x->prov_PMGetStatusResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMGetStatusResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMGetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMSetStatus) */

int zx_e_Body_NUM_prov_PMSetStatus(struct zx_e_Body_s* x)
{
  struct zx_prov_PMSetStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMSetStatus; y; ++n, y = (struct zx_prov_PMSetStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMSetStatus) */

struct zx_prov_PMSetStatus_s* zx_e_Body_GET_prov_PMSetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMSetStatus_s* y;
  if (!x) return 0;
  for (y = x->prov_PMSetStatus; n>=0 && y; --n, y = (struct zx_prov_PMSetStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMSetStatus) */

struct zx_prov_PMSetStatus_s* zx_e_Body_POP_prov_PMSetStatus(struct zx_e_Body_s* x)
{
  struct zx_prov_PMSetStatus_s* y;
  if (!x) return 0;
  y = x->prov_PMSetStatus;
  if (y)
    x->prov_PMSetStatus = (struct zx_prov_PMSetStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMSetStatus) */

void zx_e_Body_PUSH_prov_PMSetStatus(struct zx_e_Body_s* x, struct zx_prov_PMSetStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMSetStatus->gg.g;
  x->prov_PMSetStatus = z;
}

/* FUNC(zx_e_Body_REV_prov_PMSetStatus) */

void zx_e_Body_REV_prov_PMSetStatus(struct zx_e_Body_s* x)
{
  struct zx_prov_PMSetStatus_s* nxt;
  struct zx_prov_PMSetStatus_s* y;
  if (!x) return;
  y = x->prov_PMSetStatus;
  if (!y) return;
  x->prov_PMSetStatus = 0;
  while (y) {
    nxt = (struct zx_prov_PMSetStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMSetStatus->gg.g;
    x->prov_PMSetStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMSetStatus) */

void zx_e_Body_PUT_prov_PMSetStatus(struct zx_e_Body_s* x, int n, struct zx_prov_PMSetStatus_s* z)
{
  struct zx_prov_PMSetStatus_s* y;
  if (!x || !z) return;
  y = x->prov_PMSetStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMSetStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMSetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMSetStatus) */

void zx_e_Body_ADD_prov_PMSetStatus(struct zx_e_Body_s* x, int n, struct zx_prov_PMSetStatus_s* z)
{
  struct zx_prov_PMSetStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMSetStatus->gg.g;
    x->prov_PMSetStatus = z;
    return;
  case -1:
    y = x->prov_PMSetStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMSetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMSetStatus; n > 1 && y; --n, y = (struct zx_prov_PMSetStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMSetStatus) */

void zx_e_Body_DEL_prov_PMSetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMSetStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMSetStatus = (struct zx_prov_PMSetStatus_s*)x->prov_PMSetStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMSetStatus_s*)x->prov_PMSetStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMSetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMSetStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMSetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMSetStatusResponse) */

int zx_e_Body_NUM_prov_PMSetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMSetStatusResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMSetStatusResponse; y; ++n, y = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMSetStatusResponse) */

struct zx_prov_PMSetStatusResponse_s* zx_e_Body_GET_prov_PMSetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMSetStatusResponse_s* y;
  if (!x) return 0;
  for (y = x->prov_PMSetStatusResponse; n>=0 && y; --n, y = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMSetStatusResponse) */

struct zx_prov_PMSetStatusResponse_s* zx_e_Body_POP_prov_PMSetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMSetStatusResponse_s* y;
  if (!x) return 0;
  y = x->prov_PMSetStatusResponse;
  if (y)
    x->prov_PMSetStatusResponse = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMSetStatusResponse) */

void zx_e_Body_PUSH_prov_PMSetStatusResponse(struct zx_e_Body_s* x, struct zx_prov_PMSetStatusResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMSetStatusResponse->gg.g;
  x->prov_PMSetStatusResponse = z;
}

/* FUNC(zx_e_Body_REV_prov_PMSetStatusResponse) */

void zx_e_Body_REV_prov_PMSetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMSetStatusResponse_s* nxt;
  struct zx_prov_PMSetStatusResponse_s* y;
  if (!x) return;
  y = x->prov_PMSetStatusResponse;
  if (!y) return;
  x->prov_PMSetStatusResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMSetStatusResponse->gg.g;
    x->prov_PMSetStatusResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMSetStatusResponse) */

void zx_e_Body_PUT_prov_PMSetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMSetStatusResponse_s* z)
{
  struct zx_prov_PMSetStatusResponse_s* y;
  if (!x || !z) return;
  y = x->prov_PMSetStatusResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMSetStatusResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMSetStatusResponse) */

void zx_e_Body_ADD_prov_PMSetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMSetStatusResponse_s* z)
{
  struct zx_prov_PMSetStatusResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMSetStatusResponse->gg.g;
    x->prov_PMSetStatusResponse = z;
    return;
  case -1:
    y = x->prov_PMSetStatusResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMSetStatusResponse; n > 1 && y; --n, y = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMSetStatusResponse) */

void zx_e_Body_DEL_prov_PMSetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMSetStatusResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMSetStatusResponse = (struct zx_prov_PMSetStatusResponse_s*)x->prov_PMSetStatusResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMSetStatusResponse_s*)x->prov_PMSetStatusResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMSetStatusResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMSetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMGetDescriptor) */

int zx_e_Body_NUM_PMGetDescriptor(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMGetDescriptor; y; ++n, y = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMGetDescriptor) */

struct zx_prov_PMGetDescriptor_s* zx_e_Body_GET_PMGetDescriptor(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMGetDescriptor_s* y;
  if (!x) return 0;
  for (y = x->PMGetDescriptor; n>=0 && y; --n, y = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMGetDescriptor) */

struct zx_prov_PMGetDescriptor_s* zx_e_Body_POP_PMGetDescriptor(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetDescriptor_s* y;
  if (!x) return 0;
  y = x->PMGetDescriptor;
  if (y)
    x->PMGetDescriptor = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMGetDescriptor) */

void zx_e_Body_PUSH_PMGetDescriptor(struct zx_e_Body_s* x, struct zx_prov_PMGetDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMGetDescriptor->gg.g;
  x->PMGetDescriptor = z;
}

/* FUNC(zx_e_Body_REV_PMGetDescriptor) */

void zx_e_Body_REV_PMGetDescriptor(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetDescriptor_s* nxt;
  struct zx_prov_PMGetDescriptor_s* y;
  if (!x) return;
  y = x->PMGetDescriptor;
  if (!y) return;
  x->PMGetDescriptor = 0;
  while (y) {
    nxt = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->PMGetDescriptor->gg.g;
    x->PMGetDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMGetDescriptor) */

void zx_e_Body_PUT_PMGetDescriptor(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetDescriptor_s* z)
{
  struct zx_prov_PMGetDescriptor_s* y;
  if (!x || !z) return;
  y = x->PMGetDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMGetDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMGetDescriptor) */

void zx_e_Body_ADD_PMGetDescriptor(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetDescriptor_s* z)
{
  struct zx_prov_PMGetDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMGetDescriptor->gg.g;
    x->PMGetDescriptor = z;
    return;
  case -1:
    y = x->PMGetDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMGetDescriptor; n > 1 && y; --n, y = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMGetDescriptor) */

void zx_e_Body_DEL_PMGetDescriptor(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMGetDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMGetDescriptor = (struct zx_prov_PMGetDescriptor_s*)x->PMGetDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMGetDescriptor_s*)x->PMGetDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMGetDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMGetDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMGetDescriptorResponse) */

int zx_e_Body_NUM_PMGetDescriptorResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetDescriptorResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMGetDescriptorResponse; y; ++n, y = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMGetDescriptorResponse) */

struct zx_prov_PMGetDescriptorResponse_s* zx_e_Body_GET_PMGetDescriptorResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMGetDescriptorResponse_s* y;
  if (!x) return 0;
  for (y = x->PMGetDescriptorResponse; n>=0 && y; --n, y = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMGetDescriptorResponse) */

struct zx_prov_PMGetDescriptorResponse_s* zx_e_Body_POP_PMGetDescriptorResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetDescriptorResponse_s* y;
  if (!x) return 0;
  y = x->PMGetDescriptorResponse;
  if (y)
    x->PMGetDescriptorResponse = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMGetDescriptorResponse) */

void zx_e_Body_PUSH_PMGetDescriptorResponse(struct zx_e_Body_s* x, struct zx_prov_PMGetDescriptorResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMGetDescriptorResponse->gg.g;
  x->PMGetDescriptorResponse = z;
}

/* FUNC(zx_e_Body_REV_PMGetDescriptorResponse) */

void zx_e_Body_REV_PMGetDescriptorResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMGetDescriptorResponse_s* nxt;
  struct zx_prov_PMGetDescriptorResponse_s* y;
  if (!x) return;
  y = x->PMGetDescriptorResponse;
  if (!y) return;
  x->PMGetDescriptorResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMGetDescriptorResponse->gg.g;
    x->PMGetDescriptorResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMGetDescriptorResponse) */

void zx_e_Body_PUT_PMGetDescriptorResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetDescriptorResponse_s* z)
{
  struct zx_prov_PMGetDescriptorResponse_s* y;
  if (!x || !z) return;
  y = x->PMGetDescriptorResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMGetDescriptorResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMGetDescriptorResponse) */

void zx_e_Body_ADD_PMGetDescriptorResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMGetDescriptorResponse_s* z)
{
  struct zx_prov_PMGetDescriptorResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMGetDescriptorResponse->gg.g;
    x->PMGetDescriptorResponse = z;
    return;
  case -1:
    y = x->PMGetDescriptorResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMGetDescriptorResponse; n > 1 && y; --n, y = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMGetDescriptorResponse) */

void zx_e_Body_DEL_PMGetDescriptorResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMGetDescriptorResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMGetDescriptorResponse = (struct zx_prov_PMGetDescriptorResponse_s*)x->PMGetDescriptorResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMGetDescriptorResponse_s*)x->PMGetDescriptorResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMGetDescriptorResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMGetDescriptorResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMActivate) */

int zx_e_Body_NUM_prov_PMActivate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMActivate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMActivate; y; ++n, y = (struct zx_prov_PMActivate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMActivate) */

struct zx_prov_PMActivate_s* zx_e_Body_GET_prov_PMActivate(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMActivate_s* y;
  if (!x) return 0;
  for (y = x->prov_PMActivate; n>=0 && y; --n, y = (struct zx_prov_PMActivate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMActivate) */

struct zx_prov_PMActivate_s* zx_e_Body_POP_prov_PMActivate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMActivate_s* y;
  if (!x) return 0;
  y = x->prov_PMActivate;
  if (y)
    x->prov_PMActivate = (struct zx_prov_PMActivate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMActivate) */

void zx_e_Body_PUSH_prov_PMActivate(struct zx_e_Body_s* x, struct zx_prov_PMActivate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMActivate->gg.g;
  x->prov_PMActivate = z;
}

/* FUNC(zx_e_Body_REV_prov_PMActivate) */

void zx_e_Body_REV_prov_PMActivate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMActivate_s* nxt;
  struct zx_prov_PMActivate_s* y;
  if (!x) return;
  y = x->prov_PMActivate;
  if (!y) return;
  x->prov_PMActivate = 0;
  while (y) {
    nxt = (struct zx_prov_PMActivate_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMActivate->gg.g;
    x->prov_PMActivate = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMActivate) */

void zx_e_Body_PUT_prov_PMActivate(struct zx_e_Body_s* x, int n, struct zx_prov_PMActivate_s* z)
{
  struct zx_prov_PMActivate_s* y;
  if (!x || !z) return;
  y = x->prov_PMActivate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMActivate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMActivate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMActivate) */

void zx_e_Body_ADD_prov_PMActivate(struct zx_e_Body_s* x, int n, struct zx_prov_PMActivate_s* z)
{
  struct zx_prov_PMActivate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMActivate->gg.g;
    x->prov_PMActivate = z;
    return;
  case -1:
    y = x->prov_PMActivate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMActivate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMActivate; n > 1 && y; --n, y = (struct zx_prov_PMActivate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMActivate) */

void zx_e_Body_DEL_prov_PMActivate(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMActivate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMActivate = (struct zx_prov_PMActivate_s*)x->prov_PMActivate->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMActivate_s*)x->prov_PMActivate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMActivate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMActivate; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMActivate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMActivateResponse) */

int zx_e_Body_NUM_prov_PMActivateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMActivateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMActivateResponse; y; ++n, y = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMActivateResponse) */

struct zx_prov_PMActivateResponse_s* zx_e_Body_GET_prov_PMActivateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMActivateResponse_s* y;
  if (!x) return 0;
  for (y = x->prov_PMActivateResponse; n>=0 && y; --n, y = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMActivateResponse) */

struct zx_prov_PMActivateResponse_s* zx_e_Body_POP_prov_PMActivateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMActivateResponse_s* y;
  if (!x) return 0;
  y = x->prov_PMActivateResponse;
  if (y)
    x->prov_PMActivateResponse = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMActivateResponse) */

void zx_e_Body_PUSH_prov_PMActivateResponse(struct zx_e_Body_s* x, struct zx_prov_PMActivateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMActivateResponse->gg.g;
  x->prov_PMActivateResponse = z;
}

/* FUNC(zx_e_Body_REV_prov_PMActivateResponse) */

void zx_e_Body_REV_prov_PMActivateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMActivateResponse_s* nxt;
  struct zx_prov_PMActivateResponse_s* y;
  if (!x) return;
  y = x->prov_PMActivateResponse;
  if (!y) return;
  x->prov_PMActivateResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMActivateResponse->gg.g;
    x->prov_PMActivateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMActivateResponse) */

void zx_e_Body_PUT_prov_PMActivateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMActivateResponse_s* z)
{
  struct zx_prov_PMActivateResponse_s* y;
  if (!x || !z) return;
  y = x->prov_PMActivateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMActivateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMActivateResponse) */

void zx_e_Body_ADD_prov_PMActivateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMActivateResponse_s* z)
{
  struct zx_prov_PMActivateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMActivateResponse->gg.g;
    x->prov_PMActivateResponse = z;
    return;
  case -1:
    y = x->prov_PMActivateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMActivateResponse; n > 1 && y; --n, y = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMActivateResponse) */

void zx_e_Body_DEL_prov_PMActivateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMActivateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMActivateResponse = (struct zx_prov_PMActivateResponse_s*)x->prov_PMActivateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMActivateResponse_s*)x->prov_PMActivateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMActivateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMActivateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMDeactivate) */

int zx_e_Body_NUM_prov_PMDeactivate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeactivate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMDeactivate; y; ++n, y = (struct zx_prov_PMDeactivate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMDeactivate) */

struct zx_prov_PMDeactivate_s* zx_e_Body_GET_prov_PMDeactivate(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMDeactivate_s* y;
  if (!x) return 0;
  for (y = x->prov_PMDeactivate; n>=0 && y; --n, y = (struct zx_prov_PMDeactivate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMDeactivate) */

struct zx_prov_PMDeactivate_s* zx_e_Body_POP_prov_PMDeactivate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeactivate_s* y;
  if (!x) return 0;
  y = x->prov_PMDeactivate;
  if (y)
    x->prov_PMDeactivate = (struct zx_prov_PMDeactivate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMDeactivate) */

void zx_e_Body_PUSH_prov_PMDeactivate(struct zx_e_Body_s* x, struct zx_prov_PMDeactivate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMDeactivate->gg.g;
  x->prov_PMDeactivate = z;
}

/* FUNC(zx_e_Body_REV_prov_PMDeactivate) */

void zx_e_Body_REV_prov_PMDeactivate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeactivate_s* nxt;
  struct zx_prov_PMDeactivate_s* y;
  if (!x) return;
  y = x->prov_PMDeactivate;
  if (!y) return;
  x->prov_PMDeactivate = 0;
  while (y) {
    nxt = (struct zx_prov_PMDeactivate_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMDeactivate->gg.g;
    x->prov_PMDeactivate = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMDeactivate) */

void zx_e_Body_PUT_prov_PMDeactivate(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeactivate_s* z)
{
  struct zx_prov_PMDeactivate_s* y;
  if (!x || !z) return;
  y = x->prov_PMDeactivate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMDeactivate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeactivate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMDeactivate) */

void zx_e_Body_ADD_prov_PMDeactivate(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeactivate_s* z)
{
  struct zx_prov_PMDeactivate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMDeactivate->gg.g;
    x->prov_PMDeactivate = z;
    return;
  case -1:
    y = x->prov_PMDeactivate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeactivate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMDeactivate; n > 1 && y; --n, y = (struct zx_prov_PMDeactivate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMDeactivate) */

void zx_e_Body_DEL_prov_PMDeactivate(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMDeactivate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMDeactivate = (struct zx_prov_PMDeactivate_s*)x->prov_PMDeactivate->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDeactivate_s*)x->prov_PMDeactivate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeactivate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMDeactivate; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeactivate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMDeactivateResponse) */

int zx_e_Body_NUM_prov_PMDeactivateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeactivateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMDeactivateResponse; y; ++n, y = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMDeactivateResponse) */

struct zx_prov_PMDeactivateResponse_s* zx_e_Body_GET_prov_PMDeactivateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMDeactivateResponse_s* y;
  if (!x) return 0;
  for (y = x->prov_PMDeactivateResponse; n>=0 && y; --n, y = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMDeactivateResponse) */

struct zx_prov_PMDeactivateResponse_s* zx_e_Body_POP_prov_PMDeactivateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeactivateResponse_s* y;
  if (!x) return 0;
  y = x->prov_PMDeactivateResponse;
  if (y)
    x->prov_PMDeactivateResponse = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMDeactivateResponse) */

void zx_e_Body_PUSH_prov_PMDeactivateResponse(struct zx_e_Body_s* x, struct zx_prov_PMDeactivateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMDeactivateResponse->gg.g;
  x->prov_PMDeactivateResponse = z;
}

/* FUNC(zx_e_Body_REV_prov_PMDeactivateResponse) */

void zx_e_Body_REV_prov_PMDeactivateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeactivateResponse_s* nxt;
  struct zx_prov_PMDeactivateResponse_s* y;
  if (!x) return;
  y = x->prov_PMDeactivateResponse;
  if (!y) return;
  x->prov_PMDeactivateResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMDeactivateResponse->gg.g;
    x->prov_PMDeactivateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMDeactivateResponse) */

void zx_e_Body_PUT_prov_PMDeactivateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeactivateResponse_s* z)
{
  struct zx_prov_PMDeactivateResponse_s* y;
  if (!x || !z) return;
  y = x->prov_PMDeactivateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMDeactivateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMDeactivateResponse) */

void zx_e_Body_ADD_prov_PMDeactivateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeactivateResponse_s* z)
{
  struct zx_prov_PMDeactivateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMDeactivateResponse->gg.g;
    x->prov_PMDeactivateResponse = z;
    return;
  case -1:
    y = x->prov_PMDeactivateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMDeactivateResponse; n > 1 && y; --n, y = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMDeactivateResponse) */

void zx_e_Body_DEL_prov_PMDeactivateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMDeactivateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMDeactivateResponse = (struct zx_prov_PMDeactivateResponse_s*)x->prov_PMDeactivateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDeactivateResponse_s*)x->prov_PMDeactivateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMDeactivateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeactivateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMRegisterDescriptor) */

int zx_e_Body_NUM_PMRegisterDescriptor(struct zx_e_Body_s* x)
{
  struct zx_prov_PMRegisterDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMRegisterDescriptor; y; ++n, y = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMRegisterDescriptor) */

struct zx_prov_PMRegisterDescriptor_s* zx_e_Body_GET_PMRegisterDescriptor(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMRegisterDescriptor_s* y;
  if (!x) return 0;
  for (y = x->PMRegisterDescriptor; n>=0 && y; --n, y = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMRegisterDescriptor) */

struct zx_prov_PMRegisterDescriptor_s* zx_e_Body_POP_PMRegisterDescriptor(struct zx_e_Body_s* x)
{
  struct zx_prov_PMRegisterDescriptor_s* y;
  if (!x) return 0;
  y = x->PMRegisterDescriptor;
  if (y)
    x->PMRegisterDescriptor = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMRegisterDescriptor) */

void zx_e_Body_PUSH_PMRegisterDescriptor(struct zx_e_Body_s* x, struct zx_prov_PMRegisterDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMRegisterDescriptor->gg.g;
  x->PMRegisterDescriptor = z;
}

/* FUNC(zx_e_Body_REV_PMRegisterDescriptor) */

void zx_e_Body_REV_PMRegisterDescriptor(struct zx_e_Body_s* x)
{
  struct zx_prov_PMRegisterDescriptor_s* nxt;
  struct zx_prov_PMRegisterDescriptor_s* y;
  if (!x) return;
  y = x->PMRegisterDescriptor;
  if (!y) return;
  x->PMRegisterDescriptor = 0;
  while (y) {
    nxt = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->PMRegisterDescriptor->gg.g;
    x->PMRegisterDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMRegisterDescriptor) */

void zx_e_Body_PUT_PMRegisterDescriptor(struct zx_e_Body_s* x, int n, struct zx_prov_PMRegisterDescriptor_s* z)
{
  struct zx_prov_PMRegisterDescriptor_s* y;
  if (!x || !z) return;
  y = x->PMRegisterDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMRegisterDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMRegisterDescriptor) */

void zx_e_Body_ADD_PMRegisterDescriptor(struct zx_e_Body_s* x, int n, struct zx_prov_PMRegisterDescriptor_s* z)
{
  struct zx_prov_PMRegisterDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMRegisterDescriptor->gg.g;
    x->PMRegisterDescriptor = z;
    return;
  case -1:
    y = x->PMRegisterDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMRegisterDescriptor; n > 1 && y; --n, y = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMRegisterDescriptor) */

void zx_e_Body_DEL_PMRegisterDescriptor(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMRegisterDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMRegisterDescriptor = (struct zx_prov_PMRegisterDescriptor_s*)x->PMRegisterDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMRegisterDescriptor_s*)x->PMRegisterDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMRegisterDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMRegisterDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PMRegisterDescriptorResponse) */

int zx_e_Body_NUM_PMRegisterDescriptorResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMRegisterDescriptorResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PMRegisterDescriptorResponse; y; ++n, y = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PMRegisterDescriptorResponse) */

struct zx_prov_PMRegisterDescriptorResponse_s* zx_e_Body_GET_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMRegisterDescriptorResponse_s* y;
  if (!x) return 0;
  for (y = x->PMRegisterDescriptorResponse; n>=0 && y; --n, y = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PMRegisterDescriptorResponse) */

struct zx_prov_PMRegisterDescriptorResponse_s* zx_e_Body_POP_PMRegisterDescriptorResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMRegisterDescriptorResponse_s* y;
  if (!x) return 0;
  y = x->PMRegisterDescriptorResponse;
  if (y)
    x->PMRegisterDescriptorResponse = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PMRegisterDescriptorResponse) */

void zx_e_Body_PUSH_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, struct zx_prov_PMRegisterDescriptorResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PMRegisterDescriptorResponse->gg.g;
  x->PMRegisterDescriptorResponse = z;
}

/* FUNC(zx_e_Body_REV_PMRegisterDescriptorResponse) */

void zx_e_Body_REV_PMRegisterDescriptorResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMRegisterDescriptorResponse_s* nxt;
  struct zx_prov_PMRegisterDescriptorResponse_s* y;
  if (!x) return;
  y = x->PMRegisterDescriptorResponse;
  if (!y) return;
  x->PMRegisterDescriptorResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PMRegisterDescriptorResponse->gg.g;
    x->PMRegisterDescriptorResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PMRegisterDescriptorResponse) */

void zx_e_Body_PUT_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMRegisterDescriptorResponse_s* z)
{
  struct zx_prov_PMRegisterDescriptorResponse_s* y;
  if (!x || !z) return;
  y = x->PMRegisterDescriptorResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PMRegisterDescriptorResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PMRegisterDescriptorResponse) */

void zx_e_Body_ADD_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMRegisterDescriptorResponse_s* z)
{
  struct zx_prov_PMRegisterDescriptorResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PMRegisterDescriptorResponse->gg.g;
    x->PMRegisterDescriptorResponse = z;
    return;
  case -1:
    y = x->PMRegisterDescriptorResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMRegisterDescriptorResponse; n > 1 && y; --n, y = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PMRegisterDescriptorResponse) */

void zx_e_Body_DEL_PMRegisterDescriptorResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMRegisterDescriptorResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PMRegisterDescriptorResponse = (struct zx_prov_PMRegisterDescriptorResponse_s*)x->PMRegisterDescriptorResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMRegisterDescriptorResponse_s*)x->PMRegisterDescriptorResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PMRegisterDescriptorResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMRegisterDescriptorResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMUpdate) */

int zx_e_Body_NUM_prov_PMUpdate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMUpdate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMUpdate; y; ++n, y = (struct zx_prov_PMUpdate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMUpdate) */

struct zx_prov_PMUpdate_s* zx_e_Body_GET_prov_PMUpdate(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMUpdate_s* y;
  if (!x) return 0;
  for (y = x->prov_PMUpdate; n>=0 && y; --n, y = (struct zx_prov_PMUpdate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMUpdate) */

struct zx_prov_PMUpdate_s* zx_e_Body_POP_prov_PMUpdate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMUpdate_s* y;
  if (!x) return 0;
  y = x->prov_PMUpdate;
  if (y)
    x->prov_PMUpdate = (struct zx_prov_PMUpdate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMUpdate) */

void zx_e_Body_PUSH_prov_PMUpdate(struct zx_e_Body_s* x, struct zx_prov_PMUpdate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMUpdate->gg.g;
  x->prov_PMUpdate = z;
}

/* FUNC(zx_e_Body_REV_prov_PMUpdate) */

void zx_e_Body_REV_prov_PMUpdate(struct zx_e_Body_s* x)
{
  struct zx_prov_PMUpdate_s* nxt;
  struct zx_prov_PMUpdate_s* y;
  if (!x) return;
  y = x->prov_PMUpdate;
  if (!y) return;
  x->prov_PMUpdate = 0;
  while (y) {
    nxt = (struct zx_prov_PMUpdate_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMUpdate->gg.g;
    x->prov_PMUpdate = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMUpdate) */

void zx_e_Body_PUT_prov_PMUpdate(struct zx_e_Body_s* x, int n, struct zx_prov_PMUpdate_s* z)
{
  struct zx_prov_PMUpdate_s* y;
  if (!x || !z) return;
  y = x->prov_PMUpdate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMUpdate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMUpdate) */

void zx_e_Body_ADD_prov_PMUpdate(struct zx_e_Body_s* x, int n, struct zx_prov_PMUpdate_s* z)
{
  struct zx_prov_PMUpdate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMUpdate->gg.g;
    x->prov_PMUpdate = z;
    return;
  case -1:
    y = x->prov_PMUpdate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMUpdate; n > 1 && y; --n, y = (struct zx_prov_PMUpdate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMUpdate) */

void zx_e_Body_DEL_prov_PMUpdate(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMUpdate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMUpdate = (struct zx_prov_PMUpdate_s*)x->prov_PMUpdate->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMUpdate_s*)x->prov_PMUpdate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMUpdate; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMUpdateResponse) */

int zx_e_Body_NUM_prov_PMUpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMUpdateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMUpdateResponse; y; ++n, y = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMUpdateResponse) */

struct zx_prov_PMUpdateResponse_s* zx_e_Body_GET_prov_PMUpdateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMUpdateResponse_s* y;
  if (!x) return 0;
  for (y = x->prov_PMUpdateResponse; n>=0 && y; --n, y = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMUpdateResponse) */

struct zx_prov_PMUpdateResponse_s* zx_e_Body_POP_prov_PMUpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMUpdateResponse_s* y;
  if (!x) return 0;
  y = x->prov_PMUpdateResponse;
  if (y)
    x->prov_PMUpdateResponse = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMUpdateResponse) */

void zx_e_Body_PUSH_prov_PMUpdateResponse(struct zx_e_Body_s* x, struct zx_prov_PMUpdateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMUpdateResponse->gg.g;
  x->prov_PMUpdateResponse = z;
}

/* FUNC(zx_e_Body_REV_prov_PMUpdateResponse) */

void zx_e_Body_REV_prov_PMUpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMUpdateResponse_s* nxt;
  struct zx_prov_PMUpdateResponse_s* y;
  if (!x) return;
  y = x->prov_PMUpdateResponse;
  if (!y) return;
  x->prov_PMUpdateResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMUpdateResponse->gg.g;
    x->prov_PMUpdateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMUpdateResponse) */

void zx_e_Body_PUT_prov_PMUpdateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMUpdateResponse_s* z)
{
  struct zx_prov_PMUpdateResponse_s* y;
  if (!x || !z) return;
  y = x->prov_PMUpdateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMUpdateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMUpdateResponse) */

void zx_e_Body_ADD_prov_PMUpdateResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMUpdateResponse_s* z)
{
  struct zx_prov_PMUpdateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMUpdateResponse->gg.g;
    x->prov_PMUpdateResponse = z;
    return;
  case -1:
    y = x->prov_PMUpdateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMUpdateResponse; n > 1 && y; --n, y = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMUpdateResponse) */

void zx_e_Body_DEL_prov_PMUpdateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMUpdateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMUpdateResponse = (struct zx_prov_PMUpdateResponse_s*)x->prov_PMUpdateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMUpdateResponse_s*)x->prov_PMUpdateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMUpdateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMUpdateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMDelete) */

int zx_e_Body_NUM_prov_PMDelete(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDelete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMDelete; y; ++n, y = (struct zx_prov_PMDelete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMDelete) */

struct zx_prov_PMDelete_s* zx_e_Body_GET_prov_PMDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMDelete_s* y;
  if (!x) return 0;
  for (y = x->prov_PMDelete; n>=0 && y; --n, y = (struct zx_prov_PMDelete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMDelete) */

struct zx_prov_PMDelete_s* zx_e_Body_POP_prov_PMDelete(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDelete_s* y;
  if (!x) return 0;
  y = x->prov_PMDelete;
  if (y)
    x->prov_PMDelete = (struct zx_prov_PMDelete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMDelete) */

void zx_e_Body_PUSH_prov_PMDelete(struct zx_e_Body_s* x, struct zx_prov_PMDelete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMDelete->gg.g;
  x->prov_PMDelete = z;
}

/* FUNC(zx_e_Body_REV_prov_PMDelete) */

void zx_e_Body_REV_prov_PMDelete(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDelete_s* nxt;
  struct zx_prov_PMDelete_s* y;
  if (!x) return;
  y = x->prov_PMDelete;
  if (!y) return;
  x->prov_PMDelete = 0;
  while (y) {
    nxt = (struct zx_prov_PMDelete_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMDelete->gg.g;
    x->prov_PMDelete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMDelete) */

void zx_e_Body_PUT_prov_PMDelete(struct zx_e_Body_s* x, int n, struct zx_prov_PMDelete_s* z)
{
  struct zx_prov_PMDelete_s* y;
  if (!x || !z) return;
  y = x->prov_PMDelete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMDelete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMDelete) */

void zx_e_Body_ADD_prov_PMDelete(struct zx_e_Body_s* x, int n, struct zx_prov_PMDelete_s* z)
{
  struct zx_prov_PMDelete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMDelete->gg.g;
    x->prov_PMDelete = z;
    return;
  case -1:
    y = x->prov_PMDelete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMDelete; n > 1 && y; --n, y = (struct zx_prov_PMDelete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMDelete) */

void zx_e_Body_DEL_prov_PMDelete(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMDelete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMDelete = (struct zx_prov_PMDelete_s*)x->prov_PMDelete->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDelete_s*)x->prov_PMDelete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDelete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMDelete; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDelete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_prov_PMDeleteResponse) */

int zx_e_Body_NUM_prov_PMDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->prov_PMDeleteResponse; y; ++n, y = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_prov_PMDeleteResponse) */

struct zx_prov_PMDeleteResponse_s* zx_e_Body_GET_prov_PMDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMDeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->prov_PMDeleteResponse; n>=0 && y; --n, y = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_prov_PMDeleteResponse) */

struct zx_prov_PMDeleteResponse_s* zx_e_Body_POP_prov_PMDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeleteResponse_s* y;
  if (!x) return 0;
  y = x->prov_PMDeleteResponse;
  if (y)
    x->prov_PMDeleteResponse = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_prov_PMDeleteResponse) */

void zx_e_Body_PUSH_prov_PMDeleteResponse(struct zx_e_Body_s* x, struct zx_prov_PMDeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->prov_PMDeleteResponse->gg.g;
  x->prov_PMDeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_prov_PMDeleteResponse) */

void zx_e_Body_REV_prov_PMDeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PMDeleteResponse_s* nxt;
  struct zx_prov_PMDeleteResponse_s* y;
  if (!x) return;
  y = x->prov_PMDeleteResponse;
  if (!y) return;
  x->prov_PMDeleteResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->prov_PMDeleteResponse->gg.g;
    x->prov_PMDeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_prov_PMDeleteResponse) */

void zx_e_Body_PUT_prov_PMDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeleteResponse_s* z)
{
  struct zx_prov_PMDeleteResponse_s* y;
  if (!x || !z) return;
  y = x->prov_PMDeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->prov_PMDeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_prov_PMDeleteResponse) */

void zx_e_Body_ADD_prov_PMDeleteResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PMDeleteResponse_s* z)
{
  struct zx_prov_PMDeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->prov_PMDeleteResponse->gg.g;
    x->prov_PMDeleteResponse = z;
    return;
  case -1:
    y = x->prov_PMDeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMDeleteResponse; n > 1 && y; --n, y = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_prov_PMDeleteResponse) */

void zx_e_Body_DEL_prov_PMDeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PMDeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->prov_PMDeleteResponse = (struct zx_prov_PMDeleteResponse_s*)x->prov_PMDeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PMDeleteResponse_s*)x->prov_PMDeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->prov_PMDeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PMDeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Poll) */

int zx_e_Body_NUM_Poll(struct zx_e_Body_s* x)
{
  struct zx_prov_Poll_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Poll; y; ++n, y = (struct zx_prov_Poll_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Poll) */

struct zx_prov_Poll_s* zx_e_Body_GET_Poll(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_Poll_s* y;
  if (!x) return 0;
  for (y = x->Poll; n>=0 && y; --n, y = (struct zx_prov_Poll_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Poll) */

struct zx_prov_Poll_s* zx_e_Body_POP_Poll(struct zx_e_Body_s* x)
{
  struct zx_prov_Poll_s* y;
  if (!x) return 0;
  y = x->Poll;
  if (y)
    x->Poll = (struct zx_prov_Poll_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Poll) */

void zx_e_Body_PUSH_Poll(struct zx_e_Body_s* x, struct zx_prov_Poll_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Poll->gg.g;
  x->Poll = z;
}

/* FUNC(zx_e_Body_REV_Poll) */

void zx_e_Body_REV_Poll(struct zx_e_Body_s* x)
{
  struct zx_prov_Poll_s* nxt;
  struct zx_prov_Poll_s* y;
  if (!x) return;
  y = x->Poll;
  if (!y) return;
  x->Poll = 0;
  while (y) {
    nxt = (struct zx_prov_Poll_s*)y->gg.g.n;
    y->gg.g.n = &x->Poll->gg.g;
    x->Poll = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Poll) */

void zx_e_Body_PUT_Poll(struct zx_e_Body_s* x, int n, struct zx_prov_Poll_s* z)
{
  struct zx_prov_Poll_s* y;
  if (!x || !z) return;
  y = x->Poll;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Poll = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_Poll_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Poll) */

void zx_e_Body_ADD_Poll(struct zx_e_Body_s* x, int n, struct zx_prov_Poll_s* z)
{
  struct zx_prov_Poll_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Poll->gg.g;
    x->Poll = z;
    return;
  case -1:
    y = x->Poll;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_Poll_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Poll; n > 1 && y; --n, y = (struct zx_prov_Poll_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Poll) */

void zx_e_Body_DEL_Poll(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_Poll_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Poll = (struct zx_prov_Poll_s*)x->Poll->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_Poll_s*)x->Poll;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_Poll_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Poll; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_Poll_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_PollResponse) */

int zx_e_Body_NUM_PollResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PollResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->PollResponse; y; ++n, y = (struct zx_prov_PollResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_PollResponse) */

struct zx_prov_PollResponse_s* zx_e_Body_GET_PollResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PollResponse_s* y;
  if (!x) return 0;
  for (y = x->PollResponse; n>=0 && y; --n, y = (struct zx_prov_PollResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_PollResponse) */

struct zx_prov_PollResponse_s* zx_e_Body_POP_PollResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PollResponse_s* y;
  if (!x) return 0;
  y = x->PollResponse;
  if (y)
    x->PollResponse = (struct zx_prov_PollResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_PollResponse) */

void zx_e_Body_PUSH_PollResponse(struct zx_e_Body_s* x, struct zx_prov_PollResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->PollResponse->gg.g;
  x->PollResponse = z;
}

/* FUNC(zx_e_Body_REV_PollResponse) */

void zx_e_Body_REV_PollResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_PollResponse_s* nxt;
  struct zx_prov_PollResponse_s* y;
  if (!x) return;
  y = x->PollResponse;
  if (!y) return;
  x->PollResponse = 0;
  while (y) {
    nxt = (struct zx_prov_PollResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->PollResponse->gg.g;
    x->PollResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_PollResponse) */

void zx_e_Body_PUT_PollResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PollResponse_s* z)
{
  struct zx_prov_PollResponse_s* y;
  if (!x || !z) return;
  y = x->PollResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->PollResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PollResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_PollResponse) */

void zx_e_Body_ADD_PollResponse(struct zx_e_Body_s* x, int n, struct zx_prov_PollResponse_s* z)
{
  struct zx_prov_PollResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->PollResponse->gg.g;
    x->PollResponse = z;
    return;
  case -1:
    y = x->PollResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_PollResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PollResponse; n > 1 && y; --n, y = (struct zx_prov_PollResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_PollResponse) */

void zx_e_Body_DEL_PollResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_PollResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->PollResponse = (struct zx_prov_PollResponse_s*)x->PollResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_PollResponse_s*)x->PollResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_PollResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->PollResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_PollResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_UpdateEPR) */

int zx_e_Body_NUM_UpdateEPR(struct zx_e_Body_s* x)
{
  struct zx_prov_UpdateEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UpdateEPR; y; ++n, y = (struct zx_prov_UpdateEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_UpdateEPR) */

struct zx_prov_UpdateEPR_s* zx_e_Body_GET_UpdateEPR(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_UpdateEPR_s* y;
  if (!x) return 0;
  for (y = x->UpdateEPR; n>=0 && y; --n, y = (struct zx_prov_UpdateEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_UpdateEPR) */

struct zx_prov_UpdateEPR_s* zx_e_Body_POP_UpdateEPR(struct zx_e_Body_s* x)
{
  struct zx_prov_UpdateEPR_s* y;
  if (!x) return 0;
  y = x->UpdateEPR;
  if (y)
    x->UpdateEPR = (struct zx_prov_UpdateEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_UpdateEPR) */

void zx_e_Body_PUSH_UpdateEPR(struct zx_e_Body_s* x, struct zx_prov_UpdateEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UpdateEPR->gg.g;
  x->UpdateEPR = z;
}

/* FUNC(zx_e_Body_REV_UpdateEPR) */

void zx_e_Body_REV_UpdateEPR(struct zx_e_Body_s* x)
{
  struct zx_prov_UpdateEPR_s* nxt;
  struct zx_prov_UpdateEPR_s* y;
  if (!x) return;
  y = x->UpdateEPR;
  if (!y) return;
  x->UpdateEPR = 0;
  while (y) {
    nxt = (struct zx_prov_UpdateEPR_s*)y->gg.g.n;
    y->gg.g.n = &x->UpdateEPR->gg.g;
    x->UpdateEPR = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_UpdateEPR) */

void zx_e_Body_PUT_UpdateEPR(struct zx_e_Body_s* x, int n, struct zx_prov_UpdateEPR_s* z)
{
  struct zx_prov_UpdateEPR_s* y;
  if (!x || !z) return;
  y = x->UpdateEPR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UpdateEPR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_UpdateEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_UpdateEPR) */

void zx_e_Body_ADD_UpdateEPR(struct zx_e_Body_s* x, int n, struct zx_prov_UpdateEPR_s* z)
{
  struct zx_prov_UpdateEPR_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UpdateEPR->gg.g;
    x->UpdateEPR = z;
    return;
  case -1:
    y = x->UpdateEPR;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_UpdateEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateEPR; n > 1 && y; --n, y = (struct zx_prov_UpdateEPR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_UpdateEPR) */

void zx_e_Body_DEL_UpdateEPR(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_UpdateEPR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UpdateEPR = (struct zx_prov_UpdateEPR_s*)x->UpdateEPR->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_UpdateEPR_s*)x->UpdateEPR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_UpdateEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateEPR; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_UpdateEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_UpdateEPRResponse) */

int zx_e_Body_NUM_UpdateEPRResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_UpdateEPRResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UpdateEPRResponse; y; ++n, y = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_UpdateEPRResponse) */

struct zx_prov_UpdateEPRResponse_s* zx_e_Body_GET_UpdateEPRResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_UpdateEPRResponse_s* y;
  if (!x) return 0;
  for (y = x->UpdateEPRResponse; n>=0 && y; --n, y = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_UpdateEPRResponse) */

struct zx_prov_UpdateEPRResponse_s* zx_e_Body_POP_UpdateEPRResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_UpdateEPRResponse_s* y;
  if (!x) return 0;
  y = x->UpdateEPRResponse;
  if (y)
    x->UpdateEPRResponse = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_UpdateEPRResponse) */

void zx_e_Body_PUSH_UpdateEPRResponse(struct zx_e_Body_s* x, struct zx_prov_UpdateEPRResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UpdateEPRResponse->gg.g;
  x->UpdateEPRResponse = z;
}

/* FUNC(zx_e_Body_REV_UpdateEPRResponse) */

void zx_e_Body_REV_UpdateEPRResponse(struct zx_e_Body_s* x)
{
  struct zx_prov_UpdateEPRResponse_s* nxt;
  struct zx_prov_UpdateEPRResponse_s* y;
  if (!x) return;
  y = x->UpdateEPRResponse;
  if (!y) return;
  x->UpdateEPRResponse = 0;
  while (y) {
    nxt = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->UpdateEPRResponse->gg.g;
    x->UpdateEPRResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_UpdateEPRResponse) */

void zx_e_Body_PUT_UpdateEPRResponse(struct zx_e_Body_s* x, int n, struct zx_prov_UpdateEPRResponse_s* z)
{
  struct zx_prov_UpdateEPRResponse_s* y;
  if (!x || !z) return;
  y = x->UpdateEPRResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UpdateEPRResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_UpdateEPRResponse) */

void zx_e_Body_ADD_UpdateEPRResponse(struct zx_e_Body_s* x, int n, struct zx_prov_UpdateEPRResponse_s* z)
{
  struct zx_prov_UpdateEPRResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UpdateEPRResponse->gg.g;
    x->UpdateEPRResponse = z;
    return;
  case -1:
    y = x->UpdateEPRResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateEPRResponse; n > 1 && y; --n, y = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_UpdateEPRResponse) */

void zx_e_Body_DEL_UpdateEPRResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_prov_UpdateEPRResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UpdateEPRResponse = (struct zx_prov_UpdateEPRResponse_s*)x->UpdateEPRResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_prov_UpdateEPRResponse_s*)x->UpdateEPRResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateEPRResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_prov_UpdateEPRResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetAssertion) */

int zx_e_Body_NUM_GetAssertion(struct zx_e_Body_s* x)
{
  struct zx_idp_GetAssertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetAssertion; y; ++n, y = (struct zx_idp_GetAssertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetAssertion) */

struct zx_idp_GetAssertion_s* zx_e_Body_GET_GetAssertion(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_GetAssertion_s* y;
  if (!x) return 0;
  for (y = x->GetAssertion; n>=0 && y; --n, y = (struct zx_idp_GetAssertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetAssertion) */

struct zx_idp_GetAssertion_s* zx_e_Body_POP_GetAssertion(struct zx_e_Body_s* x)
{
  struct zx_idp_GetAssertion_s* y;
  if (!x) return 0;
  y = x->GetAssertion;
  if (y)
    x->GetAssertion = (struct zx_idp_GetAssertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetAssertion) */

void zx_e_Body_PUSH_GetAssertion(struct zx_e_Body_s* x, struct zx_idp_GetAssertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetAssertion->gg.g;
  x->GetAssertion = z;
}

/* FUNC(zx_e_Body_REV_GetAssertion) */

void zx_e_Body_REV_GetAssertion(struct zx_e_Body_s* x)
{
  struct zx_idp_GetAssertion_s* nxt;
  struct zx_idp_GetAssertion_s* y;
  if (!x) return;
  y = x->GetAssertion;
  if (!y) return;
  x->GetAssertion = 0;
  while (y) {
    nxt = (struct zx_idp_GetAssertion_s*)y->gg.g.n;
    y->gg.g.n = &x->GetAssertion->gg.g;
    x->GetAssertion = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetAssertion) */

void zx_e_Body_PUT_GetAssertion(struct zx_e_Body_s* x, int n, struct zx_idp_GetAssertion_s* z)
{
  struct zx_idp_GetAssertion_s* y;
  if (!x || !z) return;
  y = x->GetAssertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetAssertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetAssertion) */

void zx_e_Body_ADD_GetAssertion(struct zx_e_Body_s* x, int n, struct zx_idp_GetAssertion_s* z)
{
  struct zx_idp_GetAssertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetAssertion->gg.g;
    x->GetAssertion = z;
    return;
  case -1:
    y = x->GetAssertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_GetAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetAssertion; n > 1 && y; --n, y = (struct zx_idp_GetAssertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetAssertion) */

void zx_e_Body_DEL_GetAssertion(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_GetAssertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetAssertion = (struct zx_idp_GetAssertion_s*)x->GetAssertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_GetAssertion_s*)x->GetAssertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_GetAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetAssertion; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetAssertionResponse) */

int zx_e_Body_NUM_GetAssertionResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_GetAssertionResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetAssertionResponse; y; ++n, y = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetAssertionResponse) */

struct zx_idp_GetAssertionResponse_s* zx_e_Body_GET_GetAssertionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_GetAssertionResponse_s* y;
  if (!x) return 0;
  for (y = x->GetAssertionResponse; n>=0 && y; --n, y = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetAssertionResponse) */

struct zx_idp_GetAssertionResponse_s* zx_e_Body_POP_GetAssertionResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_GetAssertionResponse_s* y;
  if (!x) return 0;
  y = x->GetAssertionResponse;
  if (y)
    x->GetAssertionResponse = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetAssertionResponse) */

void zx_e_Body_PUSH_GetAssertionResponse(struct zx_e_Body_s* x, struct zx_idp_GetAssertionResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetAssertionResponse->gg.g;
  x->GetAssertionResponse = z;
}

/* FUNC(zx_e_Body_REV_GetAssertionResponse) */

void zx_e_Body_REV_GetAssertionResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_GetAssertionResponse_s* nxt;
  struct zx_idp_GetAssertionResponse_s* y;
  if (!x) return;
  y = x->GetAssertionResponse;
  if (!y) return;
  x->GetAssertionResponse = 0;
  while (y) {
    nxt = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->GetAssertionResponse->gg.g;
    x->GetAssertionResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetAssertionResponse) */

void zx_e_Body_PUT_GetAssertionResponse(struct zx_e_Body_s* x, int n, struct zx_idp_GetAssertionResponse_s* z)
{
  struct zx_idp_GetAssertionResponse_s* y;
  if (!x || !z) return;
  y = x->GetAssertionResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetAssertionResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetAssertionResponse) */

void zx_e_Body_ADD_GetAssertionResponse(struct zx_e_Body_s* x, int n, struct zx_idp_GetAssertionResponse_s* z)
{
  struct zx_idp_GetAssertionResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetAssertionResponse->gg.g;
    x->GetAssertionResponse = z;
    return;
  case -1:
    y = x->GetAssertionResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetAssertionResponse; n > 1 && y; --n, y = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetAssertionResponse) */

void zx_e_Body_DEL_GetAssertionResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_GetAssertionResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetAssertionResponse = (struct zx_idp_GetAssertionResponse_s*)x->GetAssertionResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_GetAssertionResponse_s*)x->GetAssertionResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetAssertionResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetAssertionResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetProviderInfo) */

int zx_e_Body_NUM_GetProviderInfo(struct zx_e_Body_s* x)
{
  struct zx_idp_GetProviderInfo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetProviderInfo; y; ++n, y = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetProviderInfo) */

struct zx_idp_GetProviderInfo_s* zx_e_Body_GET_GetProviderInfo(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_GetProviderInfo_s* y;
  if (!x) return 0;
  for (y = x->GetProviderInfo; n>=0 && y; --n, y = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetProviderInfo) */

struct zx_idp_GetProviderInfo_s* zx_e_Body_POP_GetProviderInfo(struct zx_e_Body_s* x)
{
  struct zx_idp_GetProviderInfo_s* y;
  if (!x) return 0;
  y = x->GetProviderInfo;
  if (y)
    x->GetProviderInfo = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetProviderInfo) */

void zx_e_Body_PUSH_GetProviderInfo(struct zx_e_Body_s* x, struct zx_idp_GetProviderInfo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetProviderInfo->gg.g;
  x->GetProviderInfo = z;
}

/* FUNC(zx_e_Body_REV_GetProviderInfo) */

void zx_e_Body_REV_GetProviderInfo(struct zx_e_Body_s* x)
{
  struct zx_idp_GetProviderInfo_s* nxt;
  struct zx_idp_GetProviderInfo_s* y;
  if (!x) return;
  y = x->GetProviderInfo;
  if (!y) return;
  x->GetProviderInfo = 0;
  while (y) {
    nxt = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n;
    y->gg.g.n = &x->GetProviderInfo->gg.g;
    x->GetProviderInfo = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetProviderInfo) */

void zx_e_Body_PUT_GetProviderInfo(struct zx_e_Body_s* x, int n, struct zx_idp_GetProviderInfo_s* z)
{
  struct zx_idp_GetProviderInfo_s* y;
  if (!x || !z) return;
  y = x->GetProviderInfo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetProviderInfo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetProviderInfo) */

void zx_e_Body_ADD_GetProviderInfo(struct zx_e_Body_s* x, int n, struct zx_idp_GetProviderInfo_s* z)
{
  struct zx_idp_GetProviderInfo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetProviderInfo->gg.g;
    x->GetProviderInfo = z;
    return;
  case -1:
    y = x->GetProviderInfo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetProviderInfo; n > 1 && y; --n, y = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetProviderInfo) */

void zx_e_Body_DEL_GetProviderInfo(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_GetProviderInfo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetProviderInfo = (struct zx_idp_GetProviderInfo_s*)x->GetProviderInfo->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_GetProviderInfo_s*)x->GetProviderInfo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetProviderInfo; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetProviderInfo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetProviderInfoResponse) */

int zx_e_Body_NUM_GetProviderInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_GetProviderInfoResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetProviderInfoResponse; y; ++n, y = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetProviderInfoResponse) */

struct zx_idp_GetProviderInfoResponse_s* zx_e_Body_GET_GetProviderInfoResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_GetProviderInfoResponse_s* y;
  if (!x) return 0;
  for (y = x->GetProviderInfoResponse; n>=0 && y; --n, y = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetProviderInfoResponse) */

struct zx_idp_GetProviderInfoResponse_s* zx_e_Body_POP_GetProviderInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_GetProviderInfoResponse_s* y;
  if (!x) return 0;
  y = x->GetProviderInfoResponse;
  if (y)
    x->GetProviderInfoResponse = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetProviderInfoResponse) */

void zx_e_Body_PUSH_GetProviderInfoResponse(struct zx_e_Body_s* x, struct zx_idp_GetProviderInfoResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetProviderInfoResponse->gg.g;
  x->GetProviderInfoResponse = z;
}

/* FUNC(zx_e_Body_REV_GetProviderInfoResponse) */

void zx_e_Body_REV_GetProviderInfoResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_GetProviderInfoResponse_s* nxt;
  struct zx_idp_GetProviderInfoResponse_s* y;
  if (!x) return;
  y = x->GetProviderInfoResponse;
  if (!y) return;
  x->GetProviderInfoResponse = 0;
  while (y) {
    nxt = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->GetProviderInfoResponse->gg.g;
    x->GetProviderInfoResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetProviderInfoResponse) */

void zx_e_Body_PUT_GetProviderInfoResponse(struct zx_e_Body_s* x, int n, struct zx_idp_GetProviderInfoResponse_s* z)
{
  struct zx_idp_GetProviderInfoResponse_s* y;
  if (!x || !z) return;
  y = x->GetProviderInfoResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetProviderInfoResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetProviderInfoResponse) */

void zx_e_Body_ADD_GetProviderInfoResponse(struct zx_e_Body_s* x, int n, struct zx_idp_GetProviderInfoResponse_s* z)
{
  struct zx_idp_GetProviderInfoResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetProviderInfoResponse->gg.g;
    x->GetProviderInfoResponse = z;
    return;
  case -1:
    y = x->GetProviderInfoResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetProviderInfoResponse; n > 1 && y; --n, y = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetProviderInfoResponse) */

void zx_e_Body_DEL_GetProviderInfoResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_GetProviderInfoResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetProviderInfoResponse = (struct zx_idp_GetProviderInfoResponse_s*)x->GetProviderInfoResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_GetProviderInfoResponse_s*)x->GetProviderInfoResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetProviderInfoResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_GetProviderInfoResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_CreatedStatus) */

int zx_e_Body_NUM_CreatedStatus(struct zx_e_Body_s* x)
{
  struct zx_idp_CreatedStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CreatedStatus; y; ++n, y = (struct zx_idp_CreatedStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_CreatedStatus) */

struct zx_idp_CreatedStatus_s* zx_e_Body_GET_CreatedStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_CreatedStatus_s* y;
  if (!x) return 0;
  for (y = x->CreatedStatus; n>=0 && y; --n, y = (struct zx_idp_CreatedStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_CreatedStatus) */

struct zx_idp_CreatedStatus_s* zx_e_Body_POP_CreatedStatus(struct zx_e_Body_s* x)
{
  struct zx_idp_CreatedStatus_s* y;
  if (!x) return 0;
  y = x->CreatedStatus;
  if (y)
    x->CreatedStatus = (struct zx_idp_CreatedStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_CreatedStatus) */

void zx_e_Body_PUSH_CreatedStatus(struct zx_e_Body_s* x, struct zx_idp_CreatedStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CreatedStatus->gg.g;
  x->CreatedStatus = z;
}

/* FUNC(zx_e_Body_REV_CreatedStatus) */

void zx_e_Body_REV_CreatedStatus(struct zx_e_Body_s* x)
{
  struct zx_idp_CreatedStatus_s* nxt;
  struct zx_idp_CreatedStatus_s* y;
  if (!x) return;
  y = x->CreatedStatus;
  if (!y) return;
  x->CreatedStatus = 0;
  while (y) {
    nxt = (struct zx_idp_CreatedStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->CreatedStatus->gg.g;
    x->CreatedStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_CreatedStatus) */

void zx_e_Body_PUT_CreatedStatus(struct zx_e_Body_s* x, int n, struct zx_idp_CreatedStatus_s* z)
{
  struct zx_idp_CreatedStatus_s* y;
  if (!x || !z) return;
  y = x->CreatedStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CreatedStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_CreatedStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_CreatedStatus) */

void zx_e_Body_ADD_CreatedStatus(struct zx_e_Body_s* x, int n, struct zx_idp_CreatedStatus_s* z)
{
  struct zx_idp_CreatedStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CreatedStatus->gg.g;
    x->CreatedStatus = z;
    return;
  case -1:
    y = x->CreatedStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_CreatedStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreatedStatus; n > 1 && y; --n, y = (struct zx_idp_CreatedStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_CreatedStatus) */

void zx_e_Body_DEL_CreatedStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_CreatedStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CreatedStatus = (struct zx_idp_CreatedStatus_s*)x->CreatedStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_CreatedStatus_s*)x->CreatedStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_CreatedStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreatedStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_CreatedStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_CreatedStatusResponse) */

int zx_e_Body_NUM_CreatedStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_CreatedStatusResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CreatedStatusResponse; y; ++n, y = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_CreatedStatusResponse) */

struct zx_idp_CreatedStatusResponse_s* zx_e_Body_GET_CreatedStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_CreatedStatusResponse_s* y;
  if (!x) return 0;
  for (y = x->CreatedStatusResponse; n>=0 && y; --n, y = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_CreatedStatusResponse) */

struct zx_idp_CreatedStatusResponse_s* zx_e_Body_POP_CreatedStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_CreatedStatusResponse_s* y;
  if (!x) return 0;
  y = x->CreatedStatusResponse;
  if (y)
    x->CreatedStatusResponse = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_CreatedStatusResponse) */

void zx_e_Body_PUSH_CreatedStatusResponse(struct zx_e_Body_s* x, struct zx_idp_CreatedStatusResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CreatedStatusResponse->gg.g;
  x->CreatedStatusResponse = z;
}

/* FUNC(zx_e_Body_REV_CreatedStatusResponse) */

void zx_e_Body_REV_CreatedStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_idp_CreatedStatusResponse_s* nxt;
  struct zx_idp_CreatedStatusResponse_s* y;
  if (!x) return;
  y = x->CreatedStatusResponse;
  if (!y) return;
  x->CreatedStatusResponse = 0;
  while (y) {
    nxt = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->CreatedStatusResponse->gg.g;
    x->CreatedStatusResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_CreatedStatusResponse) */

void zx_e_Body_PUT_CreatedStatusResponse(struct zx_e_Body_s* x, int n, struct zx_idp_CreatedStatusResponse_s* z)
{
  struct zx_idp_CreatedStatusResponse_s* y;
  if (!x || !z) return;
  y = x->CreatedStatusResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CreatedStatusResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_CreatedStatusResponse) */

void zx_e_Body_ADD_CreatedStatusResponse(struct zx_e_Body_s* x, int n, struct zx_idp_CreatedStatusResponse_s* z)
{
  struct zx_idp_CreatedStatusResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CreatedStatusResponse->gg.g;
    x->CreatedStatusResponse = z;
    return;
  case -1:
    y = x->CreatedStatusResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreatedStatusResponse; n > 1 && y; --n, y = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_CreatedStatusResponse) */

void zx_e_Body_DEL_CreatedStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idp_CreatedStatusResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CreatedStatusResponse = (struct zx_idp_CreatedStatusResponse_s*)x->CreatedStatusResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_idp_CreatedStatusResponse_s*)x->CreatedStatusResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CreatedStatusResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_idp_CreatedStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_shps_Delete) */

int zx_e_Body_NUM_shps_Delete(struct zx_e_Body_s* x)
{
  struct zx_shps_Delete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shps_Delete; y; ++n, y = (struct zx_shps_Delete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_shps_Delete) */

struct zx_shps_Delete_s* zx_e_Body_GET_shps_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Delete_s* y;
  if (!x) return 0;
  for (y = x->shps_Delete; n>=0 && y; --n, y = (struct zx_shps_Delete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_shps_Delete) */

struct zx_shps_Delete_s* zx_e_Body_POP_shps_Delete(struct zx_e_Body_s* x)
{
  struct zx_shps_Delete_s* y;
  if (!x) return 0;
  y = x->shps_Delete;
  if (y)
    x->shps_Delete = (struct zx_shps_Delete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_shps_Delete) */

void zx_e_Body_PUSH_shps_Delete(struct zx_e_Body_s* x, struct zx_shps_Delete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shps_Delete->gg.g;
  x->shps_Delete = z;
}

/* FUNC(zx_e_Body_REV_shps_Delete) */

void zx_e_Body_REV_shps_Delete(struct zx_e_Body_s* x)
{
  struct zx_shps_Delete_s* nxt;
  struct zx_shps_Delete_s* y;
  if (!x) return;
  y = x->shps_Delete;
  if (!y) return;
  x->shps_Delete = 0;
  while (y) {
    nxt = (struct zx_shps_Delete_s*)y->gg.g.n;
    y->gg.g.n = &x->shps_Delete->gg.g;
    x->shps_Delete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_shps_Delete) */

void zx_e_Body_PUT_shps_Delete(struct zx_e_Body_s* x, int n, struct zx_shps_Delete_s* z)
{
  struct zx_shps_Delete_s* y;
  if (!x || !z) return;
  y = x->shps_Delete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shps_Delete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_shps_Delete) */

void zx_e_Body_ADD_shps_Delete(struct zx_e_Body_s* x, int n, struct zx_shps_Delete_s* z)
{
  struct zx_shps_Delete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shps_Delete->gg.g;
    x->shps_Delete = z;
    return;
  case -1:
    y = x->shps_Delete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_Delete; n > 1 && y; --n, y = (struct zx_shps_Delete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_shps_Delete) */

void zx_e_Body_DEL_shps_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Delete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shps_Delete = (struct zx_shps_Delete_s*)x->shps_Delete->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_Delete_s*)x->shps_Delete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_Delete; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_shps_DeleteResponse) */

int zx_e_Body_NUM_shps_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_DeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shps_DeleteResponse; y; ++n, y = (struct zx_shps_DeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_shps_DeleteResponse) */

struct zx_shps_DeleteResponse_s* zx_e_Body_GET_shps_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_DeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->shps_DeleteResponse; n>=0 && y; --n, y = (struct zx_shps_DeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_shps_DeleteResponse) */

struct zx_shps_DeleteResponse_s* zx_e_Body_POP_shps_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_DeleteResponse_s* y;
  if (!x) return 0;
  y = x->shps_DeleteResponse;
  if (y)
    x->shps_DeleteResponse = (struct zx_shps_DeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_shps_DeleteResponse) */

void zx_e_Body_PUSH_shps_DeleteResponse(struct zx_e_Body_s* x, struct zx_shps_DeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shps_DeleteResponse->gg.g;
  x->shps_DeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_shps_DeleteResponse) */

void zx_e_Body_REV_shps_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_DeleteResponse_s* nxt;
  struct zx_shps_DeleteResponse_s* y;
  if (!x) return;
  y = x->shps_DeleteResponse;
  if (!y) return;
  x->shps_DeleteResponse = 0;
  while (y) {
    nxt = (struct zx_shps_DeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->shps_DeleteResponse->gg.g;
    x->shps_DeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_shps_DeleteResponse) */

void zx_e_Body_PUT_shps_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_shps_DeleteResponse_s* z)
{
  struct zx_shps_DeleteResponse_s* y;
  if (!x || !z) return;
  y = x->shps_DeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shps_DeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_shps_DeleteResponse) */

void zx_e_Body_ADD_shps_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_shps_DeleteResponse_s* z)
{
  struct zx_shps_DeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shps_DeleteResponse->gg.g;
    x->shps_DeleteResponse = z;
    return;
  case -1:
    y = x->shps_DeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_DeleteResponse; n > 1 && y; --n, y = (struct zx_shps_DeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_shps_DeleteResponse) */

void zx_e_Body_DEL_shps_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_DeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shps_DeleteResponse = (struct zx_shps_DeleteResponse_s*)x->shps_DeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_DeleteResponse_s*)x->shps_DeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_DeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetStatus) */

int zx_e_Body_NUM_GetStatus(struct zx_e_Body_s* x)
{
  struct zx_shps_GetStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetStatus; y; ++n, y = (struct zx_shps_GetStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetStatus) */

struct zx_shps_GetStatus_s* zx_e_Body_GET_GetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_GetStatus_s* y;
  if (!x) return 0;
  for (y = x->GetStatus; n>=0 && y; --n, y = (struct zx_shps_GetStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetStatus) */

struct zx_shps_GetStatus_s* zx_e_Body_POP_GetStatus(struct zx_e_Body_s* x)
{
  struct zx_shps_GetStatus_s* y;
  if (!x) return 0;
  y = x->GetStatus;
  if (y)
    x->GetStatus = (struct zx_shps_GetStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetStatus) */

void zx_e_Body_PUSH_GetStatus(struct zx_e_Body_s* x, struct zx_shps_GetStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetStatus->gg.g;
  x->GetStatus = z;
}

/* FUNC(zx_e_Body_REV_GetStatus) */

void zx_e_Body_REV_GetStatus(struct zx_e_Body_s* x)
{
  struct zx_shps_GetStatus_s* nxt;
  struct zx_shps_GetStatus_s* y;
  if (!x) return;
  y = x->GetStatus;
  if (!y) return;
  x->GetStatus = 0;
  while (y) {
    nxt = (struct zx_shps_GetStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->GetStatus->gg.g;
    x->GetStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetStatus) */

void zx_e_Body_PUT_GetStatus(struct zx_e_Body_s* x, int n, struct zx_shps_GetStatus_s* z)
{
  struct zx_shps_GetStatus_s* y;
  if (!x || !z) return;
  y = x->GetStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_GetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetStatus) */

void zx_e_Body_ADD_GetStatus(struct zx_e_Body_s* x, int n, struct zx_shps_GetStatus_s* z)
{
  struct zx_shps_GetStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetStatus->gg.g;
    x->GetStatus = z;
    return;
  case -1:
    y = x->GetStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_GetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetStatus; n > 1 && y; --n, y = (struct zx_shps_GetStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetStatus) */

void zx_e_Body_DEL_GetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_GetStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetStatus = (struct zx_shps_GetStatus_s*)x->GetStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_GetStatus_s*)x->GetStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_GetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_GetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_GetStatusResponse) */

int zx_e_Body_NUM_GetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_GetStatusResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->GetStatusResponse; y; ++n, y = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_GetStatusResponse) */

struct zx_shps_GetStatusResponse_s* zx_e_Body_GET_GetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_GetStatusResponse_s* y;
  if (!x) return 0;
  for (y = x->GetStatusResponse; n>=0 && y; --n, y = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_GetStatusResponse) */

struct zx_shps_GetStatusResponse_s* zx_e_Body_POP_GetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_GetStatusResponse_s* y;
  if (!x) return 0;
  y = x->GetStatusResponse;
  if (y)
    x->GetStatusResponse = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_GetStatusResponse) */

void zx_e_Body_PUSH_GetStatusResponse(struct zx_e_Body_s* x, struct zx_shps_GetStatusResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->GetStatusResponse->gg.g;
  x->GetStatusResponse = z;
}

/* FUNC(zx_e_Body_REV_GetStatusResponse) */

void zx_e_Body_REV_GetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_GetStatusResponse_s* nxt;
  struct zx_shps_GetStatusResponse_s* y;
  if (!x) return;
  y = x->GetStatusResponse;
  if (!y) return;
  x->GetStatusResponse = 0;
  while (y) {
    nxt = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->GetStatusResponse->gg.g;
    x->GetStatusResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_GetStatusResponse) */

void zx_e_Body_PUT_GetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_shps_GetStatusResponse_s* z)
{
  struct zx_shps_GetStatusResponse_s* y;
  if (!x || !z) return;
  y = x->GetStatusResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->GetStatusResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_GetStatusResponse) */

void zx_e_Body_ADD_GetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_shps_GetStatusResponse_s* z)
{
  struct zx_shps_GetStatusResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->GetStatusResponse->gg.g;
    x->GetStatusResponse = z;
    return;
  case -1:
    y = x->GetStatusResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetStatusResponse; n > 1 && y; --n, y = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_GetStatusResponse) */

void zx_e_Body_DEL_GetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_GetStatusResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->GetStatusResponse = (struct zx_shps_GetStatusResponse_s*)x->GetStatusResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_GetStatusResponse_s*)x->GetStatusResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->GetStatusResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_GetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_shps_Query) */

int zx_e_Body_NUM_shps_Query(struct zx_e_Body_s* x)
{
  struct zx_shps_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shps_Query; y; ++n, y = (struct zx_shps_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_shps_Query) */

struct zx_shps_Query_s* zx_e_Body_GET_shps_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Query_s* y;
  if (!x) return 0;
  for (y = x->shps_Query; n>=0 && y; --n, y = (struct zx_shps_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_shps_Query) */

struct zx_shps_Query_s* zx_e_Body_POP_shps_Query(struct zx_e_Body_s* x)
{
  struct zx_shps_Query_s* y;
  if (!x) return 0;
  y = x->shps_Query;
  if (y)
    x->shps_Query = (struct zx_shps_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_shps_Query) */

void zx_e_Body_PUSH_shps_Query(struct zx_e_Body_s* x, struct zx_shps_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shps_Query->gg.g;
  x->shps_Query = z;
}

/* FUNC(zx_e_Body_REV_shps_Query) */

void zx_e_Body_REV_shps_Query(struct zx_e_Body_s* x)
{
  struct zx_shps_Query_s* nxt;
  struct zx_shps_Query_s* y;
  if (!x) return;
  y = x->shps_Query;
  if (!y) return;
  x->shps_Query = 0;
  while (y) {
    nxt = (struct zx_shps_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->shps_Query->gg.g;
    x->shps_Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_shps_Query) */

void zx_e_Body_PUT_shps_Query(struct zx_e_Body_s* x, int n, struct zx_shps_Query_s* z)
{
  struct zx_shps_Query_s* y;
  if (!x || !z) return;
  y = x->shps_Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shps_Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_shps_Query) */

void zx_e_Body_ADD_shps_Query(struct zx_e_Body_s* x, int n, struct zx_shps_Query_s* z)
{
  struct zx_shps_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shps_Query->gg.g;
    x->shps_Query = z;
    return;
  case -1:
    y = x->shps_Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_Query; n > 1 && y; --n, y = (struct zx_shps_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_shps_Query) */

void zx_e_Body_DEL_shps_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shps_Query = (struct zx_shps_Query_s*)x->shps_Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_Query_s*)x->shps_Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_Query; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_shps_QueryResponse) */

int zx_e_Body_NUM_shps_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shps_QueryResponse; y; ++n, y = (struct zx_shps_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_shps_QueryResponse) */

struct zx_shps_QueryResponse_s* zx_e_Body_GET_shps_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->shps_QueryResponse; n>=0 && y; --n, y = (struct zx_shps_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_shps_QueryResponse) */

struct zx_shps_QueryResponse_s* zx_e_Body_POP_shps_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryResponse_s* y;
  if (!x) return 0;
  y = x->shps_QueryResponse;
  if (y)
    x->shps_QueryResponse = (struct zx_shps_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_shps_QueryResponse) */

void zx_e_Body_PUSH_shps_QueryResponse(struct zx_e_Body_s* x, struct zx_shps_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shps_QueryResponse->gg.g;
  x->shps_QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_shps_QueryResponse) */

void zx_e_Body_REV_shps_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryResponse_s* nxt;
  struct zx_shps_QueryResponse_s* y;
  if (!x) return;
  y = x->shps_QueryResponse;
  if (!y) return;
  x->shps_QueryResponse = 0;
  while (y) {
    nxt = (struct zx_shps_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->shps_QueryResponse->gg.g;
    x->shps_QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_shps_QueryResponse) */

void zx_e_Body_PUT_shps_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_shps_QueryResponse_s* z)
{
  struct zx_shps_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->shps_QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shps_QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_shps_QueryResponse) */

void zx_e_Body_ADD_shps_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_shps_QueryResponse_s* z)
{
  struct zx_shps_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shps_QueryResponse->gg.g;
    x->shps_QueryResponse = z;
    return;
  case -1:
    y = x->shps_QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_QueryResponse; n > 1 && y; --n, y = (struct zx_shps_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_shps_QueryResponse) */

void zx_e_Body_DEL_shps_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shps_QueryResponse = (struct zx_shps_QueryResponse_s*)x->shps_QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_QueryResponse_s*)x->shps_QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Invoke) */

int zx_e_Body_NUM_Invoke(struct zx_e_Body_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Invoke; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Invoke) */

struct zx_elem_s* zx_e_Body_GET_Invoke(struct zx_e_Body_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->Invoke; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Invoke) */

struct zx_elem_s* zx_e_Body_POP_Invoke(struct zx_e_Body_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->Invoke;
  if (y)
    x->Invoke = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Invoke) */

void zx_e_Body_PUSH_Invoke(struct zx_e_Body_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->Invoke->g;
  x->Invoke = z;
}

/* FUNC(zx_e_Body_REV_Invoke) */

void zx_e_Body_REV_Invoke(struct zx_e_Body_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->Invoke;
  if (!y) return;
  x->Invoke = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->Invoke->g;
    x->Invoke = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Invoke) */

void zx_e_Body_PUT_Invoke(struct zx_e_Body_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->Invoke;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->Invoke = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_e_Body_ADD_Invoke) */

void zx_e_Body_ADD_Invoke(struct zx_e_Body_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->Invoke->g;
    x->Invoke = z;
    return;
  case -1:
    y = x->Invoke;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Invoke; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_e_Body_DEL_Invoke) */

void zx_e_Body_DEL_Invoke(struct zx_e_Body_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Invoke = (struct zx_elem_s*)x->Invoke->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->Invoke;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->Invoke; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_InvokeResponse) */

int zx_e_Body_NUM_InvokeResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_InvokeResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->InvokeResponse; y; ++n, y = (struct zx_shps_InvokeResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_InvokeResponse) */

struct zx_shps_InvokeResponse_s* zx_e_Body_GET_InvokeResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_InvokeResponse_s* y;
  if (!x) return 0;
  for (y = x->InvokeResponse; n>=0 && y; --n, y = (struct zx_shps_InvokeResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_InvokeResponse) */

struct zx_shps_InvokeResponse_s* zx_e_Body_POP_InvokeResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_InvokeResponse_s* y;
  if (!x) return 0;
  y = x->InvokeResponse;
  if (y)
    x->InvokeResponse = (struct zx_shps_InvokeResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_InvokeResponse) */

void zx_e_Body_PUSH_InvokeResponse(struct zx_e_Body_s* x, struct zx_shps_InvokeResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->InvokeResponse->gg.g;
  x->InvokeResponse = z;
}

/* FUNC(zx_e_Body_REV_InvokeResponse) */

void zx_e_Body_REV_InvokeResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_InvokeResponse_s* nxt;
  struct zx_shps_InvokeResponse_s* y;
  if (!x) return;
  y = x->InvokeResponse;
  if (!y) return;
  x->InvokeResponse = 0;
  while (y) {
    nxt = (struct zx_shps_InvokeResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->InvokeResponse->gg.g;
    x->InvokeResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_InvokeResponse) */

void zx_e_Body_PUT_InvokeResponse(struct zx_e_Body_s* x, int n, struct zx_shps_InvokeResponse_s* z)
{
  struct zx_shps_InvokeResponse_s* y;
  if (!x || !z) return;
  y = x->InvokeResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->InvokeResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_InvokeResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_InvokeResponse) */

void zx_e_Body_ADD_InvokeResponse(struct zx_e_Body_s* x, int n, struct zx_shps_InvokeResponse_s* z)
{
  struct zx_shps_InvokeResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->InvokeResponse->gg.g;
    x->InvokeResponse = z;
    return;
  case -1:
    y = x->InvokeResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_InvokeResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InvokeResponse; n > 1 && y; --n, y = (struct zx_shps_InvokeResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_InvokeResponse) */

void zx_e_Body_DEL_InvokeResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_InvokeResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->InvokeResponse = (struct zx_shps_InvokeResponse_s*)x->InvokeResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_InvokeResponse_s*)x->InvokeResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_InvokeResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->InvokeResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_InvokeResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_QueryRegistered) */

int zx_e_Body_NUM_QueryRegistered(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryRegistered_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryRegistered; y; ++n, y = (struct zx_shps_QueryRegistered_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_QueryRegistered) */

struct zx_shps_QueryRegistered_s* zx_e_Body_GET_QueryRegistered(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_QueryRegistered_s* y;
  if (!x) return 0;
  for (y = x->QueryRegistered; n>=0 && y; --n, y = (struct zx_shps_QueryRegistered_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_QueryRegistered) */

struct zx_shps_QueryRegistered_s* zx_e_Body_POP_QueryRegistered(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryRegistered_s* y;
  if (!x) return 0;
  y = x->QueryRegistered;
  if (y)
    x->QueryRegistered = (struct zx_shps_QueryRegistered_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_QueryRegistered) */

void zx_e_Body_PUSH_QueryRegistered(struct zx_e_Body_s* x, struct zx_shps_QueryRegistered_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryRegistered->gg.g;
  x->QueryRegistered = z;
}

/* FUNC(zx_e_Body_REV_QueryRegistered) */

void zx_e_Body_REV_QueryRegistered(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryRegistered_s* nxt;
  struct zx_shps_QueryRegistered_s* y;
  if (!x) return;
  y = x->QueryRegistered;
  if (!y) return;
  x->QueryRegistered = 0;
  while (y) {
    nxt = (struct zx_shps_QueryRegistered_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryRegistered->gg.g;
    x->QueryRegistered = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_QueryRegistered) */

void zx_e_Body_PUT_QueryRegistered(struct zx_e_Body_s* x, int n, struct zx_shps_QueryRegistered_s* z)
{
  struct zx_shps_QueryRegistered_s* y;
  if (!x || !z) return;
  y = x->QueryRegistered;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryRegistered = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_QueryRegistered_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_QueryRegistered) */

void zx_e_Body_ADD_QueryRegistered(struct zx_e_Body_s* x, int n, struct zx_shps_QueryRegistered_s* z)
{
  struct zx_shps_QueryRegistered_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryRegistered->gg.g;
    x->QueryRegistered = z;
    return;
  case -1:
    y = x->QueryRegistered;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_QueryRegistered_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryRegistered; n > 1 && y; --n, y = (struct zx_shps_QueryRegistered_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_QueryRegistered) */

void zx_e_Body_DEL_QueryRegistered(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_QueryRegistered_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryRegistered = (struct zx_shps_QueryRegistered_s*)x->QueryRegistered->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_QueryRegistered_s*)x->QueryRegistered;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_QueryRegistered_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryRegistered; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_QueryRegistered_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_QueryRegisteredResponse) */

int zx_e_Body_NUM_QueryRegisteredResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryRegisteredResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->QueryRegisteredResponse; y; ++n, y = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_QueryRegisteredResponse) */

struct zx_shps_QueryRegisteredResponse_s* zx_e_Body_GET_QueryRegisteredResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_QueryRegisteredResponse_s* y;
  if (!x) return 0;
  for (y = x->QueryRegisteredResponse; n>=0 && y; --n, y = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_QueryRegisteredResponse) */

struct zx_shps_QueryRegisteredResponse_s* zx_e_Body_POP_QueryRegisteredResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryRegisteredResponse_s* y;
  if (!x) return 0;
  y = x->QueryRegisteredResponse;
  if (y)
    x->QueryRegisteredResponse = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_QueryRegisteredResponse) */

void zx_e_Body_PUSH_QueryRegisteredResponse(struct zx_e_Body_s* x, struct zx_shps_QueryRegisteredResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->QueryRegisteredResponse->gg.g;
  x->QueryRegisteredResponse = z;
}

/* FUNC(zx_e_Body_REV_QueryRegisteredResponse) */

void zx_e_Body_REV_QueryRegisteredResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_QueryRegisteredResponse_s* nxt;
  struct zx_shps_QueryRegisteredResponse_s* y;
  if (!x) return;
  y = x->QueryRegisteredResponse;
  if (!y) return;
  x->QueryRegisteredResponse = 0;
  while (y) {
    nxt = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->QueryRegisteredResponse->gg.g;
    x->QueryRegisteredResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_QueryRegisteredResponse) */

void zx_e_Body_PUT_QueryRegisteredResponse(struct zx_e_Body_s* x, int n, struct zx_shps_QueryRegisteredResponse_s* z)
{
  struct zx_shps_QueryRegisteredResponse_s* y;
  if (!x || !z) return;
  y = x->QueryRegisteredResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->QueryRegisteredResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_QueryRegisteredResponse) */

void zx_e_Body_ADD_QueryRegisteredResponse(struct zx_e_Body_s* x, int n, struct zx_shps_QueryRegisteredResponse_s* z)
{
  struct zx_shps_QueryRegisteredResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->QueryRegisteredResponse->gg.g;
    x->QueryRegisteredResponse = z;
    return;
  case -1:
    y = x->QueryRegisteredResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryRegisteredResponse; n > 1 && y; --n, y = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_QueryRegisteredResponse) */

void zx_e_Body_DEL_QueryRegisteredResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_QueryRegisteredResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->QueryRegisteredResponse = (struct zx_shps_QueryRegisteredResponse_s*)x->QueryRegisteredResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_QueryRegisteredResponse_s*)x->QueryRegisteredResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->QueryRegisteredResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_QueryRegisteredResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Register) */

int zx_e_Body_NUM_Register(struct zx_e_Body_s* x)
{
  struct zx_shps_Register_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Register; y; ++n, y = (struct zx_shps_Register_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Register) */

struct zx_shps_Register_s* zx_e_Body_GET_Register(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Register_s* y;
  if (!x) return 0;
  for (y = x->Register; n>=0 && y; --n, y = (struct zx_shps_Register_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Register) */

struct zx_shps_Register_s* zx_e_Body_POP_Register(struct zx_e_Body_s* x)
{
  struct zx_shps_Register_s* y;
  if (!x) return 0;
  y = x->Register;
  if (y)
    x->Register = (struct zx_shps_Register_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Register) */

void zx_e_Body_PUSH_Register(struct zx_e_Body_s* x, struct zx_shps_Register_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Register->gg.g;
  x->Register = z;
}

/* FUNC(zx_e_Body_REV_Register) */

void zx_e_Body_REV_Register(struct zx_e_Body_s* x)
{
  struct zx_shps_Register_s* nxt;
  struct zx_shps_Register_s* y;
  if (!x) return;
  y = x->Register;
  if (!y) return;
  x->Register = 0;
  while (y) {
    nxt = (struct zx_shps_Register_s*)y->gg.g.n;
    y->gg.g.n = &x->Register->gg.g;
    x->Register = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Register) */

void zx_e_Body_PUT_Register(struct zx_e_Body_s* x, int n, struct zx_shps_Register_s* z)
{
  struct zx_shps_Register_s* y;
  if (!x || !z) return;
  y = x->Register;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Register = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Register_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Register) */

void zx_e_Body_ADD_Register(struct zx_e_Body_s* x, int n, struct zx_shps_Register_s* z)
{
  struct zx_shps_Register_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Register->gg.g;
    x->Register = z;
    return;
  case -1:
    y = x->Register;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_Register_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Register; n > 1 && y; --n, y = (struct zx_shps_Register_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Register) */

void zx_e_Body_DEL_Register(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Register_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Register = (struct zx_shps_Register_s*)x->Register->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_Register_s*)x->Register;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_Register_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Register; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Register_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_RegisterResponse) */

int zx_e_Body_NUM_RegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_RegisterResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterResponse; y; ++n, y = (struct zx_shps_RegisterResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_RegisterResponse) */

struct zx_shps_RegisterResponse_s* zx_e_Body_GET_RegisterResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_RegisterResponse_s* y;
  if (!x) return 0;
  for (y = x->RegisterResponse; n>=0 && y; --n, y = (struct zx_shps_RegisterResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_RegisterResponse) */

struct zx_shps_RegisterResponse_s* zx_e_Body_POP_RegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_RegisterResponse_s* y;
  if (!x) return 0;
  y = x->RegisterResponse;
  if (y)
    x->RegisterResponse = (struct zx_shps_RegisterResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_RegisterResponse) */

void zx_e_Body_PUSH_RegisterResponse(struct zx_e_Body_s* x, struct zx_shps_RegisterResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RegisterResponse->gg.g;
  x->RegisterResponse = z;
}

/* FUNC(zx_e_Body_REV_RegisterResponse) */

void zx_e_Body_REV_RegisterResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_RegisterResponse_s* nxt;
  struct zx_shps_RegisterResponse_s* y;
  if (!x) return;
  y = x->RegisterResponse;
  if (!y) return;
  x->RegisterResponse = 0;
  while (y) {
    nxt = (struct zx_shps_RegisterResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RegisterResponse->gg.g;
    x->RegisterResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_RegisterResponse) */

void zx_e_Body_PUT_RegisterResponse(struct zx_e_Body_s* x, int n, struct zx_shps_RegisterResponse_s* z)
{
  struct zx_shps_RegisterResponse_s* y;
  if (!x || !z) return;
  y = x->RegisterResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RegisterResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_RegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_RegisterResponse) */

void zx_e_Body_ADD_RegisterResponse(struct zx_e_Body_s* x, int n, struct zx_shps_RegisterResponse_s* z)
{
  struct zx_shps_RegisterResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RegisterResponse->gg.g;
    x->RegisterResponse = z;
    return;
  case -1:
    y = x->RegisterResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_RegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterResponse; n > 1 && y; --n, y = (struct zx_shps_RegisterResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_RegisterResponse) */

void zx_e_Body_DEL_RegisterResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_RegisterResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterResponse = (struct zx_shps_RegisterResponse_s*)x->RegisterResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_RegisterResponse_s*)x->RegisterResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_RegisterResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_RegisterResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SetStatus) */

int zx_e_Body_NUM_SetStatus(struct zx_e_Body_s* x)
{
  struct zx_shps_SetStatus_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SetStatus; y; ++n, y = (struct zx_shps_SetStatus_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SetStatus) */

struct zx_shps_SetStatus_s* zx_e_Body_GET_SetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_SetStatus_s* y;
  if (!x) return 0;
  for (y = x->SetStatus; n>=0 && y; --n, y = (struct zx_shps_SetStatus_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SetStatus) */

struct zx_shps_SetStatus_s* zx_e_Body_POP_SetStatus(struct zx_e_Body_s* x)
{
  struct zx_shps_SetStatus_s* y;
  if (!x) return 0;
  y = x->SetStatus;
  if (y)
    x->SetStatus = (struct zx_shps_SetStatus_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SetStatus) */

void zx_e_Body_PUSH_SetStatus(struct zx_e_Body_s* x, struct zx_shps_SetStatus_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SetStatus->gg.g;
  x->SetStatus = z;
}

/* FUNC(zx_e_Body_REV_SetStatus) */

void zx_e_Body_REV_SetStatus(struct zx_e_Body_s* x)
{
  struct zx_shps_SetStatus_s* nxt;
  struct zx_shps_SetStatus_s* y;
  if (!x) return;
  y = x->SetStatus;
  if (!y) return;
  x->SetStatus = 0;
  while (y) {
    nxt = (struct zx_shps_SetStatus_s*)y->gg.g.n;
    y->gg.g.n = &x->SetStatus->gg.g;
    x->SetStatus = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SetStatus) */

void zx_e_Body_PUT_SetStatus(struct zx_e_Body_s* x, int n, struct zx_shps_SetStatus_s* z)
{
  struct zx_shps_SetStatus_s* y;
  if (!x || !z) return;
  y = x->SetStatus;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SetStatus = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_SetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SetStatus) */

void zx_e_Body_ADD_SetStatus(struct zx_e_Body_s* x, int n, struct zx_shps_SetStatus_s* z)
{
  struct zx_shps_SetStatus_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SetStatus->gg.g;
    x->SetStatus = z;
    return;
  case -1:
    y = x->SetStatus;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_SetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetStatus; n > 1 && y; --n, y = (struct zx_shps_SetStatus_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SetStatus) */

void zx_e_Body_DEL_SetStatus(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_SetStatus_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SetStatus = (struct zx_shps_SetStatus_s*)x->SetStatus->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_SetStatus_s*)x->SetStatus;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_SetStatus_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetStatus; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_SetStatus_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_SetStatusResponse) */

int zx_e_Body_NUM_SetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_SetStatusResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->SetStatusResponse; y; ++n, y = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_SetStatusResponse) */

struct zx_shps_SetStatusResponse_s* zx_e_Body_GET_SetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_SetStatusResponse_s* y;
  if (!x) return 0;
  for (y = x->SetStatusResponse; n>=0 && y; --n, y = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_SetStatusResponse) */

struct zx_shps_SetStatusResponse_s* zx_e_Body_POP_SetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_SetStatusResponse_s* y;
  if (!x) return 0;
  y = x->SetStatusResponse;
  if (y)
    x->SetStatusResponse = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_SetStatusResponse) */

void zx_e_Body_PUSH_SetStatusResponse(struct zx_e_Body_s* x, struct zx_shps_SetStatusResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->SetStatusResponse->gg.g;
  x->SetStatusResponse = z;
}

/* FUNC(zx_e_Body_REV_SetStatusResponse) */

void zx_e_Body_REV_SetStatusResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_SetStatusResponse_s* nxt;
  struct zx_shps_SetStatusResponse_s* y;
  if (!x) return;
  y = x->SetStatusResponse;
  if (!y) return;
  x->SetStatusResponse = 0;
  while (y) {
    nxt = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->SetStatusResponse->gg.g;
    x->SetStatusResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_SetStatusResponse) */

void zx_e_Body_PUT_SetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_shps_SetStatusResponse_s* z)
{
  struct zx_shps_SetStatusResponse_s* y;
  if (!x || !z) return;
  y = x->SetStatusResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->SetStatusResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_SetStatusResponse) */

void zx_e_Body_ADD_SetStatusResponse(struct zx_e_Body_s* x, int n, struct zx_shps_SetStatusResponse_s* z)
{
  struct zx_shps_SetStatusResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->SetStatusResponse->gg.g;
    x->SetStatusResponse = z;
    return;
  case -1:
    y = x->SetStatusResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetStatusResponse; n > 1 && y; --n, y = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_SetStatusResponse) */

void zx_e_Body_DEL_SetStatusResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_SetStatusResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->SetStatusResponse = (struct zx_shps_SetStatusResponse_s*)x->SetStatusResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_SetStatusResponse_s*)x->SetStatusResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->SetStatusResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_SetStatusResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_Update) */

int zx_e_Body_NUM_Update(struct zx_e_Body_s* x)
{
  struct zx_shps_Update_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Update; y; ++n, y = (struct zx_shps_Update_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_Update) */

struct zx_shps_Update_s* zx_e_Body_GET_Update(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Update_s* y;
  if (!x) return 0;
  for (y = x->Update; n>=0 && y; --n, y = (struct zx_shps_Update_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_Update) */

struct zx_shps_Update_s* zx_e_Body_POP_Update(struct zx_e_Body_s* x)
{
  struct zx_shps_Update_s* y;
  if (!x) return 0;
  y = x->Update;
  if (y)
    x->Update = (struct zx_shps_Update_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_Update) */

void zx_e_Body_PUSH_Update(struct zx_e_Body_s* x, struct zx_shps_Update_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Update->gg.g;
  x->Update = z;
}

/* FUNC(zx_e_Body_REV_Update) */

void zx_e_Body_REV_Update(struct zx_e_Body_s* x)
{
  struct zx_shps_Update_s* nxt;
  struct zx_shps_Update_s* y;
  if (!x) return;
  y = x->Update;
  if (!y) return;
  x->Update = 0;
  while (y) {
    nxt = (struct zx_shps_Update_s*)y->gg.g.n;
    y->gg.g.n = &x->Update->gg.g;
    x->Update = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_Update) */

void zx_e_Body_PUT_Update(struct zx_e_Body_s* x, int n, struct zx_shps_Update_s* z)
{
  struct zx_shps_Update_s* y;
  if (!x || !z) return;
  y = x->Update;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Update = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Update_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_Update) */

void zx_e_Body_ADD_Update(struct zx_e_Body_s* x, int n, struct zx_shps_Update_s* z)
{
  struct zx_shps_Update_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Update->gg.g;
    x->Update = z;
    return;
  case -1:
    y = x->Update;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_Update_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Update; n > 1 && y; --n, y = (struct zx_shps_Update_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_Update) */

void zx_e_Body_DEL_Update(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Update_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Update = (struct zx_shps_Update_s*)x->Update->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_Update_s*)x->Update;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_Update_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Update; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Update_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_UpdateResponse) */

int zx_e_Body_NUM_UpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_UpdateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UpdateResponse; y; ++n, y = (struct zx_shps_UpdateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_UpdateResponse) */

struct zx_shps_UpdateResponse_s* zx_e_Body_GET_UpdateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_UpdateResponse_s* y;
  if (!x) return 0;
  for (y = x->UpdateResponse; n>=0 && y; --n, y = (struct zx_shps_UpdateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_UpdateResponse) */

struct zx_shps_UpdateResponse_s* zx_e_Body_POP_UpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_UpdateResponse_s* y;
  if (!x) return 0;
  y = x->UpdateResponse;
  if (y)
    x->UpdateResponse = (struct zx_shps_UpdateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_UpdateResponse) */

void zx_e_Body_PUSH_UpdateResponse(struct zx_e_Body_s* x, struct zx_shps_UpdateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UpdateResponse->gg.g;
  x->UpdateResponse = z;
}

/* FUNC(zx_e_Body_REV_UpdateResponse) */

void zx_e_Body_REV_UpdateResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_UpdateResponse_s* nxt;
  struct zx_shps_UpdateResponse_s* y;
  if (!x) return;
  y = x->UpdateResponse;
  if (!y) return;
  x->UpdateResponse = 0;
  while (y) {
    nxt = (struct zx_shps_UpdateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->UpdateResponse->gg.g;
    x->UpdateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_UpdateResponse) */

void zx_e_Body_PUT_UpdateResponse(struct zx_e_Body_s* x, int n, struct zx_shps_UpdateResponse_s* z)
{
  struct zx_shps_UpdateResponse_s* y;
  if (!x || !z) return;
  y = x->UpdateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UpdateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_UpdateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_UpdateResponse) */

void zx_e_Body_ADD_UpdateResponse(struct zx_e_Body_s* x, int n, struct zx_shps_UpdateResponse_s* z)
{
  struct zx_shps_UpdateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UpdateResponse->gg.g;
    x->UpdateResponse = z;
    return;
  case -1:
    y = x->UpdateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_UpdateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateResponse; n > 1 && y; --n, y = (struct zx_shps_UpdateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_UpdateResponse) */

void zx_e_Body_DEL_UpdateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_UpdateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UpdateResponse = (struct zx_shps_UpdateResponse_s*)x->UpdateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_UpdateResponse_s*)x->UpdateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_UpdateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UpdateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_UpdateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_shps_Poll) */

int zx_e_Body_NUM_shps_Poll(struct zx_e_Body_s* x)
{
  struct zx_shps_Poll_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shps_Poll; y; ++n, y = (struct zx_shps_Poll_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_shps_Poll) */

struct zx_shps_Poll_s* zx_e_Body_GET_shps_Poll(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Poll_s* y;
  if (!x) return 0;
  for (y = x->shps_Poll; n>=0 && y; --n, y = (struct zx_shps_Poll_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_shps_Poll) */

struct zx_shps_Poll_s* zx_e_Body_POP_shps_Poll(struct zx_e_Body_s* x)
{
  struct zx_shps_Poll_s* y;
  if (!x) return 0;
  y = x->shps_Poll;
  if (y)
    x->shps_Poll = (struct zx_shps_Poll_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_shps_Poll) */

void zx_e_Body_PUSH_shps_Poll(struct zx_e_Body_s* x, struct zx_shps_Poll_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shps_Poll->gg.g;
  x->shps_Poll = z;
}

/* FUNC(zx_e_Body_REV_shps_Poll) */

void zx_e_Body_REV_shps_Poll(struct zx_e_Body_s* x)
{
  struct zx_shps_Poll_s* nxt;
  struct zx_shps_Poll_s* y;
  if (!x) return;
  y = x->shps_Poll;
  if (!y) return;
  x->shps_Poll = 0;
  while (y) {
    nxt = (struct zx_shps_Poll_s*)y->gg.g.n;
    y->gg.g.n = &x->shps_Poll->gg.g;
    x->shps_Poll = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_shps_Poll) */

void zx_e_Body_PUT_shps_Poll(struct zx_e_Body_s* x, int n, struct zx_shps_Poll_s* z)
{
  struct zx_shps_Poll_s* y;
  if (!x || !z) return;
  y = x->shps_Poll;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shps_Poll = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Poll_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_shps_Poll) */

void zx_e_Body_ADD_shps_Poll(struct zx_e_Body_s* x, int n, struct zx_shps_Poll_s* z)
{
  struct zx_shps_Poll_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shps_Poll->gg.g;
    x->shps_Poll = z;
    return;
  case -1:
    y = x->shps_Poll;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_Poll_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_Poll; n > 1 && y; --n, y = (struct zx_shps_Poll_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_shps_Poll) */

void zx_e_Body_DEL_shps_Poll(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_Poll_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shps_Poll = (struct zx_shps_Poll_s*)x->shps_Poll->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_Poll_s*)x->shps_Poll;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_Poll_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_Poll; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_Poll_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_shps_PollResponse) */

int zx_e_Body_NUM_shps_PollResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_PollResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->shps_PollResponse; y; ++n, y = (struct zx_shps_PollResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_shps_PollResponse) */

struct zx_shps_PollResponse_s* zx_e_Body_GET_shps_PollResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_PollResponse_s* y;
  if (!x) return 0;
  for (y = x->shps_PollResponse; n>=0 && y; --n, y = (struct zx_shps_PollResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_shps_PollResponse) */

struct zx_shps_PollResponse_s* zx_e_Body_POP_shps_PollResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_PollResponse_s* y;
  if (!x) return 0;
  y = x->shps_PollResponse;
  if (y)
    x->shps_PollResponse = (struct zx_shps_PollResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_shps_PollResponse) */

void zx_e_Body_PUSH_shps_PollResponse(struct zx_e_Body_s* x, struct zx_shps_PollResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->shps_PollResponse->gg.g;
  x->shps_PollResponse = z;
}

/* FUNC(zx_e_Body_REV_shps_PollResponse) */

void zx_e_Body_REV_shps_PollResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_PollResponse_s* nxt;
  struct zx_shps_PollResponse_s* y;
  if (!x) return;
  y = x->shps_PollResponse;
  if (!y) return;
  x->shps_PollResponse = 0;
  while (y) {
    nxt = (struct zx_shps_PollResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->shps_PollResponse->gg.g;
    x->shps_PollResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_shps_PollResponse) */

void zx_e_Body_PUT_shps_PollResponse(struct zx_e_Body_s* x, int n, struct zx_shps_PollResponse_s* z)
{
  struct zx_shps_PollResponse_s* y;
  if (!x || !z) return;
  y = x->shps_PollResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->shps_PollResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_PollResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_shps_PollResponse) */

void zx_e_Body_ADD_shps_PollResponse(struct zx_e_Body_s* x, int n, struct zx_shps_PollResponse_s* z)
{
  struct zx_shps_PollResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->shps_PollResponse->gg.g;
    x->shps_PollResponse = z;
    return;
  case -1:
    y = x->shps_PollResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_PollResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_PollResponse; n > 1 && y; --n, y = (struct zx_shps_PollResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_shps_PollResponse) */

void zx_e_Body_DEL_shps_PollResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_PollResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->shps_PollResponse = (struct zx_shps_PollResponse_s*)x->shps_PollResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_PollResponse_s*)x->shps_PollResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_PollResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->shps_PollResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_PollResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ProxyInvoke) */

int zx_e_Body_NUM_ProxyInvoke(struct zx_e_Body_s* x)
{
  struct zx_shps_ProxyInvoke_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxyInvoke; y; ++n, y = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ProxyInvoke) */

struct zx_shps_ProxyInvoke_s* zx_e_Body_GET_ProxyInvoke(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_ProxyInvoke_s* y;
  if (!x) return 0;
  for (y = x->ProxyInvoke; n>=0 && y; --n, y = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ProxyInvoke) */

struct zx_shps_ProxyInvoke_s* zx_e_Body_POP_ProxyInvoke(struct zx_e_Body_s* x)
{
  struct zx_shps_ProxyInvoke_s* y;
  if (!x) return 0;
  y = x->ProxyInvoke;
  if (y)
    x->ProxyInvoke = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ProxyInvoke) */

void zx_e_Body_PUSH_ProxyInvoke(struct zx_e_Body_s* x, struct zx_shps_ProxyInvoke_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProxyInvoke->gg.g;
  x->ProxyInvoke = z;
}

/* FUNC(zx_e_Body_REV_ProxyInvoke) */

void zx_e_Body_REV_ProxyInvoke(struct zx_e_Body_s* x)
{
  struct zx_shps_ProxyInvoke_s* nxt;
  struct zx_shps_ProxyInvoke_s* y;
  if (!x) return;
  y = x->ProxyInvoke;
  if (!y) return;
  x->ProxyInvoke = 0;
  while (y) {
    nxt = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n;
    y->gg.g.n = &x->ProxyInvoke->gg.g;
    x->ProxyInvoke = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ProxyInvoke) */

void zx_e_Body_PUT_ProxyInvoke(struct zx_e_Body_s* x, int n, struct zx_shps_ProxyInvoke_s* z)
{
  struct zx_shps_ProxyInvoke_s* y;
  if (!x || !z) return;
  y = x->ProxyInvoke;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProxyInvoke = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ProxyInvoke) */

void zx_e_Body_ADD_ProxyInvoke(struct zx_e_Body_s* x, int n, struct zx_shps_ProxyInvoke_s* z)
{
  struct zx_shps_ProxyInvoke_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProxyInvoke->gg.g;
    x->ProxyInvoke = z;
    return;
  case -1:
    y = x->ProxyInvoke;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyInvoke; n > 1 && y; --n, y = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ProxyInvoke) */

void zx_e_Body_DEL_ProxyInvoke(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_ProxyInvoke_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxyInvoke = (struct zx_shps_ProxyInvoke_s*)x->ProxyInvoke->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_ProxyInvoke_s*)x->ProxyInvoke;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyInvoke; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_ProxyInvoke_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_ProxyInvokeResponse) */

int zx_e_Body_NUM_ProxyInvokeResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_ProxyInvokeResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProxyInvokeResponse; y; ++n, y = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_ProxyInvokeResponse) */

struct zx_shps_ProxyInvokeResponse_s* zx_e_Body_GET_ProxyInvokeResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_ProxyInvokeResponse_s* y;
  if (!x) return 0;
  for (y = x->ProxyInvokeResponse; n>=0 && y; --n, y = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_ProxyInvokeResponse) */

struct zx_shps_ProxyInvokeResponse_s* zx_e_Body_POP_ProxyInvokeResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_ProxyInvokeResponse_s* y;
  if (!x) return 0;
  y = x->ProxyInvokeResponse;
  if (y)
    x->ProxyInvokeResponse = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_ProxyInvokeResponse) */

void zx_e_Body_PUSH_ProxyInvokeResponse(struct zx_e_Body_s* x, struct zx_shps_ProxyInvokeResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProxyInvokeResponse->gg.g;
  x->ProxyInvokeResponse = z;
}

/* FUNC(zx_e_Body_REV_ProxyInvokeResponse) */

void zx_e_Body_REV_ProxyInvokeResponse(struct zx_e_Body_s* x)
{
  struct zx_shps_ProxyInvokeResponse_s* nxt;
  struct zx_shps_ProxyInvokeResponse_s* y;
  if (!x) return;
  y = x->ProxyInvokeResponse;
  if (!y) return;
  x->ProxyInvokeResponse = 0;
  while (y) {
    nxt = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ProxyInvokeResponse->gg.g;
    x->ProxyInvokeResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_ProxyInvokeResponse) */

void zx_e_Body_PUT_ProxyInvokeResponse(struct zx_e_Body_s* x, int n, struct zx_shps_ProxyInvokeResponse_s* z)
{
  struct zx_shps_ProxyInvokeResponse_s* y;
  if (!x || !z) return;
  y = x->ProxyInvokeResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProxyInvokeResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_ProxyInvokeResponse) */

void zx_e_Body_ADD_ProxyInvokeResponse(struct zx_e_Body_s* x, int n, struct zx_shps_ProxyInvokeResponse_s* z)
{
  struct zx_shps_ProxyInvokeResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProxyInvokeResponse->gg.g;
    x->ProxyInvokeResponse = z;
    return;
  case -1:
    y = x->ProxyInvokeResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyInvokeResponse; n > 1 && y; --n, y = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_ProxyInvokeResponse) */

void zx_e_Body_DEL_ProxyInvokeResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_shps_ProxyInvokeResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProxyInvokeResponse = (struct zx_shps_ProxyInvokeResponse_s*)x->ProxyInvokeResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_shps_ProxyInvokeResponse_s*)x->ProxyInvokeResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProxyInvokeResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_shps_ProxyInvokeResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_Create) */

int zx_e_Body_NUM_idhrxml_Create(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Create_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_Create; y; ++n, y = (struct zx_idhrxml_Create_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_Create) */

struct zx_idhrxml_Create_s* zx_e_Body_GET_idhrxml_Create(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Create_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_Create; n>=0 && y; --n, y = (struct zx_idhrxml_Create_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_Create) */

struct zx_idhrxml_Create_s* zx_e_Body_POP_idhrxml_Create(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Create_s* y;
  if (!x) return 0;
  y = x->idhrxml_Create;
  if (y)
    x->idhrxml_Create = (struct zx_idhrxml_Create_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_Create) */

void zx_e_Body_PUSH_idhrxml_Create(struct zx_e_Body_s* x, struct zx_idhrxml_Create_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_Create->gg.g;
  x->idhrxml_Create = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_Create) */

void zx_e_Body_REV_idhrxml_Create(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Create_s* nxt;
  struct zx_idhrxml_Create_s* y;
  if (!x) return;
  y = x->idhrxml_Create;
  if (!y) return;
  x->idhrxml_Create = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Create_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_Create->gg.g;
    x->idhrxml_Create = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_Create) */

void zx_e_Body_PUT_idhrxml_Create(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Create_s* z)
{
  struct zx_idhrxml_Create_s* y;
  if (!x || !z) return;
  y = x->idhrxml_Create;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_Create = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Create_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_Create) */

void zx_e_Body_ADD_idhrxml_Create(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Create_s* z)
{
  struct zx_idhrxml_Create_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_Create->gg.g;
    x->idhrxml_Create = z;
    return;
  case -1:
    y = x->idhrxml_Create;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Create_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Create; n > 1 && y; --n, y = (struct zx_idhrxml_Create_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_Create) */

void zx_e_Body_DEL_idhrxml_Create(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Create_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_Create = (struct zx_idhrxml_Create_s*)x->idhrxml_Create->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Create_s*)x->idhrxml_Create;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Create_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Create; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Create_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_CreateResponse) */

int zx_e_Body_NUM_idhrxml_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_CreateResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_CreateResponse; y; ++n, y = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_CreateResponse) */

struct zx_idhrxml_CreateResponse_s* zx_e_Body_GET_idhrxml_CreateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_CreateResponse_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_CreateResponse; n>=0 && y; --n, y = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_CreateResponse) */

struct zx_idhrxml_CreateResponse_s* zx_e_Body_POP_idhrxml_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_CreateResponse_s* y;
  if (!x) return 0;
  y = x->idhrxml_CreateResponse;
  if (y)
    x->idhrxml_CreateResponse = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_CreateResponse) */

void zx_e_Body_PUSH_idhrxml_CreateResponse(struct zx_e_Body_s* x, struct zx_idhrxml_CreateResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_CreateResponse->gg.g;
  x->idhrxml_CreateResponse = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_CreateResponse) */

void zx_e_Body_REV_idhrxml_CreateResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_CreateResponse_s* nxt;
  struct zx_idhrxml_CreateResponse_s* y;
  if (!x) return;
  y = x->idhrxml_CreateResponse;
  if (!y) return;
  x->idhrxml_CreateResponse = 0;
  while (y) {
    nxt = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_CreateResponse->gg.g;
    x->idhrxml_CreateResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_CreateResponse) */

void zx_e_Body_PUT_idhrxml_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_CreateResponse_s* z)
{
  struct zx_idhrxml_CreateResponse_s* y;
  if (!x || !z) return;
  y = x->idhrxml_CreateResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_CreateResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_CreateResponse) */

void zx_e_Body_ADD_idhrxml_CreateResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_CreateResponse_s* z)
{
  struct zx_idhrxml_CreateResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_CreateResponse->gg.g;
    x->idhrxml_CreateResponse = z;
    return;
  case -1:
    y = x->idhrxml_CreateResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_CreateResponse; n > 1 && y; --n, y = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_CreateResponse) */

void zx_e_Body_DEL_idhrxml_CreateResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_CreateResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_CreateResponse = (struct zx_idhrxml_CreateResponse_s*)x->idhrxml_CreateResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_CreateResponse_s*)x->idhrxml_CreateResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_CreateResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_CreateResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_Query) */

int zx_e_Body_NUM_idhrxml_Query(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Query_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_Query; y; ++n, y = (struct zx_idhrxml_Query_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_Query) */

struct zx_idhrxml_Query_s* zx_e_Body_GET_idhrxml_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Query_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_Query; n>=0 && y; --n, y = (struct zx_idhrxml_Query_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_Query) */

struct zx_idhrxml_Query_s* zx_e_Body_POP_idhrxml_Query(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Query_s* y;
  if (!x) return 0;
  y = x->idhrxml_Query;
  if (y)
    x->idhrxml_Query = (struct zx_idhrxml_Query_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_Query) */

void zx_e_Body_PUSH_idhrxml_Query(struct zx_e_Body_s* x, struct zx_idhrxml_Query_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_Query->gg.g;
  x->idhrxml_Query = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_Query) */

void zx_e_Body_REV_idhrxml_Query(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Query_s* nxt;
  struct zx_idhrxml_Query_s* y;
  if (!x) return;
  y = x->idhrxml_Query;
  if (!y) return;
  x->idhrxml_Query = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Query_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_Query->gg.g;
    x->idhrxml_Query = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_Query) */

void zx_e_Body_PUT_idhrxml_Query(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Query_s* z)
{
  struct zx_idhrxml_Query_s* y;
  if (!x || !z) return;
  y = x->idhrxml_Query;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_Query = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_Query) */

void zx_e_Body_ADD_idhrxml_Query(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Query_s* z)
{
  struct zx_idhrxml_Query_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_Query->gg.g;
    x->idhrxml_Query = z;
    return;
  case -1:
    y = x->idhrxml_Query;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Query; n > 1 && y; --n, y = (struct zx_idhrxml_Query_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_Query) */

void zx_e_Body_DEL_idhrxml_Query(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Query_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_Query = (struct zx_idhrxml_Query_s*)x->idhrxml_Query->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Query_s*)x->idhrxml_Query;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Query_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Query; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Query_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_QueryResponse) */

int zx_e_Body_NUM_idhrxml_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_QueryResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_QueryResponse; y; ++n, y = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_QueryResponse) */

struct zx_idhrxml_QueryResponse_s* zx_e_Body_GET_idhrxml_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_QueryResponse_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_QueryResponse; n>=0 && y; --n, y = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_QueryResponse) */

struct zx_idhrxml_QueryResponse_s* zx_e_Body_POP_idhrxml_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_QueryResponse_s* y;
  if (!x) return 0;
  y = x->idhrxml_QueryResponse;
  if (y)
    x->idhrxml_QueryResponse = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_QueryResponse) */

void zx_e_Body_PUSH_idhrxml_QueryResponse(struct zx_e_Body_s* x, struct zx_idhrxml_QueryResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_QueryResponse->gg.g;
  x->idhrxml_QueryResponse = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_QueryResponse) */

void zx_e_Body_REV_idhrxml_QueryResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_QueryResponse_s* nxt;
  struct zx_idhrxml_QueryResponse_s* y;
  if (!x) return;
  y = x->idhrxml_QueryResponse;
  if (!y) return;
  x->idhrxml_QueryResponse = 0;
  while (y) {
    nxt = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_QueryResponse->gg.g;
    x->idhrxml_QueryResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_QueryResponse) */

void zx_e_Body_PUT_idhrxml_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_QueryResponse_s* z)
{
  struct zx_idhrxml_QueryResponse_s* y;
  if (!x || !z) return;
  y = x->idhrxml_QueryResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_QueryResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_QueryResponse) */

void zx_e_Body_ADD_idhrxml_QueryResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_QueryResponse_s* z)
{
  struct zx_idhrxml_QueryResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_QueryResponse->gg.g;
    x->idhrxml_QueryResponse = z;
    return;
  case -1:
    y = x->idhrxml_QueryResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_QueryResponse; n > 1 && y; --n, y = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_QueryResponse) */

void zx_e_Body_DEL_idhrxml_QueryResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_QueryResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_QueryResponse = (struct zx_idhrxml_QueryResponse_s*)x->idhrxml_QueryResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_QueryResponse_s*)x->idhrxml_QueryResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_QueryResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_QueryResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_Modify) */

int zx_e_Body_NUM_idhrxml_Modify(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Modify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_Modify; y; ++n, y = (struct zx_idhrxml_Modify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_Modify) */

struct zx_idhrxml_Modify_s* zx_e_Body_GET_idhrxml_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Modify_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_Modify; n>=0 && y; --n, y = (struct zx_idhrxml_Modify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_Modify) */

struct zx_idhrxml_Modify_s* zx_e_Body_POP_idhrxml_Modify(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Modify_s* y;
  if (!x) return 0;
  y = x->idhrxml_Modify;
  if (y)
    x->idhrxml_Modify = (struct zx_idhrxml_Modify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_Modify) */

void zx_e_Body_PUSH_idhrxml_Modify(struct zx_e_Body_s* x, struct zx_idhrxml_Modify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_Modify->gg.g;
  x->idhrxml_Modify = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_Modify) */

void zx_e_Body_REV_idhrxml_Modify(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Modify_s* nxt;
  struct zx_idhrxml_Modify_s* y;
  if (!x) return;
  y = x->idhrxml_Modify;
  if (!y) return;
  x->idhrxml_Modify = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Modify_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_Modify->gg.g;
    x->idhrxml_Modify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_Modify) */

void zx_e_Body_PUT_idhrxml_Modify(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Modify_s* z)
{
  struct zx_idhrxml_Modify_s* y;
  if (!x || !z) return;
  y = x->idhrxml_Modify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_Modify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_Modify) */

void zx_e_Body_ADD_idhrxml_Modify(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Modify_s* z)
{
  struct zx_idhrxml_Modify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_Modify->gg.g;
    x->idhrxml_Modify = z;
    return;
  case -1:
    y = x->idhrxml_Modify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Modify; n > 1 && y; --n, y = (struct zx_idhrxml_Modify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_Modify) */

void zx_e_Body_DEL_idhrxml_Modify(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Modify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_Modify = (struct zx_idhrxml_Modify_s*)x->idhrxml_Modify->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Modify_s*)x->idhrxml_Modify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Modify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Modify; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Modify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_ModifyResponse) */

int zx_e_Body_NUM_idhrxml_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_ModifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_ModifyResponse; y; ++n, y = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_ModifyResponse) */

struct zx_idhrxml_ModifyResponse_s* zx_e_Body_GET_idhrxml_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_ModifyResponse_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_ModifyResponse; n>=0 && y; --n, y = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_ModifyResponse) */

struct zx_idhrxml_ModifyResponse_s* zx_e_Body_POP_idhrxml_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_ModifyResponse_s* y;
  if (!x) return 0;
  y = x->idhrxml_ModifyResponse;
  if (y)
    x->idhrxml_ModifyResponse = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_ModifyResponse) */

void zx_e_Body_PUSH_idhrxml_ModifyResponse(struct zx_e_Body_s* x, struct zx_idhrxml_ModifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_ModifyResponse->gg.g;
  x->idhrxml_ModifyResponse = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_ModifyResponse) */

void zx_e_Body_REV_idhrxml_ModifyResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_ModifyResponse_s* nxt;
  struct zx_idhrxml_ModifyResponse_s* y;
  if (!x) return;
  y = x->idhrxml_ModifyResponse;
  if (!y) return;
  x->idhrxml_ModifyResponse = 0;
  while (y) {
    nxt = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_ModifyResponse->gg.g;
    x->idhrxml_ModifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_ModifyResponse) */

void zx_e_Body_PUT_idhrxml_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_ModifyResponse_s* z)
{
  struct zx_idhrxml_ModifyResponse_s* y;
  if (!x || !z) return;
  y = x->idhrxml_ModifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_ModifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_ModifyResponse) */

void zx_e_Body_ADD_idhrxml_ModifyResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_ModifyResponse_s* z)
{
  struct zx_idhrxml_ModifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_ModifyResponse->gg.g;
    x->idhrxml_ModifyResponse = z;
    return;
  case -1:
    y = x->idhrxml_ModifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_ModifyResponse; n > 1 && y; --n, y = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_ModifyResponse) */

void zx_e_Body_DEL_idhrxml_ModifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_ModifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_ModifyResponse = (struct zx_idhrxml_ModifyResponse_s*)x->idhrxml_ModifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_ModifyResponse_s*)x->idhrxml_ModifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_ModifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_ModifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_Delete) */

int zx_e_Body_NUM_idhrxml_Delete(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Delete_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_Delete; y; ++n, y = (struct zx_idhrxml_Delete_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_Delete) */

struct zx_idhrxml_Delete_s* zx_e_Body_GET_idhrxml_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Delete_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_Delete; n>=0 && y; --n, y = (struct zx_idhrxml_Delete_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_Delete) */

struct zx_idhrxml_Delete_s* zx_e_Body_POP_idhrxml_Delete(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Delete_s* y;
  if (!x) return 0;
  y = x->idhrxml_Delete;
  if (y)
    x->idhrxml_Delete = (struct zx_idhrxml_Delete_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_Delete) */

void zx_e_Body_PUSH_idhrxml_Delete(struct zx_e_Body_s* x, struct zx_idhrxml_Delete_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_Delete->gg.g;
  x->idhrxml_Delete = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_Delete) */

void zx_e_Body_REV_idhrxml_Delete(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Delete_s* nxt;
  struct zx_idhrxml_Delete_s* y;
  if (!x) return;
  y = x->idhrxml_Delete;
  if (!y) return;
  x->idhrxml_Delete = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Delete_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_Delete->gg.g;
    x->idhrxml_Delete = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_Delete) */

void zx_e_Body_PUT_idhrxml_Delete(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Delete_s* z)
{
  struct zx_idhrxml_Delete_s* y;
  if (!x || !z) return;
  y = x->idhrxml_Delete;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_Delete = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_Delete) */

void zx_e_Body_ADD_idhrxml_Delete(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Delete_s* z)
{
  struct zx_idhrxml_Delete_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_Delete->gg.g;
    x->idhrxml_Delete = z;
    return;
  case -1:
    y = x->idhrxml_Delete;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Delete; n > 1 && y; --n, y = (struct zx_idhrxml_Delete_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_Delete) */

void zx_e_Body_DEL_idhrxml_Delete(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Delete_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_Delete = (struct zx_idhrxml_Delete_s*)x->idhrxml_Delete->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Delete_s*)x->idhrxml_Delete;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Delete_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Delete; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Delete_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_DeleteResponse) */

int zx_e_Body_NUM_idhrxml_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_DeleteResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_DeleteResponse; y; ++n, y = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_DeleteResponse) */

struct zx_idhrxml_DeleteResponse_s* zx_e_Body_GET_idhrxml_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_DeleteResponse_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_DeleteResponse; n>=0 && y; --n, y = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_DeleteResponse) */

struct zx_idhrxml_DeleteResponse_s* zx_e_Body_POP_idhrxml_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_DeleteResponse_s* y;
  if (!x) return 0;
  y = x->idhrxml_DeleteResponse;
  if (y)
    x->idhrxml_DeleteResponse = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_DeleteResponse) */

void zx_e_Body_PUSH_idhrxml_DeleteResponse(struct zx_e_Body_s* x, struct zx_idhrxml_DeleteResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_DeleteResponse->gg.g;
  x->idhrxml_DeleteResponse = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_DeleteResponse) */

void zx_e_Body_REV_idhrxml_DeleteResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_DeleteResponse_s* nxt;
  struct zx_idhrxml_DeleteResponse_s* y;
  if (!x) return;
  y = x->idhrxml_DeleteResponse;
  if (!y) return;
  x->idhrxml_DeleteResponse = 0;
  while (y) {
    nxt = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_DeleteResponse->gg.g;
    x->idhrxml_DeleteResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_DeleteResponse) */

void zx_e_Body_PUT_idhrxml_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_DeleteResponse_s* z)
{
  struct zx_idhrxml_DeleteResponse_s* y;
  if (!x || !z) return;
  y = x->idhrxml_DeleteResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_DeleteResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_DeleteResponse) */

void zx_e_Body_ADD_idhrxml_DeleteResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_DeleteResponse_s* z)
{
  struct zx_idhrxml_DeleteResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_DeleteResponse->gg.g;
    x->idhrxml_DeleteResponse = z;
    return;
  case -1:
    y = x->idhrxml_DeleteResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_DeleteResponse; n > 1 && y; --n, y = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_DeleteResponse) */

void zx_e_Body_DEL_idhrxml_DeleteResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_DeleteResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_DeleteResponse = (struct zx_idhrxml_DeleteResponse_s*)x->idhrxml_DeleteResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_DeleteResponse_s*)x->idhrxml_DeleteResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_DeleteResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_DeleteResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_Notify) */

int zx_e_Body_NUM_idhrxml_Notify(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Notify_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_Notify; y; ++n, y = (struct zx_idhrxml_Notify_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_Notify) */

struct zx_idhrxml_Notify_s* zx_e_Body_GET_idhrxml_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Notify_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_Notify; n>=0 && y; --n, y = (struct zx_idhrxml_Notify_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_Notify) */

struct zx_idhrxml_Notify_s* zx_e_Body_POP_idhrxml_Notify(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Notify_s* y;
  if (!x) return 0;
  y = x->idhrxml_Notify;
  if (y)
    x->idhrxml_Notify = (struct zx_idhrxml_Notify_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_Notify) */

void zx_e_Body_PUSH_idhrxml_Notify(struct zx_e_Body_s* x, struct zx_idhrxml_Notify_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_Notify->gg.g;
  x->idhrxml_Notify = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_Notify) */

void zx_e_Body_REV_idhrxml_Notify(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_Notify_s* nxt;
  struct zx_idhrxml_Notify_s* y;
  if (!x) return;
  y = x->idhrxml_Notify;
  if (!y) return;
  x->idhrxml_Notify = 0;
  while (y) {
    nxt = (struct zx_idhrxml_Notify_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_Notify->gg.g;
    x->idhrxml_Notify = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_Notify) */

void zx_e_Body_PUT_idhrxml_Notify(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Notify_s* z)
{
  struct zx_idhrxml_Notify_s* y;
  if (!x || !z) return;
  y = x->idhrxml_Notify;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_Notify = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_Notify) */

void zx_e_Body_ADD_idhrxml_Notify(struct zx_e_Body_s* x, int n, struct zx_idhrxml_Notify_s* z)
{
  struct zx_idhrxml_Notify_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_Notify->gg.g;
    x->idhrxml_Notify = z;
    return;
  case -1:
    y = x->idhrxml_Notify;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Notify; n > 1 && y; --n, y = (struct zx_idhrxml_Notify_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_Notify) */

void zx_e_Body_DEL_idhrxml_Notify(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_Notify_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_Notify = (struct zx_idhrxml_Notify_s*)x->idhrxml_Notify->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_Notify_s*)x->idhrxml_Notify;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_Notify_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_Notify; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_Notify_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Body_NUM_idhrxml_NotifyResponse) */

int zx_e_Body_NUM_idhrxml_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_NotifyResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->idhrxml_NotifyResponse; y; ++n, y = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Body_GET_idhrxml_NotifyResponse) */

struct zx_idhrxml_NotifyResponse_s* zx_e_Body_GET_idhrxml_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_NotifyResponse_s* y;
  if (!x) return 0;
  for (y = x->idhrxml_NotifyResponse; n>=0 && y; --n, y = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Body_POP_idhrxml_NotifyResponse) */

struct zx_idhrxml_NotifyResponse_s* zx_e_Body_POP_idhrxml_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_NotifyResponse_s* y;
  if (!x) return 0;
  y = x->idhrxml_NotifyResponse;
  if (y)
    x->idhrxml_NotifyResponse = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Body_PUSH_idhrxml_NotifyResponse) */

void zx_e_Body_PUSH_idhrxml_NotifyResponse(struct zx_e_Body_s* x, struct zx_idhrxml_NotifyResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->idhrxml_NotifyResponse->gg.g;
  x->idhrxml_NotifyResponse = z;
}

/* FUNC(zx_e_Body_REV_idhrxml_NotifyResponse) */

void zx_e_Body_REV_idhrxml_NotifyResponse(struct zx_e_Body_s* x)
{
  struct zx_idhrxml_NotifyResponse_s* nxt;
  struct zx_idhrxml_NotifyResponse_s* y;
  if (!x) return;
  y = x->idhrxml_NotifyResponse;
  if (!y) return;
  x->idhrxml_NotifyResponse = 0;
  while (y) {
    nxt = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->idhrxml_NotifyResponse->gg.g;
    x->idhrxml_NotifyResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Body_PUT_idhrxml_NotifyResponse) */

void zx_e_Body_PUT_idhrxml_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_NotifyResponse_s* z)
{
  struct zx_idhrxml_NotifyResponse_s* y;
  if (!x || !z) return;
  y = x->idhrxml_NotifyResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->idhrxml_NotifyResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Body_ADD_idhrxml_NotifyResponse) */

void zx_e_Body_ADD_idhrxml_NotifyResponse(struct zx_e_Body_s* x, int n, struct zx_idhrxml_NotifyResponse_s* z)
{
  struct zx_idhrxml_NotifyResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->idhrxml_NotifyResponse->gg.g;
    x->idhrxml_NotifyResponse = z;
    return;
  case -1:
    y = x->idhrxml_NotifyResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_NotifyResponse; n > 1 && y; --n, y = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Body_DEL_idhrxml_NotifyResponse) */

void zx_e_Body_DEL_idhrxml_NotifyResponse(struct zx_e_Body_s* x, int n)
{
  struct zx_idhrxml_NotifyResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->idhrxml_NotifyResponse = (struct zx_idhrxml_NotifyResponse_s*)x->idhrxml_NotifyResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_idhrxml_NotifyResponse_s*)x->idhrxml_NotifyResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->idhrxml_NotifyResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_idhrxml_NotifyResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_e_Body_GET_id) */
struct zx_str* zx_e_Body_GET_id(struct zx_e_Body_s* x) { return x->id; }
/* FUNC(zx_e_Body_PUT_id) */
void zx_e_Body_PUT_id(struct zx_e_Body_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Envelope_NUM_Header) */

int zx_e_Envelope_NUM_Header(struct zx_e_Envelope_s* x)
{
  struct zx_e_Header_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Header; y; ++n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Envelope_GET_Header) */

struct zx_e_Header_s* zx_e_Envelope_GET_Header(struct zx_e_Envelope_s* x, int n)
{
  struct zx_e_Header_s* y;
  if (!x) return 0;
  for (y = x->Header; n>=0 && y; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Envelope_POP_Header) */

struct zx_e_Header_s* zx_e_Envelope_POP_Header(struct zx_e_Envelope_s* x)
{
  struct zx_e_Header_s* y;
  if (!x) return 0;
  y = x->Header;
  if (y)
    x->Header = (struct zx_e_Header_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Envelope_PUSH_Header) */

void zx_e_Envelope_PUSH_Header(struct zx_e_Envelope_s* x, struct zx_e_Header_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Header->gg.g;
  x->Header = z;
}

/* FUNC(zx_e_Envelope_REV_Header) */

void zx_e_Envelope_REV_Header(struct zx_e_Envelope_s* x)
{
  struct zx_e_Header_s* nxt;
  struct zx_e_Header_s* y;
  if (!x) return;
  y = x->Header;
  if (!y) return;
  x->Header = 0;
  while (y) {
    nxt = (struct zx_e_Header_s*)y->gg.g.n;
    y->gg.g.n = &x->Header->gg.g;
    x->Header = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Envelope_PUT_Header) */

void zx_e_Envelope_PUT_Header(struct zx_e_Envelope_s* x, int n, struct zx_e_Header_s* z)
{
  struct zx_e_Header_s* y;
  if (!x || !z) return;
  y = x->Header;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Header = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Envelope_ADD_Header) */

void zx_e_Envelope_ADD_Header(struct zx_e_Envelope_s* x, int n, struct zx_e_Header_s* z)
{
  struct zx_e_Header_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Header->gg.g;
    x->Header = z;
    return;
  case -1:
    y = x->Header;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_e_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Envelope_DEL_Header) */

void zx_e_Envelope_DEL_Header(struct zx_e_Envelope_s* x, int n)
{
  struct zx_e_Header_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Header = (struct zx_e_Header_s*)x->Header->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Header_s*)x->Header;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Envelope_NUM_Body) */

int zx_e_Envelope_NUM_Body(struct zx_e_Envelope_s* x)
{
  struct zx_e_Body_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Body; y; ++n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Envelope_GET_Body) */

struct zx_e_Body_s* zx_e_Envelope_GET_Body(struct zx_e_Envelope_s* x, int n)
{
  struct zx_e_Body_s* y;
  if (!x) return 0;
  for (y = x->Body; n>=0 && y; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Envelope_POP_Body) */

struct zx_e_Body_s* zx_e_Envelope_POP_Body(struct zx_e_Envelope_s* x)
{
  struct zx_e_Body_s* y;
  if (!x) return 0;
  y = x->Body;
  if (y)
    x->Body = (struct zx_e_Body_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Envelope_PUSH_Body) */

void zx_e_Envelope_PUSH_Body(struct zx_e_Envelope_s* x, struct zx_e_Body_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Body->gg.g;
  x->Body = z;
}

/* FUNC(zx_e_Envelope_REV_Body) */

void zx_e_Envelope_REV_Body(struct zx_e_Envelope_s* x)
{
  struct zx_e_Body_s* nxt;
  struct zx_e_Body_s* y;
  if (!x) return;
  y = x->Body;
  if (!y) return;
  x->Body = 0;
  while (y) {
    nxt = (struct zx_e_Body_s*)y->gg.g.n;
    y->gg.g.n = &x->Body->gg.g;
    x->Body = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Envelope_PUT_Body) */

void zx_e_Envelope_PUT_Body(struct zx_e_Envelope_s* x, int n, struct zx_e_Body_s* z)
{
  struct zx_e_Body_s* y;
  if (!x || !z) return;
  y = x->Body;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Body = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Envelope_ADD_Body) */

void zx_e_Envelope_ADD_Body(struct zx_e_Envelope_s* x, int n, struct zx_e_Body_s* z)
{
  struct zx_e_Body_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Body->gg.g;
    x->Body = z;
    return;
  case -1:
    y = x->Body;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_e_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Envelope_DEL_Body) */

void zx_e_Envelope_DEL_Body(struct zx_e_Envelope_s* x, int n)
{
  struct zx_e_Body_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Body = (struct zx_e_Body_s*)x->Body->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Body_s*)x->Body;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_e_Envelope_GET_id) */
struct zx_str* zx_e_Envelope_GET_id(struct zx_e_Envelope_s* x) { return x->id; }
/* FUNC(zx_e_Envelope_PUT_id) */
void zx_e_Envelope_PUT_id(struct zx_e_Envelope_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Fault_NUM_faultcode) */

int zx_e_Fault_NUM_faultcode(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultcode; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_e_Fault_GET_faultcode) */

struct zx_elem_s* zx_e_Fault_GET_faultcode(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultcode; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_e_Fault_POP_faultcode) */

struct zx_elem_s* zx_e_Fault_POP_faultcode(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultcode;
  if (y)
    x->faultcode = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_e_Fault_PUSH_faultcode) */

void zx_e_Fault_PUSH_faultcode(struct zx_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultcode->g;
  x->faultcode = z;
}

/* FUNC(zx_e_Fault_REV_faultcode) */

void zx_e_Fault_REV_faultcode(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->faultcode;
  if (!y) return;
  x->faultcode = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->faultcode->g;
    x->faultcode = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Fault_PUT_faultcode) */

void zx_e_Fault_PUT_faultcode(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->faultcode;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->faultcode = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_e_Fault_ADD_faultcode) */

void zx_e_Fault_ADD_faultcode(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->faultcode->g;
    x->faultcode = z;
    return;
  case -1:
    y = x->faultcode;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultcode; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_e_Fault_DEL_faultcode) */

void zx_e_Fault_DEL_faultcode(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->faultcode = (struct zx_elem_s*)x->faultcode->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->faultcode;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultcode; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Fault_NUM_faultstring) */

int zx_e_Fault_NUM_faultstring(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultstring; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_e_Fault_GET_faultstring) */

struct zx_elem_s* zx_e_Fault_GET_faultstring(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultstring; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_e_Fault_POP_faultstring) */

struct zx_elem_s* zx_e_Fault_POP_faultstring(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultstring;
  if (y)
    x->faultstring = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_e_Fault_PUSH_faultstring) */

void zx_e_Fault_PUSH_faultstring(struct zx_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultstring->g;
  x->faultstring = z;
}

/* FUNC(zx_e_Fault_REV_faultstring) */

void zx_e_Fault_REV_faultstring(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->faultstring;
  if (!y) return;
  x->faultstring = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->faultstring->g;
    x->faultstring = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Fault_PUT_faultstring) */

void zx_e_Fault_PUT_faultstring(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->faultstring;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->faultstring = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_e_Fault_ADD_faultstring) */

void zx_e_Fault_ADD_faultstring(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->faultstring->g;
    x->faultstring = z;
    return;
  case -1:
    y = x->faultstring;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultstring; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_e_Fault_DEL_faultstring) */

void zx_e_Fault_DEL_faultstring(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->faultstring = (struct zx_elem_s*)x->faultstring->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->faultstring;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultstring; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Fault_NUM_faultactor) */

int zx_e_Fault_NUM_faultactor(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->faultactor; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_e_Fault_GET_faultactor) */

struct zx_elem_s* zx_e_Fault_GET_faultactor(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->faultactor; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_e_Fault_POP_faultactor) */

struct zx_elem_s* zx_e_Fault_POP_faultactor(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->faultactor;
  if (y)
    x->faultactor = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_e_Fault_PUSH_faultactor) */

void zx_e_Fault_PUSH_faultactor(struct zx_e_Fault_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->faultactor->g;
  x->faultactor = z;
}

/* FUNC(zx_e_Fault_REV_faultactor) */

void zx_e_Fault_REV_faultactor(struct zx_e_Fault_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->faultactor;
  if (!y) return;
  x->faultactor = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->faultactor->g;
    x->faultactor = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Fault_PUT_faultactor) */

void zx_e_Fault_PUT_faultactor(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->faultactor;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->faultactor = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_e_Fault_ADD_faultactor) */

void zx_e_Fault_ADD_faultactor(struct zx_e_Fault_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->faultactor->g;
    x->faultactor = z;
    return;
  case -1:
    y = x->faultactor;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultactor; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_e_Fault_DEL_faultactor) */

void zx_e_Fault_DEL_faultactor(struct zx_e_Fault_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->faultactor = (struct zx_elem_s*)x->faultactor->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->faultactor;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->faultactor; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Fault_NUM_detail) */

int zx_e_Fault_NUM_detail(struct zx_e_Fault_s* x)
{
  struct zx_e_detail_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->detail; y; ++n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Fault_GET_detail) */

struct zx_e_detail_s* zx_e_Fault_GET_detail(struct zx_e_Fault_s* x, int n)
{
  struct zx_e_detail_s* y;
  if (!x) return 0;
  for (y = x->detail; n>=0 && y; --n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Fault_POP_detail) */

struct zx_e_detail_s* zx_e_Fault_POP_detail(struct zx_e_Fault_s* x)
{
  struct zx_e_detail_s* y;
  if (!x) return 0;
  y = x->detail;
  if (y)
    x->detail = (struct zx_e_detail_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Fault_PUSH_detail) */

void zx_e_Fault_PUSH_detail(struct zx_e_Fault_s* x, struct zx_e_detail_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->detail->gg.g;
  x->detail = z;
}

/* FUNC(zx_e_Fault_REV_detail) */

void zx_e_Fault_REV_detail(struct zx_e_Fault_s* x)
{
  struct zx_e_detail_s* nxt;
  struct zx_e_detail_s* y;
  if (!x) return;
  y = x->detail;
  if (!y) return;
  x->detail = 0;
  while (y) {
    nxt = (struct zx_e_detail_s*)y->gg.g.n;
    y->gg.g.n = &x->detail->gg.g;
    x->detail = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Fault_PUT_detail) */

void zx_e_Fault_PUT_detail(struct zx_e_Fault_s* x, int n, struct zx_e_detail_s* z)
{
  struct zx_e_detail_s* y;
  if (!x || !z) return;
  y = x->detail;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->detail = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Fault_ADD_detail) */

void zx_e_Fault_ADD_detail(struct zx_e_Fault_s* x, int n, struct zx_e_detail_s* z)
{
  struct zx_e_detail_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->detail->gg.g;
    x->detail = z;
    return;
  case -1:
    y = x->detail;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_e_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y; --n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Fault_DEL_detail) */

void zx_e_Fault_DEL_detail(struct zx_e_Fault_s* x, int n)
{
  struct zx_e_detail_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->detail = (struct zx_e_detail_s*)x->detail->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_detail_s*)x->detail;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_detail_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->detail; n > 1 && y->gg.g.n; --n, y = (struct zx_e_detail_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif








#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Request) */

int zx_e_Header_NUM_Request(struct zx_e_Header_s* x)
{
  struct zx_paos_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Request; y; ++n, y = (struct zx_paos_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Request) */

struct zx_paos_Request_s* zx_e_Header_GET_Request(struct zx_e_Header_s* x, int n)
{
  struct zx_paos_Request_s* y;
  if (!x) return 0;
  for (y = x->Request; n>=0 && y; --n, y = (struct zx_paos_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Request) */

struct zx_paos_Request_s* zx_e_Header_POP_Request(struct zx_e_Header_s* x)
{
  struct zx_paos_Request_s* y;
  if (!x) return 0;
  y = x->Request;
  if (y)
    x->Request = (struct zx_paos_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Request) */

void zx_e_Header_PUSH_Request(struct zx_e_Header_s* x, struct zx_paos_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Request->gg.g;
  x->Request = z;
}

/* FUNC(zx_e_Header_REV_Request) */

void zx_e_Header_REV_Request(struct zx_e_Header_s* x)
{
  struct zx_paos_Request_s* nxt;
  struct zx_paos_Request_s* y;
  if (!x) return;
  y = x->Request;
  if (!y) return;
  x->Request = 0;
  while (y) {
    nxt = (struct zx_paos_Request_s*)y->gg.g.n;
    y->gg.g.n = &x->Request->gg.g;
    x->Request = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Request) */

void zx_e_Header_PUT_Request(struct zx_e_Header_s* x, int n, struct zx_paos_Request_s* z)
{
  struct zx_paos_Request_s* y;
  if (!x || !z) return;
  y = x->Request;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Request = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_paos_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Request) */

void zx_e_Header_ADD_Request(struct zx_e_Header_s* x, int n, struct zx_paos_Request_s* z)
{
  struct zx_paos_Request_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Request->gg.g;
    x->Request = z;
    return;
  case -1:
    y = x->Request;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_paos_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y; --n, y = (struct zx_paos_Request_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Request) */

void zx_e_Header_DEL_Request(struct zx_e_Header_s* x, int n)
{
  struct zx_paos_Request_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Request = (struct zx_paos_Request_s*)x->Request->gg.g.n;
    return;
  case -1:
    y = (struct zx_paos_Request_s*)x->Request;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_paos_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y->gg.g.n; --n, y = (struct zx_paos_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Response) */

int zx_e_Header_NUM_Response(struct zx_e_Header_s* x)
{
  struct zx_paos_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_paos_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Response) */

struct zx_paos_Response_s* zx_e_Header_GET_Response(struct zx_e_Header_s* x, int n)
{
  struct zx_paos_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_paos_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Response) */

struct zx_paos_Response_s* zx_e_Header_POP_Response(struct zx_e_Header_s* x)
{
  struct zx_paos_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_paos_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Response) */

void zx_e_Header_PUSH_Response(struct zx_e_Header_s* x, struct zx_paos_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_e_Header_REV_Response) */

void zx_e_Header_REV_Response(struct zx_e_Header_s* x)
{
  struct zx_paos_Response_s* nxt;
  struct zx_paos_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_paos_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Response) */

void zx_e_Header_PUT_Response(struct zx_e_Header_s* x, int n, struct zx_paos_Response_s* z)
{
  struct zx_paos_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_paos_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Response) */

void zx_e_Header_ADD_Response(struct zx_e_Header_s* x, int n, struct zx_paos_Response_s* z)
{
  struct zx_paos_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Response->gg.g;
    x->Response = z;
    return;
  case -1:
    y = x->Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_paos_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_paos_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Response) */

void zx_e_Header_DEL_Response(struct zx_e_Header_s* x, int n)
{
  struct zx_paos_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_paos_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_paos_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_paos_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_paos_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_ecp_Request) */

int zx_e_Header_NUM_ecp_Request(struct zx_e_Header_s* x)
{
  struct zx_ecp_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ecp_Request; y; ++n, y = (struct zx_ecp_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ecp_Request) */

struct zx_ecp_Request_s* zx_e_Header_GET_ecp_Request(struct zx_e_Header_s* x, int n)
{
  struct zx_ecp_Request_s* y;
  if (!x) return 0;
  for (y = x->ecp_Request; n>=0 && y; --n, y = (struct zx_ecp_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ecp_Request) */

struct zx_ecp_Request_s* zx_e_Header_POP_ecp_Request(struct zx_e_Header_s* x)
{
  struct zx_ecp_Request_s* y;
  if (!x) return 0;
  y = x->ecp_Request;
  if (y)
    x->ecp_Request = (struct zx_ecp_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ecp_Request) */

void zx_e_Header_PUSH_ecp_Request(struct zx_e_Header_s* x, struct zx_ecp_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ecp_Request->gg.g;
  x->ecp_Request = z;
}

/* FUNC(zx_e_Header_REV_ecp_Request) */

void zx_e_Header_REV_ecp_Request(struct zx_e_Header_s* x)
{
  struct zx_ecp_Request_s* nxt;
  struct zx_ecp_Request_s* y;
  if (!x) return;
  y = x->ecp_Request;
  if (!y) return;
  x->ecp_Request = 0;
  while (y) {
    nxt = (struct zx_ecp_Request_s*)y->gg.g.n;
    y->gg.g.n = &x->ecp_Request->gg.g;
    x->ecp_Request = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_ecp_Request) */

void zx_e_Header_PUT_ecp_Request(struct zx_e_Header_s* x, int n, struct zx_ecp_Request_s* z)
{
  struct zx_ecp_Request_s* y;
  if (!x || !z) return;
  y = x->ecp_Request;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ecp_Request = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ecp_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_ecp_Request) */

void zx_e_Header_ADD_ecp_Request(struct zx_e_Header_s* x, int n, struct zx_ecp_Request_s* z)
{
  struct zx_ecp_Request_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ecp_Request->gg.g;
    x->ecp_Request = z;
    return;
  case -1:
    y = x->ecp_Request;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ecp_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ecp_Request; n > 1 && y; --n, y = (struct zx_ecp_Request_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_ecp_Request) */

void zx_e_Header_DEL_ecp_Request(struct zx_e_Header_s* x, int n)
{
  struct zx_ecp_Request_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ecp_Request = (struct zx_ecp_Request_s*)x->ecp_Request->gg.g.n;
    return;
  case -1:
    y = (struct zx_ecp_Request_s*)x->ecp_Request;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ecp_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ecp_Request; n > 1 && y->gg.g.n; --n, y = (struct zx_ecp_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_ecp_Response) */

int zx_e_Header_NUM_ecp_Response(struct zx_e_Header_s* x)
{
  struct zx_ecp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ecp_Response; y; ++n, y = (struct zx_ecp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ecp_Response) */

struct zx_ecp_Response_s* zx_e_Header_GET_ecp_Response(struct zx_e_Header_s* x, int n)
{
  struct zx_ecp_Response_s* y;
  if (!x) return 0;
  for (y = x->ecp_Response; n>=0 && y; --n, y = (struct zx_ecp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ecp_Response) */

struct zx_ecp_Response_s* zx_e_Header_POP_ecp_Response(struct zx_e_Header_s* x)
{
  struct zx_ecp_Response_s* y;
  if (!x) return 0;
  y = x->ecp_Response;
  if (y)
    x->ecp_Response = (struct zx_ecp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ecp_Response) */

void zx_e_Header_PUSH_ecp_Response(struct zx_e_Header_s* x, struct zx_ecp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ecp_Response->gg.g;
  x->ecp_Response = z;
}

/* FUNC(zx_e_Header_REV_ecp_Response) */

void zx_e_Header_REV_ecp_Response(struct zx_e_Header_s* x)
{
  struct zx_ecp_Response_s* nxt;
  struct zx_ecp_Response_s* y;
  if (!x) return;
  y = x->ecp_Response;
  if (!y) return;
  x->ecp_Response = 0;
  while (y) {
    nxt = (struct zx_ecp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->ecp_Response->gg.g;
    x->ecp_Response = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_ecp_Response) */

void zx_e_Header_PUT_ecp_Response(struct zx_e_Header_s* x, int n, struct zx_ecp_Response_s* z)
{
  struct zx_ecp_Response_s* y;
  if (!x || !z) return;
  y = x->ecp_Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ecp_Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ecp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_ecp_Response) */

void zx_e_Header_ADD_ecp_Response(struct zx_e_Header_s* x, int n, struct zx_ecp_Response_s* z)
{
  struct zx_ecp_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ecp_Response->gg.g;
    x->ecp_Response = z;
    return;
  case -1:
    y = x->ecp_Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ecp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ecp_Response; n > 1 && y; --n, y = (struct zx_ecp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_ecp_Response) */

void zx_e_Header_DEL_ecp_Response(struct zx_e_Header_s* x, int n)
{
  struct zx_ecp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ecp_Response = (struct zx_ecp_Response_s*)x->ecp_Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_ecp_Response_s*)x->ecp_Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ecp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ecp_Response; n > 1 && y->gg.g.n; --n, y = (struct zx_ecp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_RelayState) */

int zx_e_Header_NUM_RelayState(struct zx_e_Header_s* x)
{
  struct zx_ecp_RelayState_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RelayState; y; ++n, y = (struct zx_ecp_RelayState_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_RelayState) */

struct zx_ecp_RelayState_s* zx_e_Header_GET_RelayState(struct zx_e_Header_s* x, int n)
{
  struct zx_ecp_RelayState_s* y;
  if (!x) return 0;
  for (y = x->RelayState; n>=0 && y; --n, y = (struct zx_ecp_RelayState_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_RelayState) */

struct zx_ecp_RelayState_s* zx_e_Header_POP_RelayState(struct zx_e_Header_s* x)
{
  struct zx_ecp_RelayState_s* y;
  if (!x) return 0;
  y = x->RelayState;
  if (y)
    x->RelayState = (struct zx_ecp_RelayState_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_RelayState) */

void zx_e_Header_PUSH_RelayState(struct zx_e_Header_s* x, struct zx_ecp_RelayState_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RelayState->gg.g;
  x->RelayState = z;
}

/* FUNC(zx_e_Header_REV_RelayState) */

void zx_e_Header_REV_RelayState(struct zx_e_Header_s* x)
{
  struct zx_ecp_RelayState_s* nxt;
  struct zx_ecp_RelayState_s* y;
  if (!x) return;
  y = x->RelayState;
  if (!y) return;
  x->RelayState = 0;
  while (y) {
    nxt = (struct zx_ecp_RelayState_s*)y->gg.g.n;
    y->gg.g.n = &x->RelayState->gg.g;
    x->RelayState = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_RelayState) */

void zx_e_Header_PUT_RelayState(struct zx_e_Header_s* x, int n, struct zx_ecp_RelayState_s* z)
{
  struct zx_ecp_RelayState_s* y;
  if (!x || !z) return;
  y = x->RelayState;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RelayState = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ecp_RelayState_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_RelayState) */

void zx_e_Header_ADD_RelayState(struct zx_e_Header_s* x, int n, struct zx_ecp_RelayState_s* z)
{
  struct zx_ecp_RelayState_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RelayState->gg.g;
    x->RelayState = z;
    return;
  case -1:
    y = x->RelayState;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ecp_RelayState_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelayState; n > 1 && y; --n, y = (struct zx_ecp_RelayState_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_RelayState) */

void zx_e_Header_DEL_RelayState(struct zx_e_Header_s* x, int n)
{
  struct zx_ecp_RelayState_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RelayState = (struct zx_ecp_RelayState_s*)x->RelayState->gg.g.n;
    return;
  case -1:
    y = (struct zx_ecp_RelayState_s*)x->RelayState;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ecp_RelayState_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelayState; n > 1 && y->gg.g.n; --n, y = (struct zx_ecp_RelayState_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_MessageID) */

int zx_e_Header_NUM_MessageID(struct zx_e_Header_s* x)
{
  struct zx_a_MessageID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->MessageID; y; ++n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_MessageID) */

struct zx_a_MessageID_s* zx_e_Header_GET_MessageID(struct zx_e_Header_s* x, int n)
{
  struct zx_a_MessageID_s* y;
  if (!x) return 0;
  for (y = x->MessageID; n>=0 && y; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_MessageID) */

struct zx_a_MessageID_s* zx_e_Header_POP_MessageID(struct zx_e_Header_s* x)
{
  struct zx_a_MessageID_s* y;
  if (!x) return 0;
  y = x->MessageID;
  if (y)
    x->MessageID = (struct zx_a_MessageID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_MessageID) */

void zx_e_Header_PUSH_MessageID(struct zx_e_Header_s* x, struct zx_a_MessageID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->MessageID->gg.g;
  x->MessageID = z;
}

/* FUNC(zx_e_Header_REV_MessageID) */

void zx_e_Header_REV_MessageID(struct zx_e_Header_s* x)
{
  struct zx_a_MessageID_s* nxt;
  struct zx_a_MessageID_s* y;
  if (!x) return;
  y = x->MessageID;
  if (!y) return;
  x->MessageID = 0;
  while (y) {
    nxt = (struct zx_a_MessageID_s*)y->gg.g.n;
    y->gg.g.n = &x->MessageID->gg.g;
    x->MessageID = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_MessageID) */

void zx_e_Header_PUT_MessageID(struct zx_e_Header_s* x, int n, struct zx_a_MessageID_s* z)
{
  struct zx_a_MessageID_s* y;
  if (!x || !z) return;
  y = x->MessageID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->MessageID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_MessageID) */

void zx_e_Header_ADD_MessageID(struct zx_e_Header_s* x, int n, struct zx_a_MessageID_s* z)
{
  struct zx_a_MessageID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->MessageID->gg.g;
    x->MessageID = z;
    return;
  case -1:
    y = x->MessageID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_MessageID) */

void zx_e_Header_DEL_MessageID(struct zx_e_Header_s* x, int n)
{
  struct zx_a_MessageID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->MessageID = (struct zx_a_MessageID_s*)x->MessageID->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_MessageID_s*)x->MessageID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->MessageID; n > 1 && y->gg.g.n; --n, y = (struct zx_a_MessageID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_RelatesTo) */

int zx_e_Header_NUM_RelatesTo(struct zx_e_Header_s* x)
{
  struct zx_a_RelatesTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RelatesTo; y; ++n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_RelatesTo) */

struct zx_a_RelatesTo_s* zx_e_Header_GET_RelatesTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_RelatesTo_s* y;
  if (!x) return 0;
  for (y = x->RelatesTo; n>=0 && y; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_RelatesTo) */

struct zx_a_RelatesTo_s* zx_e_Header_POP_RelatesTo(struct zx_e_Header_s* x)
{
  struct zx_a_RelatesTo_s* y;
  if (!x) return 0;
  y = x->RelatesTo;
  if (y)
    x->RelatesTo = (struct zx_a_RelatesTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_RelatesTo) */

void zx_e_Header_PUSH_RelatesTo(struct zx_e_Header_s* x, struct zx_a_RelatesTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RelatesTo->gg.g;
  x->RelatesTo = z;
}

/* FUNC(zx_e_Header_REV_RelatesTo) */

void zx_e_Header_REV_RelatesTo(struct zx_e_Header_s* x)
{
  struct zx_a_RelatesTo_s* nxt;
  struct zx_a_RelatesTo_s* y;
  if (!x) return;
  y = x->RelatesTo;
  if (!y) return;
  x->RelatesTo = 0;
  while (y) {
    nxt = (struct zx_a_RelatesTo_s*)y->gg.g.n;
    y->gg.g.n = &x->RelatesTo->gg.g;
    x->RelatesTo = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_RelatesTo) */

void zx_e_Header_PUT_RelatesTo(struct zx_e_Header_s* x, int n, struct zx_a_RelatesTo_s* z)
{
  struct zx_a_RelatesTo_s* y;
  if (!x || !z) return;
  y = x->RelatesTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RelatesTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_RelatesTo) */

void zx_e_Header_ADD_RelatesTo(struct zx_e_Header_s* x, int n, struct zx_a_RelatesTo_s* z)
{
  struct zx_a_RelatesTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RelatesTo->gg.g;
    x->RelatesTo = z;
    return;
  case -1:
    y = x->RelatesTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelatesTo; n > 1 && y; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_RelatesTo) */

void zx_e_Header_DEL_RelatesTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_RelatesTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RelatesTo = (struct zx_a_RelatesTo_s*)x->RelatesTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_RelatesTo_s*)x->RelatesTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RelatesTo; n > 1 && y->gg.g.n; --n, y = (struct zx_a_RelatesTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_ReplyTo) */

int zx_e_Header_NUM_ReplyTo(struct zx_e_Header_s* x)
{
  struct zx_a_ReplyTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReplyTo; y; ++n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ReplyTo) */

struct zx_a_ReplyTo_s* zx_e_Header_GET_ReplyTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_ReplyTo_s* y;
  if (!x) return 0;
  for (y = x->ReplyTo; n>=0 && y; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ReplyTo) */

struct zx_a_ReplyTo_s* zx_e_Header_POP_ReplyTo(struct zx_e_Header_s* x)
{
  struct zx_a_ReplyTo_s* y;
  if (!x) return 0;
  y = x->ReplyTo;
  if (y)
    x->ReplyTo = (struct zx_a_ReplyTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ReplyTo) */

void zx_e_Header_PUSH_ReplyTo(struct zx_e_Header_s* x, struct zx_a_ReplyTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReplyTo->gg.g;
  x->ReplyTo = z;
}

/* FUNC(zx_e_Header_REV_ReplyTo) */

void zx_e_Header_REV_ReplyTo(struct zx_e_Header_s* x)
{
  struct zx_a_ReplyTo_s* nxt;
  struct zx_a_ReplyTo_s* y;
  if (!x) return;
  y = x->ReplyTo;
  if (!y) return;
  x->ReplyTo = 0;
  while (y) {
    nxt = (struct zx_a_ReplyTo_s*)y->gg.g.n;
    y->gg.g.n = &x->ReplyTo->gg.g;
    x->ReplyTo = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_ReplyTo) */

void zx_e_Header_PUT_ReplyTo(struct zx_e_Header_s* x, int n, struct zx_a_ReplyTo_s* z)
{
  struct zx_a_ReplyTo_s* y;
  if (!x || !z) return;
  y = x->ReplyTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReplyTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_ReplyTo) */

void zx_e_Header_ADD_ReplyTo(struct zx_e_Header_s* x, int n, struct zx_a_ReplyTo_s* z)
{
  struct zx_a_ReplyTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReplyTo->gg.g;
    x->ReplyTo = z;
    return;
  case -1:
    y = x->ReplyTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyTo; n > 1 && y; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_ReplyTo) */

void zx_e_Header_DEL_ReplyTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_ReplyTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReplyTo = (struct zx_a_ReplyTo_s*)x->ReplyTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_ReplyTo_s*)x->ReplyTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReplyTo; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReplyTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_From) */

int zx_e_Header_NUM_From(struct zx_e_Header_s* x)
{
  struct zx_a_From_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->From; y; ++n, y = (struct zx_a_From_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_From) */

struct zx_a_From_s* zx_e_Header_GET_From(struct zx_e_Header_s* x, int n)
{
  struct zx_a_From_s* y;
  if (!x) return 0;
  for (y = x->From; n>=0 && y; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_From) */

struct zx_a_From_s* zx_e_Header_POP_From(struct zx_e_Header_s* x)
{
  struct zx_a_From_s* y;
  if (!x) return 0;
  y = x->From;
  if (y)
    x->From = (struct zx_a_From_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_From) */

void zx_e_Header_PUSH_From(struct zx_e_Header_s* x, struct zx_a_From_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->From->gg.g;
  x->From = z;
}

/* FUNC(zx_e_Header_REV_From) */

void zx_e_Header_REV_From(struct zx_e_Header_s* x)
{
  struct zx_a_From_s* nxt;
  struct zx_a_From_s* y;
  if (!x) return;
  y = x->From;
  if (!y) return;
  x->From = 0;
  while (y) {
    nxt = (struct zx_a_From_s*)y->gg.g.n;
    y->gg.g.n = &x->From->gg.g;
    x->From = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_From) */

void zx_e_Header_PUT_From(struct zx_e_Header_s* x, int n, struct zx_a_From_s* z)
{
  struct zx_a_From_s* y;
  if (!x || !z) return;
  y = x->From;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->From = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_From) */

void zx_e_Header_ADD_From(struct zx_e_Header_s* x, int n, struct zx_a_From_s* z)
{
  struct zx_a_From_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->From->gg.g;
    x->From = z;
    return;
  case -1:
    y = x->From;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_From_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->From; n > 1 && y; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_From) */

void zx_e_Header_DEL_From(struct zx_e_Header_s* x, int n)
{
  struct zx_a_From_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->From = (struct zx_a_From_s*)x->From->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_From_s*)x->From;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_From_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->From; n > 1 && y->gg.g.n; --n, y = (struct zx_a_From_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_FaultTo) */

int zx_e_Header_NUM_FaultTo(struct zx_e_Header_s* x)
{
  struct zx_a_FaultTo_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FaultTo; y; ++n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_FaultTo) */

struct zx_a_FaultTo_s* zx_e_Header_GET_FaultTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_FaultTo_s* y;
  if (!x) return 0;
  for (y = x->FaultTo; n>=0 && y; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_FaultTo) */

struct zx_a_FaultTo_s* zx_e_Header_POP_FaultTo(struct zx_e_Header_s* x)
{
  struct zx_a_FaultTo_s* y;
  if (!x) return 0;
  y = x->FaultTo;
  if (y)
    x->FaultTo = (struct zx_a_FaultTo_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_FaultTo) */

void zx_e_Header_PUSH_FaultTo(struct zx_e_Header_s* x, struct zx_a_FaultTo_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FaultTo->gg.g;
  x->FaultTo = z;
}

/* FUNC(zx_e_Header_REV_FaultTo) */

void zx_e_Header_REV_FaultTo(struct zx_e_Header_s* x)
{
  struct zx_a_FaultTo_s* nxt;
  struct zx_a_FaultTo_s* y;
  if (!x) return;
  y = x->FaultTo;
  if (!y) return;
  x->FaultTo = 0;
  while (y) {
    nxt = (struct zx_a_FaultTo_s*)y->gg.g.n;
    y->gg.g.n = &x->FaultTo->gg.g;
    x->FaultTo = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_FaultTo) */

void zx_e_Header_PUT_FaultTo(struct zx_e_Header_s* x, int n, struct zx_a_FaultTo_s* z)
{
  struct zx_a_FaultTo_s* y;
  if (!x || !z) return;
  y = x->FaultTo;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FaultTo = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_FaultTo) */

void zx_e_Header_ADD_FaultTo(struct zx_e_Header_s* x, int n, struct zx_a_FaultTo_s* z)
{
  struct zx_a_FaultTo_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->FaultTo->gg.g;
    x->FaultTo = z;
    return;
  case -1:
    y = x->FaultTo;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FaultTo; n > 1 && y; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_FaultTo) */

void zx_e_Header_DEL_FaultTo(struct zx_e_Header_s* x, int n)
{
  struct zx_a_FaultTo_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FaultTo = (struct zx_a_FaultTo_s*)x->FaultTo->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_FaultTo_s*)x->FaultTo;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FaultTo; n > 1 && y->gg.g.n; --n, y = (struct zx_a_FaultTo_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_To) */

int zx_e_Header_NUM_To(struct zx_e_Header_s* x)
{
  struct zx_a_To_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->To; y; ++n, y = (struct zx_a_To_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_To) */

struct zx_a_To_s* zx_e_Header_GET_To(struct zx_e_Header_s* x, int n)
{
  struct zx_a_To_s* y;
  if (!x) return 0;
  for (y = x->To; n>=0 && y; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_To) */

struct zx_a_To_s* zx_e_Header_POP_To(struct zx_e_Header_s* x)
{
  struct zx_a_To_s* y;
  if (!x) return 0;
  y = x->To;
  if (y)
    x->To = (struct zx_a_To_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_To) */

void zx_e_Header_PUSH_To(struct zx_e_Header_s* x, struct zx_a_To_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->To->gg.g;
  x->To = z;
}

/* FUNC(zx_e_Header_REV_To) */

void zx_e_Header_REV_To(struct zx_e_Header_s* x)
{
  struct zx_a_To_s* nxt;
  struct zx_a_To_s* y;
  if (!x) return;
  y = x->To;
  if (!y) return;
  x->To = 0;
  while (y) {
    nxt = (struct zx_a_To_s*)y->gg.g.n;
    y->gg.g.n = &x->To->gg.g;
    x->To = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_To) */

void zx_e_Header_PUT_To(struct zx_e_Header_s* x, int n, struct zx_a_To_s* z)
{
  struct zx_a_To_s* y;
  if (!x || !z) return;
  y = x->To;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->To = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_To) */

void zx_e_Header_ADD_To(struct zx_e_Header_s* x, int n, struct zx_a_To_s* z)
{
  struct zx_a_To_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->To->gg.g;
    x->To = z;
    return;
  case -1:
    y = x->To;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_To) */

void zx_e_Header_DEL_To(struct zx_e_Header_s* x, int n)
{
  struct zx_a_To_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->To = (struct zx_a_To_s*)x->To->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_To_s*)x->To;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_To_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->To; n > 1 && y->gg.g.n; --n, y = (struct zx_a_To_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Action) */

int zx_e_Header_NUM_Action(struct zx_e_Header_s* x)
{
  struct zx_a_Action_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Action; y; ++n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Action) */

struct zx_a_Action_s* zx_e_Header_GET_Action(struct zx_e_Header_s* x, int n)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  for (y = x->Action; n>=0 && y; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Action) */

struct zx_a_Action_s* zx_e_Header_POP_Action(struct zx_e_Header_s* x)
{
  struct zx_a_Action_s* y;
  if (!x) return 0;
  y = x->Action;
  if (y)
    x->Action = (struct zx_a_Action_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Action) */

void zx_e_Header_PUSH_Action(struct zx_e_Header_s* x, struct zx_a_Action_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Action->gg.g;
  x->Action = z;
}

/* FUNC(zx_e_Header_REV_Action) */

void zx_e_Header_REV_Action(struct zx_e_Header_s* x)
{
  struct zx_a_Action_s* nxt;
  struct zx_a_Action_s* y;
  if (!x) return;
  y = x->Action;
  if (!y) return;
  x->Action = 0;
  while (y) {
    nxt = (struct zx_a_Action_s*)y->gg.g.n;
    y->gg.g.n = &x->Action->gg.g;
    x->Action = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Action) */

void zx_e_Header_PUT_Action(struct zx_e_Header_s* x, int n, struct zx_a_Action_s* z)
{
  struct zx_a_Action_s* y;
  if (!x || !z) return;
  y = x->Action;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Action = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Action) */

void zx_e_Header_ADD_Action(struct zx_e_Header_s* x, int n, struct zx_a_Action_s* z)
{
  struct zx_a_Action_s* y;
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
    for (; y->gg.g.n; y = (struct zx_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Action) */

void zx_e_Header_DEL_Action(struct zx_e_Header_s* x, int n)
{
  struct zx_a_Action_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Action = (struct zx_a_Action_s*)x->Action->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_Action_s*)x->Action;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_Action_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Action; n > 1 && y->gg.g.n; --n, y = (struct zx_a_Action_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_ReferenceParameters) */

int zx_e_Header_NUM_ReferenceParameters(struct zx_e_Header_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ReferenceParameters; y; ++n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_e_Header_GET_ReferenceParameters(struct zx_e_Header_s* x, int n)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  for (y = x->ReferenceParameters; n>=0 && y; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ReferenceParameters) */

struct zx_a_ReferenceParameters_s* zx_e_Header_POP_ReferenceParameters(struct zx_e_Header_s* x)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return 0;
  y = x->ReferenceParameters;
  if (y)
    x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ReferenceParameters) */

void zx_e_Header_PUSH_ReferenceParameters(struct zx_e_Header_s* x, struct zx_a_ReferenceParameters_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ReferenceParameters->gg.g;
  x->ReferenceParameters = z;
}

/* FUNC(zx_e_Header_REV_ReferenceParameters) */

void zx_e_Header_REV_ReferenceParameters(struct zx_e_Header_s* x)
{
  struct zx_a_ReferenceParameters_s* nxt;
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return;
  y = x->ReferenceParameters;
  if (!y) return;
  x->ReferenceParameters = 0;
  while (y) {
    nxt = (struct zx_a_ReferenceParameters_s*)y->gg.g.n;
    y->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_ReferenceParameters) */

void zx_e_Header_PUT_ReferenceParameters(struct zx_e_Header_s* x, int n, struct zx_a_ReferenceParameters_s* z)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  y = x->ReferenceParameters;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ReferenceParameters = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_ReferenceParameters) */

void zx_e_Header_ADD_ReferenceParameters(struct zx_e_Header_s* x, int n, struct zx_a_ReferenceParameters_s* z)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ReferenceParameters->gg.g;
    x->ReferenceParameters = z;
    return;
  case -1:
    y = x->ReferenceParameters;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_ReferenceParameters) */

void zx_e_Header_DEL_ReferenceParameters(struct zx_e_Header_s* x, int n)
{
  struct zx_a_ReferenceParameters_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)x->ReferenceParameters->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_ReferenceParameters_s*)x->ReferenceParameters;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ReferenceParameters; n > 1 && y->gg.g.n; --n, y = (struct zx_a_ReferenceParameters_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Framework) */

int zx_e_Header_NUM_Framework(struct zx_e_Header_s* x)
{
  struct zx_sbf_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Framework; y; ++n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Framework) */

struct zx_sbf_Framework_s* zx_e_Header_GET_Framework(struct zx_e_Header_s* x, int n)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return 0;
  for (y = x->Framework; n>=0 && y; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Framework) */

struct zx_sbf_Framework_s* zx_e_Header_POP_Framework(struct zx_e_Header_s* x)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return 0;
  y = x->Framework;
  if (y)
    x->Framework = (struct zx_sbf_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Framework) */

void zx_e_Header_PUSH_Framework(struct zx_e_Header_s* x, struct zx_sbf_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Framework->gg.g;
  x->Framework = z;
}

/* FUNC(zx_e_Header_REV_Framework) */

void zx_e_Header_REV_Framework(struct zx_e_Header_s* x)
{
  struct zx_sbf_Framework_s* nxt;
  struct zx_sbf_Framework_s* y;
  if (!x) return;
  y = x->Framework;
  if (!y) return;
  x->Framework = 0;
  while (y) {
    nxt = (struct zx_sbf_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->Framework->gg.g;
    x->Framework = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Framework) */

void zx_e_Header_PUT_Framework(struct zx_e_Header_s* x, int n, struct zx_sbf_Framework_s* z)
{
  struct zx_sbf_Framework_s* y;
  if (!x || !z) return;
  y = x->Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Framework) */

void zx_e_Header_ADD_Framework(struct zx_e_Header_s* x, int n, struct zx_sbf_Framework_s* z)
{
  struct zx_sbf_Framework_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Framework->gg.g;
    x->Framework = z;
    return;
  case -1:
    y = x->Framework;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Framework) */

void zx_e_Header_DEL_Framework(struct zx_e_Header_s* x, int n)
{
  struct zx_sbf_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Framework = (struct zx_sbf_Framework_s*)x->Framework->gg.g.n;
    return;
  case -1:
    y = (struct zx_sbf_Framework_s*)x->Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Framework; n > 1 && y->gg.g.n; --n, y = (struct zx_sbf_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_b_Framework) */

int zx_e_Header_NUM_b_Framework(struct zx_e_Header_s* x)
{
  struct zx_b_Framework_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b_Framework; y; ++n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_b_Framework) */

struct zx_b_Framework_s* zx_e_Header_GET_b_Framework(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Framework_s* y;
  if (!x) return 0;
  for (y = x->b_Framework; n>=0 && y; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_b_Framework) */

struct zx_b_Framework_s* zx_e_Header_POP_b_Framework(struct zx_e_Header_s* x)
{
  struct zx_b_Framework_s* y;
  if (!x) return 0;
  y = x->b_Framework;
  if (y)
    x->b_Framework = (struct zx_b_Framework_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_b_Framework) */

void zx_e_Header_PUSH_b_Framework(struct zx_e_Header_s* x, struct zx_b_Framework_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b_Framework->gg.g;
  x->b_Framework = z;
}

/* FUNC(zx_e_Header_REV_b_Framework) */

void zx_e_Header_REV_b_Framework(struct zx_e_Header_s* x)
{
  struct zx_b_Framework_s* nxt;
  struct zx_b_Framework_s* y;
  if (!x) return;
  y = x->b_Framework;
  if (!y) return;
  x->b_Framework = 0;
  while (y) {
    nxt = (struct zx_b_Framework_s*)y->gg.g.n;
    y->gg.g.n = &x->b_Framework->gg.g;
    x->b_Framework = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_b_Framework) */

void zx_e_Header_PUT_b_Framework(struct zx_e_Header_s* x, int n, struct zx_b_Framework_s* z)
{
  struct zx_b_Framework_s* y;
  if (!x || !z) return;
  y = x->b_Framework;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b_Framework = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_b_Framework) */

void zx_e_Header_ADD_b_Framework(struct zx_e_Header_s* x, int n, struct zx_b_Framework_s* z)
{
  struct zx_b_Framework_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->b_Framework->gg.g;
    x->b_Framework = z;
    return;
  case -1:
    y = x->b_Framework;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b_Framework; n > 1 && y; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_b_Framework) */

void zx_e_Header_DEL_b_Framework(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Framework_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b_Framework = (struct zx_b_Framework_s*)x->b_Framework->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_Framework_s*)x->b_Framework;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b_Framework; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Framework_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Sender) */

int zx_e_Header_NUM_Sender(struct zx_e_Header_s* x)
{
  struct zx_b_Sender_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Sender; y; ++n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Sender) */

struct zx_b_Sender_s* zx_e_Header_GET_Sender(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Sender_s* y;
  if (!x) return 0;
  for (y = x->Sender; n>=0 && y; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Sender) */

struct zx_b_Sender_s* zx_e_Header_POP_Sender(struct zx_e_Header_s* x)
{
  struct zx_b_Sender_s* y;
  if (!x) return 0;
  y = x->Sender;
  if (y)
    x->Sender = (struct zx_b_Sender_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Sender) */

void zx_e_Header_PUSH_Sender(struct zx_e_Header_s* x, struct zx_b_Sender_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Sender->gg.g;
  x->Sender = z;
}

/* FUNC(zx_e_Header_REV_Sender) */

void zx_e_Header_REV_Sender(struct zx_e_Header_s* x)
{
  struct zx_b_Sender_s* nxt;
  struct zx_b_Sender_s* y;
  if (!x) return;
  y = x->Sender;
  if (!y) return;
  x->Sender = 0;
  while (y) {
    nxt = (struct zx_b_Sender_s*)y->gg.g.n;
    y->gg.g.n = &x->Sender->gg.g;
    x->Sender = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Sender) */

void zx_e_Header_PUT_Sender(struct zx_e_Header_s* x, int n, struct zx_b_Sender_s* z)
{
  struct zx_b_Sender_s* y;
  if (!x || !z) return;
  y = x->Sender;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Sender = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Sender) */

void zx_e_Header_ADD_Sender(struct zx_e_Header_s* x, int n, struct zx_b_Sender_s* z)
{
  struct zx_b_Sender_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Sender->gg.g;
    x->Sender = z;
    return;
  case -1:
    y = x->Sender;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Sender) */

void zx_e_Header_DEL_Sender(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Sender_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Sender = (struct zx_b_Sender_s*)x->Sender->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_Sender_s*)x->Sender;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Sender; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Sender_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_TargetIdentity) */

int zx_e_Header_NUM_TargetIdentity(struct zx_e_Header_s* x)
{
  struct zx_b_TargetIdentity_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TargetIdentity; y; ++n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_TargetIdentity) */

struct zx_b_TargetIdentity_s* zx_e_Header_GET_TargetIdentity(struct zx_e_Header_s* x, int n)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x) return 0;
  for (y = x->TargetIdentity; n>=0 && y; --n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_TargetIdentity) */

struct zx_b_TargetIdentity_s* zx_e_Header_POP_TargetIdentity(struct zx_e_Header_s* x)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x) return 0;
  y = x->TargetIdentity;
  if (y)
    x->TargetIdentity = (struct zx_b_TargetIdentity_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_TargetIdentity) */

void zx_e_Header_PUSH_TargetIdentity(struct zx_e_Header_s* x, struct zx_b_TargetIdentity_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TargetIdentity->gg.g;
  x->TargetIdentity = z;
}

/* FUNC(zx_e_Header_REV_TargetIdentity) */

void zx_e_Header_REV_TargetIdentity(struct zx_e_Header_s* x)
{
  struct zx_b_TargetIdentity_s* nxt;
  struct zx_b_TargetIdentity_s* y;
  if (!x) return;
  y = x->TargetIdentity;
  if (!y) return;
  x->TargetIdentity = 0;
  while (y) {
    nxt = (struct zx_b_TargetIdentity_s*)y->gg.g.n;
    y->gg.g.n = &x->TargetIdentity->gg.g;
    x->TargetIdentity = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_TargetIdentity) */

void zx_e_Header_PUT_TargetIdentity(struct zx_e_Header_s* x, int n, struct zx_b_TargetIdentity_s* z)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x || !z) return;
  y = x->TargetIdentity;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TargetIdentity = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_TargetIdentity) */

void zx_e_Header_ADD_TargetIdentity(struct zx_e_Header_s* x, int n, struct zx_b_TargetIdentity_s* z)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TargetIdentity->gg.g;
    x->TargetIdentity = z;
    return;
  case -1:
    y = x->TargetIdentity;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TargetIdentity; n > 1 && y; --n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_TargetIdentity) */

void zx_e_Header_DEL_TargetIdentity(struct zx_e_Header_s* x, int n)
{
  struct zx_b_TargetIdentity_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TargetIdentity = (struct zx_b_TargetIdentity_s*)x->TargetIdentity->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_TargetIdentity_s*)x->TargetIdentity;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TargetIdentity; n > 1 && y->gg.g.n; --n, y = (struct zx_b_TargetIdentity_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_CredentialsContext) */

int zx_e_Header_NUM_CredentialsContext(struct zx_e_Header_s* x)
{
  struct zx_b_CredentialsContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->CredentialsContext; y; ++n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_CredentialsContext) */

struct zx_b_CredentialsContext_s* zx_e_Header_GET_CredentialsContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x) return 0;
  for (y = x->CredentialsContext; n>=0 && y; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_CredentialsContext) */

struct zx_b_CredentialsContext_s* zx_e_Header_POP_CredentialsContext(struct zx_e_Header_s* x)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x) return 0;
  y = x->CredentialsContext;
  if (y)
    x->CredentialsContext = (struct zx_b_CredentialsContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_CredentialsContext) */

void zx_e_Header_PUSH_CredentialsContext(struct zx_e_Header_s* x, struct zx_b_CredentialsContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->CredentialsContext->gg.g;
  x->CredentialsContext = z;
}

/* FUNC(zx_e_Header_REV_CredentialsContext) */

void zx_e_Header_REV_CredentialsContext(struct zx_e_Header_s* x)
{
  struct zx_b_CredentialsContext_s* nxt;
  struct zx_b_CredentialsContext_s* y;
  if (!x) return;
  y = x->CredentialsContext;
  if (!y) return;
  x->CredentialsContext = 0;
  while (y) {
    nxt = (struct zx_b_CredentialsContext_s*)y->gg.g.n;
    y->gg.g.n = &x->CredentialsContext->gg.g;
    x->CredentialsContext = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_CredentialsContext) */

void zx_e_Header_PUT_CredentialsContext(struct zx_e_Header_s* x, int n, struct zx_b_CredentialsContext_s* z)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x || !z) return;
  y = x->CredentialsContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->CredentialsContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_CredentialsContext) */

void zx_e_Header_ADD_CredentialsContext(struct zx_e_Header_s* x, int n, struct zx_b_CredentialsContext_s* z)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->CredentialsContext->gg.g;
    x->CredentialsContext = z;
    return;
  case -1:
    y = x->CredentialsContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CredentialsContext; n > 1 && y; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_CredentialsContext) */

void zx_e_Header_DEL_CredentialsContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b_CredentialsContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->CredentialsContext = (struct zx_b_CredentialsContext_s*)x->CredentialsContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_CredentialsContext_s*)x->CredentialsContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->CredentialsContext; n > 1 && y->gg.g.n; --n, y = (struct zx_b_CredentialsContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_EndpointUpdate) */

int zx_e_Header_NUM_EndpointUpdate(struct zx_e_Header_s* x)
{
  struct zx_b_EndpointUpdate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointUpdate; y; ++n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_EndpointUpdate) */

struct zx_b_EndpointUpdate_s* zx_e_Header_GET_EndpointUpdate(struct zx_e_Header_s* x, int n)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return 0;
  for (y = x->EndpointUpdate; n>=0 && y; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_EndpointUpdate) */

struct zx_b_EndpointUpdate_s* zx_e_Header_POP_EndpointUpdate(struct zx_e_Header_s* x)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return 0;
  y = x->EndpointUpdate;
  if (y)
    x->EndpointUpdate = (struct zx_b_EndpointUpdate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_EndpointUpdate) */

void zx_e_Header_PUSH_EndpointUpdate(struct zx_e_Header_s* x, struct zx_b_EndpointUpdate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointUpdate->gg.g;
  x->EndpointUpdate = z;
}

/* FUNC(zx_e_Header_REV_EndpointUpdate) */

void zx_e_Header_REV_EndpointUpdate(struct zx_e_Header_s* x)
{
  struct zx_b_EndpointUpdate_s* nxt;
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return;
  y = x->EndpointUpdate;
  if (!y) return;
  x->EndpointUpdate = 0;
  while (y) {
    nxt = (struct zx_b_EndpointUpdate_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointUpdate->gg.g;
    x->EndpointUpdate = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_EndpointUpdate) */

void zx_e_Header_PUT_EndpointUpdate(struct zx_e_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x || !z) return;
  y = x->EndpointUpdate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointUpdate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_EndpointUpdate) */

void zx_e_Header_ADD_EndpointUpdate(struct zx_e_Header_s* x, int n, struct zx_b_EndpointUpdate_s* z)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointUpdate->gg.g;
    x->EndpointUpdate = z;
    return;
  case -1:
    y = x->EndpointUpdate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointUpdate; n > 1 && y; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_EndpointUpdate) */

void zx_e_Header_DEL_EndpointUpdate(struct zx_e_Header_s* x, int n)
{
  struct zx_b_EndpointUpdate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointUpdate = (struct zx_b_EndpointUpdate_s*)x->EndpointUpdate->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_EndpointUpdate_s*)x->EndpointUpdate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointUpdate; n > 1 && y->gg.g.n; --n, y = (struct zx_b_EndpointUpdate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Timeout) */

int zx_e_Header_NUM_Timeout(struct zx_e_Header_s* x)
{
  struct zx_b_Timeout_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Timeout; y; ++n, y = (struct zx_b_Timeout_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Timeout) */

struct zx_b_Timeout_s* zx_e_Header_GET_Timeout(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Timeout_s* y;
  if (!x) return 0;
  for (y = x->Timeout; n>=0 && y; --n, y = (struct zx_b_Timeout_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Timeout) */

struct zx_b_Timeout_s* zx_e_Header_POP_Timeout(struct zx_e_Header_s* x)
{
  struct zx_b_Timeout_s* y;
  if (!x) return 0;
  y = x->Timeout;
  if (y)
    x->Timeout = (struct zx_b_Timeout_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Timeout) */

void zx_e_Header_PUSH_Timeout(struct zx_e_Header_s* x, struct zx_b_Timeout_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Timeout->gg.g;
  x->Timeout = z;
}

/* FUNC(zx_e_Header_REV_Timeout) */

void zx_e_Header_REV_Timeout(struct zx_e_Header_s* x)
{
  struct zx_b_Timeout_s* nxt;
  struct zx_b_Timeout_s* y;
  if (!x) return;
  y = x->Timeout;
  if (!y) return;
  x->Timeout = 0;
  while (y) {
    nxt = (struct zx_b_Timeout_s*)y->gg.g.n;
    y->gg.g.n = &x->Timeout->gg.g;
    x->Timeout = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Timeout) */

void zx_e_Header_PUT_Timeout(struct zx_e_Header_s* x, int n, struct zx_b_Timeout_s* z)
{
  struct zx_b_Timeout_s* y;
  if (!x || !z) return;
  y = x->Timeout;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Timeout = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Timeout_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Timeout) */

void zx_e_Header_ADD_Timeout(struct zx_e_Header_s* x, int n, struct zx_b_Timeout_s* z)
{
  struct zx_b_Timeout_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Timeout->gg.g;
    x->Timeout = z;
    return;
  case -1:
    y = x->Timeout;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_Timeout_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Timeout; n > 1 && y; --n, y = (struct zx_b_Timeout_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Timeout) */

void zx_e_Header_DEL_Timeout(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Timeout_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Timeout = (struct zx_b_Timeout_s*)x->Timeout->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_Timeout_s*)x->Timeout;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_Timeout_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Timeout; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Timeout_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_ProcessingContext) */

int zx_e_Header_NUM_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b_ProcessingContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ProcessingContext; y; ++n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ProcessingContext) */

struct zx_b_ProcessingContext_s* zx_e_Header_GET_ProcessingContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x) return 0;
  for (y = x->ProcessingContext; n>=0 && y; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ProcessingContext) */

struct zx_b_ProcessingContext_s* zx_e_Header_POP_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x) return 0;
  y = x->ProcessingContext;
  if (y)
    x->ProcessingContext = (struct zx_b_ProcessingContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ProcessingContext) */

void zx_e_Header_PUSH_ProcessingContext(struct zx_e_Header_s* x, struct zx_b_ProcessingContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ProcessingContext->gg.g;
  x->ProcessingContext = z;
}

/* FUNC(zx_e_Header_REV_ProcessingContext) */

void zx_e_Header_REV_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b_ProcessingContext_s* nxt;
  struct zx_b_ProcessingContext_s* y;
  if (!x) return;
  y = x->ProcessingContext;
  if (!y) return;
  x->ProcessingContext = 0;
  while (y) {
    nxt = (struct zx_b_ProcessingContext_s*)y->gg.g.n;
    y->gg.g.n = &x->ProcessingContext->gg.g;
    x->ProcessingContext = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_ProcessingContext) */

void zx_e_Header_PUT_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b_ProcessingContext_s* z)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x || !z) return;
  y = x->ProcessingContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ProcessingContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_ProcessingContext) */

void zx_e_Header_ADD_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b_ProcessingContext_s* z)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ProcessingContext->gg.g;
    x->ProcessingContext = z;
    return;
  case -1:
    y = x->ProcessingContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProcessingContext; n > 1 && y; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_ProcessingContext) */

void zx_e_Header_DEL_ProcessingContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b_ProcessingContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ProcessingContext = (struct zx_b_ProcessingContext_s*)x->ProcessingContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_ProcessingContext_s*)x->ProcessingContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ProcessingContext; n > 1 && y->gg.g.n; --n, y = (struct zx_b_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Consent) */

int zx_e_Header_NUM_Consent(struct zx_e_Header_s* x)
{
  struct zx_b_Consent_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Consent; y; ++n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Consent) */

struct zx_b_Consent_s* zx_e_Header_GET_Consent(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Consent_s* y;
  if (!x) return 0;
  for (y = x->Consent; n>=0 && y; --n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Consent) */

struct zx_b_Consent_s* zx_e_Header_POP_Consent(struct zx_e_Header_s* x)
{
  struct zx_b_Consent_s* y;
  if (!x) return 0;
  y = x->Consent;
  if (y)
    x->Consent = (struct zx_b_Consent_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Consent) */

void zx_e_Header_PUSH_Consent(struct zx_e_Header_s* x, struct zx_b_Consent_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Consent->gg.g;
  x->Consent = z;
}

/* FUNC(zx_e_Header_REV_Consent) */

void zx_e_Header_REV_Consent(struct zx_e_Header_s* x)
{
  struct zx_b_Consent_s* nxt;
  struct zx_b_Consent_s* y;
  if (!x) return;
  y = x->Consent;
  if (!y) return;
  x->Consent = 0;
  while (y) {
    nxt = (struct zx_b_Consent_s*)y->gg.g.n;
    y->gg.g.n = &x->Consent->gg.g;
    x->Consent = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Consent) */

void zx_e_Header_PUT_Consent(struct zx_e_Header_s* x, int n, struct zx_b_Consent_s* z)
{
  struct zx_b_Consent_s* y;
  if (!x || !z) return;
  y = x->Consent;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Consent = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Consent) */

void zx_e_Header_ADD_Consent(struct zx_e_Header_s* x, int n, struct zx_b_Consent_s* z)
{
  struct zx_b_Consent_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Consent->gg.g;
    x->Consent = z;
    return;
  case -1:
    y = x->Consent;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Consent; n > 1 && y; --n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Consent) */

void zx_e_Header_DEL_Consent(struct zx_e_Header_s* x, int n)
{
  struct zx_b_Consent_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Consent = (struct zx_b_Consent_s*)x->Consent->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_Consent_s*)x->Consent;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Consent; n > 1 && y->gg.g.n; --n, y = (struct zx_b_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_UsageDirective) */

int zx_e_Header_NUM_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b_UsageDirective_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UsageDirective; y; ++n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_UsageDirective) */

struct zx_b_UsageDirective_s* zx_e_Header_GET_UsageDirective(struct zx_e_Header_s* x, int n)
{
  struct zx_b_UsageDirective_s* y;
  if (!x) return 0;
  for (y = x->UsageDirective; n>=0 && y; --n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_UsageDirective) */

struct zx_b_UsageDirective_s* zx_e_Header_POP_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b_UsageDirective_s* y;
  if (!x) return 0;
  y = x->UsageDirective;
  if (y)
    x->UsageDirective = (struct zx_b_UsageDirective_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_UsageDirective) */

void zx_e_Header_PUSH_UsageDirective(struct zx_e_Header_s* x, struct zx_b_UsageDirective_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UsageDirective->gg.g;
  x->UsageDirective = z;
}

/* FUNC(zx_e_Header_REV_UsageDirective) */

void zx_e_Header_REV_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b_UsageDirective_s* nxt;
  struct zx_b_UsageDirective_s* y;
  if (!x) return;
  y = x->UsageDirective;
  if (!y) return;
  x->UsageDirective = 0;
  while (y) {
    nxt = (struct zx_b_UsageDirective_s*)y->gg.g.n;
    y->gg.g.n = &x->UsageDirective->gg.g;
    x->UsageDirective = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_UsageDirective) */

void zx_e_Header_PUT_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b_UsageDirective_s* z)
{
  struct zx_b_UsageDirective_s* y;
  if (!x || !z) return;
  y = x->UsageDirective;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UsageDirective = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_UsageDirective) */

void zx_e_Header_ADD_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b_UsageDirective_s* z)
{
  struct zx_b_UsageDirective_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UsageDirective->gg.g;
    x->UsageDirective = z;
    return;
  case -1:
    y = x->UsageDirective;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UsageDirective; n > 1 && y; --n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_UsageDirective) */

void zx_e_Header_DEL_UsageDirective(struct zx_e_Header_s* x, int n)
{
  struct zx_b_UsageDirective_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UsageDirective = (struct zx_b_UsageDirective_s*)x->UsageDirective->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_UsageDirective_s*)x->UsageDirective;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UsageDirective; n > 1 && y->gg.g.n; --n, y = (struct zx_b_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_ApplicationEPR) */

int zx_e_Header_NUM_ApplicationEPR(struct zx_e_Header_s* x)
{
  struct zx_b_ApplicationEPR_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ApplicationEPR; y; ++n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ApplicationEPR) */

struct zx_b_ApplicationEPR_s* zx_e_Header_GET_ApplicationEPR(struct zx_e_Header_s* x, int n)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return 0;
  for (y = x->ApplicationEPR; n>=0 && y; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ApplicationEPR) */

struct zx_b_ApplicationEPR_s* zx_e_Header_POP_ApplicationEPR(struct zx_e_Header_s* x)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return 0;
  y = x->ApplicationEPR;
  if (y)
    x->ApplicationEPR = (struct zx_b_ApplicationEPR_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ApplicationEPR) */

void zx_e_Header_PUSH_ApplicationEPR(struct zx_e_Header_s* x, struct zx_b_ApplicationEPR_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ApplicationEPR->gg.g;
  x->ApplicationEPR = z;
}

/* FUNC(zx_e_Header_REV_ApplicationEPR) */

void zx_e_Header_REV_ApplicationEPR(struct zx_e_Header_s* x)
{
  struct zx_b_ApplicationEPR_s* nxt;
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return;
  y = x->ApplicationEPR;
  if (!y) return;
  x->ApplicationEPR = 0;
  while (y) {
    nxt = (struct zx_b_ApplicationEPR_s*)y->gg.g.n;
    y->gg.g.n = &x->ApplicationEPR->gg.g;
    x->ApplicationEPR = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_ApplicationEPR) */

void zx_e_Header_PUT_ApplicationEPR(struct zx_e_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x || !z) return;
  y = x->ApplicationEPR;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ApplicationEPR = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_ApplicationEPR) */

void zx_e_Header_ADD_ApplicationEPR(struct zx_e_Header_s* x, int n, struct zx_b_ApplicationEPR_s* z)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ApplicationEPR->gg.g;
    x->ApplicationEPR = z;
    return;
  case -1:
    y = x->ApplicationEPR;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ApplicationEPR; n > 1 && y; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_ApplicationEPR) */

void zx_e_Header_DEL_ApplicationEPR(struct zx_e_Header_s* x, int n)
{
  struct zx_b_ApplicationEPR_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ApplicationEPR = (struct zx_b_ApplicationEPR_s*)x->ApplicationEPR->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_ApplicationEPR_s*)x->ApplicationEPR;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ApplicationEPR; n > 1 && y->gg.g.n; --n, y = (struct zx_b_ApplicationEPR_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_UserInteraction) */

int zx_e_Header_NUM_UserInteraction(struct zx_e_Header_s* x)
{
  struct zx_b_UserInteraction_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->UserInteraction; y; ++n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_UserInteraction) */

struct zx_b_UserInteraction_s* zx_e_Header_GET_UserInteraction(struct zx_e_Header_s* x, int n)
{
  struct zx_b_UserInteraction_s* y;
  if (!x) return 0;
  for (y = x->UserInteraction; n>=0 && y; --n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_UserInteraction) */

struct zx_b_UserInteraction_s* zx_e_Header_POP_UserInteraction(struct zx_e_Header_s* x)
{
  struct zx_b_UserInteraction_s* y;
  if (!x) return 0;
  y = x->UserInteraction;
  if (y)
    x->UserInteraction = (struct zx_b_UserInteraction_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_UserInteraction) */

void zx_e_Header_PUSH_UserInteraction(struct zx_e_Header_s* x, struct zx_b_UserInteraction_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->UserInteraction->gg.g;
  x->UserInteraction = z;
}

/* FUNC(zx_e_Header_REV_UserInteraction) */

void zx_e_Header_REV_UserInteraction(struct zx_e_Header_s* x)
{
  struct zx_b_UserInteraction_s* nxt;
  struct zx_b_UserInteraction_s* y;
  if (!x) return;
  y = x->UserInteraction;
  if (!y) return;
  x->UserInteraction = 0;
  while (y) {
    nxt = (struct zx_b_UserInteraction_s*)y->gg.g.n;
    y->gg.g.n = &x->UserInteraction->gg.g;
    x->UserInteraction = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_UserInteraction) */

void zx_e_Header_PUT_UserInteraction(struct zx_e_Header_s* x, int n, struct zx_b_UserInteraction_s* z)
{
  struct zx_b_UserInteraction_s* y;
  if (!x || !z) return;
  y = x->UserInteraction;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->UserInteraction = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_UserInteraction) */

void zx_e_Header_ADD_UserInteraction(struct zx_e_Header_s* x, int n, struct zx_b_UserInteraction_s* z)
{
  struct zx_b_UserInteraction_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->UserInteraction->gg.g;
    x->UserInteraction = z;
    return;
  case -1:
    y = x->UserInteraction;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UserInteraction; n > 1 && y; --n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_UserInteraction) */

void zx_e_Header_DEL_UserInteraction(struct zx_e_Header_s* x, int n)
{
  struct zx_b_UserInteraction_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->UserInteraction = (struct zx_b_UserInteraction_s*)x->UserInteraction->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_UserInteraction_s*)x->UserInteraction;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->UserInteraction; n > 1 && y->gg.g.n; --n, y = (struct zx_b_UserInteraction_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_RedirectRequest) */

int zx_e_Header_NUM_RedirectRequest(struct zx_e_Header_s* x)
{
  struct zx_b_RedirectRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RedirectRequest; y; ++n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_RedirectRequest) */

struct zx_b_RedirectRequest_s* zx_e_Header_GET_RedirectRequest(struct zx_e_Header_s* x, int n)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x) return 0;
  for (y = x->RedirectRequest; n>=0 && y; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_RedirectRequest) */

struct zx_b_RedirectRequest_s* zx_e_Header_POP_RedirectRequest(struct zx_e_Header_s* x)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x) return 0;
  y = x->RedirectRequest;
  if (y)
    x->RedirectRequest = (struct zx_b_RedirectRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_RedirectRequest) */

void zx_e_Header_PUSH_RedirectRequest(struct zx_e_Header_s* x, struct zx_b_RedirectRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RedirectRequest->gg.g;
  x->RedirectRequest = z;
}

/* FUNC(zx_e_Header_REV_RedirectRequest) */

void zx_e_Header_REV_RedirectRequest(struct zx_e_Header_s* x)
{
  struct zx_b_RedirectRequest_s* nxt;
  struct zx_b_RedirectRequest_s* y;
  if (!x) return;
  y = x->RedirectRequest;
  if (!y) return;
  x->RedirectRequest = 0;
  while (y) {
    nxt = (struct zx_b_RedirectRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RedirectRequest->gg.g;
    x->RedirectRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_RedirectRequest) */

void zx_e_Header_PUT_RedirectRequest(struct zx_e_Header_s* x, int n, struct zx_b_RedirectRequest_s* z)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x || !z) return;
  y = x->RedirectRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RedirectRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_RedirectRequest) */

void zx_e_Header_ADD_RedirectRequest(struct zx_e_Header_s* x, int n, struct zx_b_RedirectRequest_s* z)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RedirectRequest->gg.g;
    x->RedirectRequest = z;
    return;
  case -1:
    y = x->RedirectRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RedirectRequest; n > 1 && y; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_RedirectRequest) */

void zx_e_Header_DEL_RedirectRequest(struct zx_e_Header_s* x, int n)
{
  struct zx_b_RedirectRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RedirectRequest = (struct zx_b_RedirectRequest_s*)x->RedirectRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_b_RedirectRequest_s*)x->RedirectRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RedirectRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_b_RedirectRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Correlation) */

int zx_e_Header_NUM_Correlation(struct zx_e_Header_s* x)
{
  struct zx_b12_Correlation_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Correlation; y; ++n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Correlation) */

struct zx_b12_Correlation_s* zx_e_Header_GET_Correlation(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Correlation_s* y;
  if (!x) return 0;
  for (y = x->Correlation; n>=0 && y; --n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Correlation) */

struct zx_b12_Correlation_s* zx_e_Header_POP_Correlation(struct zx_e_Header_s* x)
{
  struct zx_b12_Correlation_s* y;
  if (!x) return 0;
  y = x->Correlation;
  if (y)
    x->Correlation = (struct zx_b12_Correlation_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Correlation) */

void zx_e_Header_PUSH_Correlation(struct zx_e_Header_s* x, struct zx_b12_Correlation_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Correlation->gg.g;
  x->Correlation = z;
}

/* FUNC(zx_e_Header_REV_Correlation) */

void zx_e_Header_REV_Correlation(struct zx_e_Header_s* x)
{
  struct zx_b12_Correlation_s* nxt;
  struct zx_b12_Correlation_s* y;
  if (!x) return;
  y = x->Correlation;
  if (!y) return;
  x->Correlation = 0;
  while (y) {
    nxt = (struct zx_b12_Correlation_s*)y->gg.g.n;
    y->gg.g.n = &x->Correlation->gg.g;
    x->Correlation = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Correlation) */

void zx_e_Header_PUT_Correlation(struct zx_e_Header_s* x, int n, struct zx_b12_Correlation_s* z)
{
  struct zx_b12_Correlation_s* y;
  if (!x || !z) return;
  y = x->Correlation;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Correlation = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Correlation) */

void zx_e_Header_ADD_Correlation(struct zx_e_Header_s* x, int n, struct zx_b12_Correlation_s* z)
{
  struct zx_b12_Correlation_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Correlation->gg.g;
    x->Correlation = z;
    return;
  case -1:
    y = x->Correlation;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Correlation; n > 1 && y; --n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Correlation) */

void zx_e_Header_DEL_Correlation(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Correlation_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Correlation = (struct zx_b12_Correlation_s*)x->Correlation->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_Correlation_s*)x->Correlation;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Correlation; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Correlation_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Provider) */

int zx_e_Header_NUM_Provider(struct zx_e_Header_s* x)
{
  struct zx_b12_Provider_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Provider; y; ++n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Provider) */

struct zx_b12_Provider_s* zx_e_Header_GET_Provider(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Provider_s* y;
  if (!x) return 0;
  for (y = x->Provider; n>=0 && y; --n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Provider) */

struct zx_b12_Provider_s* zx_e_Header_POP_Provider(struct zx_e_Header_s* x)
{
  struct zx_b12_Provider_s* y;
  if (!x) return 0;
  y = x->Provider;
  if (y)
    x->Provider = (struct zx_b12_Provider_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Provider) */

void zx_e_Header_PUSH_Provider(struct zx_e_Header_s* x, struct zx_b12_Provider_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Provider->gg.g;
  x->Provider = z;
}

/* FUNC(zx_e_Header_REV_Provider) */

void zx_e_Header_REV_Provider(struct zx_e_Header_s* x)
{
  struct zx_b12_Provider_s* nxt;
  struct zx_b12_Provider_s* y;
  if (!x) return;
  y = x->Provider;
  if (!y) return;
  x->Provider = 0;
  while (y) {
    nxt = (struct zx_b12_Provider_s*)y->gg.g.n;
    y->gg.g.n = &x->Provider->gg.g;
    x->Provider = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Provider) */

void zx_e_Header_PUT_Provider(struct zx_e_Header_s* x, int n, struct zx_b12_Provider_s* z)
{
  struct zx_b12_Provider_s* y;
  if (!x || !z) return;
  y = x->Provider;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Provider = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Provider) */

void zx_e_Header_ADD_Provider(struct zx_e_Header_s* x, int n, struct zx_b12_Provider_s* z)
{
  struct zx_b12_Provider_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Provider->gg.g;
    x->Provider = z;
    return;
  case -1:
    y = x->Provider;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Provider; n > 1 && y; --n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Provider) */

void zx_e_Header_DEL_Provider(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Provider_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Provider = (struct zx_b12_Provider_s*)x->Provider->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_Provider_s*)x->Provider;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Provider; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Provider_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_b12_ProcessingContext) */

int zx_e_Header_NUM_b12_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b12_ProcessingContext_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_ProcessingContext; y; ++n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_b12_ProcessingContext) */

struct zx_b12_ProcessingContext_s* zx_e_Header_GET_b12_ProcessingContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x) return 0;
  for (y = x->b12_ProcessingContext; n>=0 && y; --n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_b12_ProcessingContext) */

struct zx_b12_ProcessingContext_s* zx_e_Header_POP_b12_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x) return 0;
  y = x->b12_ProcessingContext;
  if (y)
    x->b12_ProcessingContext = (struct zx_b12_ProcessingContext_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_b12_ProcessingContext) */

void zx_e_Header_PUSH_b12_ProcessingContext(struct zx_e_Header_s* x, struct zx_b12_ProcessingContext_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_ProcessingContext->gg.g;
  x->b12_ProcessingContext = z;
}

/* FUNC(zx_e_Header_REV_b12_ProcessingContext) */

void zx_e_Header_REV_b12_ProcessingContext(struct zx_e_Header_s* x)
{
  struct zx_b12_ProcessingContext_s* nxt;
  struct zx_b12_ProcessingContext_s* y;
  if (!x) return;
  y = x->b12_ProcessingContext;
  if (!y) return;
  x->b12_ProcessingContext = 0;
  while (y) {
    nxt = (struct zx_b12_ProcessingContext_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_ProcessingContext->gg.g;
    x->b12_ProcessingContext = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_b12_ProcessingContext) */

void zx_e_Header_PUT_b12_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b12_ProcessingContext_s* z)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x || !z) return;
  y = x->b12_ProcessingContext;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_ProcessingContext = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_b12_ProcessingContext) */

void zx_e_Header_ADD_b12_ProcessingContext(struct zx_e_Header_s* x, int n, struct zx_b12_ProcessingContext_s* z)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->b12_ProcessingContext->gg.g;
    x->b12_ProcessingContext = z;
    return;
  case -1:
    y = x->b12_ProcessingContext;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_ProcessingContext; n > 1 && y; --n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_b12_ProcessingContext) */

void zx_e_Header_DEL_b12_ProcessingContext(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_ProcessingContext_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_ProcessingContext = (struct zx_b12_ProcessingContext_s*)x->b12_ProcessingContext->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_ProcessingContext_s*)x->b12_ProcessingContext;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_ProcessingContext; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_ProcessingContext_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_b12_Consent) */

int zx_e_Header_NUM_b12_Consent(struct zx_e_Header_s* x)
{
  struct zx_b12_Consent_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_Consent; y; ++n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_b12_Consent) */

struct zx_b12_Consent_s* zx_e_Header_GET_b12_Consent(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Consent_s* y;
  if (!x) return 0;
  for (y = x->b12_Consent; n>=0 && y; --n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_b12_Consent) */

struct zx_b12_Consent_s* zx_e_Header_POP_b12_Consent(struct zx_e_Header_s* x)
{
  struct zx_b12_Consent_s* y;
  if (!x) return 0;
  y = x->b12_Consent;
  if (y)
    x->b12_Consent = (struct zx_b12_Consent_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_b12_Consent) */

void zx_e_Header_PUSH_b12_Consent(struct zx_e_Header_s* x, struct zx_b12_Consent_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_Consent->gg.g;
  x->b12_Consent = z;
}

/* FUNC(zx_e_Header_REV_b12_Consent) */

void zx_e_Header_REV_b12_Consent(struct zx_e_Header_s* x)
{
  struct zx_b12_Consent_s* nxt;
  struct zx_b12_Consent_s* y;
  if (!x) return;
  y = x->b12_Consent;
  if (!y) return;
  x->b12_Consent = 0;
  while (y) {
    nxt = (struct zx_b12_Consent_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_Consent->gg.g;
    x->b12_Consent = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_b12_Consent) */

void zx_e_Header_PUT_b12_Consent(struct zx_e_Header_s* x, int n, struct zx_b12_Consent_s* z)
{
  struct zx_b12_Consent_s* y;
  if (!x || !z) return;
  y = x->b12_Consent;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_Consent = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_b12_Consent) */

void zx_e_Header_ADD_b12_Consent(struct zx_e_Header_s* x, int n, struct zx_b12_Consent_s* z)
{
  struct zx_b12_Consent_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->b12_Consent->gg.g;
    x->b12_Consent = z;
    return;
  case -1:
    y = x->b12_Consent;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_Consent; n > 1 && y; --n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_b12_Consent) */

void zx_e_Header_DEL_b12_Consent(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_Consent_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_Consent = (struct zx_b12_Consent_s*)x->b12_Consent->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_Consent_s*)x->b12_Consent;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_Consent; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_Consent_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_b12_UsageDirective) */

int zx_e_Header_NUM_b12_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b12_UsageDirective_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->b12_UsageDirective; y; ++n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_b12_UsageDirective) */

struct zx_b12_UsageDirective_s* zx_e_Header_GET_b12_UsageDirective(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x) return 0;
  for (y = x->b12_UsageDirective; n>=0 && y; --n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_b12_UsageDirective) */

struct zx_b12_UsageDirective_s* zx_e_Header_POP_b12_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x) return 0;
  y = x->b12_UsageDirective;
  if (y)
    x->b12_UsageDirective = (struct zx_b12_UsageDirective_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_b12_UsageDirective) */

void zx_e_Header_PUSH_b12_UsageDirective(struct zx_e_Header_s* x, struct zx_b12_UsageDirective_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->b12_UsageDirective->gg.g;
  x->b12_UsageDirective = z;
}

/* FUNC(zx_e_Header_REV_b12_UsageDirective) */

void zx_e_Header_REV_b12_UsageDirective(struct zx_e_Header_s* x)
{
  struct zx_b12_UsageDirective_s* nxt;
  struct zx_b12_UsageDirective_s* y;
  if (!x) return;
  y = x->b12_UsageDirective;
  if (!y) return;
  x->b12_UsageDirective = 0;
  while (y) {
    nxt = (struct zx_b12_UsageDirective_s*)y->gg.g.n;
    y->gg.g.n = &x->b12_UsageDirective->gg.g;
    x->b12_UsageDirective = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_b12_UsageDirective) */

void zx_e_Header_PUT_b12_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b12_UsageDirective_s* z)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x || !z) return;
  y = x->b12_UsageDirective;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->b12_UsageDirective = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_b12_UsageDirective) */

void zx_e_Header_ADD_b12_UsageDirective(struct zx_e_Header_s* x, int n, struct zx_b12_UsageDirective_s* z)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->b12_UsageDirective->gg.g;
    x->b12_UsageDirective = z;
    return;
  case -1:
    y = x->b12_UsageDirective;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_UsageDirective; n > 1 && y; --n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_b12_UsageDirective) */

void zx_e_Header_DEL_b12_UsageDirective(struct zx_e_Header_s* x, int n)
{
  struct zx_b12_UsageDirective_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->b12_UsageDirective = (struct zx_b12_UsageDirective_s*)x->b12_UsageDirective->gg.g.n;
    return;
  case -1:
    y = (struct zx_b12_UsageDirective_s*)x->b12_UsageDirective;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->b12_UsageDirective; n > 1 && y->gg.g.n; --n, y = (struct zx_b12_UsageDirective_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_TransactionID) */

int zx_e_Header_NUM_TransactionID(struct zx_e_Header_s* x)
{
  struct zx_mm7_TransactionID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->TransactionID; y; ++n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_TransactionID) */

struct zx_mm7_TransactionID_s* zx_e_Header_GET_TransactionID(struct zx_e_Header_s* x, int n)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return 0;
  for (y = x->TransactionID; n>=0 && y; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_TransactionID) */

struct zx_mm7_TransactionID_s* zx_e_Header_POP_TransactionID(struct zx_e_Header_s* x)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return 0;
  y = x->TransactionID;
  if (y)
    x->TransactionID = (struct zx_mm7_TransactionID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_TransactionID) */

void zx_e_Header_PUSH_TransactionID(struct zx_e_Header_s* x, struct zx_mm7_TransactionID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->TransactionID->gg.g;
  x->TransactionID = z;
}

/* FUNC(zx_e_Header_REV_TransactionID) */

void zx_e_Header_REV_TransactionID(struct zx_e_Header_s* x)
{
  struct zx_mm7_TransactionID_s* nxt;
  struct zx_mm7_TransactionID_s* y;
  if (!x) return;
  y = x->TransactionID;
  if (!y) return;
  x->TransactionID = 0;
  while (y) {
    nxt = (struct zx_mm7_TransactionID_s*)y->gg.g.n;
    y->gg.g.n = &x->TransactionID->gg.g;
    x->TransactionID = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_TransactionID) */

void zx_e_Header_PUT_TransactionID(struct zx_e_Header_s* x, int n, struct zx_mm7_TransactionID_s* z)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x || !z) return;
  y = x->TransactionID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->TransactionID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_TransactionID) */

void zx_e_Header_ADD_TransactionID(struct zx_e_Header_s* x, int n, struct zx_mm7_TransactionID_s* z)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->TransactionID->gg.g;
    x->TransactionID = z;
    return;
  case -1:
    y = x->TransactionID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TransactionID; n > 1 && y; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_TransactionID) */

void zx_e_Header_DEL_TransactionID(struct zx_e_Header_s* x, int n)
{
  struct zx_mm7_TransactionID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->TransactionID = (struct zx_mm7_TransactionID_s*)x->TransactionID->gg.g.n;
    return;
  case -1:
    y = (struct zx_mm7_TransactionID_s*)x->TransactionID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->TransactionID; n > 1 && y->gg.g.n; --n, y = (struct zx_mm7_TransactionID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Security) */

int zx_e_Header_NUM_Security(struct zx_e_Header_s* x)
{
  struct zx_wsse_Security_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Security; y; ++n, y = (struct zx_wsse_Security_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Security) */

struct zx_wsse_Security_s* zx_e_Header_GET_Security(struct zx_e_Header_s* x, int n)
{
  struct zx_wsse_Security_s* y;
  if (!x) return 0;
  for (y = x->Security; n>=0 && y; --n, y = (struct zx_wsse_Security_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Security) */

struct zx_wsse_Security_s* zx_e_Header_POP_Security(struct zx_e_Header_s* x)
{
  struct zx_wsse_Security_s* y;
  if (!x) return 0;
  y = x->Security;
  if (y)
    x->Security = (struct zx_wsse_Security_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Security) */

void zx_e_Header_PUSH_Security(struct zx_e_Header_s* x, struct zx_wsse_Security_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Security->gg.g;
  x->Security = z;
}

/* FUNC(zx_e_Header_REV_Security) */

void zx_e_Header_REV_Security(struct zx_e_Header_s* x)
{
  struct zx_wsse_Security_s* nxt;
  struct zx_wsse_Security_s* y;
  if (!x) return;
  y = x->Security;
  if (!y) return;
  x->Security = 0;
  while (y) {
    nxt = (struct zx_wsse_Security_s*)y->gg.g.n;
    y->gg.g.n = &x->Security->gg.g;
    x->Security = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Security) */

void zx_e_Header_PUT_Security(struct zx_e_Header_s* x, int n, struct zx_wsse_Security_s* z)
{
  struct zx_wsse_Security_s* y;
  if (!x || !z) return;
  y = x->Security;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Security = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_Security_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Security) */

void zx_e_Header_ADD_Security(struct zx_e_Header_s* x, int n, struct zx_wsse_Security_s* z)
{
  struct zx_wsse_Security_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Security->gg.g;
    x->Security = z;
    return;
  case -1:
    y = x->Security;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_wsse_Security_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Security; n > 1 && y; --n, y = (struct zx_wsse_Security_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Security) */

void zx_e_Header_DEL_Security(struct zx_e_Header_s* x, int n)
{
  struct zx_wsse_Security_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Security = (struct zx_wsse_Security_s*)x->Security->gg.g.n;
    return;
  case -1:
    y = (struct zx_wsse_Security_s*)x->Security;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_wsse_Security_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Security; n > 1 && y->gg.g.n; --n, y = (struct zx_wsse_Security_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Status) */

int zx_e_Header_NUM_Status(struct zx_e_Header_s* x)
{
  struct zx_tas3_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_tas3_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Status) */

struct zx_tas3_Status_s* zx_e_Header_GET_Status(struct zx_e_Header_s* x, int n)
{
  struct zx_tas3_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_tas3_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Status) */

struct zx_tas3_Status_s* zx_e_Header_POP_Status(struct zx_e_Header_s* x)
{
  struct zx_tas3_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_tas3_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Status) */

void zx_e_Header_PUSH_Status(struct zx_e_Header_s* x, struct zx_tas3_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_e_Header_REV_Status) */

void zx_e_Header_REV_Status(struct zx_e_Header_s* x)
{
  struct zx_tas3_Status_s* nxt;
  struct zx_tas3_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_tas3_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Status) */

void zx_e_Header_PUT_Status(struct zx_e_Header_s* x, int n, struct zx_tas3_Status_s* z)
{
  struct zx_tas3_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_tas3_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Status) */

void zx_e_Header_ADD_Status(struct zx_e_Header_s* x, int n, struct zx_tas3_Status_s* z)
{
  struct zx_tas3_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_tas3_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_tas3_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Status) */

void zx_e_Header_DEL_Status(struct zx_e_Header_s* x, int n)
{
  struct zx_tas3_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_tas3_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_tas3_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_tas3_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_tas3_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_Credentials) */

int zx_e_Header_NUM_Credentials(struct zx_e_Header_s* x)
{
  struct zx_tas3_Credentials_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Credentials; y; ++n, y = (struct zx_tas3_Credentials_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_Credentials) */

struct zx_tas3_Credentials_s* zx_e_Header_GET_Credentials(struct zx_e_Header_s* x, int n)
{
  struct zx_tas3_Credentials_s* y;
  if (!x) return 0;
  for (y = x->Credentials; n>=0 && y; --n, y = (struct zx_tas3_Credentials_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_Credentials) */

struct zx_tas3_Credentials_s* zx_e_Header_POP_Credentials(struct zx_e_Header_s* x)
{
  struct zx_tas3_Credentials_s* y;
  if (!x) return 0;
  y = x->Credentials;
  if (y)
    x->Credentials = (struct zx_tas3_Credentials_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_Credentials) */

void zx_e_Header_PUSH_Credentials(struct zx_e_Header_s* x, struct zx_tas3_Credentials_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Credentials->gg.g;
  x->Credentials = z;
}

/* FUNC(zx_e_Header_REV_Credentials) */

void zx_e_Header_REV_Credentials(struct zx_e_Header_s* x)
{
  struct zx_tas3_Credentials_s* nxt;
  struct zx_tas3_Credentials_s* y;
  if (!x) return;
  y = x->Credentials;
  if (!y) return;
  x->Credentials = 0;
  while (y) {
    nxt = (struct zx_tas3_Credentials_s*)y->gg.g.n;
    y->gg.g.n = &x->Credentials->gg.g;
    x->Credentials = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_Credentials) */

void zx_e_Header_PUT_Credentials(struct zx_e_Header_s* x, int n, struct zx_tas3_Credentials_s* z)
{
  struct zx_tas3_Credentials_s* y;
  if (!x || !z) return;
  y = x->Credentials;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Credentials = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_tas3_Credentials_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_Credentials) */

void zx_e_Header_ADD_Credentials(struct zx_e_Header_s* x, int n, struct zx_tas3_Credentials_s* z)
{
  struct zx_tas3_Credentials_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Credentials->gg.g;
    x->Credentials = z;
    return;
  case -1:
    y = x->Credentials;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_tas3_Credentials_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credentials; n > 1 && y; --n, y = (struct zx_tas3_Credentials_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_Credentials) */

void zx_e_Header_DEL_Credentials(struct zx_e_Header_s* x, int n)
{
  struct zx_tas3_Credentials_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Credentials = (struct zx_tas3_Credentials_s*)x->Credentials->gg.g.n;
    return;
  case -1:
    y = (struct zx_tas3_Credentials_s*)x->Credentials;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_tas3_Credentials_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Credentials; n > 1 && y->gg.g.n; --n, y = (struct zx_tas3_Credentials_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_Header_NUM_ESLPolicies) */

int zx_e_Header_NUM_ESLPolicies(struct zx_e_Header_s* x)
{
  struct zx_tas3_ESLPolicies_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ESLPolicies; y; ++n, y = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_Header_GET_ESLPolicies) */

struct zx_tas3_ESLPolicies_s* zx_e_Header_GET_ESLPolicies(struct zx_e_Header_s* x, int n)
{
  struct zx_tas3_ESLPolicies_s* y;
  if (!x) return 0;
  for (y = x->ESLPolicies; n>=0 && y; --n, y = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_Header_POP_ESLPolicies) */

struct zx_tas3_ESLPolicies_s* zx_e_Header_POP_ESLPolicies(struct zx_e_Header_s* x)
{
  struct zx_tas3_ESLPolicies_s* y;
  if (!x) return 0;
  y = x->ESLPolicies;
  if (y)
    x->ESLPolicies = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_Header_PUSH_ESLPolicies) */

void zx_e_Header_PUSH_ESLPolicies(struct zx_e_Header_s* x, struct zx_tas3_ESLPolicies_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ESLPolicies->gg.g;
  x->ESLPolicies = z;
}

/* FUNC(zx_e_Header_REV_ESLPolicies) */

void zx_e_Header_REV_ESLPolicies(struct zx_e_Header_s* x)
{
  struct zx_tas3_ESLPolicies_s* nxt;
  struct zx_tas3_ESLPolicies_s* y;
  if (!x) return;
  y = x->ESLPolicies;
  if (!y) return;
  x->ESLPolicies = 0;
  while (y) {
    nxt = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n;
    y->gg.g.n = &x->ESLPolicies->gg.g;
    x->ESLPolicies = y;
    y = nxt;
  }
}

/* FUNC(zx_e_Header_PUT_ESLPolicies) */

void zx_e_Header_PUT_ESLPolicies(struct zx_e_Header_s* x, int n, struct zx_tas3_ESLPolicies_s* z)
{
  struct zx_tas3_ESLPolicies_s* y;
  if (!x || !z) return;
  y = x->ESLPolicies;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ESLPolicies = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_Header_ADD_ESLPolicies) */

void zx_e_Header_ADD_ESLPolicies(struct zx_e_Header_s* x, int n, struct zx_tas3_ESLPolicies_s* z)
{
  struct zx_tas3_ESLPolicies_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ESLPolicies->gg.g;
    x->ESLPolicies = z;
    return;
  case -1:
    y = x->ESLPolicies;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ESLPolicies; n > 1 && y; --n, y = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_Header_DEL_ESLPolicies) */

void zx_e_Header_DEL_ESLPolicies(struct zx_e_Header_s* x, int n)
{
  struct zx_tas3_ESLPolicies_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ESLPolicies = (struct zx_tas3_ESLPolicies_s*)x->ESLPolicies->gg.g.n;
    return;
  case -1:
    y = (struct zx_tas3_ESLPolicies_s*)x->ESLPolicies;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ESLPolicies; n > 1 && y->gg.g.n; --n, y = (struct zx_tas3_ESLPolicies_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif

/* FUNC(zx_e_Header_GET_id) */
struct zx_str* zx_e_Header_GET_id(struct zx_e_Header_s* x) { return x->id; }
/* FUNC(zx_e_Header_PUT_id) */
void zx_e_Header_PUT_id(struct zx_e_Header_s* x, struct zx_str* y) { x->id = y; }







#ifdef ZX_ENA_GETPUT

/* FUNC(zx_e_detail_NUM_Status) */

int zx_e_detail_NUM_Status(struct zx_e_detail_s* x)
{
  struct zx_lu_Status_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Status; y; ++n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_e_detail_GET_Status) */

struct zx_lu_Status_s* zx_e_detail_GET_Status(struct zx_e_detail_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  for (y = x->Status; n>=0 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_e_detail_POP_Status) */

struct zx_lu_Status_s* zx_e_detail_POP_Status(struct zx_e_detail_s* x)
{
  struct zx_lu_Status_s* y;
  if (!x) return 0;
  y = x->Status;
  if (y)
    x->Status = (struct zx_lu_Status_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_e_detail_PUSH_Status) */

void zx_e_detail_PUSH_Status(struct zx_e_detail_s* x, struct zx_lu_Status_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Status->gg.g;
  x->Status = z;
}

/* FUNC(zx_e_detail_REV_Status) */

void zx_e_detail_REV_Status(struct zx_e_detail_s* x)
{
  struct zx_lu_Status_s* nxt;
  struct zx_lu_Status_s* y;
  if (!x) return;
  y = x->Status;
  if (!y) return;
  x->Status = 0;
  while (y) {
    nxt = (struct zx_lu_Status_s*)y->gg.g.n;
    y->gg.g.n = &x->Status->gg.g;
    x->Status = y;
    y = nxt;
  }
}

/* FUNC(zx_e_detail_PUT_Status) */

void zx_e_detail_PUT_Status(struct zx_e_detail_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
  if (!x || !z) return;
  y = x->Status;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Status = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_e_detail_ADD_Status) */

void zx_e_detail_ADD_Status(struct zx_e_detail_s* x, int n, struct zx_lu_Status_s* z)
{
  struct zx_lu_Status_s* y;
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
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_e_detail_DEL_Status) */

void zx_e_detail_DEL_Status(struct zx_e_detail_s* x, int n)
{
  struct zx_lu_Status_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Status = (struct zx_lu_Status_s*)x->Status->gg.g.n;
    return;
  case -1:
    y = (struct zx_lu_Status_s*)x->Status;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Status; n > 1 && y->gg.g.n; --n, y = (struct zx_lu_Status_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif






/* EOF -- c/zx-e-getput.c */