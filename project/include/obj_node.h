#ifndef OBJ_NODE_H
#define OBJ_NODE_H

#include "obj.h"

typedef struct _obj_node_t {
    struct _obj_node_t* next;
    struct _obj_node_t* prev;
    obj_t*              obj;
} obj_node_t;

obj_node_t* create_obj_node();
obj_node_t* clone_obj_node(obj_node_t* this_obj_node);
void        del_obj_node(obj_node_t* this_obj_node);
void        set_next_obj_node_ptr(obj_node_t* this_obj_node,
                                  obj_node_t* next_obj_node);
obj_node_t* get_next_obj_node_ptr(obj_node_t* this_obj_node);
void        set_prev_obj_node_ptr(obj_node_t* this_obj_node,
                                  obj_node_t* prev_obj_node);
obj_node_t* get_prev_obj_node_ptr(obj_node_t* this_obj_node);
void        set_obj_in_node(obj_node_t* this_obj_node,
                            obj_t* obj);
obj_t*      get_obj_in_node(obj_node_t* this_obj_node);

#endif
