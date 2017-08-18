#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>

#include "stack_block_list.h"
#include "stack_block.h"

stack_block_list_t* create_stack_block_list() {
    return NULL;
}

stack_block_list_t* clone_stack_block_list(stack_block_list_t* this_stack_block_list) {
    return NULL;
}

void del_stack_block_list(stack_block_list_t* this_stack_block_list) {

}

void set_stack_thread_id(stack_block_list_t* this_stack_block_list,
                         pthread_t stack_thread_id) {

}

pthread_t get_stack_thread_id(stack_block_list_t* this_stack_block_list) {
    return pthread_self();
}

stack_block_t* get_stack_block_head(stack_block_list_t* this_stack_block_list) {
    return NULL;
}

stack_block_t* get_stack_block_tail(stack_block_list_t* this_stack_block_list) {
    return NULL;
}

void push_back_stack_block_node(stack_block_list_t* this_stack_block_list,
                                stack_block_t* new_stack_block) {

}

void push_front_stack_block_node(stack_block_list_t* this_stack_block_list,
                                 stack_block_t* new_stack_block) {

}

void remove_back_stack_block_node(stack_block_list_t* this_stack_block_list) {

}

void remove_front_stack_block_node(stack_block_list_t* this_stack_block_list) {

}

bool is_stack_block_list_empty(stack_block_list_t* this_stack_block_list) {
    return true;
}
