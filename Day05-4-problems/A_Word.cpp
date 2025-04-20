// author : ahnaf_cp
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string str;
  cin >> str;
  int cnt_upper = 0, cnt_lower = 0;
  for (char ch : str) {
    if (isupper(ch)) {
      cnt_upper++;
    } else if (islower(ch)) {
      cnt_lower++;
    }
  }

  if (cnt_upper > cnt_lower) {
    for (char &ch : str) {
      ch = toupper(ch);
    }
  } else {
    for (char &ch : str) {
      ch = tolower(ch);
    }
  }
  cout << str << endl;
  return 0;
}



// others solutions
void NayArt(void) { // Exec Time : 30ms

//#import <iostream>
//main() {
  std::string s;
  int u = 0, l = 0;
  std::cin >> s;
  for (char c : s) (isupper(c) ? u : l)++;
  for (char c : s) std::cout << char((u > l) ? toupper(c) : tolower(c));
//}
}
void OrazB(void) { // Exec Time : 0ms
//  #import <cstdio>
int a, b, i, j;
char t[101];
//main() {
  for (scanf("%s", t); t[i];) t[i++] < 96 ? a++ : b++;
  for (; t[j]; j++)
    putchar(a > b ? t[j] - (t[j] > 96) * 32 : t[j] + (t[j] < 96) * 32);
//}
}

void solutionWithSTL(void) {
  string str;
  cin>>str;
  int cnt_upper = count_if(str.begin(), str.end(), ::isupper);
  int cnt_lower = count_if(str.begin(), str.end(), ::islower);
  transform(str.begin(), str.end(), str.begin(), cnt_upper > cnt_lower ? ::toupper : ::tolower);
  cout<<str;
}
