#include <iostream>

typedef long long ll;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll k, n, w;
  cin >> k >> n >> w;
  ll sum = 0;
  for (int i = 1; i <= w; ++i) {
    sum += (i * k);
  }
  cout << (n >= sum ? 0 : sum - n) << endl;
  return 0;
}

void hamzah03280718(void) {
  // #import <cstdio>
int k, n, w;
// main() {
  scanf("%d%d%d", &k, &n, &w);
  printf("%d", (k *= w++ * w / 2) > n ? k - n : 0);
// }
}

// The expression w++ * w / 2 is a clever trick used to compute the sum of the first w natural numbers.
// It effectively evaluates to w * (w + 1) / 2, which is the standard mathematical formula for calculating
// the sum of the first w positive integers: 1 + 2 + 3 + ... + w.

