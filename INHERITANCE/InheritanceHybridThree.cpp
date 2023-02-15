#include <iostream>
#include <string.h>
using namespace std;

class PC
{
    protected:

    char model[10];

    public:

    PC()
    {
        strcpy(model, "LAPTOP");
    }

    PC(char* model)
    {
        strcpy(this->model, model);
    }

    void setModel(char* model)
    {
        strcpy(this->model, model);
    }

    char* getModel()
    {
        return model;
    }

    void displayModel()
    {
        cout << "MODEL: " << model << endl;
    }
};

class CPU : public virtual PC
{
    protected:

    char processor[10];

    public:

    CPU()
    {
        strcpy(processor, "INTEL");
    }

    CPU(char* processor)
    {
        strcpy(this->processor, processor);
    }

    CPU(char* processor, char* model) : PC(model)
    {
        strcpy(this->processor, processor);
    }

    void setProcessor(char* processor)
    {
        strcpy(this->processor, processor);
    }

    char* getProcessor()
    {
        return processor;
    }

    void displayComponent()
    {
        displayModel();
        cout << "PROCESSOR: " << processor << endl;
    }
};

class GPU : public virtual PC
{
    protected:

    char graphics[10];

    public:

    GPU()
    {
        strcpy(graphics, "NVIDIA");
    }

    GPU(char* graphics)
    {
        strcpy(this->graphics, graphics);
    }

    GPU(char* graphics, char* model) : PC(model)
    {
        strcpy(this->graphics, graphics);
    }

    void setGraphics(char* graphics)
    {
        strcpy(this->graphics, graphics);
    }

    char* getGraphics()
    {
        return graphics;
    }

    void displayComponent()
    {
        displayModel();
        cout << "GPU: " << graphics << endl;
    }
};

class BRAND : public CPU, public GPU
{
    protected:

    char name[10];

    public:

    BRAND()
    {
        strcpy(name, "APPLE");
    }

    BRAND(char* name, char* graphics, char* processor, char* model) : GPU(graphics), CPU(processor), PC(model)
    {
        strcpy(this->name, name);
    }

    void setName(char* name)
    {
        strcpy(this->name, name);
    }

    char* getName()
    {
        return name;
    }

    void displayBrand()
    {
        CPU::displayComponent();
        GPU::displayComponent();
        cout << "NAME: " << name << endl;
    }
};

int main()
{
    BRAND obj;
    obj.displayBrand();
}