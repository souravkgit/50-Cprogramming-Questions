// Que 143
#include <stdio.h>
int diff(long arr[50],int n)
{
    int key;
    long max=0,min=0,diffe=0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            key = 0;
            if (arr[j] > arr[j + 1])
            {
                key = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = key;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        min = min*10+ arr[i];
    }
    for (int i=0; i<n; i++)
    {
        max = max*10+ arr[n-1-i];
    }
    printf("%d\n",max-min);
}
void main()
{
    long num,arr[10];
    int lent = 0;
    printf("Enter the number here :\n");
    scanf("%ld", &num);
    while (num > 0)
    {
        arr[lent] = num % 10;
        num = num / 10;
        lent = lent + 1;
    }
    diff(arr,lent);
}
