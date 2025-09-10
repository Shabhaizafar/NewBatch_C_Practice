// Multiple Student Data Using Structure
#include<stdio.h>
struct Student{
    char fname[10],lname[10];
    int age;
};


void main(){
    struct Student s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Student %d data : ",i+1);
        printf("\nFname : ");
        scanf("%s",s[i].fname);
        printf("Lname : ");
        scanf("%s",s[i].lname);
        printf("Age : ");
        scanf("%d",&s[i].age);
    }

    printf("User Data : \nFirstname\t\tLastname\t\tAge\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t\t%s\t\t%d\n",s[i].fname,s[i].lname,s[i].age);
    }
    
    


}



// Single Student Data Using Structure
// #include<stdio.h>
// struct Student{
//     char fname[10],lname[10];
//     int age;
// };

// void main(){
//     struct Student s1;
//     printf("Enter The Value of fname : ");
//     scanf("%s",s1.fname);
//     printf("Enter The Value of lname : ");
//     scanf("%s",s1.lname);
//     printf("Enter The Value of Age : ");
//     scanf("%d",&s1.age);

//     printf("User Data : \nFirstname : %s\nLastname : %s\nAge : %d",s1.fname,s1.lname,s1.age);
// }



// Single Student
// #include<stdio.h>
// void main(){
//     char fname[10],lname[10];
//     int age;

//     printf("Enter The Value of fname : ");
//     scanf("%s",fname);
//     printf("Enter The Value of lname : ");
//     scanf("%s",lname);
//     printf("Enter The Value of Age : ");
//     scanf("%d",&age);

//     printf("User Data : \nFirstname : %s\nLastname : %s\nAge : %d",fname,lname,age);
// }





/*
Bill : 
    productname                             char (string)
    product price (single product Price)    float
    product quantity                        unsigned int 
    final total (per product)               float


infinite loop : 
add new new Prudct ? 1
0  break 



all data display table 


*/

