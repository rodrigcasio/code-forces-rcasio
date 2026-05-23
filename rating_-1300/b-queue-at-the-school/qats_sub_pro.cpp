#include <bits/stdc++.h> // 266B improved version
using namespace std;

int main () {
  
  int n, t;
  cin >> n >> t;

  string s;
  cin >> s;

  for (int time = 0; time < t; time++) {
    for (int j = 0; j < n - 1; j++) {     // important: time < n - 1
      if (s[j] == 'B' && s[j + 1] == 'G') {
        swap(s[j], s[j + 1]);
        j++;
      }
    }
  }

  cout << s << endl;

  return 0;
}
