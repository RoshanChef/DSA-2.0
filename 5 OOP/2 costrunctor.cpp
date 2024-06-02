#include <iostream>
using namespace std;

class Animal
{
    int weight;

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

    // Default constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout << "Constructor called " << endl;
    }

    // Parameter constructor
    Animal(int age)
    {
        this->age = age;
        cout << "para constuctor set age ... " << endl;
    }

    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "para constuctor set age , weight ... " << endl;
    }

    Animal(int age, int weight, string type)
    {
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout << "para constuctor set age , weight , type ... " << endl;
    }

    // copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->type = obj.type;
        this->weight = obj.weight;
        cout << "my copy constuctor" << endl;
    }

    // Desturctor
    ~Animal()
    {
        cout << "hello Destructor" << endl;
    }
};

int main()
{
    // static
    Animal a;

    // Dynamic
    Animal *ptr = new Animal;

    Animal b(12);
    Animal c = b;

    // Manually Destuctor by Delete
    delete ptr;
    
    cout << "\n==== end ====";
    return 0;
}