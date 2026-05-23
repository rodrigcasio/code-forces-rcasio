#include <bits/stdc++.h>
using namespace std;

int main () {

  int n, t;
  char child;
  char temp;
  bool x = true;

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
        printf("New value for position arr[%d] = %c\n", j, arr[j]);
        printf("New value for position arr[%d + 1] = %c\n", j, arr[j + 1]);
        j++;
      }
    }
  }

    // x = false;
    // cin >> arr[i];
    // if (!x) { 
    //   if (arr[i] == 'G' && arr[i - 1] == 'B') {
    //     temp = arr[i];
    //     arr[i] = arr[i - 1];
    //     arr[i - 1] = temp;
    //     x = true;
    //   }
    // }
  
  
      // while (arr[i] == 'G') {
      //   if (arr[i - 1] == 'B') {
      //     temp = arr[i];
      //     arr[i] = arr[i - 1];
      //     arr[i - 1] = temp;
      //     cout << "new arr[i] = " << arr[i] << endl;
      //     cout << "new arr[i - 1] = " << arr[i - 1] << endl;
      //   }
      // }
  // for (int j = 0; j < n; j++) {
  //  while (arr[j] == 'B') {
  //    if (arr[j + 1] == 'G') {
  //      temp = arr[j];
  //      arr[j] = arr[j + 1];
  //      arr[j + 1] = temp;
  //      cout << "new arr[i] value: " << arr[j] << endl;
  //      cout << "new arr[i + 1] value: " << arr[j + 1] << endl;
  //    }
  //  }
  // }
  
  for (int w = 0; w < n; w++) {
    cout << arr[w];
  }

  cout << endl;
  
  return 0;
}

/*

  vector<char> kids;
  
  for (int i = 0; i < n; i++) {
    cin >> child;
    kids.push_back(child);
  }

  for (int j = 0; j < n; j++) {
    kids[j];

    while (kids[j] == 'B') {
      if (kids[j + 1] == 'G') {
        temp = kids[j];
        kids[j] == kids[j + 1];
        kids[j + 1] == temp;
        cout << "new arr[i] value: " << arr[j] << endl;
        cout << "new arr[i + 1] value: " << arr[j + 1] << endl;
        j++;
      }
    }
  }

  for (int z = 0; z < n; z++) {
    cout << kids[z];
  }

  Logic

  
  1 to n queue
  n = number of children 
  
  5 1
  B, G, G, B, G
  
  G, B, G, G, B
  
  from second 0 to 1 need to be changed simultaneously
  
*/
