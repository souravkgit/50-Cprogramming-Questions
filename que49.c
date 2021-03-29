//Que 142
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int s1,s2,d;
    printf("Enter the adjacent sides of the ||gm :\n");
    scanf("%d",&s1);
    scanf("%d",&s2);
    printf("Enter the diagonal of the ||gm :\n");
    scanf("%d",&d);
    if (s1==s2)
    {
        printf("This is a rhombus.\n");
    }
    else if (d*d==s1*s1 + s2*s2)
    {
        printf("This is a rectangle.\n");
    }
}
