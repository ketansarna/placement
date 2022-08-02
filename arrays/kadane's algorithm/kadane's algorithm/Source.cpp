#include <iostream>

using namespace std;

int main()
{
	int max = -99999999;
	
	cout << "no of element daloooooooooo" << endl;
	int n;
	cin >> n;
	int *arr = new int[n];
	cout << " array daloooooooooooo"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		int sum = arr[i];

		
		for (int j = i+1; j <= n; j++)
		{
			
			if (sum > max)
				max = sum;
		
			if (i == n)
				break;
			sum += arr[j];
			if (sum > max)
				max = sum;
		
		}
		
	}
	cout << "max subarray is " << max;

	return 0;
}