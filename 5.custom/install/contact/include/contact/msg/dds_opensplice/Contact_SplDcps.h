#ifndef CONTACT_SPLTYPES_H
#define CONTACT_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Contact_.h"


extern c_metaObject __Contact__contact__load (c_base base);

extern c_metaObject __Contact__contact_msg__load (c_base base);

extern c_metaObject __Contact__contact_msg_dds___load (c_base base);

extern const char *contact_msg_dds__Contact__metaDescriptor[];
extern const int contact_msg_dds__Contact__metaDescriptorArrLength;
extern const int contact_msg_dds__Contact__metaDescriptorLength;
extern c_metaObject __contact_msg_dds__Contact___load (c_base base);
struct _contact_msg_dds__Contact_ ;
extern  v_copyin_result __contact_msg_dds__Contact___copyIn(c_base base, const struct contact::msg::dds_::Contact_ *from, struct _contact_msg_dds__Contact_ *to);
extern  void __contact_msg_dds__Contact___copyOut(const void *_from, void *_to);
struct _contact_msg_dds__Contact_ {
    c_string first_name_;
    c_string last_name_;
    c_bool gender_;
    c_octet age_;
    c_string address_;
};

#undef OS_API
#endif
