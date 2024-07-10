#include <iostream>
using namespace std;
class Animal
{
    int weight; 
public:
    string type; 
    int age ; 

    // Read
    char getWeight()
    {
        return weight;
    }
    void setWeight(int w)
    {
        weight = w;
    }
};

int main()
{
    // get stack memory >> static allocation
    Animal rohan;
    rohan.age = 12;
    cout << rohan.age << endl;

    rohan.setWeight(72);
    cout << rohan.getWeight() << endl;

    // //error
    // cout<<h.level<<endl;

    // get Heap memory >> dynamic allocation
    Animal *mario = new Animal;
    mario->setWeight(55);
    mario->age = 20;

    // both same
    cout << (*mario).age << endl;
    cout << (*mario).getWeight() << endl;

    // Arrow operator ..
    cout << mario->age << endl;
    cout << mario->getWeight() << endl;
    cout << "\n==== end ====";
    return 0;
}