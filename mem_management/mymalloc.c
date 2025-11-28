#define _GNU_SOURCE
#include "mymalloc.h"
#include <stddef.h>
#include <stdio.h>

#define HEAP_SIZE (32 * 1024 * 1024)

static char heap[HEAP_SIZE];
static size_t used = 0;

void *my_malloc(size_t size) {
  void *ptr = heap + used;
  used += size;
  printf("malloc(%zu)-> %p (used = %zu)\n", size, ptr, used);
  return ptr;
}

void my_free(void *ptr) { printf("nothing for now... %p\n", ptr); }

void *calloc(size_t n, size_t s) { return my_malloc(n * s); }

void *realloc(void *p, size_t s) {
  printf("unused %p\n", p);
  return my_malloc(s);
}
