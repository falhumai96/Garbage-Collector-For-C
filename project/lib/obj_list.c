#include <stdlib.h>
#include <stdbool.h>

#include "obj_list.h"
#include "obj.h"

obj_list_t* create_obj_list() {
    return NULL;
}

obj_list_t* clone_obj_list(obj_list_t* this_obj_list) {
    return NULL;
}

void del_obj_list(obj_list_t* this_obj_list) {

}

obj_t* get_obj_list_head(obj_list_t* this_obj_list) {
    return NULL;
}

obj_t* get_obj_list_tail(obj_list_t* this_obj_list) {
    return NULL;
}

obj_t* get_obj_from_obj_list_by_ptr(obj_list_t* this_obj_list,
                                    void* ptr) {
    return NULL;
}

void push_back_obj_into_list(obj_list_t* this_obj_list,
                             obj_t* obj) {

}

void push_front_obj_into_list(obj_list_t* this_obj_list,
                              obj_t* obj) {

}

void remove_back_obj_from_list(obj_list_t* this_obj_list) {

}

void remove_front_obj_from_list(obj_list_t* this_obj_list) {

}

void remove_obj_from_list_by_ptr(obj_list_t* this_obj_list,
                                 void* ptr) {

}

bool is_obj_list_empty(obj_list_t* this_obj_list) {
    return true;
}
