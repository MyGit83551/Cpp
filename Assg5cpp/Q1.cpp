/*Implement following classes. Test all functionalities in main().
Create a class Date with data member day,month and year.
Create a class Person with data members name,address and birthdate. The birthdate shoud be of
type date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.*/


#include <iostream>
#include <string>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void printDate() const 
    {
        cout << day << "/" << month << "/" << year;
    }
};

class Person {
private:
    string name;
    string address;
    Date birthDate;

public:
    Person(const string& n, const string& addr, const Date& bd) : name(n), address(addr), birthDate(bd) {}

    void printPerson() const {
        cout << "Name: " << name <<endl;
        cout << "Address: " << address <<endl;
        cout << "Birth Date: ";
        birthDate.printDate();
        cout <<endl;
    }
};

class Employee {
private:
    int id;
    double salary;
    string department;
    Date joiningDate;

public:
    Employee(int empId, double sal, const string& dept, const Date& joinDate)
        : id(empId), salary(sal), department(dept), joiningDate(joinDate) {}

    void printEmployee() const {
        cout << "Employee ID: " << id <<endl;
        cout << "Salary: " << salary <<endl;
        cout << "Department: " << department <<endl;
        cout << "Joining Date: ";
        joiningDate.printDate();
        cout <<endl;
    }
};

int main() {
    // Create Date object
    Date birthDate(15, 5, 2000);

    // Create Person object
    Person person("Jyoti", "Laxmi nagar", birthDate);

    // Create Employee object
    Date joiningDate(24, 3, 2024);
    Employee employee(1001, 5000.0, "Reasearch and develpoement", joiningDate);

    // Test all functionalities in main(
    cout << "Person Details:" <<endl;
    person.printPerson();

    cout << "Employee Details:" <<endl;
    employee.printEmployee();

    return 0;
}