
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void getTime(void);
    void putTime(void);
    void addTime(Time T1, Time T2);
};

void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours : ";
    cin >> hours;
    cout << "Minutes : ";
    cin >> minutes;
    cout << "Seconds : ";
    cin >> seconds;
}
void Time::addTime(Time T1, Time T2)
{

    seconds = T1.seconds + T2.seconds;
    minutes = T1.minutes + T2.minutes + this->seconds / 60;
    hours = T1.hours + T2.hours + (this->minutes / 60);
    minutes %= 60;
    seconds %= 60;
}
void Time::putTime(void)
{
    cout << endl;
    cout << "Time after add: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

int main()
{
    Time T1, T2, T3;
    T1.getTime();
    T2.getTime();
    //add two times
    T3.addTime(T1, T2);
    T3.putTime();
    cout<<endl<<"ISHAN MEHTA"<<endl;
    return 0;
}
