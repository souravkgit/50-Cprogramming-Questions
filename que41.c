#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    printf("Size of C data types :\n\n");
    printf("Type                 Bytes");
    printf("\n\n");
    printf("---------------------------------\n");
    printf("char                   %d\n",sizeof(char));
    printf("unsigned char          %d\n",sizeof(unsigned char));
    printf("float                  %d\n",sizeof(float));
    printf("short                  %d\n",sizeof(short));
    printf("double                 %d\n",sizeof(double));
    printf("long double            %d\n",sizeof(long double));
    printf("int                    %d\n",sizeof(int));
    printf("unsigned               %d\n",sizeof(unsigned));
    printf("long                   %d\n",sizeof(long));
    printf("long long              %d\n",sizeof(long long ));
    printf("unsigned long          %d\n",sizeof(unsigned long));
    printf("signed                 %d\n",sizeof(signed));

}
