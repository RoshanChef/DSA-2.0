#include <iostream>
using namespace std;
class Human
{
public:
    Human()
    {
        cout << "Human cons" << endl;
    }
    void speak()
    {
        cout << "speaking .. " << endl;
    }
};

class Dog : public Human
{
public:
    Dog()
    {
        cout << "Dog cons" << endl;
    }
    // fn overide ..
    void speak()
    {
        cout << "barking ... " << endl;
    }
    void hello()
    {
        cout << "hello good morning " << endl;
    }
};
int main()
{

    Dog d;
    d.speak();

    return 0;
}