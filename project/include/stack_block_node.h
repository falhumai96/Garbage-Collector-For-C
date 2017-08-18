#ifndef STACK_BLOCK_NODE_H
#define STACK_BLOCK_NODE_H

#include "stack_block.h"

typedef struct _stack_block_node_t {
    struct _stack_block_node_t* next;
    struct _stack_block_node_t* prev;
    stack_block_t*              stack_block_info;
} stack_block_node_t;

stack_block_node_t* create_stack_block_node();
stack_block_node_t* clone_stack_block_node(stack_block_node_t* this_stack_block_node);
void                del_stack_block_node(stack_block_node_t* this_stack_block_node);
void                set_next_stack_block_node_ptr(stack_block_node_t* this_stack_block_node,
                                                  stack_block_node_t* next_stack_block_node);
stack_block_node_t* get_next_stack_block_node_ptr(stack_block_node_t* this_stack_block_node);
void                set_prev_stack_block_node_ptr(stack_block_node_t* this_stack_block_node,
                                                  stack_block_node_t* prev_stack_block_node);
stack_block_node_t* get_prev_stack_block_node_ptr(stack_block_node_t* this_stack_block_node);
void                set_stack_block_info(stack_block_node_t* this_stack_block_node,
                                         stack_block_t* new_stack_block_info);
stack_block_t*      get_stack_block_info(stack_block_node_t* this_stack_block_node);

#endif
