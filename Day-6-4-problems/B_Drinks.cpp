// author : ahnaf_cp
#include<iostream>
#include<vector>
#include<iomanip>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin>>n;

  vector<int>orange;

  for(int i = 0; i < n; ++i) {
    int val;
    cin>>val;
    orange.push_back(val);
  }

  auto vec_len = orange.size();
  long long sum = 0;
  for(int o : orange) {
    sum+=o;
  }
  cout<<fixed<<setprecision(12)<<(double)sum/(double)vec_len<<endl;
  return 0;
}

//
void optimizedSolution(void) {
  int n;
  cin>>n;
  double sum = 0;
  for(int i = 0; i < n; ++i) {
    int val;
    cin>>val;
    sum+=val;
  }
  cout<<fixed<<setprecision(12)<<(sum / n)<<endl;
}
