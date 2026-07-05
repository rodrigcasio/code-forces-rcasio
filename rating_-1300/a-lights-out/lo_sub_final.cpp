#include <bits/stdc++.h> // 275A
using namespace std;

int main () {
  
  ios::sync_with_stdio(0);
  cin.tie(0);

  // std::vector<std::vector <int>> arr (3, std::vector<int> (3, 1)); // modern way
  int arr[3][3] = {
    {1, 1, 1 },
    {1, 1, 1 },
    {1, 1, 1 }
  };
  
  int x;

  for (int i = 0; i <= 2; ++i) {
    for (int j = 0; j <= 2; ++j) {
      cin >> x;

      if (x % 2 != 0) {
        if (i == 0 && j == 0) {
            // light pressed evaluation:
          ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);

          // innevitable changes for adjacent lights 
          ((arr[i][j+1] == 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);
          ((arr[i+1][j] == 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);

        } else if (i == 0 && j == 1) {
            ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);
            
            ((arr[i+1][j] == 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
            ((arr[i][j+1] == 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);
            ((arr[i][j-1] == 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);

        } else if (i == 0 && j == 2) {
            ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);
 
            ((arr[i][j-1] == 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
            ((arr[i+1][j] == 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);

        } else if (i == 1 && j == 0) {
            ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);

            ((arr[i+1][j] == 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
            ((arr[i-1][j] == 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
            ((arr[i][j+1] == 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1); 

        } else if (i == 1 && j == 1) {
            ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);

            ((arr[i-1][j] == 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
            ((arr[i+1][j] == 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
            ((arr[i][j-1] == 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
            ((arr[i][j+1] == 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);

        } else if (i == 1 && j == 2) {
            ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);

            ((arr[i-1][j] == 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
            ((arr[i][j-1] == 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
            ((arr[i+1][j] == 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);

        } else if (i == 2 && j == 0) {
            ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);

            ((arr[i-1][j] == 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
            ((arr[i][j+1] == 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);

        } else if (i == 2 && j == 1) {
            ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);

            ((arr[i-1][j] == 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
            ((arr[i][j-1] == 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
            ((arr[i][j+1] == 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);

        } else if (i == 2 && j == 2) {
            ((arr[i][j] == 1) ? arr[i][j] = 0 : arr[i][j] = 1);

            ((arr[i][j-1] == 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
            ((arr[i-1][j] == 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
        }
      } 
    }
  }
  
  for (const auto& row : arr) {
    for (int n : row) {
      cout << n;
    }
    cout << "\n";
  }
  
  // for (int r = 0; r <= 2; ++r) {
  //   for (int c = 0; c <= 2; ++c) {
  //     cout << arr[r][c];
  //   }
  //    cout << "\n";
  // }

  return 0;
}

