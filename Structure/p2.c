#include <stdio.h>
#include <string.h>
struct Bill
{
    char pname[10];
    float price;
    unsigned int quantity;
    float total;
};
void main()
{
    struct Bill b[100];
    int i = 1;
    int num;
    int count = 0;
    while (i)
    {
        printf("\n Do you want to add new product?: ");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }else{
        
        printf("Enter productname:");
        scanf(" %s", b[count].pname);
        printf("Enter price:");
        scanf("%f", &b[count].price);
        printf("Enter quantity:");
        scanf("%u", &b[count].quantity);
        b[count].total = b[count].price * b[count].quantity;
        
        printf("Total:", b[i].total);
        count++;
    }
    printf("%s\t%f\t%u\t%f", "pname", "price", "quantity", "total");
    for (int i = 0; i < count; i++)
    {
        printf("%s\t%f\t%u\t%f", b[i].pname, b[i].price, b[i].quantity, b[i].total);
    }
}
}