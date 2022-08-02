#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "eneter n"<<endl;
    cin >> n;
    int* arr= new int[n];
    cout << "enter values" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // math approach 
    int S = (n * (n + 1)) / 2;
    int SOS = n * ((n + 1) * ((2 * n) + 1)) / 6;
    for (int i = 0; i < n; i++)
    {
        S -= arr[i];    // s - s'
        SOS -= (arr[i] * arr[i]); //sos- sos'
    }
    int X = ((SOS / S) + S) / 2;
    int Y = -(S - X);

    cout << "missing number is " << X << endl;
    cout << "repeating number is " << Y << endl;
    
    // xor approach
    int xor1;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        xor1 = xor1 ^ i;
    }

    int rsb = xor1 & ~(xor1 - 1);       // set bit number , rightmost bit ,  jo actual mai left pe hai
    X = Y = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & rsb)
        {
            X = X ^ arr[i];
        }
        else
        {
            Y = Y ^ arr[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i & rsb)
        {
            X = X ^ i;
        }
        else
        {
            Y = Y ^ i;
        }
    }

    cout << X << " " << Y << endl;


    return 0;
}
