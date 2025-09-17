#include<stdio.h>

struct Person
{
    // int age;
    // int marks[10];
    // int age,data;
    // char a,b;
    // int electro;
    // int b;
    // double age;
    //char c;
    // double int a;
    // char c;

    // int age;                    //8 
    char fname[10],lname[15], a;   //   32
    //fname : 8     +  8
    // salary  : 8
    double salary;             //8
    // float emi;                 // 8 
};


void main(){
    struct Person P;
    printf("Size of struct: %d",sizeof(P));
}





