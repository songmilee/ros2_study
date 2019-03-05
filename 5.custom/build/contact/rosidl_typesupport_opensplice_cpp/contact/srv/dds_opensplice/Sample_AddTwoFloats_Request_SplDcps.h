#ifndef SAMPLE_ADDTWOFLOATS_REQUEST_SPLTYPES_H
#define SAMPLE_ADDTWOFLOATS_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_AddTwoFloats_Request_.h"
#include "AddTwoFloats_Request_SplDcps.h"



extern c_metaObject __Sample_AddTwoFloats_Request__contact__load (c_base base);

extern c_metaObject __Sample_AddTwoFloats_Request__contact_srv__load (c_base base);

extern c_metaObject __Sample_AddTwoFloats_Request__contact_srv_dds___load (c_base base);

extern const char *contact_srv_dds__Sample_AddTwoFloats_Request__metaDescriptor[];
extern const int contact_srv_dds__Sample_AddTwoFloats_Request__metaDescriptorArrLength;
extern const int contact_srv_dds__Sample_AddTwoFloats_Request__metaDescriptorLength;
extern c_metaObject __contact_srv_dds__Sample_AddTwoFloats_Request___load (c_base base);
struct _contact_srv_dds__Sample_AddTwoFloats_Request_ ;
extern  v_copyin_result __contact_srv_dds__Sample_AddTwoFloats_Request___copyIn(c_base base, const struct contact::srv::dds_::Sample_AddTwoFloats_Request_ *from, struct _contact_srv_dds__Sample_AddTwoFloats_Request_ *to);
extern  void __contact_srv_dds__Sample_AddTwoFloats_Request___copyOut(const void *_from, void *_to);
struct _contact_srv_dds__Sample_AddTwoFloats_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _contact_srv_dds__AddTwoFloats_Request_ request_;
};

#undef OS_API
#endif
