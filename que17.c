#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int arr[5],a=0,count=0;
    printf("Enter 5 inputs :\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
        if(a<arr[i])
        {
            a=arr[i];
        }
    }
    for(int i=0; i<5; i++)
    {
        if(arr[i]==a)
        {
            break;
        }
        count++;
    }
    printf("The highest value is :%d\nPosition is :%d",a,count+1);

}
