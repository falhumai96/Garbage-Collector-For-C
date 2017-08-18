#ifndef STACK_BLOCK_H
#define STACK_BLOCK_H

#include "ptr_info_list.h"
#include "obj_list.h"

typedef struct _stack_block_t {
    ptr_info_list_t* stack_ptr_list;
    int              stack_block_type;
    obj_list_t*      protected_objs;
} stack_block_t;

stack_block_t*   create_stack_block();
stack_block_t*   clone_stack_block(stack_block_t* this_stack_block);
void             del_stack_block(stack_block_t* this_stack_block);
void             set_stack_ptr_list(stack_block_t* this_stack_block,
                                    ptr_info_list_t* new_stack_ptr_list);
ptr_info_list_t* get_stack_ptr_list(stack_block_t* this_stack_block);
void             set_stack_block_type(stack_block_t* this_stack_block,
                                      int new_type);
int              get_stack_block_type(stack_block_t* this_stack_block);
void             set_protected_objs_in_stack_block(stack_block_t* this_stack_block,
                                                   obj_list_t* protected_objs);
obj_list_t*      get_protected_objs_in_stack_block(stack_block_t* this_stack_block);

#endif
