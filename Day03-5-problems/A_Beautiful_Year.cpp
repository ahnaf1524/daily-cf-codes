#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

bool allDigitsDifferent(int y) {
  string s = to_string(y);
  set<char> digits(s.begin(), s.end());
  return digits.size() == 4;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int y;
  cin >> y;
  while (true) {
    y++;
    if (allDigitsDifferent(y)) {
      cout << y << endl;
      break;
    }
  }
  return 0;
}

// My learnings
// 1. Set data structure that only store uniq elements not store duplicate elements


// Others Solutions

void KoKoDuDu(void) {

  // 30 ms solve
  // #include <iostream>
  int C(int x) {
  for (i = 0; i < 10; i++) s[i] = 0;
  for (; x; s[x % 10]++, x /= 10)
    if (s[x % 10]) return 1;
  return 0;
}
int i, n, s[10];

// main() {
  for (std::cin >> n; C(++n););
  std::cout << n;
// }
}

void bhaskar3(void) {
// 62 ms solution
  // #include <iostream>
// using namespace std;
// int main() {
  int n, a, b, c, d;
  cin >> n;
  do n++, a = n / 1000, b = (n / 100) % 10, c = (n / 10) % 10, d = n % 10;
  while (a == b || a == c || a == d || b == c || b == d || c == d);
  cout << n;
// }
}
