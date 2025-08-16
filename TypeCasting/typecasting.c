// Type Casting:
// i) Implicit Type Casting
// #include<stdio.h>

// void main(){
//     int a = 12;  //int 
//     float b = a;   //value A : int      //float b
//     printf("Value of A :%d",a);
//     printf("\nValue of B :%f",b);

// }


// ii) Explicit Type Casting
#include<stdio.h>

void main(){
    int a = 65;  //int 
    printf("Value of A :%d",a);
    // printf("\nValue of A (After Explicit) :%f",(float)a);  //explicit
    printf("\nValue of A (After Explicit) :%c",(char) a);  //explicit


}