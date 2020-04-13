#include <stdlib.h>
#include <stdio.h>

int main() {
  int *data = (int*)malloc(100*sizeof(int));
  data[0] = 30;
  printf("Este es el dato antes del free %d \n",data[0]);
  free(data);
  printf("Este es el dato despues del free %d \n", data[0]);
  return 0;
}