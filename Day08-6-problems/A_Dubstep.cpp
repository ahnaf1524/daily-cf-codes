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

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution
  
  string str; cin>>str;

  bool space = false;

  for(int i = 0; i < str.size();) {
    if(i + 2 < str.size() && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
      if(space) cout << " ";
      
      i+=3;

      space = false;
    }
    else {
      cout<<str[i];
      space = true;
      ++i;
    }
  }

  cout<<endl;
  return 0;
}