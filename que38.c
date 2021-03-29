#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int size;
    printf("Enter the size of the square :\n");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        if(i==0 || i==size-1)
        {
            for(int j=0; j<size; j++)
            {
                printf("# ");
            }
            printf("\n");
        }
        else
        {
            for(int j=0; j<size; j++)
            {
                if(j==0)
                {
                    printf("# ");
                }
                else if(j==(size-1))
                {
                    printf("#\n");
                }
                else{
                    printf("  ");
                }
                
            }
        }
    }
}
