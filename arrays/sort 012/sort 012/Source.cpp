#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter size of n";
	cin >> n;
	int *arr = new int[n];
	int low = 0, mid = 0, high = n - 1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	while (mid <= high)
	{
		if (arr[mid] == 0)
		{
			swap(arr[mid], arr[low]);
			low++;
			mid++;
		}
		else if (arr[mid] == 1)
		{
			mid++;
		}
		else if (arr[mid] == 2)
		{
			swap(arr[mid], arr[high]);
			high--;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << endl << arr[i];
	}

	return 0;
}