#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int size;
	cin >> size;
	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << endl;
	}
}