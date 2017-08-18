#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

#include "obj.h"
#include "ptr_info_list.h"

obj_t* create_obj() {
    return NULL;
}

obj_t* clone_obj(obj_t* this_obj) {
    return NULL;
}

void del_obj(obj_t* this_obj) {

}

void set_obj_ref(obj_t* this_obj, void* ref) {

}

void* get_obj_ref(obj_t* this_obj) {
    return NULL;
}

void set_link_ptrs(obj_t* this_obj, ptr_info_list_t* link_ptrs) {

}

ptr_info_list_t* get_link_ptrs(obj_t* this_obj) {
    return NULL;
}

void set_finalizer_func_ptr(obj_t* this_obj, void* func_ptr) {

}

void* get_finalizer_func_ptr(obj_t* this_obj) {
    return NULL;
}

void set_obj_ref_count(obj_t* this_obj, size_t new_count) {

}

size_t get_obj_ref_count(obj_t* this_obj) {
    return -1;
}

void set_obj_mark(obj_t* this_obj, bool mark_value) {

}

bool get_obj_mark(obj_t* this_obj) {
    return false;
}
