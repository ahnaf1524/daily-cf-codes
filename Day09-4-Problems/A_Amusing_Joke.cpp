// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 23, 2025
// =============================================================
#include<iostream>
#include<algorithm>
#include<string>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution
  string a, b, c; cin >> a >> b >>c;
  string checker = a + b;

  sort(c.begin(), c.end());
  sort(checker.begin(), checker.end());
  
  if(checker == c) {
    cout <<"YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
  return 0;
}