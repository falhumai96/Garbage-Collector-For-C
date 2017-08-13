#ifndef STACK_NODE_H
#define STACK_NODE_H

#include "stack_block_list.h"

typedef struct _stack_node_t {
    struct _stack_node_t* next;
    struct _stack_node_t* prev;
    stack_block_list_t*   thread_stack_block_list;
} stack_node_t;

stack_node_t*       create_stack_node();
stack_node_t*       clone_stack_node(stack_node_t* this_stack_node);
void                del_stack_node(stack_node_t* this_stack_node);
void                set_next_stack_node_ptr(stack_node_t* this_stack_node,
                                            stack_node_t* next_stack_node);
stack_node_t*       get_next_stack_node_ptr(stack_node_t* this_stack_node);
void                set_prev_stack_node_ptr(stack_node_t* this_stack_node,
                                            stack_node_t* prev_stack_node);
stack_node_t*       get_prev_stack_node_ptr(stack_node_t* this_stack_node);
void                set_thread_stack_block_list(stack_node_t* this_stack_node,
                                                stack_block_list_t* thread_stack_block_list);
stack_block_list_t* get_thread_stack_block_list(stack_node_t* this_stack_node);

#endif
