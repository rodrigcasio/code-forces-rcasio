#include <bits/stdc++.h>
using namespace std;

int main () {

  int i, n, t;
  char temp, boy, girl;

  cin >> n >> t;
  char arr[n];
  for (i = 0; i < n; i++) {
   cin >> arr[i];
  }
  
  i = 0;

  while (i < n) {
    if (arr[i] == 'B' && arr[i + 1] == 'G') {
      temp = arr[i];
      cout << "value temp: " << temp << endl;
      arr[i] = arr[i + 1];
      cout << "new val of arr[i]: " << arr[i] << endl;
      arr[i + 1] = temp;
      cout << "new val of arr[i + 1]: " << arr[i + 1] << endl;
    }
    if (temp )
    i++;
  }

  for (int j = 0; j < n; j++) {
    cout << arr[j];
  }
  
  
  return 0;
}

/*

  Logic
  
  1 to n queue
  n = number of children 
  
  5 1
  B, G, G, B, G
  
  G, B, G, G, B


  
  

*/
