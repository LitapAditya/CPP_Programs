#include <iostream>
#include <string.h>
using namespace std;

class employee
{
    char* name;
    int* id;
    float* sal;

    public:

    //CONSTRUCTORS
    //DEFAULT

    employee()
    {
        int len = strlen("NO NAME");
        name = new char[++len];
        strcpy(name, "NO NAME");
        id = new int(0);
        sal = new float(0);
    }

    //PARAMETERISED

    employee(char*name, int id, float sal)
    {
        int len = strlen("NO NAME");
        this->name = new char[++len];
        strcpy(this->name, name);
        this->id = new int(id);
        this->sal = new float(sal);
    }

    //DEEP COPY

    // employee(employee &emp)
    // {
    //     int len = strlen(emp.name);
    //     this->name = new char[++len];
    //     strcpy(this->name, emp.name);
    //     this->id = new int(*emp.id);
    //     this->sal = new float(*emp.sal);
    // }

    //SHALLOW COPY

    employee(employee &emp)
    {
        strcpy(this->name, name);
        this->id = id;
        this->sal = sal;
    }

    //DESTRUCTOR

    ~employee()
    {
        delete[]this->name;
        delete this->id;
        delete this->sal;
    }

    //SETTERS

    void setName(char*name)
    {
        strcpy(this->name, name);
    }

    void setId(int id)
    {
        *this->id = id;
    }

    void setSal(float sal)
    {
        *this->sal = sal;
    }

    //GETTERS

    char* getName()
    {
        return name;
    }

    int getId()
    {
        return *id;
    }

    int getSal()
    {
        return *sal;
    }

    //SETDATA

    void setData(char* name, int id, float sal)
    {
        strcpy(this->name, name);
        *this->id = id;
        *this->sal = sal;
    }

    //DISPLAY

    void display()
    {
        cout << "NAME:" << name << endl;
        cout << "ID:" << *id << endl;
        cout << "SAL:" << *sal << endl << endl;
    }
};

int main()
{
    employee emp1;
    employee emp2("XYZ", 10, 100000);
    employee emp3(emp2);
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}