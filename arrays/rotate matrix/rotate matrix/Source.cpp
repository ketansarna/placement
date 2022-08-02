#include <iostream>
using namespace std;




int main()
{
	int arr[20][20];
	int arrt[20][20];
	int arr90[20][20];
	cout << "enter no of rows and columns" << endl; 
	int r, c;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < c; i++)
	{
		int x = (r - 1);

		for (int j = 0; j < r; j++,x--)
		{
			arr90[i][j] = arr[x][i];
		}
		
	}

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cout << arr90[i][j];
		}
		cout << endl;
	}

	//transpose of matrix
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arrt[i][j] = arr[j][i];
		}
	}
	/// then reverse the rows 





	return 0;
}