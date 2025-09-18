#include<stdio.h>

union Student
{
    int age;    //4
    char fname[10]; //12
    float pi;
};


void main(){
    union Student s1;
    printf("%d",sizeof(s1));
}