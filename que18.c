#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a,b,c=0;
    printf("Input first number of the pair :\n");
    scanf("%d",&a);
    printf("Input the second number of the pair:\n");
    scanf("%d",&b);
    if (a<b)
    {
        for (int i=a; i<b; i++)
        {
            if(i%2!=0)
            {
                printf("%d\n",i);
                c=c+i;
            }
        }
        printf("The sum of the digits is %d\n",c);
    }
    else if (a>b)
    {
        for (int i=b; i<a; i++)
        {
            if(i%2!=0)
            {
                printf("%d\n",i);
                c=c+i;
            }
        }
        printf("The sum of the digits is %d\n",c);
    }
    else{
        printf("Both limits are same");
    }

}
