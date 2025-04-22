// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : April 22, 2025
// =============================================================
#include<iostream>
#include<set>
#include<string>
#define endl '\n'
#define MAX 1005
using namespace std;
typedef long long ll;

int main() {
  // fast io
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Solution
  string str;
  getline(cin, str);
  set<char>mySet;

  for(char ch : str) {
    if(isalpha(ch)) {
      mySet.insert(ch);
    }
  }

  cout<<mySet.size()<<endl;

  return 0;
}

// My Learnings
// 1. How to take input in a set when the string has extra characters like commas, quotes, and brackets.
//    → Just pick out only the alphabet letters and put them into the set.
// 2. isalpha() helps to check if a character is a letter (a-z or A-Z).
