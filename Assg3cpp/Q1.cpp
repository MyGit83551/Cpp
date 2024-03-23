/*Q1. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.*/

#include<iostream>
using namespace std;
class Cylinder
{
    private:
    double radius;
    double height;
    static double PI;

    public:

    Cylinder(): radius(2.0), height(4.0){} // constructor delligation

    Cylinder(double radius, double height) : radius(radius), height(height) {}  // constructor delligation

    double getRadius()
    {
       return radius;
    }


     void setRadius(double radius)
     {
        this->radius = radius;
     }


     double getHeight()
     {
         return height;
     }


    void setHeight(double height)
    {
          this->height = height;
    }


    double getVolume()
    {
         return  PI * radius * radius * height;
    }


    void printVolume()
    {
         cout << "Volume of Cylinder: " << getVolume() << endl;
    }



};
double Cylinder::PI = 3.14; //static variable initialization as class name and scope resolution operator.

int main()
 {
    double R;
    double H;
    Cylinder cl;

    Cylinder c1;
    cout << "Volume of default cylinder: ";
    c1.printVolume();

    Cylinder c2(4.0, 4.0);
    cout << "Volume of cylinder with new radius and height: ";
    c2.printVolume();
    
    c1.setRadius(10);
    R=c1.getRadius();
    cout << "Radius is: "<<R<<endl;

    c1.setHeight(15);
    H=c1.getHeight();
    cout << "Height is: "<<H<<endl;
    
    return 0;
}