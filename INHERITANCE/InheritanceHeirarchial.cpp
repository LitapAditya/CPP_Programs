#include <iostream>
#include <string.h>
using namespace std;

class person
{
    protected:

    char name[25];
    int age;

    public:

    person()
    {
        strcpy(name, "NO NAME");
        age = 0;
    }  

    person(char*n, int a)
    {
        strcpy(name, n);
        age = a;
    }

    void setname(char*n)
    {
        strcpy(name, n);
    }

    void setAge(int a)
    {
        age = a;
    }

    char* getname()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void setData1(char*n, int a)
    {
        strcpy(name, n);
        age = a;
    }

    void display1()
    {
        cout << "NAME:" << name << endl;
        cout << "AGE:" << age << endl;
    }
};

class employee : public person
{
    protected:
    
    int id;
    float sal;

    public:

    employee()
    {
        id = 0;
        sal = 0;
    }

    employee(char*n, int a, int i, float s) : person(n, a)
    {
        id = i;
        sal = s;
    }

    void setId(int i)
    {
        id = i;
    }

    void setSal(float s)
    {
        sal = s;
    }

    int getId()
    {
        return id;
    }

    float getSal()
    {
        return sal;
    }

    void setData2(int i, float s)
    {
        id = i;
        sal = s;
    }

    void display2()
    {
        display1();
        cout << "ID:" << id << endl;
        cout << "SAL:" << sal << endl;
    }
};

class developer : public person
{
    int lan;

    public:

    developer()
    {
        lan = 0;
    }

    developer(char*n, int a, int l) : person(n, a)
    {
        lan = l;
    }

    void setLan(int l)
    {
        lan = l;
    }

    int getLan()
    {
        return lan;
    }

    void setData3(int l)
    {
        int lan = l;
    }

    void display3()
    {
        display1();
        cout << "Lan:" << lan << endl << endl;
    }
};

int main()
{
    developer dev("NORK", 25, 5);
    dev.display3();
    employee emp("FISTA", 30, 10, 100000);
    emp.display2();

    return 0;
}