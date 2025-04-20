// author : ahnaf_cp
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t;
  cin>>s>>t;
  string r = s;
  reverse(r.begin(), r.end());
  if(r == t) {
    cout<<"YES"<<endl;
  }
  else if(s == t){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}

