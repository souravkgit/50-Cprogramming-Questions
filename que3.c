#include <stdio.h>
void main()
{
    int a, p , q, r, s, count=0;
    printf("Enter the positive integer :\n");
    scanf("%d",&a);
    printf("\nNumber of combinations of p,q,r,s :\n");
    for (int p=0; p<=a; p++)
    {
        for(int q=0; q<=a; q++)
        {
            for (int r=0; r<=a; r++)
            {
                for(int s=0; s<=a; s++)
                {
                    if ((p+q+r+s)==a)
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d",count);
}

