#include <iostream>

using namespace std;


int one(int arr[],int n)
{
	int s = 0, e = n;
	while (e >= s)
	{
		int mid = (s + e) / 2;
		if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
		{
			return arr[mid];
		}
		else if(arr[mid])
	}

}


int main()
{
	int arr[11] = { 1,1,2,2,3,4,4,5,5,6,6 };

	

	return 0;
}

