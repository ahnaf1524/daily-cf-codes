// ahnaf_cp
#include <algorithm>
#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  if (s.length() == 1) {
    cout << s << endl;
  } else {
    vector<char> d;

    for (char ch : s) {
      if (isdigit(ch)) {
        d.push_back(ch);
      }
    }

    // sort
    sort(d.begin(), d.end());
    // print
    int vec_size = d.size();
    --vec_size;

    for (int it = 0; it < (int)vec_size; ++it) {
      cout << d[it] << "+";
    }
    cout << d[vec_size] << endl;
  }
  return 0;
}

// What i newly learn
// 1. if string has only character string length is 1
// 2. isdigit() for checking decimal 
// 3. character type vector and insert data
// 4. range loops, vector size calculation
// 5. sort() function for sorting in ascending order


// Others solution
void NayArt(void) {
// execute in 30ms
// #include <bits/stdc++.h>
// using namespace std;
int a[105], n, i = 2;
// main() {
  while (cin >> a[n++]);
  sort(a, a + n);
  cout << a[1];
  for (; i < n; i++) cout << '+' << a[i];
// }
}

