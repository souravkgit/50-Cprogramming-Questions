#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int p, q, r, s;
    printf("Enter the first integer :\n");
    scanf("%d", &p);
    printf("Enter the second integer :\n");
    scanf("%d", &q);
    printf("Enter the third integer :\n");
    scanf("%d", &r);
    printf("Enter the fourth integer :\n");
    scanf("%d", &s);
    if (!(r > 0 && s > 0))
    {
        printf("You have entered wrong values.\n");
    }
    else if (p % 2 != 0)
    {
        printf("You have entered wrong values.\n");
    }
    else if (q > r && s > p)
    {
        if ((r + s) > (p + q))
        {
            printf("Correct Values");
        }
        else
        {
            printf("Wrong values");
        }
    }
    else
    {
        printf("Wrong values");
    }
}
