#include <stdio.h>
#include <math.h>
void main()
{
    int a,k,square,cube;
    printf("Enter the number of lines :\n");
    scanf("%d",&a);
    for (int i=0; i<a; i++)
    {
        k=i+1;
        square=pow(k,2);
        cube=pow(k,3);
        printf("%3d %3d %3d\n",k,square,cube);
    }
}
