#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int arr[6],b=0;
    printf("Enter the elements :\n");
    for (int i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
        if((b-arr[i])>0 || i==0)
        {
            b=arr[i];
        }
    }
    printf("The lowest value is :%d\n",b);
    for (int i=0; i<6; i++)
    {
       if(arr[i]==b)
       {
           printf("The position is :%d",i+1);
           break;
       }
    }
    
}
