#include <iostream>
using namespace std;
class Human
{
public:
    int age;
    string name;
    Human()
    {
        this->age = 0;
        this->name = "";
    }
    void hello()
    {
        cout << "hello Human ... " << endl;
    }
};

class Boy : public Human
{
public:
    int beard;
    Boy()
    {
        this->beard = 0;
    }
};

class Girl : public Human
{
public:
    int LongHair;
    Girl()
    {
        this->LongHair = 0;
    }
};

int main()
{
    Boy b;
    b.hello();

    Girl g;
    g.hello();

    return 0;
}