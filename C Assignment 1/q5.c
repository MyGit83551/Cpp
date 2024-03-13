//Q5. Write a program to check the input characters for uppercase,
//lowercase, number of digits and other characters. Display appropriate
//message.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("'%d' is Number.", ch);
    }
    else
    {
        printf("It is special symbol");
    }
    return 0;

}