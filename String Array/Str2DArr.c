#include<stdio.h>
#include<string.h>

void main(){
    int row,col;
    printf("Enter the value of Row : ");
    scanf("%d",&row);
    printf("Enter the value of Col : ");
    scanf("%d",&col);

    getchar();
    char strarr[row][col][100];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("Enter the Value of Element strarr[%d][%d] :",i,j);
            gets(strarr[i][j]);
        }   
    }
    
    printf("String Array : \n");
    for (int i = 0; i < row; i++){
        printf("[");
        for (int j = 0; j < col; j++){
            printf("\t%s ",strarr[i][j]);
        }   
        printf("]\n");
    }
}

/*
{
{"Royal" ,"Shah"}
{"Techno","limited"}
}

shah exist ?    exist  

Raj exist ?

*/