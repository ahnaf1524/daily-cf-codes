#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string A, B;
  cin >> A >> B;

  for (char& c : A) {
    c = tolower(c); 
  }

  for (char& c : B) {
    c = tolower(c);  
  }

  // Compare the strings lexicographically
  if (A < B) {
    cout << "-1" << endl;  // A comes before B
  } else if (A > B) {
    cout << "1" << endl;  // A comes after B
  } else {
    cout << "0" << endl;  // A is equal to B
  }

  return 0;
}


void solBy_aryans1319() {
char s[101], f[101];
// below code is inside the main()
// This code run on 62ms
  std::cin >> s >> f;
  std::cout << stricmp(s, f);
}