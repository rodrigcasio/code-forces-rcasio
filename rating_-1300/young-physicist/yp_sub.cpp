#include <bits/stdc++.h>
// using namespace std;

int main () {
  
  int n;
  int total = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int res;
    cin >> res;
    
    total += res;
  }
  
  if (total == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
