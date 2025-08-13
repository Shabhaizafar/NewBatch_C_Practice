#include<stdio.h>


// int checkeligible(int data){
//     if (data>=18)
//     {
//         return 1;
//     }else{
//         return 0;
//     }   
// }


int checkeligible(int data){
    if (data>=18){
        return 1;
    }
    return 0;
}
// 0 : X   1  : Ele 

void main(){
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);

    if (checkeligible(age)){
        printf("You are Eligible !!");
    }else{
        printf("You are not Eligible !!");
    }    
}


/*
without arg with return  
Create a function to simulate tossing a coin.

with arg with rtn
Validate mobile number length using a function.
*/

