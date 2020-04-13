#include <stdlib.h>
#include <stdio.h>
#define NULL 0

int main() {
  int *p = (int*)malloc(5*sizeof(int));
  int array[] = {1,2,3,4,5};
  printf("sizeof(p): %d\n",sizeof(p));
  printf("sizeof(p): %d\n",sizeof(*p));
  printf("sizeof(p): %d\n",sizeof(array));
  //free(p);
  p = NULL;
  return 0;
}