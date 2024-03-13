/*Q12. Write a Program to reverse the letters present in the given String. Do 
not use strrev() function*/


#include <stdio.h>
int main()
{
   char s[50], r[50];
   int start, end, i = 0;

   printf("Input a string\n");
   gets(s);

   // Calculating string length

   while (s[i] != '\0')
      i++;

   end = i - 1;

   for (start = 0; start < i; start++) {
      r[start] = s[end];
      end--;
   }

   r[start] = '\0';

   printf("%s\n", r);

   return 0;
}