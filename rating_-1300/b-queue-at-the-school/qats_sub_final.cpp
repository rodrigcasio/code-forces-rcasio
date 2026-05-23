#include <bits/stdc++.h>
// 266B
using namespace std;

int main () {

  int n, t;
  char temp;
  
  cin >> n >> t;
  char arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[j] == 'B' && arr[j + 1] == 'G') {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        j++;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%c", arr[i]);
  }
  
  cout << endl;

  return 0;
}

/*

  Logic

  n = number of children 
  t = time
  
  5 1
  B, G, G, B, G 
  G, B, G, G, B
  
  from second 0 to 1 need to be changed simultaneously
  every swap, we jump to the next iteration past the kid just swapped.
  

*/
