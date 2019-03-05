#include "Sample_AddTwoFloats_Request_SplDcps.h"
#include "ccpp_Sample_AddTwoFloats_Request_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__contact_srv_dds__Sample_AddTwoFloats_Request___copyIn(
    c_base base,
    const struct ::contact::srv::dds_::Sample_AddTwoFloats_Request_ *from,
    struct _contact_srv_dds__Sample_AddTwoFloats_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __contact_srv_dds__AddTwoFloats_Request___copyIn(c_base, const ::contact::srv::dds_::AddTwoFloats_Request_ *, _contact_srv_dds__AddTwoFloats_Request_ *);
        result = __contact_srv_dds__AddTwoFloats_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

void
__contact_srv_dds__Sample_AddTwoFloats_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _contact_srv_dds__Sample_AddTwoFloats_Request_ *from = (const struct _contact_srv_dds__Sample_AddTwoFloats_Request_ *)_from;
    struct ::contact::srv::dds_::Sample_AddTwoFloats_Request_ *to = (struct ::contact::srv::dds_::Sample_AddTwoFloats_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __contact_srv_dds__AddTwoFloats_Request___copyOut(const void *, void *);
        __contact_srv_dds__AddTwoFloats_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

