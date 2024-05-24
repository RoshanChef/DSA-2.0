#include <iostream>
using namespace std;

// Runtime Poly
/*
// virtual keyword
 -way of achieve runtime polymorphism
 -At compile time static table create(virtual table)
  contains fn ptr and if inheritance apply then virtual table for all child class
  -compiler add vptr(Always point to vrt table) in virtual fn class
*/

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
    virtual ~Human()
    {
        cout << "Delete Human " << endl;
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
    ~Dog()
    {
        cout << "Delete Dog " << endl;
    }
};

int main()
{
    // //static
    // Dog obj;
    // obj.speak();

    // Human a;
    // a.speak();

    // Dynaic
    // Human *p = new Human();
    // p->speak();

    // Dog *dg = new Dog();
    // dg->speak();

    // without virtul keyword left

    // UpCasting
    // Human *pg = new Dog();
    // pg->speak();

    // // error
    // //  Dog *dg = new Human();

    // UpCasting
    // Dog *dg = (Dog *)new Human();
    // dg->speak();

    // with virtul keyword right

    // Human *hm = new Dog();
    // hm->speak();

    // Dog *tom = (Dog *)new Human();
    // tom->speak();

    // Human *h = new Human();

    // Dog *dg1 = new Dog();

    // Human *h2 = new Dog();

    // Dog *dg2 = (Dog *)new Human();

    // // if virtual dctor not there then dog never delete 
    // Human *a = new Dog;
    // delete a;

    return 0;
}