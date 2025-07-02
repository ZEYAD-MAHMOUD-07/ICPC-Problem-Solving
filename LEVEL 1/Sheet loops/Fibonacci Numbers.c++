// https://codeforces.com/group/E3LUlivnjX/contest/561790/problem/N
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll f0 = 0, f1 = 1;
    if (n == 1)
        cout << f0;
    else if (n >= 2)
        cout << f0 << " " << f1;

    for (int i = 3; i <= n; i++)
    {
        ll sum;
        sum = f0 + f1;
        cout << " " << sum;
        f0 = f1;
        f1 = sum;
    }
}