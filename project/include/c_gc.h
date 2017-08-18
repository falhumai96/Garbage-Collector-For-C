#ifndef C_GC_H
#define C_GC_H

#include <pthread.h>
#include <signal.h>

#include "stack_list.h"
#include "obj_list.h"

obj_list_t      heap_obj_list;
stack_list_t    stack_ptr_list;
pthread_t       main_thread;
pthread_mutex_t gc_lock;
sigset_t        added_signals;

void  c_gc_init_gc();
void  c_gc_open_block(int type);
void  c_gc_close_block(int type);
void  c_gc_assign_ptr(void* ptr_holder,
                      void* belongs_to_obj_ptr,
                      void* value_to_assign);
void* c_gc_malloc(size_t size);
void* c_gc_calloc(size_t nmemb, size_t size);
void* c_gc_realloc(void* ptr, size_t size);
void* c_gc_reallocarray(void* ptr, size_t nmemb, size_t size);
void  c_gc_delay_obj_lifetime(void* obj_ptr);
void  c_gc_add_obj_dtor(void* obj_ptr, void* func_ptr);
void  (*c_gc_signal(int sig, void (*func)(int)))(int);
int   c_gc_pthread_cancel(pthread_t thread);
void  c_gc_force_gc();

#endif
