#include <iostream>
#include <string.h>
using namespace std;

class Test
{
    public:

    void add (int a, int b, int c)
    {
        int sum;
        sum = a + b + c;
        cout << "SUM = " << sum << endl;
    }
};

class Test2 : public Test
{
    public:

    void add (int a, int b)
    {
        int sum;
        sum = a + b;
        cout << "SUM = " << sum << endl;
    }

    // void add (int a, int b, int c)
    // {
    //     int sum;
    //     sum = a + b + c;
    //     cout << "SUM = " << sum << endl;
    // }
};

int main()
{
    Test2 obj;

    //FUNCTION OVERLOADING IS NOT POSSIBLE IN INHERITANCE
    //SO THE ACCESS OF 'add()' IN BASE CLASS IS DENIED WHEN CALLED WITH OBJECT OF DERIVED CLASS
    
    //obj.add(10,20,30);

    //HERE 'add(int a, int b)' OF 'Test2' CLASS WILL BE CALLED AND NOT OF 'Test1'
    //THIS IS CALLED FUNCTION OVERRIDING

    obj.Test2::add(10,20);
}