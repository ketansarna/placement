#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
	int x = 0, y = 0;  // rows and colums
	int arr[20][20]; // main array
	int mx[20][20];  // array to store position of 0

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{									// initialising mx with 0
			mx[i][j] = 0;
		}
	}

	cout << "enter rows and column of array"<<endl;
	cin >> x >> y;
	cout << "enter array" << endl << endl;

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			cin >> arr[i][j];				// input arr
		}
	}

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			if (arr[i][j] == 0)
			{	
				mx[i][j] = 1;
			}							// marking 1 in mx where ever there is 0 in arr
		}
	}

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (mx[i][j] == 1)
			{
				for (int k = 1; k <= y; k++)
				{
					arr[i][k] = 0;
				}
				for (int k = 1; k <= x; k++)		// marking 0 in arr according to the mx array
				{
					arr[k][j] = 0;
				}
			}
		}	
	}

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;					//output
	}

	return 0;
}
*/

   // efficient approach 

int main()
{
	int x = 0, y = 0;  // rows and colums
	int arr[20][20]; // main array

	cout << "enter rows and column of array" << endl;
	cin >> x >> y;
	cout << "enter array" << endl << endl;

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			cin >> arr[i][j];				// input arr
		}
	}

	vector <int> a(x);
	vector <int> b(y);   // convert this in array then it will work , fuck you visual studio fucking piece of shit

	
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			if (arr[i][j] == 0)
			{
				a[i] = 0;
				b[j] = 0;
			}
		}
	}

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			if (a[i]==0||b[j]==0)
			{
				arr[i][j] = 0;
			}
		}
	}

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			//if (a[i] == 0 || b[j] == 0)
			{
				cout<<arr[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}