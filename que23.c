#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int arr[50],i, sum=0,k=0,avg;
    printf("Input mathematics marks :\n");
    for (i=0; i>=0; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0 || arr[i]<0)
        {
            break;
        }
        k++;
    }
    
    for (int j=0; j<k; j++)
    {
        sum=sum+arr[j];
    }
    avg=sum/k;
    printf("Average mathematics marks are :%d",avg);
}
