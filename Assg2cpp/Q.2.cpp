/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-percent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/

#include<iostream>
using namespace std;
class tollbooth
{
    private:
    unsigned int Tc1;
    unsigned int Tc2;
    double Tamt;

    public:
    tollbooth()
    {
        Tc1=0;
        Tc2=0;
        Tamt=0;
    }
    void payingCar()
    {
       Tc1++;
       Tamt=Tamt+0.50;
    }

    void nopayCar()
    {
       Tc2++;
    }

    void printOnConsole() 
    {
        cout << "Total cars passed: " << Tc1+Tc2 <<endl;
        cout << "Total cash collected: " << Tamt <<endl;
        cout << "Number of paying cars: " << Tc1<<endl; 
        cout << "Number of non-paying cars: " << Tc2<<endl; 
    }
};

int main()
{
    tollbooth tb;

    tb.payingCar(); 
    tb.nopayCar(); 
    tb.payingCar(); 
    tb.printOnConsole();

    return 0;

}
