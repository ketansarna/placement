#include <iostream>
using namespace std;

int fact(int num)
{
    int ans=1;
    for (int i = num; i > 0; i--)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
                // printing specific element 
    int a, b;
    cout << "enter row column of which you want to know the output of from pascal triangle ";
    cin >> a >> b;
    int ans = fact(a-1)/(fact(b-1)*fact(a-b));
    cout << ans;

                // printing specific row
    cout << "enter row";
    cin >> a;

    
    

    return 0;
}