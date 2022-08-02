#include <iostream>
using namespace std;


int main()
{
    int arr[6] = { 10,3,11,4,16,6 };
    int maxprof = 0;
    int min = 9999999;;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if ((arr[i] - min) > maxprof)
        {
            maxprof = arr[i] - min;
        }
    }

    cout << "maxprofit is " << maxprof;
    return 0;
}
