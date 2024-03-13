//Q4. Write a program to calculate the grade of a student. There are five
//subjects. Marks in each subject are entered from keyboard. Assign grade
//based on the following rule:
//Total Marks >= 90 Grade: Ex
//90 > Total Marks >= 80 Grade: A
//80 > Total Marks >= 70 Grade: B
//70 > Total Marks >= 60 Grade: C
//60 > Total Marks Grade: F

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks < 0 || marks > 100)
    {
        printf("Wrong Entry");
    }
    else if(marks > 90)
    {
        printf("Grade Ex");
    }
    else if(marks >=80 && marks < 90)
    {
        printf("Grade A");
    }
    else if(marks >=70 && marks < 80)
    {
        printf("Grade B");
    }
    else if(marks >=60 && marks < 70)
    {
        printf("Grade c");
    }
    else
    {
        printf("Grade F");
    }
   return 0; 
}