#include<iostream>
using namespace std;


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  cout<<(n % 5 == 0 ? n / 5 : n / 5 + 1)<<endl;
  return 0;
}

// What I learn
// Tricks for rounding integer using this formula 
// ceil(a / b) = (a + b - 1) / b
// Others solutions

void user_190340014(void) {
  // runs on just 15ms
  int a;
  std::cin >> a;
  std::cout << (a + 4) / 5;
}

