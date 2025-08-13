#include<stdio.h>

int returnNumber(){
    return 12;
};


void main(){
    int num1;
    // printf("Number is : %d",returnNumber());   //direct use
    // num1 = returnNumber();    // store value
    // printf("Number is : %d",num1);   // use
    // printf("%c",48.6);
}; 


//  float      ->    int 
//  12.2       ->     12

//   int       ->   float (after point 6 digit)
//   13        ->    13.000000    %f
//   13        ->    13.000      %.3f
//   13        ->    13          %.0f


// char         ->  int 
//  'A'         ->   65       ASCII Value

// int         ->  char
//  47          ->   '0'            ASCII Table



// char         ->  float 
//  'A'         ->   65.000000       ASCII Value

// flaot        ->   char 
//  47.5        -> 