#include <stdio.h>
// Function for binomial coefficient table
int bin_table(int val) {
   for (int i = 0; i <= val; i++) {
      printf("%2d", i);
      int num = 1;
      for (int j = 0; j <= i; j++) {
         if (i != 0 && j != 0)
         num = num * (i - j + 1) / j;
         printf("%4d", num);
      }
      printf("\n");
   }
}
int main() {
   int value;
   printf("Enter the value :\n");
   scanf("%d",&value);
   bin_table(value);
   return 0;
}