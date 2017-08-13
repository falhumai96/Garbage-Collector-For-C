#ifndef PTR_INFO_NODE_H
#define PTR_INFO_NODE_H

#include "ptr_info.h"

typedef struct _ptr_info_node_t {
    ptr_info_t*              ptr_info;
    struct _ptr_info_node_t* next;
    struct _ptr_info_node_t* prev;
} ptr_info_node_t;

ptr_info_node_t* create_ptr_info_node();
ptr_info_node_t* clone_ptr_info_node(ptr_info_node_t* this_ptr_info_node);
void             del_ptr_info_node(ptr_info_node_t* this_ptr_info_node);
void             set_ptr_info_to_node(ptr_info_node_t* this_ptr_info_node,
                                      ptr_info_t* new_ptr_info);
ptr_info_t*      get_ptr_info_from_node(ptr_info_node_t* this_ptr_info_node);
void             set_next_ptr_info_node(ptr_info_node_t* this_ptr_info_node,
                                        ptr_info_node_t* next_ptr_info_node);
ptr_info_node_t* get_next_ptr_info_node(ptr_info_node_t* this_ptr_info_node);
void             set_prev_ptr_info_node(ptr_info_node_t* this_ptr_info_node,
                                        ptr_info_node_t* prev_ptr_info_node);
ptr_info_node_t* get_prev_ptr_info_node(ptr_info_node_t* this_ptr_info_node);

#endif
