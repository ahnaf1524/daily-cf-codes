// author : ahnaf_cp
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// O(n) complexity
string removeDuplicates(string s) {
  bool seen[256] = {false};
  string result = "";
  for(char ch : s) {
    if(!seen[ch]) {
      result += ch;
      seen[ch] = true;
    }
  }
  return result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string S;
  cin >> S;  
  string p = removeDuplicates(S);
  cout << (p.length() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
  return 0;
}

// Others Solutions
void Leeisateam(void) {
  // write the below code inside the main();
  char x;
  std::set<char> e;
  while (std::cin >> x) e.insert(x);
  std::cout << (e.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
}

void Keepcoding(void) {
  char x;
  // write the below code inside the main();
  std::set<char> e;
  while (std::cin >> x) e.insert(x);
  std::cout << (e.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}
// Set data structure in c++
