// author : ahnaf_cp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin>>n;
  vector<int> A(n);

  int total_sum = 0;

  for(int i = 0; i < n; ++i) {
    cin>>A[i];
    total_sum+=A[i];
  }
  sort(A.begin(), A.end(), greater<int>());

  int my_sum = 0, cnt = 0;

  for(int i = 0; i < n; ++i) {
    my_sum += A[i];
    cnt++;
    if(my_sum > total_sum - my_sum) {
      break;
    }
  }
  cout<<cnt<<endl;
  return 0;
}

// my learnings
//1. Greedy problems (pick biggest first)
//2.`sort(A.begin(), A.end(), greater<int>());` for descending order sorting
//3. Descending order :  9, 7, 5, 3, 1...
//4. Ascending order : 1, 2, 3, 4, 5...
//5. greater<int> is a function object (also called functor) defined in the C++ Standard Library (<functional>) that allows you to compare two  integers using the greater-than operator (>).
/*
By default, sort() in C++ arranges elements in ascending order using the < operator.

If you want to sort in descending order, you need to change the comparison to > — and that’s exactly what greater<int>() does.


*/
