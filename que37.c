#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    long int a;
    int arr[7];
    printf("Enter the number here :\n");
    scanf("%ld",&a);
    for(int i=0; i<7; i++)
    {
        arr[i]=a%10;
        a=a/10;
    }
    printf("The output is :\n");
    for(int i=6; i>=0; i--)
    {
        printf("%d  ",arr[i]);
    }

}
