// author : ahnaf_cp
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <utility>
#define endl '\n'

using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string str;
  cin >> str;
  if(str.find("0000000") != string::npos || str.find("1111111") != string::npos) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}


// 🔥 My Learnings
// - How to find consecutive values in a string (like "0000000" or "1111111").
// - Use of string::npos to check if a substring is NOT found.
// - Use of strstr in C for checking a specific substring inside a C-style string (char array).

// Example of string::npos
// string s = "ahnafcoding";
// if(s.find("cp") == string::npos) {
//     cout << "Not found!" << endl;  // Output: Not found!
// }




// string s = "ahnafcoding";
// if (s.find("cp") == string::npos) {
//     cout << "Not found!" << endl;
// }


// Others solution

void codewithsurya(void) {
  // This function uses C-style char array and checks for the patterns "0000000" or "1111111"
  char s[101];
  gets(s); // Reads input (not safe, but works for small problems)
  
  // strstr(s, "0000000") returns a pointer if found, otherwise NULL
  // If any of the two patterns are found, it prints "YES", else "NO"
  puts(strstr(s, "0000000") || strstr(s, "1111111") ? "YES" : "NO");
}


void ragvalod(void) {
  std::string s;
  std::cin >> s;
  
  // Uses .find() to check if "0000000" or "1111111" exist
  // +1 turns the result into a truthy/falsy value
  puts((s.find("0000000") + 1 || s.find("1111111") + 1) ? "YES" : "NO");
}



