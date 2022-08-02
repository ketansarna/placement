#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n1;
	cout << "enter no of elements in first array"<< endl;
	cin >> n1;
	cout << "enter first sorted array";
	int* arr1 = new int[n1];
	for (int i = 0; i < n1; i++)
	{
		cin >> arr1[i];
	}
	cout << "enter no of elements in 2nd array " << endl;
	int n2;
	cin >> n2;
	int* arr2 = new int[n2];
	cout << "enter second sorted array";
	for (int i = 0; i < n2; i++)
	{
		cin >> arr2[i];
	}
	int j = 0;
	for (int i = 0; i < (n1 + n2); i++)
	{
		if (arr1[i] > arr2[j])
		{
			int temp = arr1[j];
			arr1[i] = arr2[j];
			arr2[j] = temp;
			
		}
				// used insertion sort here in one loop somehow idk then other option is gap method which is gud
	}

	return 0;
}
