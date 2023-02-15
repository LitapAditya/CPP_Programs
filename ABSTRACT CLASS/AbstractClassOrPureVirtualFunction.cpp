#include <iostream>
#include <string.h>
using namespace std;

class emp
{
    protected:

    char name[20];

    public:

    void setName(char* nm)
    {
        strcpy(name,nm);
    }

    char* getName()
    {
        return name;
    }

    virtual void salCal() = 0;
};

class dev : public emp
{
    public:

    void salCal()
    {
        
    }
};