#include <iostream>

using namespace std;

double power(double pow,double num)
{
    double a=1;
    for (int i = 0; i < pow; i++)
        a = a * num;
    return a;
}

double nthroot(double num,double pow)
{
    double s = 1;
    double e = num;
    double mid;
    while ((e - s) > (1e-6))
    {
         mid = (s + e) / 2;
        if (power(pow, mid) > num)
        {
            e = mid;
        }
        else
            s = mid;

    }

    return mid;
}


int main()
{
    cout << " enter power and num ";
    double pow, num;
    cin >> pow >> num;
    double ans = nthroot(num, pow);;
    cout << ans;


    return 0;
}

