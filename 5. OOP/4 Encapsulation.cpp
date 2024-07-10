#include <iostream>
using namespace std;

class Human
{
    int age;
    string hair_color;

public:
    int weight;
    bool eye;
    void sleep()
    {
        cout << "Sleeping ... " << endl;
    }
    void walk()
    {
        cout << "walking ... " << endl;
    }
};

// perfect encaps
class Animal
{
private:
    int age;
    string type;

public:
    int getAge()
    {
        return age;
    }
    string getTpe()
    {
        return type;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setType(string type)
    {
        this->type = type;
    }
};

int main()
{
    // *********** By Defualt all classes are eg of encapsulation  ***********


    //Data Hiding

    return 0;
}