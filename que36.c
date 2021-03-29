#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    float a;
    printf("Enter the number here :\n");
    scanf("%f",&a);
    if(a<0)
    {
        printf("Original value is :%.2f\n",a);
        printf("Absolute  value is :%.2f\n",-a);
    }
    if(a>=0)
    {
        printf("Original value is :%.2f\n",a);
        printf("Absolute  value is :%.2f\n",a);
    }
}
