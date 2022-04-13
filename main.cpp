#include <iostream>
using namespace std;
int main()
{
	int* p_1 = new int();
	int* p_2 = new int();
	cout << "Vvdetite 1 znachenie->";
	cin >> *p_1;
	cout << "Vvdetite 2 znachenie->";
	cin >> *p_2;
	if (*p_1 > *p_2)
	{
		cout << *p_1 << endl;
	}
	if (*p_1 < *p_2)
	{
		cout << *p_2 << endl;
	}

}