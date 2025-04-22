// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 21, 2025
// =============================================================
#include<iostream>
#include<string>
#include<set>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution
  int n;cin>>n;

  string str;cin>>str;

  set<char>letters;
  for(char ch : str) {
      letters.insert(tolower(ch));
  }
  cout<<(letters.size() == 26 ? "YES" : "NO") << endl;
  
  return 0;
}

// ========================== My Learnings ==========================
// 1. Pangram = string containing all 26 English letters (case-insensitive).
// 2. Use tolower() to normalize uppercase and lowercase.
// 3. Use set<char> to store unique letters.
// 4. If set size == 26 → it's a pangram.
// 5. Efficient: single pass through string.
// 6. If n < 26 → directly "NO" (can't have all letters).
// 7. STL set is useful for uniqueness problems.
// ==================================================================
