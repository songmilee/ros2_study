//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: AddTwoFloats_Request_.h
//  Source: contact/srv/dds_opensplice/AddTwoFloats_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.181126OSS
//  
//******************************************************************
#ifndef _ADDTWOFLOATS_REQUEST__H_
#define _ADDTWOFLOATS_REQUEST__H_

#include "sacpp_mapping.h"


namespace contact
{
   namespace srv
   {
      namespace dds_
      {
         struct AddTwoFloats_Request_;

         struct AddTwoFloats_Request_
         {
               DDS::Double a_;
               DDS::Double b_;
         };

         typedef DDS_DCPSStruct_var < AddTwoFloats_Request_> AddTwoFloats_Request__var;
         typedef AddTwoFloats_Request_&AddTwoFloats_Request__out;
      }
   }
}




#endif
