#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a;
    printf("Enter a number between 1 to 12 to get the month name :\n");
    scanf("%d",&a);
    if(a>0 && a<=6)
    {
        if (a==1)
        {
            printf("January");
        }
        if (a==2)
        {
            printf("Febraury");
        }
        if (a==3)
        {
            printf("March");
        }
        if (a==4)
        {
            printf("April");
        }
        if (a==5)
        {
            printf("May");
        }
        if (a==6)
        {
            printf("June");
        }
        
    }
    else if(a>6 && a<=12)
    {
        if (a==7)
        {
            printf("July");
        }
        if (a==8)
        {
            printf("August");
        }
        if (a==9)
        {
            printf("September");
        }
        if (a==10)
        {
            printf("October");
        }
        if (a==11)
        {
            printf("November");
        }
        if (a==12)
        {
            printf("December");
        }
    }
    else 
    {
        printf("You have entered wrong info");
    }
}
