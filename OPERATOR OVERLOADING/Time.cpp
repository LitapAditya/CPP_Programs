#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

    public:

    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }

    Time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    Time operator+(Time T2)
    {
        Time T3;
        T3.hr = hr + T2.hr;
        T3.min = min + T2.min;
        T3.sec = sec + T2.sec;
        return T3;
    }

    friend void operator<<(ostream &o, Time &T); // To make data mambers of this class accessible to friend functions.
};

    void operator<<(ostream &O, Time &T)
    {
        cout << "hr = " << T.hr << endl;
        cout << "min = " << T.min << endl;
        cout << "sec = " << T.sec << endl;
    }


int main()
{
    Time T1(1, 40 ,20);
    Time T2(2, 10, 30);
    Time T3;

    T3 = T1 + T2; // This is same as 'T3 = T1.operator+(T2);'
    cout << T3; // This is same as 'cout.operator<<(T3);' 
                // then get converted into 'operator<<(cout, T3);'
    return 0;
}