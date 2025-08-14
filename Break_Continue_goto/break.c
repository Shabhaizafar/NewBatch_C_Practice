// #include<stdio.h>

// void main(){
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             printf("\ni -> %d , j -> %d",i,j);
//         }
//     }
// }


// i == 1  
// #include<stdio.h>

// void main(){
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             if (i==1){
//                 break;
//             }
//             printf("\ni -> %d , j -> %d",i,j);
//         }
//     }
// }


//j==1
#include<stdio.h>

void main(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (j==1){
                break;
            }
            printf("\ni -> %d , j -> %d",i,j);
        }
    }
}