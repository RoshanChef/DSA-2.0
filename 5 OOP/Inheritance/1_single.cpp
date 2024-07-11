#include <iostream>
using namespace std;

class Animal
{
protected:
    int age;
    int weight;
};

class Dog : public Animal
{
public:
    void get()
    {
        cout << "Age " << age << endl;
        cout << "Weight " << weight << endl;
    }
};

int main()
{

    return 0;
}