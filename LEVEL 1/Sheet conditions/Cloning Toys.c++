// https://codeforces.com/group/E3LUlivnjX/contest/559766/problem/Z
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
    int c, o;
    cin >> c >> o;
    int rem = c - (o - 1);
    if (o == 0 || (o == 1 && c > 0))
        cout << "No";

    else
    {
        if (rem % 2 == 0 && rem >= 0)
            cout << "Yes";
        else
            cout << "No";
    }
}