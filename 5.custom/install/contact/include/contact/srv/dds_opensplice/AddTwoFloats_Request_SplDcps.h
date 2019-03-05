#ifndef ADDTWOFLOATS_REQUEST_SPLTYPES_H
#define ADDTWOFLOATS_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_AddTwoFloats_Request_.h"


extern c_metaObject __AddTwoFloats_Request__contact__load (c_base base);

extern c_metaObject __AddTwoFloats_Request__contact_srv__load (c_base base);

extern c_metaObject __AddTwoFloats_Request__contact_srv_dds___load (c_base base);

extern const char *contact_srv_dds__AddTwoFloats_Request__metaDescriptor[];
extern const int contact_srv_dds__AddTwoFloats_Request__metaDescriptorArrLength;
extern const int contact_srv_dds__AddTwoFloats_Request__metaDescriptorLength;
extern c_metaObject __contact_srv_dds__AddTwoFloats_Request___load (c_base base);
struct _contact_srv_dds__AddTwoFloats_Request_ ;
extern  v_copyin_result __contact_srv_dds__AddTwoFloats_Request___copyIn(c_base base, const struct contact::srv::dds_::AddTwoFloats_Request_ *from, struct _contact_srv_dds__AddTwoFloats_Request_ *to);
extern  void __contact_srv_dds__AddTwoFloats_Request___copyOut(const void *_from, void *_to);
struct _contact_srv_dds__AddTwoFloats_Request_ {
    c_double a_;
    c_double b_;
};

#undef OS_API
#endif
