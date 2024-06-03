#include <iostream>
using namespace std;

class a
{
public:
    string name = "Sonu Nigam";
};

class b : virtual public a
{
};
class c : virtual public a
{
};

class d : public b, public c
{
};

int main()
{
    d obj;
    cout << obj.name << endl;

    return 0;
}
