#include<iostream>
using namespace std;
class Employee //base class
{
    private:
    int id;
    double salary;

    public:
    Employee()
    {
        id=0;
        salary=0;
    }

    Employee(int id, double salary)
    {
        this->id = id;
        this->salary=salary;
    }

    void setid(int id)
    {
        this->id=id;
    }

    int getid()
    {
        return id;
    }

    void setsalary(double salary)
    {
        this->salary=salary;
    }

    double getsalary()
    {
        return salary;
    }

    virtual void accept() // to late binding
    {
        cout<<"Enter employee Id: ";
        cin>>id;
        cout<<"Salary: ";
        cin>>salary;
    }

    virtual void display() // to late binding
    {
        cout<<"Employee Id: "<<id<<","<<"Salary: "<<salary<<endl;
    
    }

    virtual ~Employee() //destructor
    {
        cout << "~Employee()" << endl;
    }

};

class Manager: public virtual Employee //inherit employee into manager, to avoid ambiguity(diamond problem)
{
    private:
    double bonus;

    protected:
     void acceptManager()
    {
        cout<<"Enter Bonus: ";
        cin>>bonus;
    }

    void displayManager()
    {
        cout<<"Manager bonus: "<<bonus<<endl;
    }


    public:
    Manager()
    {
        bonus=0;
    }

    Manager(int id, double salary, double bonus):Employee(id, salary)
    {
        this->bonus=bonus;
    }

    void setbonus(double bonus)
    {
        this->bonus=bonus;
    }

    double getbonus()
    {
        return bonus;
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};


class Salesman: virtual public Employee
{
    private:
    double commission;

    protected:
    void acceptSalesman()
    {
        cout<<"Enter commission: ";
        cin>>commission;
    }

    void displaySalesman()
    {
        cout<<"Salesman: "<<commission<<endl;
    }

    public:
    Salesman()
    {
        commission=0;
    }

    Salesman(int id, double salary, double commission):Employee(id, salary)
    {
        this->commission=commission;
    }

    void setcommission(double commission)
    {
        this->commission=commission;
    }

    double getcommission()
    {
        return commission;
    }

    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }

    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
    
    }
    
};


class Salesmanager : public Manager, public Salesman
{
public:
    Salesmanager()
    {
    }
    Salesmanager(int id, double salary, double bonus, double commission):Manager(id, salary, bonus), Salesman(id, salary, commission)
    {
        
    }
    
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }

    ~Salesmanager()
    {
    
    }
};

int main()
{
    // Employee obj;
    // Manager obj;
    // Salesman obj;
    Salesmanager obj;
    obj.accept();
    obj.display();
    return 0;
}
