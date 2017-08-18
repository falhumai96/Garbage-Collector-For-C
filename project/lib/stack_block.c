#include <stdlib.h>

#include "stack_block.h"
#include "ptr_info_list.h"
#include "obj_list.h"

stack_block_t* create_stack_block() {
    return NULL;
}

stack_block_t* clone_stack_block(stack_block_t* this_stack_block) {
    return NULL;
}

void del_stack_block(stack_block_t* this_stack_block) {

}

void set_stack_ptr_list(stack_block_t* this_stack_block,
                        ptr_info_list_t* new_stack_ptr_list) {

}

ptr_info_list_t* get_stack_ptr_list(stack_block_t* this_stack_block) {
    return NULL;
}

void set_stack_block_type(stack_block_t* this_stack_block,
                          int new_type) {

}

int get_stack_block_type(stack_block_t* this_stack_block) {
    return -1;
}

void set_protected_objs_in_stack_block(stack_block_t* this_stack_block,
                                       obj_list_t* protected_objs) {

}

obj_list_t* get_protected_objs_in_stack_block(stack_block_t* this_stack_block) {
    return NULL;
}
