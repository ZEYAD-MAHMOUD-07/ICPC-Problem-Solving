// https://codeforces.com/group/E3LUlivnjX/contest/561790/problem/J
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
  int n; cin>>n;
  for(int i=2;i<=n;i++){
    bool prime=true;
    for(int j=2;j<i;j++){
        if(i%j==0){
          prime=false;
        }
    }
    if(prime)cout<<i<<" ";
  }
  return 0;
}