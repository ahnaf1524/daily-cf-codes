// auhtor : ahnaf_cp
#include<iostream>
#define endl '\n'
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc, cnt = 0;
  cin>>tc;
  while(tc--) {
    int a, b; cin>>a>>b;
    if(a % b == 0) {
      cout<<0<<endl;
    }
// I got tle on this below code
//    else{
//      while(true) {
//        a++;
//        cnt++;
//        if(a % b == 0) {
//          break;
//        }
//      }
//      cout<<cnt<<endl;
//      cnt=0;
//    }
    else{
      // here is the trick i applied
      cout<<b-(a % b)<<endl;
    }
  }
  return 0;
}
