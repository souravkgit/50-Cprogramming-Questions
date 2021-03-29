// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// void main()
// {
//     printf("Enter your text here :\n");
//     int blank=0,tab=0,newline=0;
//     char c;
//     while((c=getchar())!=EOF)
//     {
//         if(c=='\n')
//         {
//             newline++;
//         }
//         if(c=='\t')
//         {
//             tab++;
//         }
//         if(c==' ')
//         {
//             blank++;
//         }
//     }
//     printf("Number of tabs :%d\n",tab);
//     printf("Number of newline :%d\n",newline);
//     printf("Number of blank :%d\n",blank);
// }
#include <stdio.h>

int main()
{
  int blank_char, tab_char, new_line;
  blank_char = 0;
  tab_char = 0;
  new_line = 0;
  int c;
  printf("Number of blanks, tabs, and newlines:\n");
  printf("Input few words/tab/newlines\n");
  for (; (c = getchar()) != EOF;)
  {
    if ( c == ' ' ){
      ++blank_char;
    }
    if ( c == '\t' ){
      ++tab_char;
    }
    if ( c == '\n' ){
      ++new_line;
    }
  }  
  printf("blank=%d,tab=%d,newline=%d\n",blank_char,tab_char,new_line);
}
