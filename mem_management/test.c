#include "mymalloc.h"
#include <stdio.h>

int main() {
  void *p1 = my_malloc(6);
  void *p2 = my_malloc(800);
  void *p3 = my_malloc(40);
  my_free(p2);
  my_free(p3);
  my_free(p1);
  printf("ALL GOOD!\n");
  return 0;
}
