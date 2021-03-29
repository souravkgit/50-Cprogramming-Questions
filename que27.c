#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int arr[4],b=0,c=0;
    printf("Enter the elements :\n");
    for (int i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
        if((b-arr[i])>0 || i==0)
        {
            b=arr[i];
        }
        if((c-arr[i])<0)
        {
            c=arr[i];
        }
    }
    printf("The difference is :%d-%d=%d",c,b,c-b);
}
