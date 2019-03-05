#include "AddTwoFloats_Request_SplDcps.h"
#include "ccpp_AddTwoFloats_Request_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__contact_srv_dds__AddTwoFloats_Request___copyIn(
    c_base base,
    const struct ::contact::srv::dds_::AddTwoFloats_Request_ *from,
    struct _contact_srv_dds__AddTwoFloats_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->a_ = (c_double)from->a_;
    to->b_ = (c_double)from->b_;
    return result;
}

void
__contact_srv_dds__AddTwoFloats_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _contact_srv_dds__AddTwoFloats_Request_ *from = (const struct _contact_srv_dds__AddTwoFloats_Request_ *)_from;
    struct ::contact::srv::dds_::AddTwoFloats_Request_ *to = (struct ::contact::srv::dds_::AddTwoFloats_Request_ *)_to;
    to->a_ = (::DDS::Double)from->a_;
    to->b_ = (::DDS::Double)from->b_;
}

