//Q2. Write a program to calculate a Factorial of a number.

#include<stdio.h> 
int main()
{
    int i, f=1, num; //declare variable i for loop counter, f to store factorial, num for user input.
    printf("Input the num: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++) // start loop to calculate factorial.
    f=f*i;                // calculate factorial.
    printf("The factorial of %d is: %d\n", num, f);
    return 0;
}