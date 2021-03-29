#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int arr[5],count=0,sum=0;
    printf("Enter the 5 values :\n");
    for (int i=0; i<5; i++)
    {
        printf("Enter the value %d :\n",i+1);
        scanf("%d",&arr[i]);
    }

    for (int j=0; j<5; j++)
    {
        if(arr[j]>0)
        {
            sum = sum+arr[j];
            count++;
        }
    }
    printf("Number of positive numbers :%d\n",count);
    printf("The average of the positive numbers is :%d",sum/count);
}
