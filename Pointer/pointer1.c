#include<stdio.h>
#include<stdlib.h>

void main(){
    // int n = 5;
    // int *ptr1  = (int *) malloc(n*sizeof(int));
    
    // int *ptr2  = (int *) calloc(n,sizeof(int));

    // printf("Value of *ptr1 : %d",*ptr1);
    // printf("\nValue of *ptr2 : %d",*ptr2);

    // printf("Malloc : \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("\nValue %d : %d",i,*(ptr1+i));
    // }
    

    // printf("Calloc : \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("\nValue %d : %d",i,*(ptr2+i));
    // }



    int *ptr = (int *) malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++){
        printf("Enter Value : ");
        scanf("%d",(ptr+i));
    }
    printf("Values: ");
    for (int i = 0; i < 5; i++){
        printf("\t%d",*(ptr+i));
    }
    int n = 15;
    
    free(ptr);

    int *ptr2 = (int *) realloc(ptr,n);
    for (int i = 0; i < n; i++){
        printf("Enter Value : ");
        scanf("%d",(ptr2+i));
    }
    printf("Values: ");
    for (int i = 0; i < n; i++){
        printf("\t%d",*(ptr2+i));
    }
}
