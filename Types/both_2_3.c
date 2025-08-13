// 2. with arg  without return type
// 3. without arg with return type

#include<stdio.h>

int getAge(){
    int age;
    printf("Age :");
    scanf("%d",&age);
    return age;
}

void printAge(int data){
    printf("Your Age is  : %d",data);
}

void main(){
    printAge(getAge());
}


