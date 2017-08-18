#ifndef OBJ_LIST_H
#define OBJ_LIST_H

#include <stdbool.h>

#include "obj_node.h"
#include "obj.h"

typedef struct _obj_list_t {
    obj_node_t* head;
    obj_node_t* tail;
} obj_list_t;

obj_list_t* create_obj_list();
obj_list_t* clone_obj_list(obj_list_t* this_obj_list);
void        del_obj_list(obj_list_t* this_obj_list);
obj_t*      get_obj_list_head(obj_list_t* this_obj_list);
obj_t*      get_obj_list_tail(obj_list_t* this_obj_list);
obj_t*      get_obj_from_obj_list_by_ptr(obj_list_t* this_obj_list,
                                         void* ptr);
void        push_back_obj_into_list(obj_list_t* this_obj_list,
                                    obj_t* obj);
void        push_front_obj_into_list(obj_list_t* this_obj_list,
                                     obj_t* obj);
void        remove_back_obj_from_list(obj_list_t* this_obj_list);
void        remove_front_obj_from_list(obj_list_t* this_obj_list);
void        remove_obj_from_list_by_ptr(obj_list_t* this_obj_list,
                                        void* ptr);
bool        is_obj_list_empty(obj_list_t* this_obj_list);

#endif
