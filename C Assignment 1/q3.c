//Q3. Write a program to calculate Fibonacci Series up to n numbers.

#include<stdio.h>
int main()
{
    int n=10;
    int a=0, b=1;

    //printing the 0th & 1st term
    printf("%d, %d, ",a, b);
    int nextnum;

    //Printing the rest of the nums here
    for(int i=2; i<n; i++)
    {
        nextnum = a+b;
        a = b;
        b = nextnum;
        printf("%d, ", nextnum);
    }
    return 0;
}