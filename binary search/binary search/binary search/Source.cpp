#include<iostream>

using namespace std;


int binarysearch(int arr[],int n, int key)
{
	int s = 0 , e = n; //start end
	while (s <= e)
	{	
		int mid = (s + e) / 2;
		if (arr[mid] == key)
			return key;
		else if (arr[mid] < key)
		{
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
	}

	return 0;
}


int main(void)
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int n=10;
	int indx = binarysearch(arr, 9,5 );
	cout << "index of ffound element";
	cout << indx;


	return 0;
}