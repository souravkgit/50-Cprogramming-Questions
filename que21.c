#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a,count=1;
    printf("Enter the number of lines :\n");
    scanf("%d",&a);
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%3d ",count);
            count++;
        }
        printf("\n");
    }
}
