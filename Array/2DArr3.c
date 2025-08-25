#include<stdio.h>

void main(){
    int n,mul=1,sum=0;
    printf("Enter the Value of N :");
    scanf("%d",&n);

    int arr1[n][n],arr2[n][n];

    // Enter Values of Array : 
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n;k++){
            printf("Enter the Value of Arr1[%d][%d] : ",i,k);
            scanf("%d",&arr1[i][k]);
        }
    }
    for (int k = 0; k < n; k++){
        for (int j = 0; j < n;j++){
            printf("Enter the Value of Arr2[%d][%d] : ",k,j);
            scanf("%d",&arr2[k][j]);
        }
    }

    // Print Values of Array : 
    printf("\nArray1 : \n");
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n;k++){
            printf("\t%d",arr1[i][k]);
        }
        printf("\n");
    }
    printf("\nArray2 : \n");
    for (int k = 0; k < n; k++){
        for (int j = 0; j < n;j++){
            printf("\t%d",arr2[k][j]);
        }
        printf("\n");
    }

    // Multiplication Array : 
    printf("\nMul : \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            sum=0;
            for (int k = 0; k < n; k++){
                    // print : i,j,k       step : 1   0 0 0    step : 2   0 0 1
                    mul = arr1[i][k]*arr2[k][j];
                    sum+=mul;  
            }
            printf("\t%d",sum);
        }    
        printf("\n");
    }
    

}




/*
Multiplication of 2 Arrays : 

Array1  : row1 and col1 > asked to user
Array2  : row2 and col2 > asked to user

condition 
    true 
        multtiplication 
    false
        print : multiplication not possible !!!



*/









