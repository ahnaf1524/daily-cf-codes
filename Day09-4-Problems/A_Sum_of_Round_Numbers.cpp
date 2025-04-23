// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 23, 2025
// =============================================================
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

void solver() {
  // Solution
  int n; cin >> n;
  vector<int> rounds;
   
  int place = 1;

  while(n > 0) {
    int digit = n % 10;
    if(digit != 0) {
      rounds.push_back(digit * place);
    }
    n/=10;
    place *= 10;
  }
  cout << rounds.size() << endl;
  for(int x : rounds) {
    cout << x << " ";
  }
  cout << endl;
}

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // read testcases
  int tc;
  cin >> tc;
  while(tc--) {
    solver();
  }

  return 0;
}