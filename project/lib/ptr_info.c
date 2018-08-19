#include <stdlib.h>

#include "ptr_info.h"

ptr_info_t* create_ptr_info() {
    return create_ptr_info_with_arg(NULL);
}

ptr_info_t* create_ptr_info_with_arg(void* ptr) {
    ptr_info_t* to_return = (ptr_info_t*) malloc(sizeof(ptr_info_t));
    to_return->ptr = ptr;
    return to_return;
}

ptr_info_t* clone_ptr_info(ptr_info_t* this_ptr_info) {
    return create_ptr_info_with_arg(this_ptr_info->ptr);
}

void del_ptr_info(ptr_info_t* this_ptr_info) {
    // Should I delete the actual pointer?
    free(this_ptr_info);
}

void set_ptr_in_ptr_info(ptr_info_t* this_ptr_info, void* ptr) {
    this_ptr_info->ptr = ptr;
}

void* get_ptr_in_ptr_info(ptr_info_t* this_ptr_info) {
    return this_ptr_info->ptr;
}
