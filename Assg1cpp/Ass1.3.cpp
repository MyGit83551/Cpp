/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/

#include<iostream>
using namespace std;

class Student
{
    private:
    int Rollno;
    string Name;
    double Marks;

public:

void initStudent()
{
Rollno=1;
Name="Jaid";
Marks=100;
cout<<"Roll No: "<<Rollno<<endl;
cout<<"Name: "<<Name<<endl;
cout<<"Marks: "<<Marks<<endl;
}
void printStudentOnConsole()
{
cout<<"Roll No: "<<Rollno<<endl;
cout<<"Name: "<<Name<<endl;
cout<<"Marks: "<<Marks<<endl;
}
void acceptStudentFromConsole()
{
cout<<"Roll No: "<<endl;
cin>>Rollno;
cout<<"Name: "<<endl;
cin>>Name;
cout<<"Marks: "<<endl;
cin>>Marks;
}
};
int main(){
Student s1;
int choice;
do{
        cout<<"0. Exit\n"<<endl;
        cout<<"1. initStudent\n"<<endl;
        cout<<"2. Accept Student\n"<<endl;
        cout<<"3. Print Student\n"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
    switch(choice)
    {
        case 0:
            cout<<"Thank you for using app..."<<endl;
            break;
        case 1:
            s1.initStudent();
            break;
        case 2:
            s1.acceptStudentFromConsole(); 
            break;
        case 3:
            s1.printStudentOnConsole();
            break;
        default:
            cout<<"Wrong Choice..."<<endl;
            break;    
            }
}while(choice!=3);

};
