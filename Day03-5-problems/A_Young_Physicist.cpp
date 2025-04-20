// author : ahnaf_cp
#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int sumVec(vector<int>& vec) {
  int sum = 0;
  for (int v : vec) {
    sum += v;
  }
  return sum;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> A, B, C;
  for (int i = 1; i <= n; ++i) {
    int x, y, z;
    cin >> x >> y >> z;
    A.push_back(x);
    B.push_back(y);
    C.push_back(z);
  }

  int sum_A_vec = sumVec(A), sum_B_vec = sumVec(B), sum_C_vec = sumVec(C);

  if (sum_A_vec == 0 && sum_B_vec == 0 && sum_C_vec == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}

// What I learn
// 🤯 The Trick: (d | e | f ? "NO" : "YES")
// This uses the bitwise OR | to combine d, e, and f.

// If any of them is non-zero, the result will be non-zero → "NO"

// If all are zero, the result is zero → "YES"
// Others Solves

void NayArt(void) { // --> exec within 30ms

  // #include <iostream>
int n, a, b, c, d, e, f;
// main() {
  std::cin >> n;
  while (n--) {
    std::cin >> a >> b >> c, d += a, e += b, f += c;
  }
  std::cout << (d | e | f ? "NO" : "YES");
// }
}