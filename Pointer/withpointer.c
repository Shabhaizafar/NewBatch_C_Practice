//call by reference

#include<stdio.h>

void main(){
    int v1,v2;
    int *ptr1,*ptr2;
    printf("Enter The Value of V1 : ");
    scanf("%d",&v1);
    printf("Enter The Value of V2 : ");
    scanf("%d",&v2);

    ptr1 = &v1;
    ptr2 = &v2;

    printf("Addition is : %d",*ptr1 + *ptr2);
}