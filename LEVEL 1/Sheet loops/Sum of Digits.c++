// https://codeforces.com/group/E3LUlivnjX/contest/561790/problem/D
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ll num, sum = 0;
    cin >> num;
    while (0 < num)
    {
        sum += num % 10;

        num /= 10;
    }
    cout << sum;
}