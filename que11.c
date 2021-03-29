#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a;
    printf("Enter the number :\n");
    scanf("%d",&a);
    if (a<0 || a>80)
    {
        printf("You have entered wrong data.");
    }
    else
    {
        if (a<76)
        printf("Range is [%d,%d]",a-5,a+5);
        else{
            printf("Range is [%d,80]",a-5);
        }
    }
}
