#include <iostream>
#include <string.h>

using namespace std;

class A
{
    protected:
    
    int a;

    public:

    A()
    {
        a = 0;
    }

    A(int x)
    {
        a = x;
    }  

    void set_a(int x)
    {
        a = x;
    }

    int get_a()
    {
        return a;
    }

    void display()
    {
        cout << "a = " << a << endl;
    }
};

class B
{
    protected:

    int b;

    public:

    B()
    {
        b = 0;
    }

    B(int y)
    {
        b = y;
    }  

    void set_b(int y)
    {
        b = y;
    }

    int get_b()
    {
        return b;
    }

    void display()
    {
        cout << "b = " << b << endl;
    }
};

class C : public A, public B
{
    int c;

    public:

    C()
    {
        c = 0;
    }

    C(int x, int y, int z) : A(x), B(y)
    {
        c = z;
    }  

    void set_c(int z)
    {
        c = z;
    }

    int get_c()
    {
        return c;
    }

    void display1()
    {
        A::display();
        B::display();
        cout << "c = " << c << endl;
    }
};

int main()
{
    C obj;
    C obj1(10, 20 ,30);
    obj1.A::display();
    obj1.B::display();
}

// '::' IS CALLED RESOLUTION(CHECK AGAIN).