/* c/zx-xasp-enc.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2010 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: enc-templ.c,v 1.27 2007-10-05 22:24:28 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006,  factored data structure walking to aux-templ.c --Sampo
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 26.8.2006, some CSE --Sampo
 ** 23.9.2006, added WO logic --Sampo
 ** 30.9.2007, improvements to WO encoding --Sampo
 ** 8.2.2010,  better handling of schema order encoding of unknown namespace prefixes --Sampo
 ** 27.10.2010, re-engineered namespace handling --Sampo
 ** 24.11.2010, this code is sceduled for removal as el_order processing in WO encoder accomplishes the same result. --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** N.B2: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-xasp-data.h"
#include "c/zx-ns.h"



#if 0

#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   xasp_XACMLAuthzDecisionQuery
#define EL_STRUCT zx_xasp_XACMLAuthzDecisionQuery_s
#define EL_NS     xasp
#define EL_TAG    XACMLAuthzDecisionQuery

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_xasp_XACMLAuthzDecisionQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c, struct zx_xasp_XACMLAuthzDecisionQuery_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<xasp:XACMLAuthzDecisionQuery")-1 + 1 + sizeof("</xasp:XACMLAuthzDecisionQuery>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_xasp_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  len += zx_attr_so_len(c, x->Consent, sizeof("Consent")-1, &pop_seen);
  len += zx_attr_so_len(c, x->Destination, sizeof("Destination")-1, &pop_seen);
  len += zx_attr_so_len(c, x->ID, sizeof("ID")-1, &pop_seen);
  len += zx_attr_so_len(c, x->InputContextOnly, sizeof("InputContextOnly")-1, &pop_seen);
  len += zx_attr_so_len(c, x->IssueInstant, sizeof("IssueInstant")-1, &pop_seen);
  len += zx_attr_so_len(c, x->ReturnContext, sizeof("ReturnContext")-1, &pop_seen);
  len += zx_attr_so_len(c, x->Version, sizeof("Version")-1, &pop_seen);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = &x->Issuer->gg;
       se && se->g.tok == zx_sa_Issuer_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sa_Issuer(c, (struct zx_sa_Issuer_s*)se);
  for (se = &x->Signature->gg;
       se && se->g.tok == zx_ds_Signature_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    if (se != c->exclude_sig)
      len += zx_LEN_SO_ds_Signature(c, (struct zx_ds_Signature_s*)se);
  for (se = &x->Extensions->gg;
       se && se->g.tok == zx_sp_Extensions_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sp_Extensions(c, (struct zx_sp_Extensions_s*)se);
  for (se = &x->Request->gg;
       se && se->g.tok == zx_xac_Request_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_xac_Request(c, (struct zx_xac_Request_s*)se);


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "xasp:XACMLAuthzDecisionQuery", len);
  return len;
}

/* FUNC(zx_ENC_SO_xasp_XACMLAuthzDecisionQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c, struct zx_xasp_XACMLAuthzDecisionQuery_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<xasp:XACMLAuthzDecisionQuery");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_xasp_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_so_enc(p, x->Consent, " Consent=\"", sizeof(" Consent=\"")-1);
  p = zx_attr_so_enc(p, x->Destination, " Destination=\"", sizeof(" Destination=\"")-1);
  p = zx_attr_so_enc(p, x->ID, " ID=\"", sizeof(" ID=\"")-1);
  p = zx_attr_so_enc(p, x->InputContextOnly, " InputContextOnly=\"", sizeof(" InputContextOnly=\"")-1);
  p = zx_attr_so_enc(p, x->IssueInstant, " IssueInstant=\"", sizeof(" IssueInstant=\"")-1);
  p = zx_attr_so_enc(p, x->ReturnContext, " ReturnContext=\"", sizeof(" ReturnContext=\"")-1);
  p = zx_attr_so_enc(p, x->Version, " Version=\"", sizeof(" Version=\"")-1);

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = &x->Issuer->gg;
       se && se->g.tok == zx_sa_Issuer_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sa_Issuer(c, (struct zx_sa_Issuer_s*)se, p);
  for (se = &x->Signature->gg;
       se && se->g.tok == zx_ds_Signature_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    if (se != c->exclude_sig)
      p = zx_ENC_SO_ds_Signature(c, (struct zx_ds_Signature_s*)se, p);
  for (se = &x->Extensions->gg;
       se && se->g.tok == zx_sp_Extensions_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sp_Extensions(c, (struct zx_sp_Extensions_s*)se, p);
  for (se = &x->Request->gg;
       se && se->g.tok == zx_xac_Request_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_xac_Request(c, (struct zx_xac_Request_s*)se, p);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</xasp:XACMLAuthzDecisionQuery>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "xasp:XACMLAuthzDecisionQuery", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_xasp_XACMLAuthzDecisionQuery) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_xasp_XACMLAuthzDecisionQuery(struct zx_ctx* c, struct zx_xasp_XACMLAuthzDecisionQuery_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_xasp_XACMLAuthzDecisionQuery(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xasp_XACMLAuthzDecisionQuery(c, x, buf ), buf, len);
}
#endif




#if 0

#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   xasp_XACMLPolicyQuery
#define EL_STRUCT zx_xasp_XACMLPolicyQuery_s
#define EL_NS     xasp
#define EL_TAG    XACMLPolicyQuery

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_xasp_XACMLPolicyQuery) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_xasp_XACMLPolicyQuery(struct zx_ctx* c, struct zx_xasp_XACMLPolicyQuery_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<xasp:XACMLPolicyQuery")-1 + 1 + sizeof("</xasp:XACMLPolicyQuery>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_xasp_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  len += zx_attr_so_len(c, x->Consent, sizeof("Consent")-1, &pop_seen);
  len += zx_attr_so_len(c, x->Destination, sizeof("Destination")-1, &pop_seen);
  len += zx_attr_so_len(c, x->ID, sizeof("ID")-1, &pop_seen);
  len += zx_attr_so_len(c, x->IssueInstant, sizeof("IssueInstant")-1, &pop_seen);
  len += zx_attr_so_len(c, x->Version, sizeof("Version")-1, &pop_seen);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = &x->Issuer->gg;
       se && se->g.tok == zx_sa_Issuer_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sa_Issuer(c, (struct zx_sa_Issuer_s*)se);
  for (se = &x->Signature->gg;
       se && se->g.tok == zx_ds_Signature_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    if (se != c->exclude_sig)
      len += zx_LEN_SO_ds_Signature(c, (struct zx_ds_Signature_s*)se);
  for (se = &x->Extensions->gg;
       se && se->g.tok == zx_sp_Extensions_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sp_Extensions(c, (struct zx_sp_Extensions_s*)se);
  for (se = &x->Request->gg;
       se && se->g.tok == zx_xac_Request_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_xac_Request(c, (struct zx_xac_Request_s*)se);
  for (se = &x->Target->gg;
       se && se->g.tok == zx_xa_Target_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_xa_Target(c, (struct zx_xa_Target_s*)se);
  for (se = &x->PolicySetIdReference->gg;
       se && se->g.tok == zx_xa_PolicySetIdReference_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_xa_PolicySetIdReference(c, (struct zx_xa_PolicySetIdReference_s*)se);
  for (se = &x->PolicyIdReference->gg;
       se && se->g.tok == zx_xa_PolicyIdReference_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_xa_PolicyIdReference(c, (struct zx_xa_PolicyIdReference_s*)se);


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "xasp:XACMLPolicyQuery", len);
  return len;
}

/* FUNC(zx_ENC_SO_xasp_XACMLPolicyQuery) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_xasp_XACMLPolicyQuery(struct zx_ctx* c, struct zx_xasp_XACMLPolicyQuery_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<xasp:XACMLPolicyQuery");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_xasp_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_so_enc(p, x->Consent, " Consent=\"", sizeof(" Consent=\"")-1);
  p = zx_attr_so_enc(p, x->Destination, " Destination=\"", sizeof(" Destination=\"")-1);
  p = zx_attr_so_enc(p, x->ID, " ID=\"", sizeof(" ID=\"")-1);
  p = zx_attr_so_enc(p, x->IssueInstant, " IssueInstant=\"", sizeof(" IssueInstant=\"")-1);
  p = zx_attr_so_enc(p, x->Version, " Version=\"", sizeof(" Version=\"")-1);

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = &x->Issuer->gg;
       se && se->g.tok == zx_sa_Issuer_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sa_Issuer(c, (struct zx_sa_Issuer_s*)se, p);
  for (se = &x->Signature->gg;
       se && se->g.tok == zx_ds_Signature_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    if (se != c->exclude_sig)
      p = zx_ENC_SO_ds_Signature(c, (struct zx_ds_Signature_s*)se, p);
  for (se = &x->Extensions->gg;
       se && se->g.tok == zx_sp_Extensions_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sp_Extensions(c, (struct zx_sp_Extensions_s*)se, p);
  for (se = &x->Request->gg;
       se && se->g.tok == zx_xac_Request_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_xac_Request(c, (struct zx_xac_Request_s*)se, p);
  for (se = &x->Target->gg;
       se && se->g.tok == zx_xa_Target_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_xa_Target(c, (struct zx_xa_Target_s*)se, p);
  for (se = &x->PolicySetIdReference->gg;
       se && se->g.tok == zx_xa_PolicySetIdReference_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_xa_PolicySetIdReference(c, (struct zx_xa_PolicySetIdReference_s*)se, p);
  for (se = &x->PolicyIdReference->gg;
       se && se->g.tok == zx_xa_PolicyIdReference_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_xa_PolicyIdReference(c, (struct zx_xa_PolicyIdReference_s*)se, p);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</xasp:XACMLPolicyQuery>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "xasp:XACMLPolicyQuery", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_xasp_XACMLPolicyQuery) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_xasp_XACMLPolicyQuery(struct zx_ctx* c, struct zx_xasp_XACMLPolicyQuery_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_xasp_XACMLPolicyQuery(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_xasp_XACMLPolicyQuery(c, x, buf ), buf, len);
}
#endif


/* EOF -- c/zx-xasp-enc.c */