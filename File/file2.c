#include<stdio.h>

void main(){
    FILE *file1;

    file1 = fopen("file3.txt","a");
    // a : append 
    // 1. Create a New File if Doesn't Exist.then add New Data.
    // 2. If File Exist then Append New Data.

    // fprintf(file1,"Hello Everyone Welcome to File.");
    fprintf(file1,"\nHehe");
    
    

    fclose(file1);
}

