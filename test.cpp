#include <iostream>
#define pi int(5.5)
using namespace std;

class human
{

    int age;
    string name="";

public:
    void set(int age) { this->age = age; }
    int get() { return this->age; }

    human(int age)
    {
        this->age = age;
        cout << "Parameter constructor" << endl;
    }
    human(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    void print(){
        cout<<"Age := " <<age << " - Name : " << name<<endl;
    }
    ~human()
    {
        cout << "Destructor\n";
    }
};

int main()
{
    human o(10);
    human *obj = new human(45);
    obj->print(); 

    return 0;
}