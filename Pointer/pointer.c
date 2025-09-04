#include<stdio.h>

void main(){
    int a,b=5,c;
    char ch;
    printf("Enter the Value of A :");
    scanf("%d",&a);
    printf("\nValue of A : %d",a);
    printf("\nValue of B : %d",b);
    printf("\nAddress of A : %u",&a); // %u :  unsigned int
    printf("\nAddress of B : %u",&b);
    printf("\nAddress of C : %u",&c);
    printf("\nAddress of CH : %u",&ch);


}



/*
64 bit : 

signed int  : -2147483648 to -2147483647
                    -5 to 4

unsigned int : 0 to ___
                    0 to 9
*/