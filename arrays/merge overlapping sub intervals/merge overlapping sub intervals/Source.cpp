#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <vector <int>> a= { {1,3},{2,6},{15,18},{8,10} };
	sort(a.begin(), a.end());

	vector <vector <int>> c;


	for (int i = 0; i < a.size(); i++)
	{
		if (c.empty() || c.back()[1] < a[i][0])
		{
			vector <int> b = {
				a[i][0],
				a[i][1]
			};
			c.push_back(b);
		}
		else
		{
			c.back()[1] = max(c.back()[1], a[i][1]);
		}
	}

	cout << "the merged array is "<<"\n";
	for (auto it : c) {
		cout << it[0] << " " << it[1] << "\n";
	}
	return 0;
}