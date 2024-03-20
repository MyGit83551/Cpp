#include<iostream>
using namespace std;
class Date
{
private:
    int dd;
    int mm;
    int yyyy;
    
public:
void initDate()
{
dd=20;
mm=03;
yyyy=2024;
cout<<"Date is:"<<dd<<"-"<<mm<<"-"<<"yyyy"<<endl;

}
void printDateOnConsole()
{
cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;

}
void acceptDateFromConsole()
{
cout<<"Enter the Day, Month, Year:"<<endl;
cin>>dd>>mm>>yyyy;
}
bool isLeapYear()
{
if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0)) {
        return true; // Leap year
    } else {
        return false; // Not a leap year
    }

}
};
int main()
{
    Date d1;
    int choice;
do{
        cout<<"0. Exit\n"<<endl;
        cout<<"1. initDate\n"<<endl;
        cout<<"2. Accept Date\n"<<endl;
        cout<<"3. Print Date\n"<<endl;
        cout<<"4. isLeapYear"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
    switch(choice)
    {
        case 0:
            cout<<"Thank you for using app..."<<endl;
            break;
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.acceptDateFromConsole(); 
            break;
        case 3:
            d1.printDateOnConsole();
            break;
        case 4:
            
            if (d1.isLeapYear()) 
              {
             cout<<"This is a leap year"<<endl;
              } 
            else {
             cout<<"This is not a leap year.\n"<<endl;
             };
        default:
            cout<<"Wrong Choice..."<<endl;
            break;    
            }
}while(choice!=4);

};