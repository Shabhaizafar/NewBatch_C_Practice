#include<stdio.h>

void main(){
    int marks[] =  {89 ,90 ,50 , 78 , 60 , 30 , 56 , 11};
        //index      0   1   2   3    4    5     
    char alpha[] = {'A','Z','B','D'};

    // printf("%d",marks[2]);   // 50
    // printf("\n%c",alpha[2]); // B

    //printf("\nSize of Array : %d",sizeof(marks));  // 24
    //printf("\nNo. of Element in Array : %d",sizeof(marks)/sizeof(int));   // 6 - 1 
    //printf("\nLast Element of Array : %d",marks[(sizeof(marks)/sizeof(int))-1]);

    // for (int i = 0; i < sizeof(marks)/sizeof(int); i++){
    //     printf("\nIndex : %d  , Value : %d",i,marks[i]);
    // }
    
    printf("\nArray is : {");
    for (int i = 0; i < sizeof(marks)/sizeof(int); i++){
        printf(" %d ",marks[i]);
    }
    printf("}");
}