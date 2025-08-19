// User Defined Array 
#include<stdio.h>

void main(){
    int n;
    printf("Enter the Value of N :");
    scanf("%d",&n);
    // printf("Total No. of Elements in array : %d",n);

    int arr[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the Value of Element %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray is : {");
    for (int i = 0; i < n; i++){
        printf(" %d ",arr[i]);
    }
    printf("}");
    
}