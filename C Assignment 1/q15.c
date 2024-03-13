/*Q 13. Declare an Array of type char* and initialize it with a few strings (hardcoded). 
Display the strings which are duplicated in that array. (Hint: use 
strcmp())*/

#include<stdio.h>
#include<string.h>

int main() {
  char string1[] = "Om namah shivay";
  char string2[] = "Om nam shivay";

  int rvalue = strcmp(string1, string2);

  if (rvalue == 0)
    printf("Both strings are equal");
  else
    printf("Both strings are unequal");

  printf("\nValue returned by strcmp is: %d", rvalue);
  return 0;
}