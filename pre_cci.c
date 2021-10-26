# 1 "c:\\users\\administrator\\desktop\\adduser11\\\\combined_addUser11.c"
# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 502 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 562 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1005 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "c:\\users\\administrator\\desktop\\adduser11\\\\combined_addUser11.c" 2

# 1 "globals.h" 1



 
 

# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1
 







# 1 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1
 






















































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 596 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 609 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 647 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 715 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



 
 
 






# 10 "D:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2












 






 











  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 





 
 
 


# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2





 
 





# 2 "c:\\users\\administrator\\desktop\\adduser11\\\\combined_addUser11.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 3 "c:\\users\\administrator\\desktop\\adduser11\\\\combined_addUser11.c" 2

# 1 "Action.c" 1
Action()
{

	web_custom_request("remoteSqlService", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t248.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\tGetDBTypez", 
		"LAST");

	web_custom_request("remoteSqlService_2", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t249.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00pzI6a/spC0TUAa8Xxjd68SGdl7LZR89yJtc64MpkuRP+ZkqCY62MQQZlN/aBcNe4KQicoWXtKdg9e36AoFoRYzep2bht0oGYG5pTIjuKaqU7hcwlpz", 
		"LAST");

	web_custom_request("remoteSqlService_3", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t250.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x008x3dYAVTRpWLhFQj5u4uV70KsT2bg88TQgkv3BVTUkTlMWre9kik3gA==z", 
		"LAST");

	web_custom_request("remoteSqlService_4", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t251.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`owPwKirdA5PlVbrdtYqvF8+MQfYTVdFTKgIyEazkOLOa2AenJBT+5OWasJdJP+QVQpP2EOXya2P7VfgVOVq0n29hvorOhKBUz", 
		"LAST");

	web_custom_request("remoteSqlService_5", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t252.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`owPwKirdA5PlVbrdtYqvF8+MQfYTVdFTKgIyEazkOLOa2AenJBT+5OWasJdJP+QVQpP2EOXya2P7VfgVOVq0n29hvorOhKBUz", 
		"LAST");

	web_custom_request("remoteSqlService_6", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t253.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\\\ggPGHcgEjcQNTIOVELHZPvo7QT4WJTfL1igyNrgVB4PchBtSYjWV3QQEs9ZpgF9VznbLh8QLLpR/btGVJMkOwFsk6T0=z", 
		"LAST");

	web_custom_request("remoteSqlService_7", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t254.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`QqLRvSGlIv7T/TGYtStqABB+l5LHQyxnMmiCZ8Szx7HgfgQ+AljpLi5eULpNuzrgJXro4+esh/JuG8ogkrGtkFwBes+8tVfjz", 
		"LAST");

	web_custom_request("remoteSqlService_8", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t255.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`owPwKirdA5PlVbrdtYqvF8+MQfYTVdFTKgIyEazkOLOa2AenJBT+5OWasJdJP+QVQpP2EOXya2P7VfgVOVq0n29hvorOhKBUz", 
		"LAST");

	web_custom_request("remoteSqlService_9", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t256.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\ncacheQueryS\\x00\\x9Cv9i1sPWSH+ubbzVGeDWy51OVfPEZWlBKDkyuhMI+2IoDEbNFRTvaexTygHAg7rLTJ7lVYO4/F97NYmI5TO/Smp4YtYoUAjWxymLosL4M2ULygxGC/RJWY0THIxaLYFDqO/vbbihYqSeZwwoIka2y6UJjBuc=z", 
		"LAST");

	web_custom_request("remoteSqlService_10", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t257.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\x8CvP5/i7W+3iztcnHMvR1aVBgZ2hrwlTQpLOrX0e2qjrgCyOzSB23qPUWN/QnWPPMax6lhcB1wd4kBU5CZQXNhvxqaa4HDiZAMwJEzyxUD9cGuRA62NLvZe9HuySCbfJefRUOcqkcoSSHu6nuRnBwWNDX5T8FCJd00H5H45nSseYhCy2+ryv9n8sp8q4DK9e21kOYkO9lzCW0jvtTmdbptlnM75QHUQPjeBWZ+52mVyoxaCprwsKLCVYCg2yDA2gvSYEzyG2l69njVBsZoF+yjH5D5SiYJpHnUO8uaWg15V6/ta15bZvl480Rf/3ot5Th4l+pN4wFh1Q9cqnTKwtLt+oI0/mMueCdBZYteUH6LwJ61f67xTuGTLFC3fc0UlFHCkz8aeG+mZvk=z", 
		"LAST");

	web_custom_request("remoteSqlService_11", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x008x3dYAVTRpWLhFQj5u4uV70KsT2bg88TQgkv3BVTUkTlMWre9kik3gA==z", 
		"LAST");

	lr_think_time(7);

	lr_start_transaction("login");

	web_custom_request("remoteSqlService_12", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t259.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00HeG3kKpl9VgGozdRfti8lZiVcBe/xW0iPYyJOSArzacW2PFf8cLAUm7JMKv0pVZAebewqtw==z", 
		"LAST");

	web_custom_request("remoteSqlService_13", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t260.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\ncacheQueryS\\x00hQWyz6KP2t64N9NNFE5inNoczb8zn03FLRkYb4w8W5cuXLlTMpRLhPLLBYpRBbDwEm8SeXIM/tzVoAxuK1zgPxwvYde/92GB+CYAqYw==z", 
		"LAST");

	web_custom_request("remoteSqlService_14", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t261.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00hH253ngJ0VqF+WPNLwCI79jBIsDNpR0puUpjOljpkGFOZAZX9U96ULVIJow3k6ao42/Ri82hTJ5nVchH+2psWps3m714S/K/DhZN0Hw==z", 
		"LAST");

	web_custom_request("remoteSqlService_15", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\x8CvP5/i7W+3iztcnHMvR1aVBgZ2hrwlTQpLOrX0e2qjrgCyOzSB23qPUWN/QnWPPMax6lhcB1wd4kBU5CZQXNhvxqaa4HDiZAMwJEzyxUD9cGuRA62NLvZe9HuySCbfJefRUOcqkcoSSHu6nuRnBwWNDX5T8FCJd00H5H45nSseYhCy2+ryv9n8sp8q4DK9e21kOYkO9lzCW0jvtTmdbptlnM75QHUQPjeBWZ+52mVyoxaCprwsKLCVYCg2yDA2gvSYEzyG2l69njVBsZoF+yjH5D5SiYJpHnUO8uaWg15V6/ta15bZvl480Rf/3ot5Th4l+pN4wFh1Q9cqnTKwtLt+oI0/mMueCdBZYteUH6LwJ61f67xTuGTLFC3fc0UlFHCkz8aeG+mZvk=z", 
		"LAST");

	web_custom_request("remoteSqlService_16", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t263.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\x8CfaEeWTfF268BoG9Fb8+BquUPtKholSSRHT1NSFC+JB5s16oX+4stto9WT2FI3lcPxgBCwM+uxoOXbgwH5TsMgsqg98Z9PmePgMZszkSDZ7ugpsyL9dPvaPM7joWxZROctbUSZxQ+hUw=z", 
		"LAST");

	web_custom_request("remoteSqlService_17", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t264.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\xA8HifnG/96QjaQLwz1zhmYFBXH1mztHC0QmZrONgyHflyyrLW89wtj0ENtBpYk8kPdH/LbZC28+3jhhYAy0tS735603vV7ejaqPdXYJ6+JIhZaTAJC5vLcX1dNx+TA1mUMBm4lNfzf3ROgLa7V7LU3pdIaTyEkV2BS2KXyPQ==z", 
		"LAST");

	web_custom_request("remoteSqlService_18", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00HdDpibajJ7ZDlfTcYDwhWnIxHYSxxfRZ08GW9ay8UrN7IBefw6kOoMS6+TZw9PlUmySOjAA==z", 
		"LAST");

	web_custom_request("remoteSqlService_19", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t266.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\ncacheQueryS\\x00XuvlrgCUzvPBKTqzyc0YIeh2854yIvgeiedP38nOOEZspeNt7Sk0qC3t9BzXu96TvAT3ldm9ex6n38FgeqF7bhw==z", 
		"LAST");

	web_custom_request("remoteSqlService_20", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t267.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00p9C5tVcwqBxJZziYvAqw/OxT6Ka1LFaDcFQ0a0DQoT9AkLghJTPkGx1vLpqlTxAHJvhlWqsoLogu4Alj+YVmpzum/GAbhkN5r4BrV0iA2RBVK9dGTz", 
		"LAST");

	web_custom_request("remoteSqlService_21", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01@rLwQzZoQQVoc8GuFUl+4V8Foat5jExq9wofaVbpPBQ+B6tH1d1sNuBjszPWQMqPd2Ain94qtSFo98hnvfhCLFul+66W0UF0UqZkOUo8WITnr+qshUCypqQY1BaW9rRwtXEmR+1a5lMdWVfh4biEpAKwvaa9bp6BpPfHbtp6NjqkeqT8Mpn9E/OTNC7DkXGbC6fpQJQCx6Px3KX+NtxTjWOz8hXMOGkm9u1kSHNMANS3cV4ZeM8hBfA+ZZ5d7VfMc5DQ5kLZQ4Wlm4BGe52VeMt+vIwIZDdXcP961hRi/gwV04tykb+NZncj16RRBneUzz", 
		"LAST");

	web_custom_request("remoteSqlService_22", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t269.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\ncacheQueryS\\x00\\xD0IRFzu8yjrWSAKz/GgTBcScAglhCjNQ1TfXCuQYyTDrn7MvJOmwOITaf6rHw6KCe9WZJJV83Xwa7k2ZpvKn34Ktxh9FYI7LpAVhuxWTNG8+ON3lEw9wsxd/sJ3wpOQIdJPO21Sz/fg576/DAEVkscHs5SrDhKUkmiIKvgpFz9i7Hk32U+V2c5CU0rr7wXF3aOKPXg/MbYl/zFmzYqz", 
		"LAST");

	web_custom_request("remoteSqlService_23", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t270.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xC0MYv0bfuFRoCTdPvLpZbfYwBq4ABXBZgrJ6EO26qpXqa6+N/JN2Z96fNec//9aHPZg6b71o61odlElu1o9P8tPQZuhA7yMryTN68UrhJbiQ3Y6qahTjZ12fPwlGd4jBCrIjdq1yqDl+zkIxD986wjxKlVxEW/qV9UtxD5lntM6IsLoaTjd3ikbzzpdwLZtHP/y1ojHMd9WNpRgxOOf2HYPCKGAfbmIZ4+DPg2tJvX8cFSMk0GL88igo9UpmkVgIT+bzGQ3mSXx0ERKSH1npRQjZbOA1j3rgIGg/FR5lpXlBC7jggEbJqJDFMK9isXxxv44ZGJB/BUsrwfr3VpdWZS8ErbXgvA4LcvYLV5xqvbC74F4W1lXKGpJ9tpmvNV2Ag39SCDa61+3IMRbiMfiqj2OOwBMUHq5v/ZFfgiAWvjr8WiwPcYncJF002/lIeqDjidz", 
		"LAST");

	web_custom_request("remoteSqlService_24", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\ncacheQueryS\\x00\\x9Cv9i1sPWSH+ubbzVGeDWy51OVfPEZWlBKDkyuhMI+2IoDEbNFRTvaexTygHAg7rLTJ7lVYO4/F97NYmI5TO/Smp4YtYoUAjWxymLosL4M2ULygxGC/RJWY0THIxaLYFDqO/vbbihYqSeZwwoIka2y6UJjBuc=z", 
		"LAST");

	web_custom_request("remoteSqlService_25", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t272.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00lEBgPi2eL2HImXmnBXDDRatqSUMX0eY3NujqqdPebPDFoszVLgJgU32PTPPSVauRb1Uv7W782qFDqoHNwMC5OqZQBea9M99KH4jOdXPHDMWs=z", 
		"LAST");

	web_custom_request("remoteSqlService_26", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t273.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00HdDpibajJ7ZDlfTcYDwhWnIxHYSxxfRZ08GW9ay8UrN7IBefw6kOoMS6+TZw9PlUmySOjAA==z", 
		"LAST");

	web_custom_request("remoteSqlService_27", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t274.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\xA8LBYUUX6YLcHCqndBiZOKC8vllc8poHu8HeLVsj3/ubZ6seD6Kk04qfqU7sjeF4xTk8qfWce1O+R/oVt5P9bYZPZmFyb/GYYLgXvxtrEWouAHz4ylg18mv7N9RSMbFapp4+QotTQhpfG7RtXAwrE3yQ8QRCHaQ/nmkD/4jg==z", 
		"LAST");

	web_custom_request("remoteSqlService_28", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t275.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`8RAKsMTMiwMi+ZNXDzcVBSeGxpqEbHrS7nnmp/VMijQ/AuBRCjzfU0r3igKysy/6WRQa88UTPKsLv0QXz79raBKn94aKgJdTz", 
		"LAST");

	web_custom_request("remoteSqlService_29", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t276.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xCCJUeitRsH+j+DyTtJ9hHsr8KtM6Z0oScHyym2Pz1NCvxhBBfZL0z85Gc3E7h0PIFMZ5pITDNnK1feFkl17O9JumBxfKq8XD5hfsxYqjPoM7BbWIAOeJ4vE7WIKesSH6sYhOKOpftqbsUzDQmLj4MihwjVli7pMT+P023lVJXs0Yz5atEPSxfrllmCSWS3RKL9Qh/xhu/t7LIDXdIPQxG0N3t0TiE0dOgMOv7VZIYMFKOuNtGhFcKTeOcuo440y58UZDTYxAl8ZqQ3pOE26fKr+0HQb242xQs0DCE2KglU4xsh9mPNdetdGYUJR/3gKWW6bLp9WQzPnYZEBM5mVUJHHamzhGMWUqvJde4rJYOfj+AzYSbsGZuIPQlLKTCX8WyW226j+qCKRGPYypFs/"
		"6KQFw40Z4r7Z3YJvzehluSDSDYwP4GjZ944dGyAehWTqx7DHBeuGHAEk6M=z", 
		"LAST");

	web_custom_request("remoteSqlService_30", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t277.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01Lww41YOKREixvSo+lRquQ4zW/eVowtkNlFnl7bLmmS6FYJraYbH8PRisJ2qRXc5ekHUpzihmJWFoy7aGLRVmO41wXvtXPvsyxhjsRpA7M6sD+RENgfoZmqa6JHejXCoYpn36uMui4ooSnXD7o3FnnWEecbAueR6mt79sc2vhOIVuSDeYjutiUDqZ/NvSuVZdn5cKbpYIEqKWlMKQ3Bqsr9Qpy4CIc1gZxtii0fMQyqLzK0EWXNxoCNXv7mNR6Mr+rl+ARK4BzbaNqHPNosGU6SO9WlpgEHjBRzpMan6TA4IuObsEHqSUf3IC49Q5wI/xnMtWHWkEN5/E=z", 
		"LAST");

	web_custom_request("remoteSqlService_31", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t278.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LCroHcVu18KWLMLw74YQV5vDzSkuWnB6dOJiUq/QZNA/YudaWNGAqtUpiUJ9RbHqzmYQpD6Dk3BLopF9zDIN0ejmn2ZUOlySSboqzPn5h0LeGpItc1fMY0xZSv87L3apPwC3vNQy9PSSALh+/z9WU83OQYtxcJesSAiEIvdSohYSAqmiML7MsOcmzGhyDsjxsPTHc2b9EfVvfdMDVF00amUINeoQl1/nRs9V2BL4VWpA+5FmCtlPFT9Jf6zjaOQbCidYCSi8gU88H74ypxiyTAmgvYHvbTUx0oWOSvanyowS8t70m7K/XtslZoQ4C/dqpUcwPfpB9D64=z", 
		"LAST");

	web_custom_request("remoteSqlService_32", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t279.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01L5kCnne7qHWMUGc8p/K1O1ftRlJzko9L4S5A+D0rfz6VhCuE+9458CNn3JhNnhwifm0+qSROZES6IW9i50ItcUnW+HCzjG4od6Huw0UVpRRtzqF53UcAy1erX/CN0EojSnqm1jfkdCM61tMKurOuTQrn2kqGTexQL1JkpCtzmvhAABS1JqkZOtk/OmslNdQnq2yEEGV1kFutGWK8UHo+cs/fw6nHDSoVGdayf3gkrarSihaltvWk5JNx/S+fKZGmYZppG85oMa1jlET780KYw9VXKbhNbpZsU1F45sL9A2RPpDI48d5v6jjUcz3xMnIrNCHvj2CCL1AU=z", 
		"LAST");

	web_custom_request("remoteSqlService_33", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t280.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LfYBRrlCX5c1jp+GoQsdW/waV300Mx5+CwvtvqUXjQwqjBv9HOnDf36mT8zbljqHS0Cd98K935X1S+lUV+xswyMQ77qwZNtyoIxd2sQ5+j8GQorNRfZM6dIa6eH7q5FWnbFoDvW72b2/5WyzMcL+9y7znhd2Vbn7omlI8MrnZzVhzttrwsKpsBu6UmWY5G6+W4sE5w6nNp4qw5cQkmA6+rE58eJjdr+9D1hJthZ5k+mikyk8Ub9+BpNkr6ZF+3TAO82qsgghvyIQHT8V1Q7Sjd1BJPKxRdSTnZB2wCMGQg9vfC/vuiq4KDFsf8A7pblOw8sgrkxNfSLQ=z", 
		"LAST");

	web_custom_request("remoteSqlService_34", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t281.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LiSiQPOhh4fR/89JYBjm/ltnq38KF8tXWU35NTbET2e5WNUWWQZcbnQBUmoQegSk/fUzUFnOp8GueW1OvcPupwFNHgaSQSJJurG4xUx/Netve+znIwWKCTgB3QNYj+L7VMv0R0MGr8JKPCUEzLIZ3qIfOin2s1l+fQg3E2lkH5DN9xUOuWqCneqUHThfCKP3UUEwm4ooiLX7OgeG3n6QL8Xe2bI8F2pFbuMBBlZRRyEVfTCJ4ujOeFqE1sFCRnfdlN+geSaK71UfJ4l145TD/Nxdv3jfTfiFU5BdC80EdelguXU6kDNrbbPCz8drrvp/6xVLvMj3V19U=z", 
		"LAST");

	web_custom_request("remoteSqlService_35", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t282.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01Ldoc+lI7ko3gVYNKnNsyHKyZ9z/vr3A6y6rLIWgj1PsWtz9hwqNSQBzTZuvbFQQb3DVgxFpO/hBn1Z/ai40rVCJC8OzPJi+SzR4f5z7YJ1H5UMipEKvHUaepuiVwTpVKIiLnNjezDe0I9WLQFZM4wwKDVkSDfptNFAt1x8c80sLLndn+HSGvWuhijw68Vj1GnHi4hgj6WrdqdLAvdy9P2BL1tT82XMq9zKSGa3pvHFgheoLcnEQeuz1aj6ZjF/xHbXSvwx0HCph7HvNpqLUiCo46SyL2SzSKA2lxC6qV+FFnhUA8vvJBhmxtobKd95Vr2+ZmB4G1eN8A=z", 
		"LAST");

	web_custom_request("remoteSqlService_36", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t283.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LNtGvrvw6DG4U1OVUrtMaxKfLY3R+ld/Alb2hOb+nzmIYkIuweEkO2h0SQK8/LPeXWBpWzxKlLcSXMINQ5SQm8m2t3jifh3MXbd9RqodVUtaw05Z9lFNS3E+SJPc54Zts/FiqghevzOig1e0y0KrKFwMfJfLvYinOkG3yxmb/ZBar35ugPxDvotRRbOVfDp5Id+HwbYZoEosQLZYCpeEFx2CI5aZUZV1h0TCNH4D+vjIYP8Zx6dr3Bu1xuEkgHD203A80+aoIw7Aq93K+0IdAw3elXLyeDceBfckYUVPZXNiWnFLnFZdUEoRag3zSIKUibn1HJZKqgns=z", 
		"LAST");

	web_custom_request("remoteSqlService_37", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t284.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LaI14efmuWeatGAB7uRaHnkGP/y2c6urZv6+2JvyIe5jSlS0RDb/I7l5YU+ACpfEuEKh7i0bTLHCTbsTyUr94jZbxUgdcKka9fUViEOwYjWabViwu+nzsBB/fgFEekxcn9yZdOvl9qRJkd2mEVWRZnhoV1NREak+SKpqsa7kn1kNobnY0/LKpivpKURKeVMOKtLlGS3E9EURhw1S9+SJ7S/v+FO6MH4Z8ZsPPEU7k6A2RcAY5Uu4vedaU4Z1X3jENHdrtU66UuL6f+BF1bXKjKHuhni2JXSrk70/gpLEEiZYxNk5bgyOrIZmcDUfjasg6B3B9fnBWkgc=z", 
		"LAST");

	web_custom_request("remoteSqlService_38", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t285.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LeJ68ceYMmPpOfTVQGxIXqpuXVBfgYQfy4HqcbMfrQ1RyTn1KKC7NUATBi3DlhY7tK2wnLFWF85PzBzAd3YVEScNU9ARrzeWPvcot7HMivdityGPWK66Gow+JqJxHTo5cfK4Yti/Gnd2MFxcDMWFMsWRIS3IayFm6B4TBL+k9w1Ye6T+z2XoFCfJi+yfwwdYlpNq1k23kPAsquvAY6YaGysqohL08QPF/ZXtzKShH0dldk5/hWspSskMC5Ly1RxjF2TiO8BbKPdF4514aiW89tsuJV2tujYm8lpvbsZ1/MrP2zWyR5COJyMQZDgPVXgGg0gdRoKjKn2c=z", 
		"LAST");

	web_custom_request("remoteSqlService_39", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t286.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LVedTjMYINubZ47dfSVmmRNZtkBX6pE1nnY6HnnUbollE1cdWfoTi7YfVCRBpF/boQUxLEY+OgP2DogwUE+3rNKVLD3BTnNZI4RsBIGebMUWL995tl3ImFn+wQu6e/DgITt3HbawBbG96wguCcA6gM8/mC6wy63Q6/5vHFtNOozrIKpEDL/7M5rytJZAb7tdMT+bFLhVxJ/wtcN2EMXJ6aABEm49I88EiyV7rz4/8J+Q5T3YiUzV5G7vXkbslgKQCfDxwSYgKK2lHyagkom42EJQ4pH6MccgdV+Bg4U5fsDCqOJaJJkwKkBJQsqn5vKb8bMh/qGE2FtI=z", 
		"LAST");

	web_custom_request("remoteSqlService_40", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t287.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01L/uTD1dWKHct1BZWZdoeiDeucnFxXPVtYdr1TwwdBESzMm5mgghkp006szmyQVbSuWWye55AlB/N7GfQT5qM+iOaVz+Uhm4UWs0kaf4fOLcs56H5CztnfXwsBBwxaot1+ve9bEXDk9ph3NYVu25Po4jy5TS8OC7ht1tQ/fIOlX3YLka2nUM7oPz/WVjfy+SjgJgetlDhjTonUhAzC3siJPgjaeAhqZGG14HjuV8WBLM7d2bdgknwvyrAoSJ3Y8AjsChJpGi+vKEo1p96N6SqCabWwhS6/PjChmZnGlKhdpUgB0jMthWg/6jQTG1hmU1tCcdieGkCQUxM=z", 
		"LAST");

	web_custom_request("remoteSqlService_41", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t288.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LRNbaZhhjg5rO75NWKrE8CG900aHRHR6V5g6YcJp9RNDQev1rHSyfdoX+kbtNqwLVWULwyy9oe3beO/hXo0aISDuGwdUVX85JqtO1GK+jaPJ/HJ3fWsgYS44a2C+2oVTwqVAeXhqo0d4hKIl5uxV1hDrknRHAKO01hSJbwf9k6k0Uia4cVSTB+bIydqNFYBZmlfus4/ISy+3UmiPjN58bQtdoceSByirQhGYZRlTyQGVHU5CupYmp//uIpMH+wBh50i9XxMVyx0Stibws0pABYNOXOUz3G/whFE3rmdrLCUTkU4viB6GnV4B7stoxxf2TLE4ZaRrwWY0=z", 
		"LAST");

	web_custom_request("remoteSqlService_42", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t289.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LryUMJIXe58p1Qqxr/WX3p7I3Iyc1/gPDBdu4JjGLOOM+oH0lg0+BmEUuUGZN8jf3D3IHi9c1KvOIVRJaQJV74FkLKFTzY6aR7wLTQCAD2tYgzdgOiyKZXBl8Mq71E8VykotwtwfZPwoQXFYCRaDAPUSAAMonqcbN/Nmn6qWkcxSWA7ftcqkH6tjRMRTm/kXFKObcGxZjGnbANJ4CpvL6wgQ/UXA9np7uKESIdhp97EepoImcg4mFg4HqBP+4+R0S9mdms9Iog1+IZrWw/jbuLlr53MAQznY5pfU83iwnpNtkY6RhUzrtBfdCGbg6aXvhorA8aJ/mdHo=z", 
		"LAST");

	web_custom_request("remoteSqlService_43", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t290.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LPX6D1u6Tm10OrOcsJL3UYTB+v5XsL8KhYbdsjc9QXiguxjA4Ncl8t3Svx+67brWQjT2o77xxP/F7s0xduaOcb5v2lutuxz1xWh+eZg/31flDlPgCUV/xK3HiM6FXNTD7wZmCOIbtdDW2YTJhPpcVScM9nJt7CjvtSPc+BlJKRdEPrevz4kTiBlFnTq9u1sofpcIYXuRJogCHXomEhB8Ktt+6NdsqPGXyhYBk3/+Bnsz5I6VcyUlnK379hBRJmcdGcLomS28FssO8ZuTL/FHGWPAKMys2SI/QEtnkPKoIqdgKQBaVYHTYZ3agsFJngoUvIUquzicizKI=z", 
		"LAST");

	web_custom_request("remoteSqlService_44", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t291.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LETe59lNNC5wlGje6+1V+JXL+NN2I2X6Yv+Us3dHUxinpMrVyqNCMCWJxf1ZXo+fPn1V8/x680OOYVzHjI78shOyJKwaQAMU0BU5Dx4frIv3oF3vNAxKytLGbFGpj9pcZ09zjAQwPC0G/UzioLrLpNgu2Pc4tAaqEwBCu7N/IulnUegh292GXkBJZ+cRi6AWtDVbn1oyfowtKeKCkJTTKTKNLpLFYss9gGhD60TGAhWYoRTTe1cGusmh1pvY81//9o6lkSJP774G0uhkxQFcFJ1F6VPJUCSzk59N3xEe2dcZCnKEb5+BgfyyPnccI3maZMd6FSfyHJ4I=z", 
		"LAST");

	web_custom_request("remoteSqlService_45", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t292.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01L75rW1s2Zi1HCyjV5XDE64In9Ksbw1MW1qjbXXbD76HY4l3XjQB36t+DOuSdgw/5mo6YDSlPYMAWrzb8bMWmxJ+8SrHC12uEaa+rjBpj0by44BzXqtX0FVUZM84QQ+k50ZnJgmEqS5ZCznKip6TlVjiI6HNFmcz9GlEQr+O+mkiu56qDRzVO/gzCjPbQG7LVCvx9Nj02CoSMZySvL1hfktNrFSytpZI0LMzD5KAMBdlGBNYplh234x3nUMt3JI1g94yEPkgyvXD7fATKaal9JTaFgroEINHh4o652wMqwooH2tUq0QJBj3hcxo40tfzsSB7m5dt/xC5E=z", 
		"LAST");

	web_custom_request("remoteSqlService_46", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t293.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01L1lXucfD1yB3vlDP4bfbeo70GsJPmlOeoGDRlTsjWvD0xWC2DvQuk0qMBJeS3xmWTxW2aE7srXYp8gOV55jNCK3tK7FhnYfsYgEjAWDNitgqLzZ6KRmyZyFbEtSJGKOIhpsmF6uqKGJiIWMNlQUaAIAvNIlU79TPttS7HXHEoyETT4GozGPbpREkc2CdgnPwJv+k9HaH2viXaCE9sVrCMj9X8C4ygQdwBtXtCCtLChNP1RwQfJC/DKSKkAlgiJDuCIvqol8E2i2uoPE8cf0vPeI6S09ySXkWwXwM/SPauEUeX0H0EGNClm0Q/Gq8jXy3Mj5rK83lY2LM=z", 
		"LAST");

	web_custom_request("remoteSqlService_47", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t294.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LxadMqwQ6lTiwwgqTPS0K2e8CQ9fXxKSr5qeIouFKz+ZcgbOPyZUq7YGSrwekd5bSDkivfn398+qdpXWooIK4DklD79K2N6So2Ss2ystqh6eyMWH1N5AMrbZZosPXct6W+goTXCXstY6OSypxOCxCoevUa/Au1X7JBMOKwvesoF4lxWgjNPueUpQgOoRxqSdONge/1ebdlS7v2QhxVtsonIj47kxkH4S/wjc9OIEVRB64Ws1pgSISjDK2TF+5gkGV1zdFRJ7kPVc/OYNkbOe1lGWCMTT2v6myIUx8yjsJ4YliO3Dkenv97uuKjqZgwfsYjGcGVb6cZnE=z", 
		"LAST");

	web_custom_request("remoteSqlService_48", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t295.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LFAXo1GfQ3zmDO8oVgQBGFhv7Smdxe2M9f/0/izYJCpgbO1fn1R16rCLrUwFt0jKRdv0y6MP9968t/oLr0ABwFTCyx/NihLPhhPgTvxBlcVpmUPyPBP/APStjuWcLr4Z7XHpEU0D1eLH9ESZ88PnssdTqL2Uad5raYbnYUCS92tQ49l9Xw3f3u5DeSR1yrvOPubkRWzYJaMVx8uYHeBycJyyBCHqN5br8zZ3fzcQNevp1sdgj3o5Q2kcyDKe35idD9gSCc0BPfiHCmEOayNf2mKvDXoPOELthrENzw0moTkyMZkrTc5YLB6hvw+W2y1bo92Q0K/odVVY=z", 
		"LAST");

	web_custom_request("remoteSqlService_49", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t296.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LyVYMyyR1p3qfJms4uGqVq9fqoscI5Sns1f8b4KXKdUlkRr8M7FIPW1/FEMmoqlM5cWV1oG/mEAlqVEDjY8JWbnW/tNuS6h9QOKIfiGUPgzuxCrPVT93DwsB4fp2ybIbO4C57lhf/D8PiW22fkORvsaCjJ16+rev4M+0dMBBkVyc7WDxzN0jFaB651X7jjYhFq+Ov2iz+IW/klEiOU5RAYO+R5teSvRdwt1ueiR/I85KBWy1xIkFrWSRiGZFbDxKe9q6ySHj3FzTImyfJGR2xGvaJdaKHmxEIB7NIlaYOnUgrpUY8jqMHRJZcqgPKcX85ZuVRDTEw1LE=z", 
		"LAST");

	web_custom_request("remoteSqlService_50", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t297.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LupIDYEmQdZ25udsqWv6k5Nae8q9tYobaD1/ED+PI2CMueQ+PT32tGjN0JuNKcs51Aq06lMENc178wfLtMcHiwObxnrmYUT5Fwui2K0Nqbcp3WpoMOAGkYIqzt62YCsEJOzfVJZyTaJqn4PVjSVcGtRaIWDvcsFFMQ6aZBd7T4HT54rYhN8zOvDDtifa1gzFbd14V4O0Xelpl37+rKH5TVjeL+4nVT5YS2eKYsFHnyH+5HafZb8mYMdexdkkgTyFpkvWO+Yy3UOTAwjbD/YY94oKMaWgeoQCZ3ASQLS6LvpfzpSNw13t9yzoH6Y1COeWysEuPKhqTLdY=z", 
		"LAST");

	web_custom_request("remoteSqlService_51", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t298.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LOXSuK0BWoP6RpQ9gV3AeaAlNCb4kY0DYrkAYgFZVhteTC/vsqpwplAA0HvsF0ZL+V6XaeJWyqi2C4dmBKPoSXO2rqRDdyJv34AazDrXSzGj/O2zu3A7mxTNXpX6HlCn8On75dOD61bzm+ArkymalVHXr7NHYIRTgAztgxr0nk8oVMX7pACQ+54m1qSxHmQm5qx+J2jNUL3mCEpP1COR16iSdd5CpKs1Y39vrONQalsm9unShzhO4UlAzX2ddiFp5tWac0cxsiyHv98SJ81Xct10wwVA9tUs1iBpKP0IYGpX8W+oM5rhuwg3binKQt+TNYOqoQSw1xRw=z", 
		"LAST");

	web_custom_request("remoteSqlService_52", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t299.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LzPtpqfrgF+YXwib1fS6Cw5DDGqs5wskY8dETtWvkAnAI8hviKxXbKOeMdV7bW13nLvmCR6Ffcl9LBMGt+gEhn1Ibw9YpqEM0ZPd/TRqjFylU+jXJu/m4DYuIiTzIQwGJwU9JcKOQPYqHmAew+6f2PNoSMlRrFXgSXqFnqXh9omvL4a07NosNsDZ50h8700qaHQFJiuaO0Z2Q84IOPRi0D6RnDdEcISkJUi2BFUWL+ALaXNRRanRvIXwpq406TEFii6sRTbiXqgpkgVTTv2LMteftUb5zdm1ZAohzb/cQ7LFxm09f8mGLN5Fa3D1VErkCb+8o7UFw6Qw=z", 
		"LAST");

	web_custom_request("remoteSqlService_53", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t300.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LrfZPvPFkYme7enWtJTxdwcANK76XnOBF4u/f4+F2ENvfqxM+vrmDI28VjWVJFWlGKwEL0//ObjK0uZ8PPg9xkA/MELZZO9/ZIT6aTquQHHNmoeWEDPvn8dhaEnkE0tMFBfYzKmGRlkfoAqraoa47CyLUIIOhPQw32xg7KcQuAQHIiu1aN9x6T/uP/g5pw+iNco+gFhmpXgTgVY94va7lWZsd1+XNoQei5gA4J650AyKnHUD6MiR7bV8N/IM/vqBYtZrC4P2PjG8ZkrmvKtLZgIs0c8swEXxMzmqQD6abwmveuryBPLuxV+4B5AqRbPYacxL2ofmqvxQ=z", 
		"LAST");

	web_custom_request("remoteSqlService_54", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t301.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01L2fBhopJq/ZMw7eTU6KP25nSCQiDAjj5nBD1nf1RGVJ1Bv0XWrbjYDOqwmoV3a0fzG5bWyKGNa08v/q158/riUEBCsF7qu2fBWl79Y7y/t1r/Oz27fZr+l7taYAs9O2mU5UyfisXoUNQS1gPOHWi7HWDw29aGPxMCVC/CTTdyGdsDwHrioNMqbU65ksT2D40O+sayJqZU2jeLasF1/R+hPli872YbbFFUqMHVjEYM34fOKv3xujc1iFeqgXityB9RWclAiFsIELcx9XpCkSw/3WIi6zBcYbaNqvNSdhxyyWkPRa4jo+sZ4P7P2md75Wq5HjPWPIF9MHc=z", 
		"LAST");

	web_custom_request("remoteSqlService_55", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t302.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LDc2IT4+OxFnKveEVtmpLgPTC+GzSWb/LoCyT1kOtOOsuvAQYt9uxLuC8hcqXpmJBeZ1gj97SwWRTz486y08rXEFjo+++t2gYGDrQ92XElpbhm2BV49bpRM1AXOC3ZJWpIJFYnivK7X1sw4thNk5uwKwHNEpSccgpxUboKW5IuJ5K80ElmkvfYr2/zjTv7HxArFxdK6GCEI3eMUCf2bFvoOIsCtaWxwYY+MOcEObGHMaqWCzHsoU9RaivtYjyrIUN+5NknW4Mk5y6wd8zXKY6tAtBGl+iEydRiYDR/WmkHIirjG1KKTGmwnYY6Ch54l/yQllbJjkNJes=z", 
		"LAST");

	web_custom_request("remoteSqlService_56", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t303.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LlYDuT9hYdZl+exB9YPV+q7hgRfq+VGkI469ctctl4a5dHFdhmZeYQs1+uXc7mNsKgodZsMzZwczLIBDF00PTkDVxguPOivr5EhwQxs8psgoBAO9Pa3tkDoxAK5ih5k+7u9h/yKEEbh2i5lEF1U5HUAMnJB8uvoQrGUIiQo9JbzXE4MWd39epuUH+fkz7Wv/DIyGuTY0ViHFEToDVD/+lqKuom1quP+6mxLyeHBsF6/Xf7g/kjN5tTZYGoa5XoiS5/UACW/hLL0fhkozgJgyfvRQaT65H/v+1+AV2fPhpKaOWDqIlORCRq9VZ+OTJix1yRSRLGnj+Z7U=z", 
		"LAST");

	web_custom_request("remoteSqlService_57", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t304.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LEi5ixqB9D6cI5fvuHeTSU9mwUty4hWnyGkv/DBB/5K3pILuJDMRBxrULLo2CJzsy5j97Kyd8dMqARG192pCztQAr4C1/4A19ddlyQ5LnPkVYWLKyBLibzfbtGHEVagosvoSxl1LyfNpMxzaV6XbNcP4+CrczurCB8STZTQb3G/7axKHa6yTqdTayAtB6tHZPfWw/dqhspwmasqCrktQXuWcIh0IJjRNMLm69QEKaVOqXE2NF497NejYcDU0dRx3i9GgwzLqq3GsZOZlwOGzMlGsNLsbZcObca5qsb9MKr8NAZl7ta8vyA8WyfvHxEY/2sZ+fo2y+784=z", 
		"LAST");

	web_custom_request("remoteSqlService_58", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t305.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01Lg48t2cIudkw75klSo76VDgS2V/y+Jw+fUYfpxsVR68fnARnXQRn4DoxKrYsCd5abTlcyc3MuzTK3vrV/goZBN3hhJFWsOPk2bSsqyw7OhZiUpEQqZ/YYBNeYhnO5wrAWf0ruF8BO1ROcFpS9REMT67bt/YLX9QHiP7hx2DjUhD9xB2bKcbkh6Fg7hlUCjkmj0Ovar3c03Tpft2TLodNvrlWrqHyK9c4Ev8zKJ5OySFzWYeDbF6BBTcfXY/gUWkukXzh5+Aj/VzabvlD2Uchst5eUj/Pde7BEALGn+0ImBn7+aMSkB3XIIFgA4y4b71awQ5ieysApqOg=z", 
		"LAST");

	web_custom_request("remoteSqlService_59", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t306.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LMwKkOVdYZX5JBP4gses8GyXrz6Pf9wZreyKEpypXcFemdLpalNDS0VmSagfAWG4eusJMb87n57sHBJJMrJS/OBYCLv2KMA8t9ez14fJ1Rml++bs5uIt3+SeInqkrDe/PuJ7FFOBOZsoxsux/UMQNo7Mn5aaWmR6bs4GRIfWO2ATm91pI1eXA8vnEnrwIy2Kja1m3dYIdmb+k9YaLhaJTyIwYv+uGwgDV/30yJsrayBILXpLFh2KSdQcvLT12eqtY40yHX8xaPGs00iih4YPI4/jfjhs2HEuz8en7vI3j/e3d14/s5Un2hQjwOIdDn+gTpxYDGSsoxaA=z", 
		"LAST");

	web_custom_request("remoteSqlService_60", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t307.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01LiNnX0YmaVbGaq9OdtC0krm1b6Zb+KI0VcSdFpVXcng7h4zwalH8Qd8Kd14Lbkd0V+iVZN6POkkqCfIyHp2nqEUoML0B/q5KD6jr+qypI97jKofJzG8DrVKIrY0kr92xBRDlyMK2a5nCAQ4FWYX6DCauHybDwQuQhD6oxhAON5wQYy00S1fNQSh6qofC5JLK39BRb3CUQLzFzoPZd2/Z5QhjybynQZCTUmdJWWLcozJIir7e4iXFL80mkNy2C41xFr4ZLn8H+FEAAB2Ck42fFY5DLGW1RJBLB3rMr1ru4VjcsfXVyAYYyaiWiBQ9HkWs2ETjIEbwV+Fg=z", 
		"LAST");

	web_custom_request("remoteSqlService_61", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t308.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01La7NKkb7az71SDvXYmgmP/aHGvXmC7dxY8ZhkWAo6U7dXFjq4kFdVv3mnc/YNs4ia4uiTrQNjmGlGK9iossHJZa1GJSvnnwvfE+oS28EDYLxOrF9u+1XJYPwfz6hocewnGEDkuXbz6PzlXniElC5+CK8olZJECyUioJ0rUn6VVjLmwDH8z7dk1HUqKF4A/S55+FTjLOdIdRxLCwtmfLT/kkScbJB+srtiRiVyP8m1zv8q0zkK8itQviij3+rRYXrLph1g1daJkPi0NOH9PI3d7igmRCuccV9eSEltGRhK0DYUnxnFXnsFEkDiMh1VaEnBDPw2BznIHC4=z", 
		"LAST");

	web_custom_request("remoteSqlService_62", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t309.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xC8xWgK/27XqgmC1QZ4yRi+UVrIzDc1Yq8mTstz0y9i9rofvsabzrgN0iEiNFrhY0qW8nQQeVsFbzanUeCRP0rb+D7lOzepTYqSVEjjPE+17DT+yTo44FiO+RZC/lRbE/joTCl90mvdl4JnXD8XstSnH7AGdzWFMFb7srpKqbOZwut3lLaQp30gMhYj6ruKOon5D+lFTIfd0LMYBFYLJxYV97pbO3xXxYP3AY5NFlEk/Ub1GLqnbNBpBVxoijx1GMhuco7xhrQbQq+5AyonuPB8aG3KPOULd4iZxEvYripTkgntygVHSCLKYVyYqgpBwQ8DvUJRbaWAexzyjKHmRVqs9/D//J743gU0b4F9FuS54uEc1repaMkEz6KAmpnoto6PIP67V0F6Rug2ZPc9V8sqmdINFsVc6EY7+MrzvKiknV9IAl9VK/"
		"HZmR7QUqpbFPyxLyKhsQ==z", 
		"LAST");

	web_custom_request("remoteSqlService_63", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t310.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00HHCpyVyWULYlnt3EExMef4u8M5/fEEctR7HviNESBrZ4Ss7tebxzdc6G2Qai29zYY3RtQHA==z", 
		"LAST");

	web_custom_request("remoteSqlService_64", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t311.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x07executeVt\\x00\\x7FSystem.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]]l\\x00\\x00\\x00\\x01S\\x00\\xD5 insert into FAP_OPERATIONLOG(ID,YEAR,NO_ID,SET_CODE,LOG_CONTENTS,LOG_TYPE,MAKE_USER,MAKE_DATE,LOG_IP) values(642422,2018,'','000010001100001','\\xE7\\x99\\xBB\\xE5\\xBD\\x95\\xE7\\xB3\\xBB\\xE7\\xBB\\x9F',1,'admin',CONVERT(varchar(100), GETDATE(), 25),'192.168.137.1')zz", 
		"LAST");

	web_custom_request("remoteSqlService_65", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t312.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBCoeFYupxZCQ3KrM+8WZeBeV7XUMmlLJyX3T5TvU46LuK6i/xocbzynBXWN+KbRaP9RSsRTpRfYw5yEkvtSB2/XvipnpC9luWjwRe7HcPOXCRm0xDp4Uk2s2S5POPsWIACqgM8vwiTt050tRrrDsOA2lg+YI9M1KwiT419h1Gkdh7Ye47NYIbiPyWwdEKc45JxWLDBpsQd2Yysh0b0AoBfs1q/s/mo1ic04UyqLDSdWJbJkr9llJQHFxBazLn5G+cmI878hO2fvbdHst5tS7Jx79ISh2gzF6GKq6P78QJ6Ju6cKOELO97LwhVFGDRNo2D6DjgKX7hdA6kpTK3n1ezMLLFR13Mh9AesUhIB0nFNaSJ49fQRFYxmC6tY9XYFpoPSN7KginHb8CYhX6xrXujUbzZO0WqFKx1tiqo0HARuPHKdGQxsR4URzJ/nZJI=z", 
		"LAST");

	web_custom_request("remoteSqlService_66", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t313.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x02\\x10uQCcSQlwdCcMMkP3TBf+rQ3v5AVCt0EczfLzZXOtvCa/UlgLlfmNWF/mezEZ0GQfow1tOn3fyLVtIx81dlaKoRiX8CPIQOrw2maK+K11U3qt4QUE76ZVpBL2XB0OAxNU5kk1KmLGJFe7+t1fdiZ5d4y+MkCmMnGEJsHi2W+oz5+JRBelYoWtdWmOJqSf+CT5OkkdzUuwHhTaCBLZp2d39/FzrK5zh2yAXq8GrCKaofnUil5TmYGq/jaRL0LSHoWLRHCQhVGaJ2E7Nv/8jyswUffNAy09y8zNC1Tlh/hTySQeMxy0emG7TXBAI38VOzYPhTwmgf2vjcUAKax07etTfXATtOmssDmflaZPn4Qq7hs9E96cMKi5R1yPw0pp43+DpGbBt2t8hSCm/wm2Kc1bHgyCp3+"
		"ZeOi7F1lKP2IKNIPPk5f8tS2agg08whcQU4qOZwcBOBtMz9jQSMq8d5AzM1s2+c9XcU8d+LEsy9ueDCymjAwRjBotjsUpBTgqRFPWc0ogtSWFzAWzSocwz", 
		"LAST");

	web_custom_request("remoteSqlService_67", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t314.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xC0jUIEkKZ63YCPN7C33kdWRplVkj2OJmbPrkJPzVY+ToznnkHJicDDEg4/Ez+IJMkdlr9vTQvDcO+XDwkxsX6Lcmu7pQXMvish+EMeSZadtBUzo/R4L4glQ4k4l/N+OnpWLENfExpAnhxr1Q0pwNVbtRaPWSYaa6KR5j5/1j3vWoCxYYhdVYls2UQQdSTDOeampdZ60+7ar+TGNwDPR4zsvqUeiNND7/1EwM+JgjwAXUkSM8nSrbMNtPzLDy7LGG2VSqtopZ/UvbiZ7b5EONzor1WUihWDBBjOPKDZOiQNxNWr1X+oBQMOhGSBw51dscPYSp9lUIjA9UCyxGV5Ftqf+DJUZc/V39bEKs5+ARiIu3Bc3742dWNvsfSyt0ucBtjwt44nBd/gHlvfnh6hFdlzrhOe5yYagX4Cj8K13niOPSbtWwujQOyzXXr2Lho2hhNhz", 
		"LAST");

	web_custom_request("remoteSqlService_68", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t315.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xC0qMExuas1oLaZBQYfo5KYycXH9/AHnalhQbsYWE2z8L9QeYTXaQHfUWrm5kCZKxGqliMwDz7mFi3AEDu2fIq5NSRRSVfim07zFXREoMh2D/i05no5DgF0HClAmsei4S0TTa3kJOhKTuknizyFnCWO97gkcd2Jj0SW+x2X21DpfVQPK1b/MOTtN8vEyJJHIRUf0R3CML60nfTigEk0PAsA9fywGjt6t9XSCu3rMIdrEr8h11nG+l62FJOMxl/SbbGmlHfq8TbFS+cjzA8RRd30TqQE7zhYug5Zveb/3ifK0CoLGo3z6lHsAcGyzs5M33RGLIfoe2cNnyAS5mKIQsSbBcS9mhwLfXzMmmMUcuJed6x4DhRxnFqpAoX3VlIb6PUWXs+pVzyWM8knmsLfrboMqTb1Hvek4Vh2qgmy0jpeM9WVEUz4iP1Uf6hYwDLFfbcIz", 
		"LAST");

	web_custom_request("remoteSqlService_69", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t316.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBC78kAG96AASgPH7i+3gz55Rpjgv4E+VXWfrSBI5B4OuL53rXwEx73AleXBq3Ov+fPL1aYO/V5Y5Mta9i+7D15By2sDauOuJq7Rln1cKs1ayCNf0v+nNTNvByG9CoJp1iowsuH6MGAJ7kOa0ESzhAKyD046SY+hcWJKtUISl/+heSHiBvDXNjLSLtX3iB1L4na6yKhgmsO4rWbPpgQjyc3rIDeKbm7SgqnSxmwTb9jHAVOVjyMI+ZU9t72vK0bf+T/3mcRRfjJl+AL53nBcCj9n8fr1vKX+gFne1RzczqmSAP3FcihurK8MJxQKmZUOS/H3Vgxe8eMhGHp2fBqhqaPhzuHGDoJezNAebgYUaPDkm1ekCTBMDblksmuX863DfYkANFVi2pNV4nW0R5WNR2QC6AmfEfijxMdenx9IZX2jxa/eO0dPX716Ge9TsI=z", 
		"LAST");

	web_custom_request("remoteSqlService_70", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t317.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBC78kAG96AASgPH7i+3gz55Rpjgv4E+VXWfrSBI5B4OuL53rXwEx73AleXBq3Ov+fPL1aYO/V5Y5Mta9i+7D15By2sDauOuJq7Rln1cKs1ayCNf0v+nNTNvByG9CoJp1iowsuH6MGAJ7kOa0ESzhAKyD046SY+hcWJKtUISl/+heSHiBvDXNjLSLtX3iB1L4na6yKhgmsO4rWbPpgQjyc3rIDeKbm7SgqnSxmwTb9jHAVOVjyMI+ZU9t72vK0bf+T/3mcRRfjJl+AL53nBcCj9n8fr1vKX+gFne1RzczqmSAP3FcihurK8MJxQKmZUOS/H3Vgxe8eMhGHp2fBqhqaPhzuHGDoJezNAebgYUaPDkm1ekCTBMDblksmuX863DfYkANFVi2pNV4nW0R5WNR2QC6AmfEfijxMdenx9IZX2jxa/eO0dPX716Ge9TsI=z", 
		"LAST");

	web_custom_request("remoteSqlService_71", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t318.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00HdDpibajJ7ZDlfTcYDwhWnIxHYSxxfRZ08GW9ay8UrN7IBefw6kOoMS6+TZw9PlUmySOjAA==z", 
		"LAST");

	web_custom_request("remoteSqlService_72", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t319.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01`4s8JHx3mPga3VSlg0W0oaaaZ90/5adYYkFnxOLyDPSouaSW6Kedn+KZ5EeNVpogvZ5Zpl/VxEWrF0ZoR5y9c887yfv1cHpotnnbruORtJvuRA8uS8DmtwiGuaR0uXFLp9DqGosoWJIkBPwiR5svmTPwA8wAlfSte29mXUFuH8FxpnBJ1UnJn+nFFDs2x1+UxgK+PGaWSfkUhCQmcIjVn0jYpQ7UNDo9tiTgBDbGHVRrAX0VlMYWP13C3KATUrnBWVxuhpmsEJnxY4d1KH7EvUTd6rMKTCQq2j2Qfb4rt0mQYWZmwp9DU1v3O857E78oU7qWwHeZ/c6zp8GUkNhQNNMHFigR765UXz", 
		"LAST");

	web_custom_request("remoteSqlService_73", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t320.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBCTMn+Aa1hFWCYAJYv0ixb8aTKRmWVgsw1VcWhsiRoPrn8LMN9so4UN0SPwIJJPG26bcobnaobxkh7nSm/LC08eTobCbNuH470h3kf6uWlIqDpfM41PyrmdJjQepy4W53T/Zp6lBz5yphiCTadv9YpUECOI/5TrBSlWE3ZjQaTI90NRvPVdYqSmQAmb1pmXc0z6QtE/lEw/WO56D7emlRLMI9bOH94ETQlRq8NElLS00nP5KHsTIY7aYU3346xY1M+a1FoPZtyDUXZ0ajVoLr91xj0JsK7f45CGvKYRju+Y3hzlx1rLWPahbjy8mrne/ftGoKO0WWXhxK6FcDZoDbpqFvhJ6XBVemJO9BJ5A3vgTqtjmkQZfLv/FtnL7w3AHFQLpcek8ETEBg2Es2aSLsdHc2TWiTBzMdSwWfHRZntvVjNeXHN4AfxaOsWL2M=z", 
		"LAST");

	web_custom_request("remoteSqlService_74", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t321.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00HeG3kKpl9VgGozdRfti8lZiVcBe/xW0iPYyJOSArzacW2PFf8cLAUm7JMKv0pVZAebewqtw==z", 
		"LAST");

	web_custom_request("remoteSqlService_75", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t322.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\x88c0SRNFRb6ZMK0F8ihxxfCdJFSEo/zDJ/jwsj64WGu5R+qAlmn5nujWWANJh6l2C88Oyo5cTOVdzpJ2tauNdt1yO5PGFv5/q1b4uoiWbRV/yE5twt0m/qXPo/+e4nRsF3Qz/WF+NKj4GZ1XfJvBtb+qfcoRZdOn7triH4foGvIAO0hRyDOFqvmQV29Dmd3ofU/qMGjBp2MoIpPUDLkpdALmkDx5SaiN7BP60JVJCs1yUPQKR3ZNK1OL7ttAKRnPl3q6X897lA0/aPjqn53O5er3ril99QK95d8oo6Ivap55+bFRWEdR3YzpnfdLccCgay3K4csxKgwuE0+lgfoD1UBZJKAPA174wT6lZosRFbOjO1SAIibCLohYwCV6Dm9+Nz2wim+w==z", 
		"LAST");

	web_custom_request("remoteSqlService_76", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t323.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00XVIjniUWetULMyO6NE8BfRSt6YC2UNRx0FW4K175gniSwpZCcOzMVmHwQH7yUVqZq9oZY8aJtEWPTeUMet5wJJg==z", 
		"LAST");

	web_custom_request("remoteSqlService_77", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t324.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBCpTQwExLop9IuEmKLTVKRtU4pabSisBZslJlcvrvhkRtQ8PnGxt4qs27Qd0wiHBubhI11//t1YIJP6SwAM1QwU+EpF9VFj96MMLGc6TMT/Cev+tCahYL2Cy8DB4k4ZWrCsV7BhmkKjB/p7wHnDtrB4z7JIuIfPptsVSNl8jeVPvlrub+KPxLfA6IFCbpvlQJ/z3Fg82PPz0vg9qJP80ha4jdscZL6Hk3TFKWqgAckSmTlEm1/A92UrrD+tJXuVPcKs4L/FYCF/Lt628BUGYJ2SOSkP/abAjf5s7wFE/B9BCkKhojYF63YYkxCIxTsN68d/9qXEYZmTV+zaQZxX00k3hKO0dTkfN/1WhAddRLJyHzFJpNWk527aupCcgFkUMDOh+pEa9h+aiw88vfP0BHPHEtZJZfD62szzr8qHZxSBJ8wqEhcyM630npPdXc=z", 
		"LAST");

	web_custom_request("remoteSqlService_78", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t325.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xC0jUIEkKZ63YCPN7C33kdWRplVkj2OJmbPrkJPzVY+ToznnkHJicDDEg4/Ez+IJMkdlr9vTQvDcO+XDwkxsX6Lcmu7pQXMvish+EMeSZadtBUzo/R4L4glQ4k4l/N+OnpWLENfExpAnhxr1Q0pwNVbtRaPWSYaa6KR5j5/1j3vWoCxYYhdVYls2UQQdSTDOeampdZ60+7ar+TGNwDPR4zsvqUeiNND7/1EwM+JgjwAXUkSM8nSrbMNtPzLDy7LGG2VSqtopZ/UvbiZ7b5EONzor1WUihWDBBjOPKDZOiQNxNWr1X+oBQMOhGSBw51dscPYSp9lUIjA9UCyxGV5Ftqf+DJUZc/V39bEKs5+ARiIu3Bc3742dWNvsfSyt0ucBtjwt44nBd/gHlvfnh6hFdlzrhOe5yYagX4Cj8K13niOPSbtWwujQOyzXXr2Lho2hhNhz", 
		"LAST");

	web_custom_request("remoteSqlService_79", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t326.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00HeG3kKpl9VgGozdRfti8lZiVcBe/xW0iPYyJOSArzacW2PFf8cLAUm7JMKv0pVZAebewqtw==z", 
		"LAST");

	web_custom_request("remoteSqlService_80", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t327.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xB8juBC4Db3vBxfASn2EOpqnx3PJxrbDJsB8VGxWFZG9oY29yOWEsFtQ9m+1m+HuGOwswIMR3tHQ/S1VLabuQkX5/dtmNNqOIGJ0cMpN7fmkHAlvMerl28Rlg5Z7K2qVVa3iJc0AIBhEllXkPfL1r32fUvmYa0wxd9PNLhV8tzmOvuIWZLIbOREryyxxo73ogBF63k4v/SHutWhgA+2d4GDHPi5P/WWBYLKAUSaPTvqP+EEGGzOWGwHBWUXb2g79zM8GrE0NCeocxu73oqO426MFIgAf6bUq86V0vF+ZyVoQrYTZtcsAxB4k/bq/oeVrIqbyKkzt78eDDF+/XEVV4dBU/g/JHfbUhCglUyXyxtklsT9cyqyln1F4pv6hGTxj3aJaAQfQKVGMjU5blVVJQs694flg+ZJo/KFI6QmJsOXdoNMns9c3e82fw==z", 
		"LAST");

	web_custom_request("remoteSqlService_81", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t328.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xB8juBC4Db3vBxfASn2EOpqnx3PJxrbDJsB8VGxWFZG9oY29yOWEsFtQ9m+1m+HuGOwswIMR3tHQ/S1VLabuQkX5/dtmNNqOIGJ0cMpN7fmkHAlvMerl28Rlg5Z7K2qVVa3iJc0AIBhEllXkPfL1r32fUvmYa0wxd9PNLhV8tzmOvuIWZLIbOREryyxxo73ogBF63k4v/SHutWhgA+2d4GDHPi5P/WWBYLKAUSaPTvqP+EEGGzOWGwHBWUXb2g79zM8GrE0NCeocxu73oqO426MFIgAf6bUq86V0vF+ZyVoQrYTZtcsAxB4k/bq/oeVrIqbyKkzt78eDDF+/XEVV4dBU/g/JHfbUhCglUyXyxtklsT9cyqyln1F4pv6hGTxj3aJaAQfQKVGMjU5blVVJQs694flg+ZJo/KFI6QmJsOXdoNMns9c3e82fw==z", 
		"LAST");

	web_custom_request("remoteSqlService_82", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t329.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00L+kAYwiSX1WKGkAgDhkcH/TNthhydYSAWDSgz8bpyP2tB6x6HbJnqd38wfldTGJ5Brc8sdg4PLoA=z", 
		"LAST");

	web_custom_request("remoteSqlService_83", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t330.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xB8fKmU7Xk7LN9rhI9imQeFrFKJ1siUG792j3pS13gjw7LGVH6iF1J/9slHEMrt2pUWJyuV1f9zv53mGR/d0iwyb/OKuD/jbmnh5JOiAeizZVxXRDQFmXE69dKrLNSZRM7VO/MKt1JwST6u3xgcV9XF+0ZTUU4YkkvmUrnsArexMIAbvdoLGcXtucvOMamqRWbPLgMFLmgAu4XPOPfYziDlQq0ipNTMKW31s4cexEr1A5Gf+HNRjcz/+5AivAuAFX9WF9Z1WD9dLTulJcNVyyAnZHDCZ0Tl3oyB4s2sCllu54Y+zvBusuSdbmc6TqJsnmRfFOeQyreIJobZm0VJts8/l3t412iR6nOKKLagXH362f+SzdQEDHWjJacOyQ2S+Dr9yunUTGeUK/hISz8TywRqznDtMrCmOmEIGktxF2qRfSFmMmsEHiaxcg==z", 
		"LAST");

	lr_end_transaction("login",2);

	lr_think_time(14);

	web_custom_request("remoteSqlService_84", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t331.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00H+3i8GWDmoAdmv6KgL3NCwXxdQEsEQwIK0kraDMvtSWrKkx4Zd3FkA+tSyDLuUJs+pQt3IA==z", 
		"LAST");

	web_custom_request("remoteSqlService_85", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t332.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xC0293EKXtHBcRf5xHSiI/jV5dGLqoKOky/Tu19JLaZIgvHdCLIX/DOqDCJEdKnurLiGZS3qkXMiMVvTqOpDdb43hdAE7KwzZ5hI4VfJ5kU3acOTSfm0nfxAHC3QWLychl5F5hWDPnKhjugkYr5vdyinQySNpYIV1qkw/0xGF6ecJ7Pomnl/4EoU0tNgXxxn6yx/Hfj9MmSXMo4NOiIIUjMaqNGJdOmunC5tBnmjwVyePYy1LLzOySP4IwMHsqOvxd5TPi8ULjUuL7r0vo4UXc4puTGZBhRp21pm6aan6cz+AJl611hiu8/X4yOZTKucapCtuTiVSaXuwuPcYFvtL7cKm/EO5jrHTBq1bPHIpaKLwEherQNKnRxHkYNRYSYnVxRyfH0cbAPqXzRmAthvTqO6WOHSn3gzn9YzoI7AUNEFVRlWsrHGY0Vb3ekIbQKWtZkz", 
		"LAST");

	web_custom_request("remoteSqlService_86", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t333.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\ncacheQueryS\\x00\\xBCeFU9+tU16lGvJl2b7IWyTdOE3uFTVI37W0StGTZe5/gcAw6DL1WfPAuerM1Hfv2F6Qpj2f70cHseQzsOse1NBXid7QqRpChr9fIm4xZrH5EcELRw4/KkfsqPsxFjk/HUkPIfcoFAvTEZ5E23IOl6yoFDg/y9Ifv4B43iLDCtuoWt3sTNar/lWh6o4hM=z", 
		"LAST");

	web_custom_request("remoteSqlService_87", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t334.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00HyP7H3wTITR83Ns24UamgqQykGCxtJVSYRh7LVwYhHizdGTH7n9c6o6AVupc/0M8e9fRSBQ==z", 
		"LAST");

	lr_think_time(53);

	lr_start_transaction("adduser-sgjdb");

	web_custom_request("remoteSqlService_88", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t335.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00|cIrSUWKcH5EtGegjZom+sMRiX8R7iHd9AqKd1hYuZ3wC81/Dt9/yaNZWfBuxGb/TSaoz+zCtD4P0l50JBLGq8GhiPdvJ7O09z1PdbzwLcd3k5VGa/yQ7jVR91IU=z", 
		"LAST");

	web_custom_request("remoteSqlService_89", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t336.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x07executeVt\\x00\\x7FSystem.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]]l\\x00\\x00\\x00\\x04S\\x01$insert into FAP_USER (YEAR, OG_CODE, USER_CODE, USER_NAME, TEL, USER_PASSWORD,QUOTA_USER_ID, ENABLED, USER_TYPE, IS_LOGIN, IS_CARD, CARD_ID, ADMIN_USER, REMARK,HEAD_PORT_INDEX)  values (2018,'0000100002','{userid}','xn','','c4ca4238a0b923820dcc509a6f75849b','',1,0,1,0,'','{userid}','',0)"
		"S\\x00cdelete fap_user_role_set  where year = 2018 and og_code = '0000100002' and user_code = '{userid}'S\\x00_delete fap_user_role  where year = 2018 and og_code = '0000100002' and user_code = '{userid}'S\\x00linsert into fap_user_role (year, og_code, user_code, role_code) values(2018,'0000100002','{userid}','036')zz", 
		"LAST");

	lr_end_transaction("adduser-sgjdb",2);

	lr_think_time(10);

	web_custom_request("remoteSqlService_90", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t337.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xC0293EKXtHBcRf5xHSiI/jV5dGLqoKOky/Tu19JLaZIgvHdCLIX/DOqDCJEdKnurLiGZS3qkXMiMVvTqOpDdb43hdAE7KwzZ5hI4VfJ5kU3acOTSfm0nfxAHC3QWLychl5F5hWDPnKhjugkYr5vdyinQySNpYIV1qkw/0xGF6ecJ7Pomnl/4EoU0tNgXxxn6yx/Hfj9MmSXMo4NOiIIUjMaqNGJdOmunC5tBnmjwVyePYy1LLzOySP4IwMHsqOvxd5TPi8ULjUuL7r0vo4UXc4puTGZBhRp21pm6aan6cz+AJl611hiu8/X4yOZTKucapCtuTiVSaXuwuPcYFvtL7cKm/EO5jrHTBq1bPHIpaKLwEherQNKnRxHkYNRYSYnVxRyfH0cbAPqXzRmAthvTqO6WOHSn3gzn9YzoI7AUNEFVRlWsrHGY0Vb3ekIbQKWtZkz", 
		"LAST");

	web_custom_request("remoteSqlService_91", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t338.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x02\\xC81FeDT7C06xaExnCmKIxZ+5e7wZNcoHR23MTP0+y+ua8brD+S0LEc/7sJPhiapeFp7t6z8PcPiMHZxxZ9JU8oG9reOmPepo2kUGde0laxsXblvem2188guDUAv/Mmcq4JK8q4t0LObTp5G/ZoBgs15A+pQZScNRPyzw+yxa1O8P5D0nUZbIcHZhb3pEDImJ6/SQJeOyTK+/iAPtl7EgP1WpaYHLOApNFq+jNVDqTgO4zzOOMlt02cZYi+51zdlUsP+bdOsbS3NgC0GV7Q7CpMYHu866TaZLA+zhy1pmnoCeBuVyXWxsAiFLOS6ISR9bRxb99hpLeFrcnP/"
		"oiH6dXaeEbgDy5cTUHBEtnTKfFBRbkP8r5DHgUeJXxyogE4bHERR9E9XeHymsvApTFOmrxOZvHRapu3JuEKqdKl52HUTKaMbN7ZA5VqUMBrIbfvv5SKP9g0AOO3Lb0S/LrZRQQ2L6a22i5CzuZk5n85zvc/vGCjmFR0t9zMHitfdcKJFksd2qHFkrhPzLquffxaFYrd44IJ9/65u6XLhYeXuu7HVgSFWxxRZVvGwIaXujarbdvrjGNfjXAJZSPadOTFeajXWKG8IeoinoK0ppdifOGici/xyCKCflaEcZPXtocHvGeJLAz89jvH0F3b40HCflsxhos3KUJjCgxJFU8/IrdFA43DaarUMR0vWqMl6ZCAweZGrtXbsg==z", 
		"LAST");

	lr_think_time(23);

	lr_start_transaction("szzt");

	web_custom_request("remoteSqlService_92", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t339.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\x90rUY+Cc3x9YS2P98PRbVqGLsVYQzk4erjDjgPj3n0my3Td6x1lkSuejRAwjNvQ1VJPifXbJ4OQUVkF8OVfmQbcm0NTW2ICds4mS1i+YNotel+jxhRJfW1F7tmkYf1c9S+IWpoD1IHHkfhbvWiz", 
		"LAST");

	web_custom_request("remoteSqlService_93", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t340.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBCv4VAwuRCJXHupaOJhDqQ0uo8pSaZdt4mX6cLrjZG1o3apCVKyeL0rrfkfCfuwpd0iF8h6HjezfrkBUFb4A9jIkEowSg1YnF4WVTSsOGgb4pE3PeY8/ayww4YhokZj45Rr30b3wlFRIHwsezqTJr76915kWIQhE3dNMFCnsAUUMMdQzrKlvOXZ4jC7IB37lHHw5tr7f2MpsjibLX6qWkiEHqS32CAWtQVln8pc3cYPc+4U7PHA/JjIQ8ZSRO2Nh07UbQk5JKk6YyLp1QFKxshr/r6OJXuuJVdgMcs/pM+HYpBhDhpShpQbrb+8M2ewm8Ic8GL/MRWAsZc6KKHUJ7lVRtpbf476O8/pQipj4kIT8QL3JHpzQTuDeY5/aGtab9JzcqsqMz3QJU38GOeG3ja9dVjO3J791qPUO2FipqGNkNfE1HUmx5V9YeprHI=z", 
		"LAST");

	web_custom_request("remoteSqlService_94", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t341.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01PgsI8CUQAnBG9NhWAZ6eWyjxZuWFjMTfW1mQh2NRZOiHyJ0U+h1wcJITR5tvb+ITHrlafHR5uChHjn/sb3XNrF4PE3Ja2U0qG7REuLbtsmN/14fXtY+jrfccZ96GAoiznFJCwWT43IdSXXfPgWUM1w39WMg9oNF23KMQcm1JZ2iSVAhKcSMTyzp8d4g49L89MzcuJbuvBzU33r+DlTvDddXVRbMLmr18mnEMFiOi94eH5bOCNkLZuwVEh6Eokn8xzrU4PonIjPOt3y0iOuJ2a0VCPhSrd82SKspDW8SQcJX6AYiA48WkntAdsNvDc6COsyr+fmzb9rDIjOndrz", 
		"LAST");

	web_custom_request("remoteSqlService_95", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t342.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01PgsI8CUQAnBG9NhWAZ6eWyjxZuWFjMTfW1mQh2NRZOiHyJ0U+h1wcJITR5tvb+ITHrlafHR5uChHjn/sb3XNrF4PE3Ja2U0qG7REuLbtsmN/14fXtY+jrfccZ96GAoiznFJCwWT43IdSXXfPgWUM1w39WMg9oNF23KMQcm1JZ2iSVAhKcSMTyzp8d4g49L89MzcuJbuvBzU33r+DlTvDddXVRbMLmr18mnEMFiOi94eH5bOCNkLZuwVEh6Eokn8xzrU4PonIjPOt3y0iOuJ2a0VCPhSrd82SKspDW8SQcJX6AYiA48WkntAdsNvDc6COsyr+fmzb9rDIjOndrz", 
		"LAST");

	lr_think_time(21);

	web_custom_request("remoteSqlService_96", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t343.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\x90rUY+Cc3x9YS2P98PRbVqGLsVYQzk4erjDjgPj3n0my3Td6x1lkSuejRAwjNvQ1VJPifXbJ4OQUVkF8OVfmQbcm0NTW2ICds4mS1i+YNotel+jxhRJfW1F7tmkYf1c9S+IWpoD1IHHkfhbvWiz", 
		"LAST");

	web_custom_request("remoteSqlService_97", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t344.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBCv4VAwuRCJXHupaOJhDqQ0uo8pSaZdt4mX6cLrjZG1o3apCVKyeL0rrfkfCfuwpd0iF8h6HjezfrkBUFb4A9jIkEowSg1YnF4WVTSsOGgb4pE3PeY8/ayww4YhokZj45Rr30b3wlFRIHwsezqTJr76915kWIQhE3dNMFCnsAUUMMdQzrKlvOXZ4jC7IB37lHHw5tr7f2MpsjibLX6qWkiEHqS32CAWtQVln8pc3cYPc+4U7PHA/JjIQ8ZSRO2Nh07UbQk5JKk6YyLp1QFKxshr/r6OJXuuJVdgMcs/pM+HYpBhDhpShpQbrb+8M2ewm8Ic8GL/MRWAsZc6KKHUJ7lVRtpbf476O8/pQipj4kIT8QL3JHpzQTuDeY5/aGtab9JzcqsqMz3QJU38GOeG3ja9dVjO3J791qPUO2FipqGNkNfE1HUmx5V9YeprHI=z", 
		"LAST");

	web_custom_request("remoteSqlService_98", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t345.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01lbTQ43SRURRAkLxUfd6/+VzkQAR0HTKvGOLkwU6D4ddX7m8lhGi9tT7B7Hmt4jaJrROgfjM30QAdFZiyBqEPYvg8jNbP28mg0GvPJzOrB8NTxYRaROnyCVnct+tK17+OCNp+Bi2rxuITAxoG51kF6B+qJWcaFA75joTyuGGnmERivafIDsAOBeLYSws23A2s3kQ4S70sKjHf1RdUuXrbY80Fi7tNoWGX6E+R0paB7mYPdsNc5hVxOKXDv5vWfYwWf3BtIFeIVSYWBD83WOwDYtHHU8+TjEaKCLnLR+Zowi1bgqzz9WhGM2a1JtxvYfsva+ZgKh7KBEHMxwgtE1WnFSL3anoJQ9kGwq4HdXujPfg8=z", 
		"LAST");

	web_custom_request("remoteSqlService_99", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t346.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\x90rUY+Cc3x9YS2P98PRbVqGLsVYQzk4erjDjgPj3n0my3Td6x1lkSuejRAwjNvQ1VJPifXbJ4OQUVkF8OVfmQbcm0NTW2ICds4mS1i+YNotel+jxhRJfW1F7tmkYf1c9S+IWpoD1IHHkfhbvWiz", 
		"LAST");

	web_custom_request("remoteSqlService_100", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t347.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBCv4VAwuRCJXHupaOJhDqQ0uo8pSaZdt4mX6cLrjZG1o3apCVKyeL0rrfkfCfuwpd0iF8h6HjezfrkBUFb4A9jIkEowSg1YnF4WVTSsOGgb4pE3PeY8/ayww4YhokZj45Rr30b3wlFRIHwsezqTJr76915kWIQhE3dNMFCnsAUUMMdQzrKlvOXZ4jC7IB37lHHw5tr7f2MpsjibLX6qWkiEHqS32CAWtQVln8pc3cYPc+4U7PHA/JjIQ8ZSRO2Nh07UbQk5JKk6YyLp1QFKxshr/r6OJXuuJVdgMcs/pM+HYpBhDhpShpQbrb+8M2ewm8Ic8GL/MRWAsZc6KKHUJ7lVRtpbf476O8/pQipj4kIT8QL3JHpzQTuDeY5/aGtab9JzcqsqMz3QJU38GOeG3ja9dVjO3J791qPUO2FipqGNkNfE1HUmx5V9YeprHI=z", 
		"LAST");

	web_custom_request("remoteSqlService_101", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t348.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01PgsI8CUQAnBG9NhWAZ6eWyjxZuWFjMTfW1mQh2NRZOiHyJ0U+h1wcJITR5tvb+ITHrlafHR5uChHjn/sb3XNrF4PE3Ja2U0qG7REuLbtsmN/14fXtY+jrfccZ96GAoiznFJCwWT43IdSXXfPgWUM1w39WMg9oNF23KMQcm1JZ2iSVAhKcSMTyzp8d4g49L89MzcuJbuvBzU33r+DlTvDddXVRbMLmr18mnEMFiOi94eH5bOCNkLZuwVEh6Eokn8xzrU4PonIjPOt3y0iOuJ2a0VCPhSrd82SKspDW8SQcJX6AYiA48WkntAdsNvDc6COsyr+fmzb9rDIjOndrz", 
		"LAST");

	web_custom_request("remoteSqlService_102", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t349.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01PgsI8CUQAnBG9NhWAZ6eWyjxZuWFjMTfW1mQh2NRZOiHyJ0U+h1wcJITR5tvb+ITHrlafHR5uChHjn/sb3XNrF4PE3Ja2U0qG7REuLbtsmN/14fXtY+jrfccZ96GAoiznFJCwWT43IdSXXfPgWUM1w39WMg9oNF23KMQcm1JZ2iSVAhKcSMTyzp8d4g49L89MzcuJbuvBzU33r+DlTvDddXVRbMLmr18mnEMFiOi94eH5bOCNkLZuwVEh6Eokn8xzrU4PonIjPOt3y0iOuJ2a0VCPhSrd82SKspDW8SQcJX6AYiA48WkntAdsNvDc6COsyr+fmzb9rDIjOndrz", 
		"LAST");

	lr_think_time(12);

	web_custom_request("remoteSqlService_103", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t350.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x07executeVt\\x00\\x7FSystem.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]]l\\x00\\x00\\x00\tS\\x00ydelete FAP_USER_ROLE_SET  where YEAR = 2018 and OG_CODE = '0000100002' and USER_CODE = '{userid}' and ROLE_CODE = '036'S\\x00\\x8Cinsert into fap_user_role_set (year, og_code, user_code, role_code, set_code) values(2018,'0000100002','{userid}','036','000010000200001')S\\x00\\x8Cinsert into "
		"fap_user_role_set (year, og_code, user_code, role_code, set_code) values(2018,'0000100002','{userid}','036','000010000200002')S\\x00\\x8Cinsert into fap_user_role_set (year, og_code, user_code, role_code, set_code) values(2018,'0000100002','{userid}','036','000010000200003')S\\x00\\x8Cinsert into fap_user_role_set (year, og_code, user_code, role_code, set_code) values(2018,'0000100002','{userid}','036','000010000200004')S\\x00\\x8Cinsert into fap_user_role_set (year, og_code, user_code, "
		"role_code, set_code) values(2018,'0000100002','{userid}','036','000010000200005')S\\x00\\x8Cinsert into fap_user_role_set (year, og_code, user_code, role_code, set_code) values(2018,'0000100002','{userid}','036','000010000200006')S\\x00\\x8Cinsert into fap_user_role_set (year, og_code, user_code, role_code, set_code) values(2018,'0000100002','{userid}','036','000010000200007')S\\x00\\x8Cinsert into fap_user_role_set (year, og_code, user_code, role_code, set_code) values(2018,'0000100002',"
		"'{userid}','036','000010000200008')zz", 
		"LAST");

	web_custom_request("remoteSqlService_104", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t351.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\x90rUY+Cc3x9YS2P98PRbVqGLsVYQzk4erjDjgPj3n0my3Td6x1lkSuejRAwjNvQ1VJPifXbJ4OQUVkF8OVfmQbcm0NTW2ICds4mS1i+YNotel+jxhRJfW1F7tmkYf1c9S+IWpoD1IHHkfhbvWiz", 
		"LAST");

	web_custom_request("remoteSqlService_105", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t352.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\xBCv4VAwuRCJXHupaOJhDqQ0uo8pSaZdt4mX6cLrjZG1o3apCVKyeL0rrfkfCfuwpd0iF8h6HjezfrkBUFb4A9jIkEowSg1YnF4WVTSsOGgb4pE3PeY8/ayww4YhokZj45Rr30b3wlFRIHwsezqTJr76915kWIQhE3dNMFCnsAUUMMdQzrKlvOXZ4jC7IB37lHHw5tr7f2MpsjibLX6qWkiEHqS32CAWtQVln8pc3cYPc+4U7PHA/JjIQ8ZSRO2Nh07UbQk5JKk6YyLp1QFKxshr/r6OJXuuJVdgMcs/pM+HYpBhDhpShpQbrb+8M2ewm8Ic8GL/MRWAsZc6KKHUJ7lVRtpbf476O8/pQipj4kIT8QL3JHpzQTuDeY5/aGtab9JzcqsqMz3QJU38GOeG3ja9dVjO3J791qPUO2FipqGNkNfE1HUmx5V9YeprHI=z", 
		"LAST");

	web_custom_request("remoteSqlService_106", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t353.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01PgsI8CUQAnBG9NhWAZ6eWyjxZuWFjMTfW1mQh2NRZOiHyJ0U+h1wcJITR5tvb+ITHrlafHR5uChHjn/sb3XNrF4PE3Ja2U0qG7REuLbtsmN/14fXtY+jrfccZ96GAoiznFJCwWT43IdSXXfPgWUM1w39WMg9oNF23KMQcm1JZ2iSVAhKcSMTyzp8d4g49L89MzcuJbuvBzU33r+DlTvDddXVRbMLmr18mnEMFiOi94eH5bOCNkLZuwVEh6Eokn8xzrU4PonIjPOt3y0iOuJ2a0VCPhSrd82SKspDW8SQcJX6AYiA48WkntAdsNvDc6COsyr+fmzb9rDIjOndrz", 
		"LAST");

	lr_end_transaction("szzt",2);

	lr_think_time(40);

	lr_start_transaction("logout");

	web_custom_request("remoteSqlService_107", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t354.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\tGetDBTypez", 
		"LAST");

	web_custom_request("remoteSqlService_108", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t355.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00pzI6a/spC0TUAa8Xxjd68SGdl7LZR89yJtc64MpkuRP+ZkqCY62MQQZlN/aBcNe4KQicoWXtKdg9e36AoFoRYzep2bht0oGYG5pTIjuKaqU7hcwlpz", 
		"LAST");

	web_custom_request("remoteSqlService_109", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t356.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x008x3dYAVTRpWLhFQj5u4uV70KsT2bg88TQgkv3BVTUkTlMWre9kik3gA==z", 
		"LAST");

	web_custom_request("remoteSqlService_110", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t357.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`owPwKirdA5PlVbrdtYqvF8+MQfYTVdFTKgIyEazkOLOa2AenJBT+5OWasJdJP+QVQpP2EOXya2P7VfgVOVq0n29hvorOhKBUz", 
		"LAST");

	web_custom_request("remoteSqlService_111", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t358.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`owPwKirdA5PlVbrdtYqvF8+MQfYTVdFTKgIyEazkOLOa2AenJBT+5OWasJdJP+QVQpP2EOXya2P7VfgVOVq0n29hvorOhKBUz", 
		"LAST");

	web_custom_request("remoteSqlService_112", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t359.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00\\\\ggPGHcgEjcQNTIOVELHZPvo7QT4WJTfL1igyNrgVB4PchBtSYjWV3QQEs9ZpgF9VznbLh8QLLpR/btGVJMkOwFsk6T0=z", 
		"LAST");

	web_custom_request("remoteSqlService_113", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t360.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`QqLRvSGlIv7T/TGYtStqABB+l5LHQyxnMmiCZ8Szx7HgfgQ+AljpLi5eULpNuzrgJXro4+esh/JuG8ogkrGtkFwBes+8tVfjz", 
		"LAST");

	web_custom_request("remoteSqlService_114", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t361.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x00`owPwKirdA5PlVbrdtYqvF8+MQfYTVdFTKgIyEazkOLOa2AenJBT+5OWasJdJP+QVQpP2EOXya2P7VfgVOVq0n29hvorOhKBUz", 
		"LAST");

	web_custom_request("remoteSqlService_115", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t362.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\ncacheQueryS\\x00\\x9Cv9i1sPWSH+ubbzVGeDWy51OVfPEZWlBKDkyuhMI+2IoDEbNFRTvaexTygHAg7rLTJ7lVYO4/F97NYmI5TO/Smp4YtYoUAjWxymLosL4M2ULygxGC/RJWY0THIxaLYFDqO/vbbihYqSeZwwoIka2y6UJjBuc=z", 
		"LAST");

	web_custom_request("remoteSqlService_116", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t363.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x01\\x8CvP5/i7W+3iztcnHMvR1aVBgZ2hrwlTQpLOrX0e2qjrgCyOzSB23qPUWN/QnWPPMax6lhcB1wd4kBU5CZQXNhvxqaa4HDiZAMwJEzyxUD9cGuRA62NLvZe9HuySCbfJefRUOcqkcoSSHu6nuRnBwWNDX5T8FCJd00H5H45nSseYhCy2+ryv9n8sp8q4DK9e21kOYkO9lzCW0jvtTmdbptlnM75QHUQPjeBWZ+52mVyoxaCprwsKLCVYCg2yDA2gvSYEzyG2l69njVBsZoF+yjH5D5SiYJpHnUO8uaWg15V6/ta15bZvl480Rf/3ot5Th4l+pN4wFh1Q9cqnTKwtLt+oI0/mMueCdBZYteUH6LwJ61f67xTuGTLFC3fc0UlFHCkz8aeG+mZvk=z", 
		"LAST");

	web_custom_request("remoteSqlService_117", 
		"URL=http://10.0.241.4:8075/account_server/remoting/remoteSqlService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-hessian", 
		"Referer=", 
		"Snapshot=t364.inf", 
		"Mode=HTML", 
		"EncType=text/xml", 
		"BodyBinary=c\\x00\\x01m\\x00\\x05queryS\\x008x3dYAVTRpWLhFQj5u4uV70KsT2bg88TQgkv3BVTUkTlMWre9kik3gA==z", 
		"LAST");

	lr_end_transaction("logout",2);
 
# 1985 "Action.c"
	return 0;
}
# 4 "c:\\users\\administrator\\desktop\\adduser11\\\\combined_addUser11.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 5 "c:\\users\\administrator\\desktop\\adduser11\\\\combined_addUser11.c" 2

