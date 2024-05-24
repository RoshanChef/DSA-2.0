#include <iostream>

using namespace std;
// binary to Dacimal
// 1110 => 14

int De(int n)
{

	int ans = 0, i = 0;

	while (n != 0)
	{
		int bit = n % 10;
		ans = (bit * 1 << i) + ans;
		n = n / 10;
		i++;
	}
	return ans;
}

int main()
{

	int n;
	cout << "enter the number ";
	cin >> n;

	cout << De(n);

	cout << "\n\n=== end === " << endl;
	return 0;
}