#include "Sample_AddTwoFloats_Response_SplDcps.h"
#include "ccpp_Sample_AddTwoFloats_Response_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__contact_srv_dds__Sample_AddTwoFloats_Response___copyIn(
    c_base base,
    const struct ::contact::srv::dds_::Sample_AddTwoFloats_Response_ *from,
    struct _contact_srv_dds__Sample_AddTwoFloats_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __contact_srv_dds__AddTwoFloats_Response___copyIn(c_base, const ::contact::srv::dds_::AddTwoFloats_Response_ *, _contact_srv_dds__AddTwoFloats_Response_ *);
        result = __contact_srv_dds__AddTwoFloats_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

void
__contact_srv_dds__Sample_AddTwoFloats_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _contact_srv_dds__Sample_AddTwoFloats_Response_ *from = (const struct _contact_srv_dds__Sample_AddTwoFloats_Response_ *)_from;
    struct ::contact::srv::dds_::Sample_AddTwoFloats_Response_ *to = (struct ::contact::srv::dds_::Sample_AddTwoFloats_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __contact_srv_dds__AddTwoFloats_Response___copyOut(const void *, void *);
        __contact_srv_dds__AddTwoFloats_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

