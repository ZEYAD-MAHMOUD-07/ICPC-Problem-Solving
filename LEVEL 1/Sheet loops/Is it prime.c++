// https://codeforces.com/group/E3LUlivnjX/contest/561790/problem/K
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
  ll n; cin>>n;
   if(n==1)cout<<"Not Prime"<<endl;
   else{
    bool prime =true;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            prime=false;
            break;
        }
    }
    if (prime)cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
   }
}