#include "Contact_SplDcps.h"
#include "ccpp_Contact_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__contact_msg_dds__Contact___copyIn(
    c_base base,
    const struct ::contact::msg::dds_::Contact_ *from,
    struct _contact_msg_dds__Contact_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->first_name_){
        to->first_name_ = c_stringNew_s(base, from->first_name_);
        if(to->first_name_ == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'contact::msg::dds_::Contact_.first_name_' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->first_name_ = c_stringNew_s(base, from->first_name_);
    if(to->first_name_ == NULL) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
#ifdef OSPL_BOUNDS_CHECK
    if(from->last_name_){
        to->last_name_ = c_stringNew_s(base, from->last_name_);
        if(to->last_name_ == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'contact::msg::dds_::Contact_.last_name_' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->last_name_ = c_stringNew_s(base, from->last_name_);
    if(to->last_name_ == NULL) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
    to->gender_ = (c_bool)from->gender_;
    to->age_ = (c_octet)from->age_;
#ifdef OSPL_BOUNDS_CHECK
    if(from->address_){
        to->address_ = c_stringNew_s(base, from->address_);
        if(to->address_ == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'contact::msg::dds_::Contact_.address_' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->address_ = c_stringNew_s(base, from->address_);
    if(to->address_ == NULL) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
    return result;
}

void
__contact_msg_dds__Contact___copyOut(
    const void *_from,
    void *_to)
{
    const struct _contact_msg_dds__Contact_ *from = (const struct _contact_msg_dds__Contact_ *)_from;
    struct ::contact::msg::dds_::Contact_ *to = (struct ::contact::msg::dds_::Contact_ *)_to;
    to->first_name_ = DDS::string_dup(from->first_name_ ? from->first_name_ : "");
    to->last_name_ = DDS::string_dup(from->last_name_ ? from->last_name_ : "");
    to->gender_ = (::DDS::Boolean)(from->gender_ != 0);
    to->age_ = (::DDS::Octet)from->age_;
    to->address_ = DDS::string_dup(from->address_ ? from->address_ : "");
}

