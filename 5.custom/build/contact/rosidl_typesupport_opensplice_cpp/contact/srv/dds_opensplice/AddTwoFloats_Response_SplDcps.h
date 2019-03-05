#ifndef ADDTWOFLOATS_RESPONSE_SPLTYPES_H
#define ADDTWOFLOATS_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_AddTwoFloats_Response_.h"


extern c_metaObject __AddTwoFloats_Response__contact__load (c_base base);

extern c_metaObject __AddTwoFloats_Response__contact_srv__load (c_base base);

extern c_metaObject __AddTwoFloats_Response__contact_srv_dds___load (c_base base);

extern const char *contact_srv_dds__AddTwoFloats_Response__metaDescriptor[];
extern const int contact_srv_dds__AddTwoFloats_Response__metaDescriptorArrLength;
extern const int contact_srv_dds__AddTwoFloats_Response__metaDescriptorLength;
extern c_metaObject __contact_srv_dds__AddTwoFloats_Response___load (c_base base);
struct _contact_srv_dds__AddTwoFloats_Response_ ;
extern  v_copyin_result __contact_srv_dds__AddTwoFloats_Response___copyIn(c_base base, const struct contact::srv::dds_::AddTwoFloats_Response_ *from, struct _contact_srv_dds__AddTwoFloats_Response_ *to);
extern  void __contact_srv_dds__AddTwoFloats_Response___copyOut(const void *_from, void *_to);
struct _contact_srv_dds__AddTwoFloats_Response_ {
    c_double sum_;
};

#undef OS_API
#endif
