#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> a;
	vector <int> temp;
	a.push_back(1);
	a.push_back(1);

	cout << "enter N" << endl;
	int N;
	cin >> N;
	for (int i = 1; i <=N; i++)  // for N lines
	{
		for (int k = 1; k <=(N - i); k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++) // no of output
		{
			if (i == 1)
			{
				cout << " 1"<<endl;
			}
			
			else //if(i > 2)
			{	
				//if (j == 1)
				{
					cout << "1 ";
					temp.push_back(1);
				}
				//else if(j > 1)
				{
					for (int x = 0; x <(a.size()-1) ; x++)
					{
						cout << a[x] + a[x + 1] << " ";
						temp.push_back(a[x] + a[x + 1]);
					}
					temp.push_back(1);
					a = temp;
					temp.clear();
					cout << "1";
					cout << endl;
				}
				j = i;
			}

		}
	}


	return 0;
}

