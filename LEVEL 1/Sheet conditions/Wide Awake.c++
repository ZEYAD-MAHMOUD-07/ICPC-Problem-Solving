// https://codeforces.com/group/E3LUlivnjX/contest/559766/problem/R
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y, c, g, h;
    g = 00;
    h = 23;
    cin >> x >> y;
    c = y % 45;
    if (y == 45)
        cout << x << " " << g;
    else if (y > 45)
        cout << x << " " << y - 45;
    else if (y < 45 && x >= 1)
        cout << x - 1 << " " << 60 - (45 - c);
    else if (x == 00 && y < 45)
        cout << h << " " << 60 - (45 - c);
}