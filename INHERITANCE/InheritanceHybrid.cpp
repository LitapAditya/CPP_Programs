#include <iostream>
#include <string.h>
using namespace std;

class animal
{
    protected:

    int height;
    float weight;

    public:

    animal()
    {
        height = 0;
        weight = 0;
    }

    animal(int h, float w)
    {
        height = h;
        weight = w;
    }

    void setHeight(int h)
    {
        height = h;
    }

    void setWeight(float w)
    {
        weight = w;
    }

    int getHeight()
    {
        return height;
    }

    float getWeight()
    {
        return weight;
    }

    void setData4(int h, float w)
    {
        height = h;
        weight = w;
    }

    void display4()
    {
        cout << "HEIGHT:" << height << endl;
        cout << "WEIGHT:" << weight << endl; 
    }
};

class person : public animal
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

class employee : public animal
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

    employee(int i, float s)
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
        cout << "ID:" << id << endl;
        cout << "SAL:" << sal << endl;
    }
};

class developer : public person, public employee
{
    int lan;

    public:

    developer()
    {
        lan = 0;
    }

    developer(char*n, int a, int i, float s, int l) : person(n, a), employee(i, s)
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
        display2();
        cout << "Lan:" << lan << endl << endl;
    }
};

int main()
{
    developer dev("KROZ", 25, 10, 100000, 5);
    dev.display3();
    return 0;
}