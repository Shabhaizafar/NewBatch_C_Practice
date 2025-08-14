// with arg with rtn
// Validate mobile number length using a function.

#include<stdio.h>

int check(long int n1){
    if (n1>999999999){
        return 1;
    }
    return 0;
}

void main(){
    //10
    long int num;
    printf("Enter Number : ");
    scanf("%ld",&num);
    if (check(num)){
        printf("Number is Valid");
    }else{
        printf("Number is not Valid");
    }
}
// 9999999999