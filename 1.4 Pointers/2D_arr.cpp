#include<iostream> 
using namespace std; 


int main(){
	int row = 3; 
	int col = 3; 

	//2D Array 
	int **ptr = new int*[row] ;

	for (int i = 0; i < row; ++i)
	{
		ptr[i] = new int[col];
	}

	//input
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			ptr[i][j] = j; 
		}
	}

	//print
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout<< ptr[i][j]<<" ";
		}
		cout <<endl; 
	}

	cout<< sizeof(ptr[0])<<endl;


	for (int i = 0; i < row; ++i)
	{
		delete []ptr[i]	;
	}
	delete []ptr;

	return 0; 
}