#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a,b=0;
    printf("Enter the value :");
    scanf("%d",&a);
    while(a!=0)
    {
        b=b+a%10;
        a = a/10;
    }
    printf("The sum is :%d",b);
}
