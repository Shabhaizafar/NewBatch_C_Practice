#include<stdio.h>

void main(){
    int n,counter=0;
    printf("Enter the Value of N :");
    scanf("%d",&n);
    char chararr[n],ch;

    for (int i = 0; i < n; i++){
        printf("Enter a Char of Element %d : ",i);
        scanf(" %c",&chararr[i]);
    }
    

    printf("\n\nEnter a Char : ");
    scanf(" %c",&ch);

    printf("\nChar Array is  : ");
    for (int i = 0; i < n; i++){
        if (ch == chararr[i]){
            counter++;
        }
        
        printf(" %c ",chararr[i]);
    }

    printf("\nFrequency of Char %c : %d ",ch,counter);


}