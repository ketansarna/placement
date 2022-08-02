#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter row column ";
    cin>>a>>b;
    int ans=1;

    for(int i=0;i<b-1;i++)
    {
        ans = ans * ((a-1)/(b-1));
        a--;
        b--;                              // some problem in solving shortcut methond , use factorial instead i guess
    }

    //cout <<endl<<ans;

    int fact(int num)
    {   
        int ans;
        for(int i=1;i<num;i++)
        {
            ans = num*(num-1);
            num--;
        }
        return ans;
    }

    cout<<fact(5);


    return 0;
}