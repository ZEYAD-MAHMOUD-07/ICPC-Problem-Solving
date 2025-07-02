// https://codeforces.com/group/E3LUlivnjX/contest/559766/problem/K
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
    char x;
    cin >> x;
    int r, d;
    d = x % 97;
    r = x % 65;
    if (x >= 48 && x <= 57)
        cout << "digit";
    else if (x >= 65 && x <= 90)
        cout << "capital" << " " << r;
    else if (x >= 97 && x <= 122)
        cout << "small" << " " << d;
    else
        cout << "symbol";
}