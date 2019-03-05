#include "AddTwoFloats_Response_SplDcps.h"
#include "ccpp_AddTwoFloats_Response_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__contact_srv_dds__AddTwoFloats_Response___copyIn(
    c_base base,
    const struct ::contact::srv::dds_::AddTwoFloats_Response_ *from,
    struct _contact_srv_dds__AddTwoFloats_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->sum_ = (c_double)from->sum_;
    return result;
}

void
__contact_srv_dds__AddTwoFloats_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _contact_srv_dds__AddTwoFloats_Response_ *from = (const struct _contact_srv_dds__AddTwoFloats_Response_ *)_from;
    struct ::contact::srv::dds_::AddTwoFloats_Response_ *to = (struct ::contact::srv::dds_::AddTwoFloats_Response_ *)_to;
    to->sum_ = (::DDS::Double)from->sum_;
}

