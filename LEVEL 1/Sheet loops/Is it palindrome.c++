// https://codeforces.com/group/E3LUlivnjX/contest/561790/problem/L
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
  long long n, original, reversed = 0;
  cin >> n;
  original = n;

  while (n > 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  
  }
   if (original == reversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}