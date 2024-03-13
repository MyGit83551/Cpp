//Q15. Input a string from the user. Count occurrences (case insensitive) of each alphabet in the string.

#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i, Count;
  	Count = 0;
 
  	printf("\n Enter String :  ");
  	gets(str);
  	
  	printf("\n Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			Count++;
 		}
	}
	printf("\n The Total Number of times '%c' has Occured = %d ", ch, Count);
	
  	return 0;
}