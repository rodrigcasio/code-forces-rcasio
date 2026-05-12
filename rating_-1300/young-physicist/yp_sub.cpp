#include <bits/stdc++.h>
using namespace std;

int main () {
  
  int n;
  int n_2;
  
  int total = 0;
  vector<int> numbers;

  cin >> n;

  for (int i = 0; i < n; i++) {
    while (cin >> n_2) {
      numbers.push_back(n_2);
      total += n_2;
    }
  }
  
  if (total == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
