#ifndef SAMPLE_ADDTWOFLOATS_RESPONSE_SPLTYPES_H
#define SAMPLE_ADDTWOFLOATS_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_AddTwoFloats_Response_.h"
#include "AddTwoFloats_Response_SplDcps.h"



extern c_metaObject __Sample_AddTwoFloats_Response__contact__load (c_base base);

extern c_metaObject __Sample_AddTwoFloats_Response__contact_srv__load (c_base base);

extern c_metaObject __Sample_AddTwoFloats_Response__contact_srv_dds___load (c_base base);

extern const char *contact_srv_dds__Sample_AddTwoFloats_Response__metaDescriptor[];
extern const int contact_srv_dds__Sample_AddTwoFloats_Response__metaDescriptorArrLength;
extern const int contact_srv_dds__Sample_AddTwoFloats_Response__metaDescriptorLength;
extern c_metaObject __contact_srv_dds__Sample_AddTwoFloats_Response___load (c_base base);
struct _contact_srv_dds__Sample_AddTwoFloats_Response_ ;
extern  v_copyin_result __contact_srv_dds__Sample_AddTwoFloats_Response___copyIn(c_base base, const struct contact::srv::dds_::Sample_AddTwoFloats_Response_ *from, struct _contact_srv_dds__Sample_AddTwoFloats_Response_ *to);
extern  void __contact_srv_dds__Sample_AddTwoFloats_Response___copyOut(const void *_from, void *_to);
struct _contact_srv_dds__Sample_AddTwoFloats_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _contact_srv_dds__AddTwoFloats_Response_ response_;
};

#undef OS_API
#endif
