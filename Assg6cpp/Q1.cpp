/*Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.)*/

#include<iostream>
using namespace std;

class Date
{
    private:
    int dd;
    int mm;
    int yyyy;

    public:
    Date()
    {
      dd=1;
      mm=1;
      yyyy=2024;
    }
   
    void acceptDate()
    {
        cout<<"Day: "<<endl;
        cin>>dd;
        cout<<"Month: "<<endl;
        cin>>mm;
        cout<<"Year: "<<endl;
        cin>>yyyy;
    }

    void displaydate()
    {
        cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
    }
};
 class Person
 {
   private:
   string name;
   string address;
   Date dob;

   public:
   virtual void acceptData()
   {
   cout<<"Name: "<<endl;
   cin>>name;
   cout<<"Address: "<<endl;
   cin>>address;
   cout<<"Date of birth: "<<endl;
   dob.acceptDate();
   }

   virtual void displayData()
   {
    cout<<"Name: "<<name<<","<<"Address: "<<address<<","<<endl;
    cout<<"Date of birth: ";
    dob.displaydate();
   }
};

class Employee: public Person
{
  private:
  int empid;
  double salary;
  string dept;
  Date doj;

  public:
  void acceptData()
   {
   cout<<"Empid: "<<endl;
   cin>>empid;
   cout<<"Salary: "<<endl;
   cin>>salary;
   cout<<"Date of joining: "<<endl;
   doj.acceptDate();
   Person::acceptData();
   }

   void displayData()
   {
    cout<<"Empid: "<<empid<<","<<"Salary: "<<salary<<","<<endl;
    cout<<"Date of joining: ";
    doj.displaydate();
    Person::displayData();

   }
};

int main()
{
  Person *pptr = new Employee();
    pptr->acceptData();
    pptr->displayData(); 
    delete pptr;
    pptr = NULL;

    return 0;
}
