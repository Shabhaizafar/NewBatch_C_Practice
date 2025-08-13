#include<stdio.h>

int getAge(){
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    return age;    //return
}

void main(){

    printf("Your Age is  : %d",getAge());   //direct use

}
