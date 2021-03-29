#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int arr[100]={},count=0,b=0,sum=0,a=0;
    
    for (int i=0; i<100; i++)
    {
        printf("Enter the next positive integer :\n");
        scanf("%d",&arr[i]);
        if(arr[i]<=0 )
        {
            break;
        }
        if((b-arr[i])>0 || i==0)
        {
            b=arr[i];
        }
        if(a<arr[i])
        {
            a=arr[i];
        }
        count++;
        sum=sum+arr[i];
    }
    printf("Number of positive values :%d\n",count);
    printf("The highest value is :%d\n",a);
    printf("The lowest value is :%d\n",b);
    printf("The average value is :%f\n",(float)(sum/count));

}
