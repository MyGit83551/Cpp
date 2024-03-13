/*Q 8. Write a program to read the name of a student (studentName), roll 
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an 
alphanumeric string. Display the data as read. Hint: Create a Student 
structure and write appropriate functions.*/


#include<stdio.h>

//structure and function

struct Student acceptRecord(); // function is returning structure 
void dispRecord(struct Student e); // function is taking a parameter as a structure 

struct Student 
{
    char str[20];
    int rn;
    float marks; 
};

int main(void)
{
    struct Student e;
    e = acceptRecord();
    dispRecord(e);
    return 0;
}
struct Student acceptRecord()
{
    struct Student temp;
    printf("Enter Student_Name : ");
    scanf("%s",temp.str);
    printf("Enter Roll_NO :");
    scanf("%d",&temp.rn);
    printf("\n Enter Marks : ");
    scanf("%f",&temp.marks);
    return temp;
}
void dispRecord(struct Student s1)
{
    printf("Student_Name = %s Roll_No = %d Marks = %f",s1.str,s1.rn,s1.marks);
}