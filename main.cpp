#include <iostream>
using namespace std;
int main()
{
	int* p = new int();
	cin >> *p;
	if (*p >= 0)
	{
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
	}
}