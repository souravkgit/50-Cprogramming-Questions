#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a, k = 1, x, count = 0;
    printf("Enter the number here :\n");

    scanf("%d", &a);
    x = a;
    if (a == 1)
    {
        printf("No\n");
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (a == 1 || count == 2)
            {
                break;
            }
            if (a % i == 0)
            {
                k = k * i;
                a = a / i;
                --i;
                count++;
            }
        }
        if (k == x)
        {
            printf("Yes ");
        }
        else
        {
            printf("No");
        }
    }
}
