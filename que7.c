#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a, b , c, d;
    printf("Enter the number of days :\n");
    scanf("%d",&a);
    b = a%365;
    c = a/365;
    d = a - 365*c;

    printf("Years :%d\n",c); 
    printf("weeks :%d\n",b/7); 
    printf("days :%d\n",d%7); 
}