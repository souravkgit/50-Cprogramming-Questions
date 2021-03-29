// QUE 131
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int len(char arr[50])
{
    int i=0,count=0;
    while (arr[i]!='\0')
    {
        count=count+1;
        i++;
    }
    return count;
}
void main()
{
    printf("Enter the first string :\n");
    char str1[100];
    scanf("%s",&str1);
    printf("Enter the second string :\n");
    char str2[50];
    scanf("%s",&str2);
    int l1=len(str1),l2=len(str2);
    for (int i=1; i<=l2; i++)
    {
        if (str1[l1-i]!=str2[l2-i])
        {
            printf("absent!\n");
            break;
        }
        else if (str1[l1-i]==str2[l2-i] && i==l2)
        {
            printf("present!");
        }
        else
        {
            continue;
        }
    }
}
