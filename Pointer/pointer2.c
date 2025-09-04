#include<stdio.h>

void main(){
    int value1;
    // syntax : 
    int *pointer1; //pointer declaration

    value1 = 12;
    pointer1  = &value1;

    printf("Value1 : %d",value1);
    printf("\nAddress of Value1 : %u",&value1);

    printf("\nValue of Pointer1 : %u",pointer1);
    printf("\nAddress of Pointer1 : %u",&pointer1);


    printf("\nValue1 using Pointer1 Variable : %d",*pointer1);
}


// 