#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include <stdbool.h>


int main()
{
    int *p, i, cont, input;
    bool flag = true;
 
    //printf("Tamaño de 2 posiciones\n\n");
    p = (int*)malloc(1*sizeof(int));

    
    i = 0;
    cont = 1;
    while(i< cont && flag == true ){
        printf("Vector de %d posiciones\n", cont);
        printf("Ingrese un dato para la posición %d ó 0 para terminar: \n", i);
        scanf("%d", &input);
        if(input == 0){
            *(p+i) = input;
            flag = false;
        }else{
            *(p+i) = input;
            cont ++;            
            printf("Se le aumenta una posición al vector\n ");    
            p = (int*)realloc(p, cont*sizeof(int)); 
        }
        i++;
    }


    printf("\nDatos finales del vector: \n\n"); 
    for(i = 0; i < cont; i++)
    {
        printf("%d ", *(p+i) );
    }
    printf("\n");
    free(p);
    return 0;
}