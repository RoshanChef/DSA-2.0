#include <iostream>
#include "Doctor.cpp"

using namespace std;

class Animal
{
public:
    // properties
    string type;
    int age;

    // Behavior
    void eat()
    {
        cout << "eat ...";
    }

    void sleep()
    {
        cout << "sleeping .. ";
    }
};

class score
{
    int marks;
};

class khali
{
};

int main()
{

    // instance of class
    Animal lion;
    lion.type = "Lion";
    lion.age = 18;

    score rohan;
    cout << sizeof(rohan) << endl;

    khali k;
    cout << sizeof(k) << endl;

    Dr sweeta;
    cout << sizeof(sweeta);
    return 0;
}