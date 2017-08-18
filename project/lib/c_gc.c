#include <stdlib.h>

#include "c_gc.h"

void c_gc_init_gc() {

}

void c_gc_open_block(int type) {

}

void c_gc_close_block(int type) {

}

void c_gc_assign_ptr(void* ptr_holder,
                     void* belongs_to_obj_ptr,
                     void* value_to_assign) {

}

void* c_gc_malloc(size_t size) {
    return NULL;
}

void* c_gc_calloc(size_t nmemb, size_t size) {
    return NULL;
}

void* c_gc_realloc(void* ptr, size_t size) {
    return NULL;
}

void* c_gc_reallocarray(void* ptr, size_t nmemb, size_t size) {
    return NULL;
}

void c_gc_delay_obj_lifetime(void* obj_ptr) {

}

void c_gc_add_obj_dtor(void* obj_ptr, void* func_ptr) {

}

void (*c_gc_signal(int sig, void (*func)(int)))(int) {
    return NULL;
}

int c_gc_pthread_cancel(pthread_t thread) {
    return -1;
}

void c_gc_force_gc() {

}
