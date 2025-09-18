#include<stdio.h>

void main(){
    FILE *file1;
    // FILE *file1,*file2;


    file1 = fopen("file.txt","w");
    // file2 = fopen("file2.txt","w");
    // fopen("File Path","Mode");
    // "w" : write
    // 1. create a File if Doesn't Exist.then write data in a File.
    // 2. if File Exist.then Clear All Data then Write a New Data.

    // fprintf(file1,"Hello Everyone Welcome to File.");
    // fprintf(file1,"Royal Technosoft");
    // fprintf(file1,"Hehe");


    fclose(file1);
}

