//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: AddTwoFloats_Response_Dcps.h
//  Source: contact/srv/dds_opensplice/AddTwoFloats_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.181126OSS
//  
//******************************************************************
#ifndef _ADDTWOFLOATS_RESPONSE_DCPS_H_
#define _ADDTWOFLOATS_RESPONSE_DCPS_H_

#include "sacpp_mapping.h"
#include "AddTwoFloats_Response_.h"
#include "dds_dcps.h"


namespace contact
{
   namespace srv
   {
      namespace dds_
      {

         class AddTwoFloats_Response_TypeSupportInterface;

         typedef AddTwoFloats_Response_TypeSupportInterface * AddTwoFloats_Response_TypeSupportInterface_ptr;
         typedef DDS_DCPSInterface_var < AddTwoFloats_Response_TypeSupportInterface> AddTwoFloats_Response_TypeSupportInterface_var;
         typedef DDS_DCPSInterface_out < AddTwoFloats_Response_TypeSupportInterface> AddTwoFloats_Response_TypeSupportInterface_out;


         class AddTwoFloats_Response_DataWriter;

         typedef AddTwoFloats_Response_DataWriter * AddTwoFloats_Response_DataWriter_ptr;
         typedef DDS_DCPSInterface_var < AddTwoFloats_Response_DataWriter> AddTwoFloats_Response_DataWriter_var;
         typedef DDS_DCPSInterface_out < AddTwoFloats_Response_DataWriter> AddTwoFloats_Response_DataWriter_out;


         class AddTwoFloats_Response_DataReader;

         typedef AddTwoFloats_Response_DataReader * AddTwoFloats_Response_DataReader_ptr;
         typedef DDS_DCPSInterface_var < AddTwoFloats_Response_DataReader> AddTwoFloats_Response_DataReader_var;
         typedef DDS_DCPSInterface_out < AddTwoFloats_Response_DataReader> AddTwoFloats_Response_DataReader_out;


         class AddTwoFloats_Response_DataReaderView;

         typedef AddTwoFloats_Response_DataReaderView * AddTwoFloats_Response_DataReaderView_ptr;
         typedef DDS_DCPSInterface_var < AddTwoFloats_Response_DataReaderView> AddTwoFloats_Response_DataReaderView_var;
         typedef DDS_DCPSInterface_out < AddTwoFloats_Response_DataReaderView> AddTwoFloats_Response_DataReaderView_out;

         struct AddTwoFloats_Response_Seq_uniq_ {};
         typedef DDS_DCPSUFLSeq < AddTwoFloats_Response_, struct AddTwoFloats_Response_Seq_uniq_> AddTwoFloats_Response_Seq;
         typedef DDS_DCPSSequence_var < AddTwoFloats_Response_Seq> AddTwoFloats_Response_Seq_var;
         typedef DDS_DCPSSequence_out < AddTwoFloats_Response_Seq> AddTwoFloats_Response_Seq_out;
         class AddTwoFloats_Response_TypeSupportInterface
         :
            virtual public DDS::TypeSupport
         { 
         public:
            typedef AddTwoFloats_Response_TypeSupportInterface_ptr _ptr_type;
            typedef AddTwoFloats_Response_TypeSupportInterface_var _var_type;

            static AddTwoFloats_Response_TypeSupportInterface_ptr _duplicate (AddTwoFloats_Response_TypeSupportInterface_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static AddTwoFloats_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
            static AddTwoFloats_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static AddTwoFloats_Response_TypeSupportInterface_ptr _nil () { return 0; }
            static const char * _local_id;
            AddTwoFloats_Response_TypeSupportInterface_ptr _this () { return this; }


         protected:
            AddTwoFloats_Response_TypeSupportInterface () {};
            ~AddTwoFloats_Response_TypeSupportInterface () {};
         private:
            AddTwoFloats_Response_TypeSupportInterface (const AddTwoFloats_Response_TypeSupportInterface &);
            AddTwoFloats_Response_TypeSupportInterface & operator = (const AddTwoFloats_Response_TypeSupportInterface &);
         };

         class AddTwoFloats_Response_DataWriter
         :
            virtual public DDS::DataWriter
         { 
         public:
            typedef AddTwoFloats_Response_DataWriter_ptr _ptr_type;
            typedef AddTwoFloats_Response_DataWriter_var _var_type;

            static AddTwoFloats_Response_DataWriter_ptr _duplicate (AddTwoFloats_Response_DataWriter_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static AddTwoFloats_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
            static AddTwoFloats_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static AddTwoFloats_Response_DataWriter_ptr _nil () { return 0; }
            static const char * _local_id;
            AddTwoFloats_Response_DataWriter_ptr _this () { return this; }

            virtual DDS::LongLong register_instance (const AddTwoFloats_Response_& instance_data) = 0;
            virtual DDS::LongLong register_instance_w_timestamp (const AddTwoFloats_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long unregister_instance (const AddTwoFloats_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long unregister_instance_w_timestamp (const AddTwoFloats_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long write (const AddTwoFloats_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long write_w_timestamp (const AddTwoFloats_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long dispose (const AddTwoFloats_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long dispose_w_timestamp (const AddTwoFloats_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long writedispose (const AddTwoFloats_Response_& instance_data, DDS::LongLong handle) = 0;
            virtual DDS::Long writedispose_w_timestamp (const AddTwoFloats_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
            virtual DDS::Long get_key_value (AddTwoFloats_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const AddTwoFloats_Response_& instance_data) = 0;

         protected:
            AddTwoFloats_Response_DataWriter () {};
            ~AddTwoFloats_Response_DataWriter () {};
         private:
            AddTwoFloats_Response_DataWriter (const AddTwoFloats_Response_DataWriter &);
            AddTwoFloats_Response_DataWriter & operator = (const AddTwoFloats_Response_DataWriter &);
         };

         class AddTwoFloats_Response_DataReader
         :
            virtual public DDS::DataReader
         { 
         public:
            typedef AddTwoFloats_Response_DataReader_ptr _ptr_type;
            typedef AddTwoFloats_Response_DataReader_var _var_type;

            static AddTwoFloats_Response_DataReader_ptr _duplicate (AddTwoFloats_Response_DataReader_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static AddTwoFloats_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
            static AddTwoFloats_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static AddTwoFloats_Response_DataReader_ptr _nil () { return 0; }
            static const char * _local_id;
            AddTwoFloats_Response_DataReader_ptr _this () { return this; }

            virtual DDS::Long read (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (AddTwoFloats_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (AddTwoFloats_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (AddTwoFloats_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const AddTwoFloats_Response_& instance) = 0;

         protected:
            AddTwoFloats_Response_DataReader () {};
            ~AddTwoFloats_Response_DataReader () {};
         private:
            AddTwoFloats_Response_DataReader (const AddTwoFloats_Response_DataReader &);
            AddTwoFloats_Response_DataReader & operator = (const AddTwoFloats_Response_DataReader &);
         };

         class AddTwoFloats_Response_DataReaderView
         :
            virtual public DDS::DataReaderView
         { 
         public:
            typedef AddTwoFloats_Response_DataReaderView_ptr _ptr_type;
            typedef AddTwoFloats_Response_DataReaderView_var _var_type;

            static AddTwoFloats_Response_DataReaderView_ptr _duplicate (AddTwoFloats_Response_DataReaderView_ptr obj);
            DDS::Boolean _local_is_a (const char * id);

            static AddTwoFloats_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
            static AddTwoFloats_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
            static AddTwoFloats_Response_DataReaderView_ptr _nil () { return 0; }
            static const char * _local_id;
            AddTwoFloats_Response_DataReaderView_ptr _this () { return this; }

            virtual DDS::Long read (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_w_condition (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_w_condition (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long read_next_sample (AddTwoFloats_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long take_next_sample (AddTwoFloats_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
            virtual DDS::Long read_instance (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_instance (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long take_next_instance (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
            virtual DDS::Long read_next_instance_w_condition (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long take_next_instance_w_condition (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
            virtual DDS::Long return_loan (AddTwoFloats_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
            virtual DDS::Long get_key_value (AddTwoFloats_Response_& key_holder, DDS::LongLong handle) = 0;
            virtual DDS::LongLong lookup_instance (const AddTwoFloats_Response_& instance) = 0;

         protected:
            AddTwoFloats_Response_DataReaderView () {};
            ~AddTwoFloats_Response_DataReaderView () {};
         private:
            AddTwoFloats_Response_DataReaderView (const AddTwoFloats_Response_DataReaderView &);
            AddTwoFloats_Response_DataReaderView & operator = (const AddTwoFloats_Response_DataReaderView &);
         };

      }
   }
}




#endif