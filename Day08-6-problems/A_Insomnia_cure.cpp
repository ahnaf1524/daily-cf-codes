// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 22, 2025
// =============================================================
#include<iostream>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution

  int k, l, m, n, d;
  cin>>k;
  cin>>l;
  cin>>m;
  cin>>n;
  cin>>d;
  int cnt = 0;

  for(int i = 1; i <= d; ++i) {
    if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      ++cnt;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
