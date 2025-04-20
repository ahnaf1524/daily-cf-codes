// author : ahnaf_cp
#include<iostream>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin>>n; 
  ll even_cnt = n / 2, odd_cnt = n - even_cnt;
  ll evenS = even_cnt * (even_cnt + 1), oddS = odd_cnt * odd_cnt;
  cout<<evenS-oddS<<endl;

  return 0;
}

// My learnings
// Even Count using : n / 2
// Odd Count using : n - evenCount
// Sum of first k even numbers : k * (k + 1)
// Sum of first k odd numbers : k ^ 2
// k is the nth value 


// Others Solutions


void Butterfly_effect(void) { // 31ms
//   #include <iostream>
// main() {
  long long n;
  std::cin >> n;
  std::cout << n / 2 - n % 2 * n;
// }
}