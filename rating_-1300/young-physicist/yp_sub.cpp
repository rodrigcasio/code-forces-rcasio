#include <bits/stdc++.h>
// 69A
using namespace std;

int main () {
  
  int n;
  int n_2;
  int total = 0;
  const int xyz = 3;
  vector<int> sums = {0, 0, 0};
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < xyz; j++) {
      cin >> n_2;
      sums[j] += n_2;
    }
  }

  if (sums[0] == 0 && sums[1] == 0 && sums[2] == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
/*
 * logic:
 *
 * 3 (number of list of x-y-z);
 * x | y | z
 *
 *  4  | 1 | 7
 * -2  | 4 | -1   +
 *  1  |-5 | -3
 * --------------
 * 3  | 0 |  3   = NO
 *
 * 3
 *  3  | -1 | 7
 * -5  | 2 | -4   +
 *  2  |-1 | -3
 * --------------
 *  0 | 0 |  0   = YES
 * 
 * */
