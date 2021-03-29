//  To print a big F and C

#include <stdio.h>
void main()
{
    for (int i=0; i<7; i++)
    {
        if (i==0)
        printf("######\n");
        else if(i==3)
        printf("#####\n");
        else{
            printf("#\n");
        }
    }

    for(int i=0; i<9; i++)
    {
        if(i==0)
        {
            for (int j=0; j<3; j++)
            {
                printf(" ");
            }
            printf("######");
        }
        else if(i==1)
        {
            printf("\n");
            printf(" ");
            for (int j=0; j<2; j++)
            {
                printf("#");
            }
            for (int j=0; j<6; j++)
            {
                printf(" ");
            }
            for (int j=0; j<2; j++)
            {
                printf("#");
            }
        }
        else if( i==7)
        {
            printf("\n");
            printf(" ");
            for (int j=0; j<2; j++)
            {
                printf("#");
            }
            for (int j=0; j<6; j++)
            {
                printf(" ");
            }
            for (int j=0; j<2; j++)
            {
                printf("#");
            }
        }
        else if(i==8)
        {
            printf("\n");
            for (int j=0; j<3; j++)
            {
                printf(" ");
            }
            printf("######\n");
        }
        else
        {
            printf("\n#");
        }

    }
}
