// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 22, 2025
// =============================================================
#include<iostream>
#define endl '\n'
using namespace std;
typedef long long ll;

// efficient algo for check lucky number or not
bool isLuckyDigitNumber(int n) {
  while(n > 0) {
    int d = n % 10;
    if(d != 4 && d != 7) return false;
    n/=10;
  }
  return true;
}

bool almostLucky(int n) {
  for(int i = 1; i <= n; ++i) {
    if(isLuckyDigitNumber(i) && n % i == 0) {
      return true;
    }
  }
  return false;
}

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution

  int n; cin>>n;

  if(isLuckyDigitNumber(n)) {
    cout<<"YES" << endl;
  }
  else if(almostLucky(n)) {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}

// My learnings
// 1. How to check lucky numbers
