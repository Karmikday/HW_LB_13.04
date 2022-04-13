#include <iostream>
using namespace std;
int main()
{
	int* p_1 = new int();
	int* p_2 = new int();
	cin >> *p_1;
	cin >> *p_2;
	cout << "----------------------------------------" << endl;
	swap(*p_1, *p_2);
	cout << *p_1 << endl;
	cout << *p_2 << endl;
	system("pause");
}