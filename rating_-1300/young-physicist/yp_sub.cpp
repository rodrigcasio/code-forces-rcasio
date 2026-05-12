#include <iostream>
#include <vector>
using namespace std;

int main () {
  
  int n;
  int n_2;
  int total = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> n_2;
      total += n_2;
    }
  }
  
  if (total == 0) {
    cout << "YES" << endl;
  } else if (total > 0 || total < 0) {
    cout << "NO" << endl;
  }

  return 0;
}

/*
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
