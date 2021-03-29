#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    printf("The table is :\n");
    for (int i=0; i<=10; i++)
    {
        printf("%d ",i);
        printf("%f ",pow(2,i));
        printf("%f \n",1/pow(2,i));
    }

}
