#include<iostream>
#include<queue> 
using namespace std;

class stack
{
	queue<int> que_1;
	queue<int> que_2;
public:

	void push(int data)	{
		//Add Q2
		que_2.push(data); 
		// Q1 -> Q2
		while(!que_1.empty()){
			que_2.push(que_1.front()); 
			que_1.pop(); 
		}

		//swap  Q1 <-> Q2
		while(!que_2.empty()) {
			que_1.push(que_2.front());
			que_2.pop(); 
		}
	}

	int top(){
		return que_1.front();
	}
	void pop(){
		cout<<"value out " << que_1.front() <<endl; 
		que_1.pop(); 
	}
};

int main()
{
	stack st; 
	st.push(1);
	st.push(21);
	st.push(31);
	st.push(41);
	st.pop();
	cout<<st.top() <<endl; 

	for (int i = 0; i <23; ++i)
	{
		cout<< "hello"<<endl; 
	}    
	return 0;
}