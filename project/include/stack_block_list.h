#ifndef STACK_BLOCK_LIST_H
#define STACK_BLOCK_LIST_H

#include <pthread.h>
#include <stdbool.h>

#include "stack_block_node.h"
#include "stack_block.h"

typedef struct _stack_block_list_t {
    stack_block_node_t* head;
    stack_block_node_t* tail;
    pthread_t           stack_thread_id;
} stack_block_list_t;

stack_block_list_t* create_stack_block_list();
stack_block_list_t* clone_stack_block_list(stack_block_list_t* this_stack_block_list);
void                del_stack_block_list(stack_block_list_t* this_stack_block_list);
void                set_stack_thread_id(stack_block_list_t* this_stack_block_list,
                                        pthread_t stack_thread_id);
pthread_t           get_stack_thread_id(stack_block_list_t* this_stack_block_list);
stack_block_t*      get_stack_block_head(stack_block_list_t* this_stack_block_list);
stack_block_t*      get_stack_block_tail(stack_block_list_t* this_stack_block_list);
void                push_back_stack_block_node(stack_block_list_t* this_stack_block_list,
                                               stack_block_t* new_stack_block);
void                push_front_stack_block_node(stack_block_list_t* this_stack_block_list,
                                                stack_block_t* new_stack_block);
void                remove_back_stack_block_node(stack_block_list_t* this_stack_block_list);
void                remove_front_stack_block_node(stack_block_list_t* this_stack_block_list);
bool                is_stack_block_list_empty(stack_block_list_t* this_stack_block_list);

#endif
