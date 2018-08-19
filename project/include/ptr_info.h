#ifndef PTR_INFO_H
#define PTR_INFO_H

typedef struct _ptr_info_t {
    void* ptr;
} ptr_info_t;

ptr_info_t* create_ptr_info();
ptr_info_t* create_ptr_info_with_arg(void* ptr);
ptr_info_t* clone_ptr_info(ptr_info_t* this_ptr_info);
void        del_ptr_info(ptr_info_t* this_ptr_info);
void        set_ptr_in_ptr_info(ptr_info_t* this_ptr_info, void* ptr);
void*       get_ptr_in_ptr_info(ptr_info_t* this_ptr_info);

#endif
