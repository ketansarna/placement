#include <iostream>

using namespace std;


int search(int arr[],int n,int key)
{
    int s = 0, e = n, mid;
    while(s<=e) // showing error here but no error actually
    {
        mid = (s + e) / 2;
        //cout << mid;
        if (arr[mid] == key)
            return mid;
        else if (arr[s] <= arr[mid])  // chek is left side is sorted  step 1 
        {
            if (arr[s] <= key && arr[mid - 1] >= key)    // step 2 chek if the key is in this part of array or not  
            {
                e = mid - 1;
            }
            else s = mid + 1;                               // if not then check the other side

        }
        else if (arr[mid] <= key && arr[e] >= key)    
            s = mid + 1;
        else e = mid - 1;

    }


    return -1;
}


int main()
{
    int arr[10] = { 3,4,5,6,7,8,9,0,1,2 };
    int n = 9;
    int key = 3;
    int ans = search(arr, n, key);
    cout << "the ans is " << ans;


    return 0;
}
