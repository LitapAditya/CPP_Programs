#include <iostream>
#include <string.h>

using namespace std;

class vehicle
{
    protected:

    char* type;

    public:

    vehicle()
    {
        int len = strlen("LAND VEHICLE");
        type = new char[++len];
        strcpy(type,"LAND VEHICLE");
    }

    vehicle(char* type)
    {
        int len = strlen(type);
        this->type = new char[++len];
        strcpy(this->type,type);
    }

    void setType(char*type)
    {
        strcpy(this->type,type);
    }

    char* getType()
    {
        return type;
    }

    void display1()
    {
        cout << "TYPE: " << type << endl;
    }
};

class transmission : public virtual vehicle
{
    protected:

    char* handling;

    public:

    transmission()
    {
        handling = new char('A');
    }

    transmission(char handling)
    {
        this->handling = new char(handling);
    }

    transmission(char*type, char handling) : vehicle(type)
    {
        this->handling = new char(handling);
    }

    void setHandling(char handling)
    {
        *this->handling = handling;
    }

    char getHandling()
    {
        return *handling;
    }

    void display2()
    {
        display1();
        cout << "TRANSMISSION: " << *handling << endl;
    }
};

class affinity : public virtual vehicle
{
    protected:

    int* style;

    public:

    affinity()
    {
        style = new int(4);
    }

    affinity(int style)
    {
        this->style = new int(style);
    }

    affinity(char* type, int style) : vehicle(type)  
    {
        this->style = new int(style);
    }

    void setaffinity(int style)
    {
        *this->style = style;
    }

    int getaffinity()
    {
        return *style;
    }

    void display2()
    {
        display1();
        cout << "STYLE OF VEHICLE: " << *style << endl;
    }
};

class brand : public transmission, public affinity
{
    char* name;

    public:

    brand()
    {
        int len = strlen("STOCK VEHICLE");
        name = new char[++len];
        strcpy(name,"STOCK VEHICLE");
    }

    brand(char*type, char handling, int style, char*name) : transmission(handling), affinity(style), vehicle(type)
    {
        int len = strlen(name);
        this->name = new char[++len];
        strcpy(this->name, name);
    }

    void setName(char*name)
    {
        strcpy(this->name,name);
    }

    char* getName()
    {
        return name;
    }

    void display2()
    {
        transmission::display2();
        affinity::display2();
        cout << "CAR NAME: " << name << endl;
    }  
};

int main()
{
    brand obj("ROAD VEHICLE", 'A', 6, "FERARRI");
    obj.display2();
    return 0;
}