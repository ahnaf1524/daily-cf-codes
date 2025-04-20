// author : ahnaf_cp
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string S;
  cin >> S;  
  S[0] = toupper(S[0]);
  cout << S << endl;
  return 0;
}

// uses of toupper() for uppercase specific index
// Others Solutions

void UwUCoN(void) {
  std::string s;
  std::cin >> s;
  if (s[0] > 96) s[0] += -32;
  std::cout << s;
}