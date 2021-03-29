#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    // int count=0;
    // char *ptr[100],c;
    // printf("Enter the string here :\n");
    // scanf("%s",ptr);
    // c = *ptr[0];
    // while(c!='\0')   /// HAVE TO WORK MORE ON THIS 
    // {
    //     c = *ptr;
    //     count++;
    //     ptr[0]++;
    // }
    // printf("%d",count);

    int i=0;
    char str1[80],str2[80];
    printf("Enter the string here :\n");
    scanf("%s",&str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("\nThe copied string is :%s\n",str2);
    printf("Number of characters is :%d",i);
}
