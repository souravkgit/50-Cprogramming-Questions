#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str;
    str = 'A';
    for (int i = 65; i < 123; i++)
    {
        if (i > 90 && i < 97)
        {
            str++;
        }
        else
        {
            printf("[%d-%c]", str, str);
            str++;
        }
    }
}
