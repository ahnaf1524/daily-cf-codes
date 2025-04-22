// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 21, 2025
// =============================================================
#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution
  ll n, k;
  cin>>n>>k;
  
  ll odd_cnt = (n + 1) / 2;
  if(k <= odd_cnt){
    cout<<2*k-1<<endl;
  }
  else{
    cout<<2*(k-odd_cnt)<<endl;
  }
  return 0;
}

// =============================== My Learnings ===============================
// 1. Count of Odd Numbers in Range [1, n]  : (n + 1) / 2
//    - This works for both even and odd values of `n`.
//    - Example: n = 7 → (7 + 1) / 2 = 4 odd numbers → [1, 3, 5, 7]

// 2. Count of Even Numbers in Range [1, n] : n / 2
//    - Example: n = 7 → 7 / 2 = 3 even numbers → [2, 4, 6]

// 3. Generating the k-th Odd Number        : 2 * k - 1
//    - 1st odd: 2*1 - 1 = 1
//    - 2nd odd: 2*2 - 1 = 3
//    - 3rd odd: 2*3 - 1 = 5, and so on

// 4. Generating the k-th Even Number       : 2 * k
//    - 1st even: 2*1 = 2
//    - 2nd even: 2*2 = 4
//    - 3rd even: 2*3 = 6, etc.============================================================================ 
