#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a;
    printf("Enter the number :\n");
    scanf("%d",&a);
    for (int i=0; i<101; i++)
    {
        if((i%a)==3)
        {
            printf("%d\n",i);
        }
    }
}
