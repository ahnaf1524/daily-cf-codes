// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 22, 2025
// =============================================================
#include<iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution
  int a, b, c;
  cin>>a>>b>>c;
  ll m = a + b * c;
  ll n = a * (b + c);
  ll o = a * b * c;
  ll p = (a + b) * c;
  ll q = a + b + c;
  
  cout<<max({m,n,o,p,q})<<endl;
  return 0;
}