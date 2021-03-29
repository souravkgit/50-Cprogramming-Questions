#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int num,count=0,rem;
    printf("Enter the number :\n");
    scanf("%d",&num);
    int rec=num;
    while(num!=0)
    {
        rem=num%10;
        if(rem==3)
        {
            count++;
        }
        num=num/10;
    }
    num=rec;
    printf("Number of three in %d are :%d\n",num,count);
}
