// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 23, 2025
// =============================================================
#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
#define endl '\n'
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution
  
  string str; cin >> str;
  bool allUpper = true;
  bool exceptFirstUpper = true;
  for(int i = 0; i < str.length(); ++i) {
    if(!isupper(str[i])) {
      allUpper = false;
    }
    if(i > 0 && !isupper(str[i])) {
      exceptFirstUpper = false;
    }
  }

  // exceptFirstUpper ---> all characters except the first one are uppercase --> hELLO --> Hello
  // allUpper ---> all characters of the string are in uppercase --> HELLO --> hello

  if(allUpper || exceptFirstUpper) {
    for(char &c : str) {
      if(isupper(c)) {
        c = tolower(c);
      }
      else {
        c = toupper(c);
      }
    }
  }
  cout << str << endl;
  return 0;
}

// My learnings 
// use reference operator for modify character in strings



void solveWithStl(void) {
  // headers
  // #include <algorithm>  // for transform, all_of
  // #include <cctype>     // for isupper, tolower, toupper

  string str; cin>>str;
  bool allUpperCase = all_of(str.begin(), str.end(), ::isupper);
  bool exceptFirstUpperCase = all_of(str.begin() + 1 , str.end(), ::isupper);

  if(allUpperCase || exceptFirstUpperCase) {
    transform(str.begin(), str.end(), str.begin(), ::islower);
  }
  cout << str << endl;
}