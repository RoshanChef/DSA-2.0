#include<iostream> 
using namespace std; 

class A{
	int x; 
	public : 
	A(){
		this->x = 10; 
	}
	int get_x()
	{
		return x;
	}
	//friend declaration
	friend class B; 
	friend void print(A& );
};

class B
{
public:
	void print(A& obj){
		cout<<obj.x <<endl; 
	}	
};

void print(A& obj){
	cout<<obj.x <<endl; 
}

int main(){

	A a;
	B obj;
	obj.print(a);
	print(a);

	return 0; 
}