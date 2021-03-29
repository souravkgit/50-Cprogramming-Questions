#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int x,y;
    printf("Enter the X coordinate :\n");
    scanf("%d",&x);
    printf("Enter the Y coordinate :\n");
    scanf("%d",&y);

    if (x>0 && y>0)
    {
        printf("Quadrant-1(+,+)");
    }
    if (x<0 && y>0)
    {
        printf("Quadrant-2(-,+)");
    }
    if (x<0 && y<0)
    {
        printf("Quadrant-3(-,-)");
    }
    if (x>0 && y<0)
    {
        printf("Quadrant-4(+,-)");
    }
    if(x==0 && y==0)
    {
        printf("Lies on the origin");
    }
    else if (x==0)
    {
        printf("Lies on the Y-axis");
    }
    else if (y==0)
    {
        printf("Lies on the X-axis");
    }
}
