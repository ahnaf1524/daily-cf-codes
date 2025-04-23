// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 23, 2025
// =============================================================
#include<iostream>
#include<vector>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution

  int n; cin >> n;
  
  int h[n], g[n];

  for(int i = 0; i < n; ++i) {
    cin >> h[i] >> g[i];
  }

  int cnt = 0;

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      if(i != j && h[i] == g[j]) {
        ++cnt;
      }
    } 
  }

  cout<<cnt<<endl;
  return 0;
}