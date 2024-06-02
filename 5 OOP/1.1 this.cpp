#include <iostream>
using namespace std;
class Animal
{
    int weight;

public:
    string type;
    void setWeight(int weight)
    {
        // this => pointer to the current object
        (*this).weight = weight;
        //  this->weight = weight;
    }
    int getWeight()
    {
        return weight;
    }
};

int main()
{

    Animal rohan;
    rohan.type = "Lion";
    rohan.setWeight(120);
    cout << rohan.getWeight() << endl;
    cout << rohan.type << endl;

    return 0;
}