#ifndef MYMALLOC_H
#define MYMALLOC_H

#include <stddef.h>

void *my_malloc(size_t size);
void my_free(void *ptr);
void *calloc(size_t n, size_t size);
void *realloc(void *ptr, size_t size);

#endif // !MYMALLOC_H
