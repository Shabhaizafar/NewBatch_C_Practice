#include<stdio.h>

void main(){
    int n,min,max;
    printf("Enter the Value of N :");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++){
        printf("Enter the Value of Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++){
        printf(" %d ",arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("\nMin Number : %d",min);
    printf("\nMax Number : %d",max);
}

/*
11 13 5

assume  11 small 

11  >= 11           1
11  >= 13           0
11  >=  5           1  
*/ 