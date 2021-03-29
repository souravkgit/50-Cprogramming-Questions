#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n",n);
    for (int i=0; i<n; i++)
    scanf("%d",&arr[i]);
    printf("\nArray elements:\n");
    for (int i=0; i<n; i++)
    {
        if (arr[i]>0)
        {
            printf("array_nums[%d] = %d\n",i,arr[i]);
        }
        else
        {
            printf("array_nums[%d] = %d\n",i,1);
        }
    }
}
