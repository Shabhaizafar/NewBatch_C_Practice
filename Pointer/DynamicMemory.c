// proggram : 1
/*
#include<stdio.h>
#include<stdlib.h>   //

void main(){
    int *ptr = malloc(sizeof(int));

    *ptr = 12;

    printf("Value 1: %d",*ptr);
    printf("Size of ptr: %d",sizeof(ptr));
}
*/
#include<stdio.h>
#include<stdlib.h>   //

void main(){
    int n;
    int *ptr = (int *) malloc(5*sizeof(int));

    // *(ptr+0) = 12;    //add 6520300
    // *(ptr+1) = 200;   //    6520296
    printf("Value 1: %d",*ptr);
    // printf("\nValue 2: %d",*(ptr+1));
    // printf("\nSize of ptr: %d",sizeof(ptr));

    // free(ptr);
    // printf("Value 1: %d",*ptr);
}

//  arr= {11,12,13,1}

// Malloc
// calloc
// realloc
// free