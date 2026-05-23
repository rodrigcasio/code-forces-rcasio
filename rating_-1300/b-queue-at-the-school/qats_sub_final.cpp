#include <bits/stdc++.h>
// 226B
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
