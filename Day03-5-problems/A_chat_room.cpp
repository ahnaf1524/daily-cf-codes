// author : ahnaf_cp
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t = "hello";
  cin >> s;
  auto it = t.begin();
  for (char ch : s) {
    if (ch == *it) ++it;
  }

  cout << (it == t.end() ? "YES" : "NO") << endl;
  return 0;
}