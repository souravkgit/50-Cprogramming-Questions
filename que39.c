#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int reverse(int a)
{
    int b=0;
    while(a!=0)
    {
        b=b+a%10;
        a=a/10;
        b=b*10;
    }
    return b/10;
}
void main()
{
    int num,revert;
    printf("Enter a five digit integer :\n");
    scanf("%d",&num);
    revert=reverse(num);
    if(revert==num)
    {
        printf("The number is a pallindrome\n");
    }
    else 
    {
        printf("The number is not a pallindrome\n");
    }
    
}
