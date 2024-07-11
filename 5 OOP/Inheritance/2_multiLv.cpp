#include <iostream>
using namespace std;
class Fruits
{
public:
    string name;
    void fruit()
    {
        cout << "I am Fruits " << endl;
    }
};

class Mango : public Fruits
{
public:
    int weight;
    void mango()
    {
        cout << "I am mango" << endl;
    }
};
class Alphanso : public Mango
{
public:
    int sugar;
    void alpha()
    {
        cout << "Alphanso Mango .." << endl;
    }
};

int main()
{

    Alphanso m;
    m.fruit();
    m.mango();
    m.alpha();

    m.name = "Berry";
    cout << m.name << endl;

    return 0;
}