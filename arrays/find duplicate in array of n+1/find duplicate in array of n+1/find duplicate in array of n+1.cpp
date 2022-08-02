#include <iostream>
using namespace std;


int main()
{
    int arr[7] = { 3,4,3,1,2,6,5 };
    int fast;
    int slow = fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
        cout << slow << endl;
    } while (slow != fast);                // while baad mai aiga bcoz at first slow = first = arr[0] hai 
    cout << "collision is " << slow;
    fast = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    cout << "repeating element is " << slow;  // can be fast too since they are on the same point 

    return 0;
}