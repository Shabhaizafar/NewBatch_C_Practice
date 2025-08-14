#include<stdio.h>
#include<stdlib.h>

void main(){
    int choice,n1,n2; 
    printf("\nEnter The Value of N1 : ");
    scanf("%d",&n1);
    printf("Enter The Value of N2 : ");
    scanf("%d",&n2);
    start :
    printf("1. Addition");
    printf("\n2. Sutracrtion");
    printf("\n3. Exit");
    printf("\nEnter the Value of N : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1: printf("Addition  : %d",n1+n2);
        break;
    case 2: printf("Subtraction  : %d",n1-n2);
        break;
    case 3: exit(0);
        break;
    default: printf("\nEnter Valid Choice !!!");
        break;
    }
    goto start;
}