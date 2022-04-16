#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int size;
	cout << "Size->";
	cin >> size;
	int* arr1 = new int[size];
	int* arr2 = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr1[i] = rand() % 20;
		cout << arr1[i] << endl;
	}
	cout << "------------------------------------" << endl;
	for (int i = 0; i <= size / 2; ++i)
	{
		arr2 = arr1;
		swap(arr2[i], arr2[size - 1 - i]);
	}
	for (int i = 0; i < size; ++i)
	{
		cout << arr2[i] << endl;
	}
}