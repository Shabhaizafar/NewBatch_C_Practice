// print 5 to 1 using Loop : 
// #include<stdio.h>

// void main(){
//     for (int i = 5; i>=1; i--){
//         printf("%d ,",i);
//     } 
// }

//5 -> 1
// Recursion : 
// Function called it's Self.
// stop : 
#include<stdio.h>

void printdata(int );

void main(){
    printdata(5);
}
void printdata(int n1){
    if(n1==0){
        return;// stop function recursion
    }
    printf("\n%d",n1);
    printdata(n1-1);
}