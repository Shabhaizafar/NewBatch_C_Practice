#include<stdio.h>
#include<string.h>

void main(){
    char company[] = "Royal Technosoft p ltd";
    char fname[] = "Rajesh",lname[] = "Shah",newstr[12];
    int len;
    printf("Company Name : %s",company);

    printf("\n\nMethods of Strings : ");
    // printf("\n1.strlen() return length of String (integer) : %d ",strlen(company));
    // len = strlen(company);
    // printf("\n1.strlen() return length of String (integer) : %d ",len);

    // printf("\n\n2.strupr() covert String into UPPERCASE : %s",strupr(company));
    
    // printf("\n\n3.strlwr() covert String into UPPERCASE : %s",strlwr(company));


    //RajeshShah
    // strcat(fname," ");
    // printf("\n\n3.strcat() concat Tow String: %s",strcat(fname,lname));
    // printf("\nat a time concat only two string");
    // printf("\nIt's Also Effect of First String. return");




    // printf("\n\n4.strncat() : concatination but till specific point : %s",strncat(fname,lname,3));
    // printf("\n\n4.strncat() : concatination but till specific point : %s",strncat(fname,lname,0));


    //5.strcpy(newstring,orig)
    // strcpy(newstr,fname);
    // printf("\n\n5.strcpy() : copy the value : %s",newstr);


    // 6.strncpy : copy n chars  in  a new string

    //7.strcmp()
    //if both are same then return 0 else -1/1 
    // printf("\n\n7.strcmp() check both string are same or not : %d",strcmp("raj","rajesh"));

    //8.strncmp()
    // printf("\n\n8.strncmp() check both string are same or not : %d",strncmp("raj","rajesh",3));

    // printf("\n\n9.strcmpi() check both string are same or not : %d",strcmpi("raj","Raj"));

    // printf("\n\n10.strcmpi() check both string are same or not : %d",strnicmp("raj","Rajesh",3));

}