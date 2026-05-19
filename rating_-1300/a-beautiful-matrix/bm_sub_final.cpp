#include <bits/stdc++.h>
// 263A
using namespace std;
int main () {

  int arr[5][5];
  int swap = 0;
  int const size = 4;
  int value_i, value_j;

  for (int i = 0; i <= size; i++) {
    for (int j = 0; j <= size; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 1) {
        value_i = i;
        value_j = j;
      }
    }
  }
 
  while (value_i != 2) {
    if (value_i < 2) {
      value_i++;
      swap++;
    } else if (value_i > 2) {
      value_i--;
      swap++;
    }
  }
  
  while (value_j != 2) {
    if (value_j < 2) {
      value_j++;
      swap++;
    } else if (value_j > 2) {
      value_j--;
      swap++;
    }
  }
  
  cout << swap << endl;
  
  return 0;
}

