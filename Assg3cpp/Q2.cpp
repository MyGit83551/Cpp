#include<iostream>
using namespace std;
class Time
{
    private:
    int h;
    int m;
    int s;

    public:
    Time():h(0), m(0), s(0) {}

    Time(int h,int m,int s): h(h), m(m), s(s) {}

    int getHour()
    {
       return h;
    }
    int getMinute()
    {
       return m;
    }
    int getSeconds()
    {
        return s;
    }
    void printTime()
    {
        cout << "Time: " << h << ":" << m << ":" << s << endl;
    }
    void setHour(int h)
    {
        this->h = h;
    }
    void setMinute(int m)
    {
         this->m = m;
    }
    void setSeconds(int s)
    {
         this->s = s;
    }
};
int main()
{
    Time *timePtr = new Time(10, 30, 45);

    cout << "Hour: " << timePtr->getHour() << endl;
    cout << "Minute: " << timePtr->getMinute() << endl;
    cout << "Second: " << timePtr->getSeconds() << endl;

    timePtr->setHour(12);
    timePtr->setMinute(15);
    timePtr->setSeconds(20);

     timePtr->printTime();

     delete timePtr;
     
     return 0;


}