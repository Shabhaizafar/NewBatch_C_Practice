#include<stdio.h>
#include<string.h>

void main(){
    char mystr[] = "Royal Technosoft p ltd";
    char fname[] = "Raj",lname[]= "Shah";
    printf("\nYour String is : %s",mystr);

    printf("\n\nMethods :");
    printf("\n1.strlen() return length of String : %d\n",strlen(mystr));
    printf("\n2.strupr() covent String in a UPPERCASE : %s",strupr(mystr));
    printf("\nCheck Your String is coverted  : %s\n",mystr);
    printf("\n3.strlwr() covent String in a lowecase : %s",strlwr(mystr));
    printf("\nCheck Your String is coverted  : %s\n",mystr);

    // printf("\n4.strcat() concatination of Two String : %s",strcat(fname," "));
    // printf("\nIt's also effect on original String.");
    // printf("\nIt can return a new string. : %s",strcat(fname,lname));
    // printf("\nIt can concat only Two string at a time. ");

    printf("\n4.strcat() concatination of Two String : %s",strcat(fname,lname));
    printf("\nCheck It's effect on your first String: %s",fname);
    printf("\nCheck It's No effect on your second String: %s\n",lname);


}