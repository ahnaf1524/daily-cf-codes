// author : ahnaf_cp
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin>>n;
  string str;
  cin>>str;
  char A = 'A', B = 'D';
  int cnt_A = count(str.begin(), str.end(), A);
  int cnt_B = count(str.begin(), str.end(), B);
  cout << (cnt_A > cnt_B ? "Anton" : (cnt_B > cnt_A ? "Danik" : "Friendship")) << endl;
}


// void moreOptimizedSolve(void) {
  
//   int n;
//   string str;
//   cin >> n >> str;

//   int cnt_A = ranges::count(str, 'A');
//   int cnt_B = n - cnt_A;

//   cout << (cnt_A > cnt_B ? "Anton" : (cnt_B > cnt_A ? "Danik" : "Friendship")) << endl;
// }