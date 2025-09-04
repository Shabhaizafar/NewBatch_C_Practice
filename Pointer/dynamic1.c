#include<stdio.h>
#include<stdlib.h>

void main(){
    unsigned int n;
    printf("Value of N :");
    scanf("%u",&n);
    int *arr = (int *) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of %d : ",i+1);
        scanf("%d",(arr+i));
    }
    
    printf("Values : \n");
    for (int i = 0; i < n; i++)
    {
        printf("\t %d ",*(arr+i));
    }
}