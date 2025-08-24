#include<stdio.h>

void main(){
    int arr[2][3] = {
        {11,12,13},
        {21,22,23}
    }; 


    // size of Array : 
    printf("\nSize of Full Array : %d",sizeof(arr));

    // length of Array : 
    printf("\nLength of Full Array : %d",sizeof(arr)/sizeof(int));

    // Size of Specific Row  : 
    printf("\nSize of Specific of row in Array : %d",sizeof(arr[0]));

    // Length of Specific Row  :  Number of Col :
    printf("\nNumber of Column : %d",sizeof(arr[0])/sizeof(int));

    // Number of Row  : 
    printf("\nNumber of row in Array : %d",sizeof(arr)/sizeof(arr[0]));

}
