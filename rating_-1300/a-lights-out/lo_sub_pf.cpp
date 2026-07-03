#include <bits/stdc++.h>
using namespace std;

int main () {
  int arr[3][3] = {0};
  
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;

  for (int i = 0; i <= 2; ++i) {
    for (int j = 0; j <= 2; ++j) {
      cin >> x;
     
      if (i == 0 && j == 1) {
        if (x % 2 == 0) {
          arr[i][j] = 0;
          arr[i+1][j] = 0;
          arr[i][j+1] = 0;
          arr[i][j-1] = 0;
        } else {
          arr[i][j] = 1;
          arr[i+1][j] = 1;
          arr[i][j+1] = 1;
          arr[i][j-1] = 1;
        }
      } else if (i == 1 && j == 0) {
        if (x % 2 == 0) {
          
        } else {
          
        }
        
      } else if (i == 1 && j == 1) {
        if (x % 2 == 0) {
          
        } else {
          
        }
        
      } else if (i == 1 && j == 2) {
        if (x % 2 == 0) {
          
        } else {
          
        }
        
      } else if (i == 2 && j == 1) {
        if (x % 2 == 0) {
          
        } else {
          
        }
        
      }



      // if (x % 2 == 0) {
      //   if (x == 1) {
      //     arr[i][j] = 0;
      //
      //   } else {
      //     arr[i][j] = 1;
      //   }
      // }
      cout << arr[i][j];
    }
    cout << "\n";
  }

  return 0;
}
