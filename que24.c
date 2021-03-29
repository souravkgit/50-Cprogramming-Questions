#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    float sum=0;
    printf("Value of S:");
    for (int i=1; i<51; i++)
    {
        sum = sum + 1/(float)i;
    }
    printf("%.1f",sum);
}
