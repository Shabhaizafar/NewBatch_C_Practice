#include <stdio.h>

void main()
{
    int year = 1900;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Year is a Leap Year After Checking divide by 4,100,400.");
            }
            else
            {
                printf("Year is Not a Leap Year After Checking divide by 4,100 but not divide by 400.");
            }
        }
        else
        {
            printf("Year is a Leap Year After Checking divide by 4 but not 100.");
        }
    }
    else
    {
        printf("Year is not Leap Year After Checking divide by 4.");
    }
}

/*
Step : 1
    check year divisable by 4.
        yes :
            not sure it's leap year or not
        no :
            sure, it's not leap year

Step : 2
    if divisable 4 then check it's divisable by 100.
        yes :
            not sure it's leap year or not
        no :
            sure, it's  leap year

Step : 3
    if divisable by 4  and 100 then check it's divisable by 400.
        yes :
            sure, it's leap year
        no :
            sure, it's not leap year
*/