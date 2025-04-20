#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m, a, x, y;
  cin >> n >> m >> a;
  if(n % a == 0) {
    x = n / a;
  } 
  else {
    x = n / a + 1;
  }
  if(m % a == 0) {
    y = m / a;
  } 
  else {
    y = m / a + 1;
  }
  cout << x * y << endl;
  return 0; 
}