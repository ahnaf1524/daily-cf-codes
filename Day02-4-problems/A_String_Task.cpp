// ahnaf_cp
#include <algorithm>
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <cstring>
#define endl '\n'

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  vector<char> vec;

  for (char ch : s) {
    if (!(ch == 'A' || ch == 'a' || ch == 'o' || ch == 'O' || ch == 'Y' || ch == 'y' || ch == 'e' || ch == 'E' || ch == 'U' || ch == 'u' || ch == 'i' || ch == 'I')) {
        vec.push_back(tolower(ch));
    }
  }

  for (int it = 0; it < (int)vec.size(); ++it) {
    cout << '.' << vec[it];
  }
  return 0;
}
// My learnings 
// From this code, I learned how to filter out specific characters (like vowels) from input using C-style character arrays and functions like `strchr`. I also discovered a clever bitwise trick (`c |= 32`) to convert uppercase letters to lowercase without using standard library functions. Additionally, I practiced reading character input using `std::cin`, processing it in a loop, and formatting the output using `std::cout`. This code helped me understand how to manipulate characters efficiently and use conditionals to selectively print results.
// uses of tolower(), isupper(), islower(), toupper()
// introduce with <cctype>
// others solution

void HiAryanBansal(void) {
  // #import <bits/stdc++.h>
char a[] = "aoyeui", c;
// main() {
while (std::cin >> c) {
    if (!strchr(a, c |= 32))  std::cout << '.' << c;
}
}