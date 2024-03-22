/*Q3. Write a class Address with data members (string building, string street, string city ,int pin)
Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions.*/

#include<iostream>
using namespace std;

class Address{
    private:
        string building;
        string street;
        string city;
        int pin;
    public:
    Address()
        {
        building = "Govind";
        street = "Laxmi road";
        city = "Sangli";
        pin = 416305;
         }
        
        void accept()
        {
            cout<<"Enter the Address"<<endl;
            cout<<"Enter the Building Name-";
            getline(cin,building);
            cout<<"Enter the Street Name-";
            getline(cin,street);
            cout<<"Enter the City Name-";
            getline(cin,city);
            cout<<"Enter the Pin Code-";
            cin>>pin;
            
        }

        void display(){
            cout<<"Building Name: "<<building<<endl;
            cout<<"Street Name: "<<street<<endl;
            cout<<"City Name: "<<city<<endl;
            cout<<"Pin Code: "<<pin<<endl;
        }
        
        
        void setBuilding(string building){
            this->building = building;
        }
        
        string getBuilding(){
            return building;
        }

        void setStreet(string street){
            this->street = street;
        }
        
        string getStreet(){
            return street;
        }

        void setCity(string city){
            this->city = city;
        }
        
        string getCity(){
            return city;
        }

        void setPinCode(int pin){
            this->pin = pin;
        }
        
        int getPinCode(){
            return pin;
        }
};

int main(){
    Address a;
    a.display();
    a.accept();
    a.display();
    a.setBuilding("Parvati");
    cout<<a.getBuilding()<<endl;
    a.setStreet("Shri-Krishna nagar");
    cout<<a.getStreet()<<endl;
    a.setCity("Pune");
    cout<<a.getCity()<<endl;
    a.setPinCode(418035);
    cout<<a.getPinCode()<<endl;
    a.display();

return 0;

}