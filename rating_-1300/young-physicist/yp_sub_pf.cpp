#include <bits/stdc++.h>
// 69A printingf version
using namespace std;

int main () {
  
  int n;
  int n_2;
  int total = 0;
  const int xyz = 3;

  cin >> n;

  for (int i = 0; i < n; i++) {
    vector<int> coordinate[n];
    for (int j = 0; j < xyz; j++) {
      cin >> n_2;
      cout << "input: " << n_2 << endl;
      coordinate[n].push_back(n_2);
    }
  }

  
  // if (total == 0) {
  //   cout << "YES" << endl;
  // } else {
  //   cout << "NO" << endl;
  // }

  return 0;
}

/*
 * logic:
 *
 *  3 
 *  4 + 1 + 7 = 12
 *  -2 + 4 + -1 = 1
 *  1 + -5 + -3 = -7
 *
 *  = 6 = NO
 *
 * 3
 * 3 + (-1) + 7 = 9
 * (-5) + 2 + (-4) = -7
 * 2 + (-1) + (-3) = - -2
 * 
 * = 0 = YES
 *
 * */
