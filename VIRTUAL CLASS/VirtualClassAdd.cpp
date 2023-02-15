//BASE CLASS POINTER CONCEPT OR VIRTUAL FUNCTION OR RUNTIME POLYMORPHISM
//LEAD BINDING OR TRUE POLYMORPHISM OR RUNTIME BINDING

#include <iostream>
#include <string.h>
using namespace std;

class Test1
{
    public:

    int add (int a, int b)
    {
        int c = a + b;
        return c;
    }

    //ADDING 'virtual' BEFORE 'void msg()' WILL NOT BIND 'ptr' IN 'main()' TO 'msg()' IN BASE CLASS DURING COMPILATION
    //NOW DURING RUNTIME COMPILER CHECKS THE ADDRESS IN 'ptr' WHICH IS ADDRESS OF 'obj' IN DERIVED CLASS
    //SO IT BINDS 'msg()' FROM DERIVED CLASS TO 'ptr' AND WILL EXECUTE 'msg()' OF DERIVED CLASS 

    //virtual void msg()
    // {
    //     cout << "WELCOME USER" << endl;
    // }

    void msg()
    {
        cout << "WELCOME USER" << endl;
    }
};

class Test2 : public Test1
{
    public:

    int sub(int a, int b)
    {
        int c = a - b;
        return c;
    }

    void msg()
    {
        cout << "HELLO USER" << endl;
    } 

};

int main()
{
    Test2 obj;
    Test1* ptr = &obj;

    //IN COMPILATION TIME 'ptr' IS BOUND TO 'add()'
    //IN RUN TIME 'add()' FROM BASE CLASS IS EXECUTED

    int a = ptr->add(10, 20);

    //'sub()' FUNCTION WILL GIVE ERROR 
    //'sub()' FUNCTION IS NOT PRESENT IN BASE CLASS
    //SO NOTHING IS BOUND DURING COMPILATION TIME
    //SO CALLING 'sub()' GIVES ERROE DURING RUN TIME

    //int b = ptr->sub(20, 10);
    cout << "SUM: " << a << endl;
    //cout << "SUB: " <<b << endl;

    //IN COMPILATION TIME 'ptr' IS BOUND TO 'msg()'
    //IN RUN TIME 'msg()' FROM BASE CLASS IS EXECUTED

    ptr->msg();
}