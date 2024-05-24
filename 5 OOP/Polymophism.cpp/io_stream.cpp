#include <iostream>
using namespace std;

class param
{
public:
	int value;
	param()
	{
		value = 0;
	}
};
istream &operator>>(istream &input, param &obj)
{
	input >> obj.value;
	// why return
	return input;
}

ostream &operator<<(ostream &output, param &obj)
{
	output << obj.value << endl;
	// why return
	return output;
}

int main()
{

	param p, p1;
	p.value = 100;

	// cin;

	/*
	cin>>p>>p1>>p.val;
	|     |
	  cin
	*/
	param p, p2;
	cin >> p >> p2.value;
	cout << p << p2.value;

	return 0;
}