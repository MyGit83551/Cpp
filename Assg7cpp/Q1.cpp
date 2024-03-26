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
    int choice, choice1;
    int Mcount=0;
    int Scount=0;
    int SMcount=0;
    int index=0;
    Employee *arr[5];
    do
    {
        cout<<"0. Exit"<<endl;
        cout<<"1. Accept Employee"<<endl;
        cout<<"2. Count Employee"<<endl;
        cout<<"3. Display all Managers list"<<endl;
        cout<<"4. Display all Salesmans list"<<endl;
        cout<<"5. display all Salesmanagers list"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 0:
            cout<<"Thanks for using app...."<<endl;
            break;

            case 1:
        
            {
                cout<<"1. Accept Manager"<<endl;
                cout<<"2. Accept Salesman"<<endl;
                cout<<"3. Accept Salesmanager"<<endl;
                cout<<"Enter choice1: ";
                cin>>choice1;

                switch(choice1)
                {
                    case 1:
                    if(index<5)
                    {
                        arr[index]= new Manager();
                                arr[index]->accept();
                                index++;
                                cout<<"Manager details added"<<endl;
                    }
                            
                    else
                    {
                        cout<<"Employee vacancy is full now"<<endl;
                    }
                    break;

                    case 2:
                    if(index<5)
                    {
                        arr[index]= new Salesman();
                                arr[index]->accept();
                                index++;
                                cout<<"Salesman details added"<<endl;
                    }
                            
                    else
                    {
                        cout<<"Employee vacancy is full now"<<endl;
                    }
                    break;

                
                    case 3:
                    if(index<5)
                    {
                        arr[index]= new Salesmanager();
                                arr[index]->accept();
                                index++;
                                cout<<"Salesmanager details added"<<endl;
                    }
                            
                    else
                    {
                        cout<<"Employee vacancy is full now"<<endl;
                    }
                }
                    break;

            }

            case 2:
                {
                    for(int i=0; i<index; i++)
                    {
                        if(typeid(*arr[i]).name()==typeid(Manager).name())
                        {
                            Mcount++;
                        }
                        if(typeid(*arr[i]).name()==typeid(Salesman).name())
                        {
                            Scount++;
                        }
                        if(typeid(*arr[i]).name()==typeid(Salesmanager).name())
                        {
                            SMcount++;
                        }
                    }

                cout<<"Number of Managers: "<<Mcount<<endl;
                cout<<"Number of Salesman: "<<Scount<<endl;
                cout<<"Number of Salesmanagers: "<<SMcount<<endl;
                }
                break;

            case 3:
            {
                cout<<"--------Manager list---------"<<endl;
                int count=0;
                for(int i=0; i<index; i++)
                {
                   if(typeid(*arr[i])==typeid(Manager))
                   {
                    arr[i]->display();
                    count++;
                   }                
                }
                if(count==0)
                {
                    cout<<"There are no Manager in company"<<endl;
                }
            }
            break;

            case 4:
            {
                cout<<"--------Salesman list---------"<<endl;
                int count=0;
                for(int i=0; i<index; i++)
                {
                   if(typeid(*arr[i])==typeid(Salesman))
                   {
                    arr[i]->display();
                    count++;
                   }                
                }
                if(count==0)
                {
                    cout<<"There are no Salesman in company"<<endl;
                }
            }
            break;

            case 5:
            {
                cout<<"--------Salesmanager list---------"<<endl;
                int count=0;
                for(int i=0; i<index; i++)
                {
                   if(typeid(*arr[i])==typeid(Salesmanager))
                   {
                    arr[i]->display();
                    count++;
                   }                
                }
                if(count==0)
                {
                    cout<<"There are no Salesmanager in company"<<endl;
                }
            }
            break;

            default:
                cout<<"Wrong choice....."<<endl;

            
                    
        }

        
    } while (choice !=0);
    for(int i=0; i<index; i++)
    {
        delete arr[i];
        arr[i]=NULL;
    }

    
    return 0;
}
