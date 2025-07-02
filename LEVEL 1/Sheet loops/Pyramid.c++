// https://codeforces.com/group/E3LUlivnjX/contest/561790/problem/P
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
    for (int i = 1; i <= n; i++)
    {
        for (int spa = 1; spa <= n - i; spa++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}