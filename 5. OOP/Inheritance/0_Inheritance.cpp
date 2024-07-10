#include <iostream>
using namespace std;

class Animal
{
public:
    // Properties
    int age;
    int weight;

    // Behaviour
    void sleep()
    {
        cout << "sleeping .. " << endl;
    }
    void eat()
    {
        cout << "eating .. " << endl;
    }
};
class Dog : public Animal
{
};
int main()
{

    Dog tom;
    tom.sleep();
    return 0;
}