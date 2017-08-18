#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>

#include "stack_list.h"
#include "stack_block_list.h"

stack_list_t* create_stack_list() {
    return NULL;
}

stack_list_t* clone_stack_list(stack_list_t* this_stack_list) {
    return NULL;
}

void del_stack_list(stack_list_t* this_stack_list) {

}

stack_block_list_t* get_stack_list_head(stack_list_t* this_stack_list) {
    return NULL;
}

stack_block_list_t* get_stack_list_tail(stack_list_t* this_stack_list) {
    return NULL;
}

stack_block_list_t* get_stack_block_list_by_thread_id(stack_list_t* this_stack_list,
                                                      pthread_t th_id) {
    return NULL;
}

void push_back_new_stack_block_list(stack_list_t* this_stack_list,
                                    stack_block_list_t* new_stack_block_list) {

}

void push_front_new_stack_block_list(stack_list_t* this_stack_list,
                                     stack_block_list_t* new_stack_block_list) {

}

void remove_back_stack_block_list(stack_list_t* this_stack_list) {

}

void remove_front_stack_block_list(stack_list_t* this_stack_list) {

}

void remove_stack_block_list_by_id(stack_list_t* this_stack_list,
                                   pthread_t th_id) {

}

bool is_stack_list_empty(stack_list_t* this_stack_list) {
    return true;
}
