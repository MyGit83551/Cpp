//Q9. Accept an integer number and when the program is executed print the binary, octal and hexadecimal equivalent of the given number.
//Sample Output:
//terminal> java Test
//Enter Number : 20
//Given Number :20
//Binary equivalent :10100
//Octal equivalent :24
//Hexadecimal equivalent :14


#include<stdio.h>
void convert(int, int);

int main()
{
        int num;
        printf("Enter a positive decimal number : ");
        scanf("%d", &num);
        printf("\nOctal number :: %o", num);
        printf("\nHexadecimal number :: %x", num);
        printf("\nBinary number :: ");
        convert(num, 2);
        printf("\n");
        
        return 0;
}/*End of main()*/

void convert (int num, int base)
{
        int rem = num%base;

        if(num==0)
                return;
        convert(num/base, base);

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );
}