#include<stdio.h>
#include<string.h>

struct Product{
    char productname[20];
    float price;
    int quantity;
};

struct Customer{
    int cust_id;
    char fname[20];
    struct Product p; 
};

void main(){
    struct Customer c1;
    c1.cust_id = 101;
    strcpy(c1.fname,"Raj");
    
    printf("Enter Product Name : ");
    scanf("%s",c1.p.productname);

    printf("Enter Product Price  : ");
    scanf("%f",&c1.p.price);

    printf("Enter Product Quntity : ");
    scanf("%d",&c1.p.quantity);


    printf("\nOrder Details : ");
    printf("\nCustomer name : %s",c1.fname);
    printf("\nCustomer id : %d",c1.cust_id);
    printf("\nProduct : %s",c1.p.productname);
    printf("\nQuntity : %d",c1.p.quantity);

    printf("\nTotal Bill : %f",c1.p.price*c1.p.quantity);

}
