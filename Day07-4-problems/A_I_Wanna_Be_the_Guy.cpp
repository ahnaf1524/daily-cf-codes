// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 22, 2025
// =============================================================
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution
  
  int n; cin>>n;

  int p;
  set<int> levels;

  cin>>p;  

  for(int i = 0; i < p; ++i) {
    int x; cin>>x;
    levels.insert(x);
  }
  cin>>p;
  for(int i = 1; i <= p; ++i) {
    int y; cin>>y;
    levels.insert(y);
  }

  cout<<(levels.size() == n ? "I become the guy." : "Oh, my keyboard!") << endl;

  return 0;
}