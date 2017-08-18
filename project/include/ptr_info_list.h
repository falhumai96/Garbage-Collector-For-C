#ifndef PTR_INFO_LIST_H
#define PTR_INFO_LIST_H

#include <stdbool.h>

#include "ptr_info_node.h"
#include "ptr_info.h"

typedef struct _ptr_info_list_t {
    ptr_info_node_t* head;
    ptr_info_node_t* tail;
} ptr_info_list_t;

ptr_info_list_t*   create_ptr_info_list();
ptr_info_list_t*   clone_ptr_info_list(ptr_info_list_t* this_ptr_info_list);
void               del_ptr_info_list(ptr_info_list_t* this_ptr_info_list);
ptr_info_t*        get_ptr_info_list_head_ptr(ptr_info_list_t* this_ptr_info_list);
ptr_info_t*        get_ptr_info_list_tail_ptr(ptr_info_list_t* this_ptr_info_list);
void               push_back_ptr_info_into_list(ptr_info_list_t* this_ptr_info_list,
                                                ptr_info_t* ptr);
void               push_front_ptr_info_into_list(ptr_info_list_t* this_ptr_info_list,
                                                 ptr_info_t* ptr);
void               remove_back_ptr_info_from_list(ptr_info_list_t* this_ptr_info_list);
void               remove_front_ptr_info_from_list(ptr_info_list_t* this_ptr_info_list);
bool               is_ptr_info_list_empty(ptr_info_list_t* this_ptr_info_list);

#endif
