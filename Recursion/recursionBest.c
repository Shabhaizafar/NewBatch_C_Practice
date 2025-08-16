#include<stdio.h>

void callrecursion(int i){
    if(i==4){
        printf("\nRecursion Stop !!");
        return;  
    }
    printf("\nStart calling %d",i);
    callrecursion(i+1);
    printf("\nEnd calling %d",i);
};

void main(){
    callrecursion(1);
}
