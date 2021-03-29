#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter number of rows :\n");
    scanf("%d",&a);
    printf("Enter number of columns :\n");
    scanf("%d",&b);

    int arr[a+1][b+1], c=0;


    for (int i=0; i<a; i++)
    {
        printf("Input cell values for row %d :\n",i);
        for (int j=0; j<b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0; i<a; i++)
    {
        c=0;
        for (int j=0; j<b; j++)
        {
          c=c+arr[j][i];  
        }
        arr[a][i]=c;
    }
    for (int i=0; i<a+1; i++)
    {
        c=0;
        for (int j=0; j<b+1; j++)
        {
            if (j==(b))
            {
                printf("%3d",c);
            }
            else
            printf("%3d ",arr[i][j]);
            c=c+arr[i][j];
        }
        printf("\n");
    }
    
}
