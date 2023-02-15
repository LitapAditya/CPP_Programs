#include <iostream>
#include <string.h>
using namespace std;

class person
{
    //PROTECTED DATA CAN BE USED IN SAME CLASS AND IN INHERITED CLASS
    //SO NOW 'name' & 'age' CAN BE USED IN 'employee' CLASS

    protected:

    char name[25];
    int age;

    public:

    person()
    {
        strcpy(name, "NO NMAE");
        age = 0;
    }

    person(char*nm, int a)
    {
        strcpy(name, nm);
        age = a;
    }

    void setName(char*nm)
    {
        strcpy(name,nm);
    }

    void setAge(int a)
    {
        age = a;
    }
    
    char* getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void display()
    {
        cout << "NAME:" << name << endl;
        cout << "AGE:" << age << endl;
    }
};

class employee : public person
{
    int eid;
    float sal;

    public:

    employee()
    {
        eid = 0;
        sal = 0;
    }

    //'person (nm, a)' IS SENDING PARAMETERS TO BASE CLASS

    employee(char*nm, int a, int id, float s) : person (nm, a)
    {
        eid = id;
        sal = s;
    }

    void setEid(int id)
    {
        eid = id;
    }

    void setSal(float s)
    {
        sal = s;
    }

    void display1()
    {
        display();
        cout << "ID:" << eid << endl;
        cout << "SALARY:" << sal << endl;
    }

    int getEid()
    {
        return eid;
    }

    float getSal()
    {
        return sal;
    }
};

int main()
{
    person obj;

    employee obj1;
    employee obj2("ABC", 25, 10, 10000);
    obj2.display1();

    return 0;
}