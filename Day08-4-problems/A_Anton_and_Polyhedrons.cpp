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

  int ans = 0;
  int n; cin>>n;

  for(int i = 1; i <= n; ++i) {
    string str; cin >> str;
    if(str == "Tetrahedron") {
      ans+=4;
    }
    if(str == "Cube") {
      ans+=6;
    }
    if(str == "Octahedron") {
      ans+=8;
    }
    if(str == "Dodecahedron") {
      ans+=12;
    }
    if(str == "Icosahedron") {
      ans+=20;
    }
  }

  cout<<ans<<endl;
  return 0;
}
