//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: Sample_AddTwoFloats_Response_.h
//  Source: contact/srv/dds_opensplice/Sample_AddTwoFloats_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.181126OSS
//  
//******************************************************************
#ifndef _SAMPLE_ADDTWOFLOATS_RESPONSE__H_
#define _SAMPLE_ADDTWOFLOATS_RESPONSE__H_

#include "sacpp_mapping.h"
#include "AddTwoFloats_Response_.h"


namespace contact
{
   namespace srv
   {
      namespace dds_
      {
         struct Sample_AddTwoFloats_Response_;

         struct Sample_AddTwoFloats_Response_
         {
               DDS::ULongLong client_guid_0_;
               DDS::ULongLong client_guid_1_;
               DDS::LongLong sequence_number_;
               AddTwoFloats_Response_ response_;
         };

         typedef DDS_DCPSStruct_var < Sample_AddTwoFloats_Response_> Sample_AddTwoFloats_Response__var;
         typedef Sample_AddTwoFloats_Response_&Sample_AddTwoFloats_Response__out;
      }
   }
}




#endif