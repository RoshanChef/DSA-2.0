#include <iostream>
using namespace std;

class Ar
{
public:
	int a;
	int b;
	Ar()
	{
		this->a = 0;
		this->b = 0;
	}

	// Initializer list only for constructors

	// Ar(int a , int b): a(a) , b(b){
	// Ar(int i , int j): a(i) , b(j+j){
	// Ar(int i , int j): a(i) , b(j+a){
	Ar(int i, int j) : b(j + a), a(i)
	{
		// Ar(int i , int j): b(j), a(i+b){
		cout << "a " << a << endl;
		cout << "b " << b << endl;
	}
};
int main()
{

	Ar obj(5, 7);

	return 0;
}