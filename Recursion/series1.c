#include<stdio.h>

void series(int n,float final){
    if (n==0){
        printf("Answer :  %.3f",final);
        return;
    }
    int fact = 1;
    for (int i = 1; i <=n; i++){
        fact*=i;
    }
    final = final + (float)1/fact;
    series(n-1,final);
};

void main(){
    int n;
    float final = 0;
    printf("Enter the Value of N : ");
    scanf("%d",&n);
    series(n,final);
}



// Method : 1 
// #include<stdio.h>
// // global Scope : Global Execute
// float final = 0;

// void series(int n){
//     if (n==0){
//         printf("Answer :  %.3f",final);
//         return;
//     }
//     int fact = 1;
//     for (int i = 1; i <=n; i++){
//         fact*=i;
//     }
//     final = final + (float)1/fact;
//     series(n-1);
// };

// void main(){
//     int n;
//     printf("Enter the Value of N : ");
//     scanf("%d",&n);
//     series(n);
// }