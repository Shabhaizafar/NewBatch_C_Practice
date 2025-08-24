#include<stdio.h>

void main(){
    int row,col;
    printf("Enter the Vlue of Row then column : ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("Enter the Value of Element Arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }   
    }
    
    printf("\nArray :\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("\t%d",arr[i][j]);
        }   
        printf("\n");
    }
}
