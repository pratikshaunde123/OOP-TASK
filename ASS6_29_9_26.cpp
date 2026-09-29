#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    friend Time addTime(Time t1, Time t2);
    void display()
    {
        cout << hours << " hr "
             << minutes << " min "
             << seconds << " sec" << endl;
    }
};
Time addTime(Time t1, Time t2)
{
    Time result(
        t1.hours + t2.hours,
        t1.minutes + t2.minutes,
        t1.seconds + t2.seconds
    );
    if (result.seconds >= 60)
    {
        result.minutes += result.seconds / 60;
        result.seconds = result.seconds % 60;
    }
    if (result.minutes >= 60)
    {
        result.hours += result.minutes / 60;
        result.minutes = result.minutes % 60;
    }
    return result;
}
int main()
{
    Time t1(2, 45, 30);
    Time t2(3, 30, 45);
    Time total = addTime(t1, t2);
    cout << "Time 1: ";
    t1.display();
cout << "Time 2: ";
    t2.display();
cout << "Total: ";
    total.display();
    return 0;
}