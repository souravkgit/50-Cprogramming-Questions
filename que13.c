#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int arr[3];
    printf("Enter the length of the three sides of the triangle :\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    if ((arr[0] + arr[1]) > arr[2])
    {
        if ((arr[0] + arr[2]) > arr[1])
        {
            if ((arr[1] + arr[2]) > arr[0])
            {
                printf("The perimeter is :%d", arr[0] + arr[1] + arr[2]);
            }
            else
            {
                printf("The triangle is not possible");
            }
        }
        else
        {
            printf("The triangle is not possible");
        }
    }
    else
    {
        printf("The triangle is not possible");
    }
}
