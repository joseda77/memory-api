#include <stdlib.h>
#include <stdio.h>

int main() {
    int *vec1 = (int*)malloc(100*sizeof(int));
    int *vec2 = vec1 + 3;
    vec2[3]= 30;
    free(vec1);
    free(vec2);
    return 0;
}