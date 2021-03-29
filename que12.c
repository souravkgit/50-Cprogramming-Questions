#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int arr[5]={},a=0;
    printf("Enter 5 integers :\n");
    for (int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<5; i++)
    {
        if(arr[i]%2!=0)
        {
            a=a+arr[i];
        }
    }
    printf("Sum of odd values : %d",a);
}
