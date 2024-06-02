#include <iostream>
#define pi int(5.5)
using namespace std;

class human
{

    int age;

public:
    void set(int age) { this->age = age; }
    int get() { return this->age; }

    human(int age)
    {
        this->age = age;
        cout << "Parameter constructor" << endl;
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

    

    return 0;
}