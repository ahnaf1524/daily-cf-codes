// author : ahnaf_cp
#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

//Taking input
  int n;
  cin>>n;
  vector<int>V;
  for(int i = 0; i < n; ++i) {
    int val; cin>>val;
    V.push_back(val);
  }
//Solution
  sort(V.begin(),V.end());
  for(int v : V) {
    cout<<v<<" ";
  }
  return 0;
}
