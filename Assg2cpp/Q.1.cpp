/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.*/


#include<iostream>
using namespace std;
class Box
{
    private:
    double length;
    double width;
    double height;

    public:
    public:
    // Parmeterless Ctor
    Box()
    {
        cout << "Inside Parameterless Ctor" << endl;
        length = 1.5;
        width = 2.5;
        height = 3.5;
    }

    // Parameterized Constructor
    Box(double length, double width, double height)
    {
        cout << "Inside Parameterized Ctor" << endl;
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // single parameterized constructor
    Box(double value)
    {
        cout << "Inside single parameterized Ctor" << endl;
        length = value;
        width = value;
        height = value;
    }

    
    void displayvolume()
    {
        cout << "volume of the box: "<<length*width*height << endl;
    }
};

int main()
{
    Box B1;
    Box B2(2.5);
    Box B3(4.5, 6.7, 9.2); 
    int choice;
    do{
        cout<<"0. Exit\n"<<endl;
        cout<<"1. Inside Parameterless Ctor\n"<<endl;
        cout<<"2. Inside single parameterized Ctor\n"<<endl;
        cout<<"3. Inside Parameterized Ctor\n"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 0:
                cout<<"Thank you for using app..."<<endl;
            break;

            case 1:
                B1.displayvolume();
                break;

            case 2:
                B2.displayvolume();
                break;
          
            case 3:
                B3.displayvolume();
                break;
     
            case 4:
                 cout<<"Wrong choice"<<endl;
        }
    }while(choice!=0);

    return 0;
}

