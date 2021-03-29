#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    long int a=0, b = 1, c = 0;
    printf("Enter the number :\n");
    scanf("%ld", &a);
    for (int i = 0; b <= a; i++)
    {
        b = b + i;
        if (b <= a)
        {
            c = c + pow(b, 4);
            printf("%d\n",c);
        }
    }

    printf("The sum of the series is :%ld", c);
}
