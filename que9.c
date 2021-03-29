#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int a,b;
    printf("Enter the amount :\n");
    scanf("%d",&a);
    printf("%d Notes(s) of 2000.00\n",a/2000);
    b=a%2000;
    printf("%d Notes(s) of 500.00\n",b/500);
    b=b%500;
    printf("%d Notes(s) of 200.00\n",b/200);
    b=b%200;
    printf("%d Notes(s) of 100.00\n",b/100);
    b=b%100;
    printf("%d Notes(s) of 50.00\n",b/50);
    b=b%50;
    printf("%d Notes(s) of 20.00\n",b/20);
    b=b%20;
    printf("%d Notes(s) of 10.00\n",b/10);
    b=b%10;
    printf("%d Notes(s) of 5.00\n",b/5);
    b=b%5;
    printf("%d Notes(s) of 2.00\n",b/2);
    b=b%2;
    printf("%d Notes(s) of 1.00\n",b/1);
}
