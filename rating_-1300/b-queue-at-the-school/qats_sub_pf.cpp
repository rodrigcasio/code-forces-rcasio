#include <bits/stdc++.h>
using namespace std;

int main () {

  int n, t;
  char child;
  char temp;

  cin >> n >> t;
  char arr[n];
  // vector<char> kids;
  
  // for (int i = 0; i < n; i++) {
  //   cin >> child;
  //   kids.push_back(child);
  // }

  // for (int j = 0; j < n; j++) {
  //   kids[j];
  //
  //   while (kids[j] == 'B') {
  //     if (kids[j + 1] == 'A') {
  //       temp = kids[j];
  //       kids[j] == kids[j + 1];
  //       kids[j + 1] == temp;
  //       j++;
  //     }
  //   }
  // }

  for (int j = 0; j < n; j++) {
   cin >> arr[j];
   cout << arr[j];
   while (arr[j] == 'B') {
     if (arr[j + 1] == 'A') {
       temp = arr[j];
       arr[j] = arr[j + 1];
       arr[j + 1] = temp;
       cout << "new arr[i] value: " << arr[j] << endl;
       cout << "new arr[i + 1] value: " << arr[j + 1] << endl;
       
       j++;
     }
   }
  }
  
  for (int j = 0; j < n; j++) {
    
  }
  

  // while ( < n) {
  //   if (arr[i] == 'B' && arr[i + 1] == 'G') {
  //     temp = arr[i];
  //     cout << "value temp: " << temp << endl;
  //     arr[i] = arr[i + 1];
  //     cout << "new val of arr[i]: " << arr[i] << endl;
  //     arr[i + 1] = temp;
  //     cout << "new val of arr[i + 1]: " << arr[i + 1] << endl;
  //   }
  //   if (temp )
  //   i++;
  // }

  for (int z = 0; z < n; z++) {
    cout << arr[z];
  }
  
  cout << endl;
  
  return 0;
}

/*

  Logic

  
  1 to n queue
  n = number of children 
  
  5 1
  B, G, G, B, G
  
  G, B, G, G, B
  
  from second 0 to 1 need to be changed simultaneously
  
*/
