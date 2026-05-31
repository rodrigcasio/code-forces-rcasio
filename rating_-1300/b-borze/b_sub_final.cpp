#include <bits/stdc++.h> // 32B
using namespace std;

int main () {

  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    while (s[i] == '.') {
      if (s[i + 1] == '-' || s[i + 1] == '.' || s[i + 1] == '\0') {
        cout << 0;
        break;
      } else if (s[i - 1] == '-') {
        cout << 1;
      }
      i++;
      break;
    }

    while (s[i] == '-') {
      if (s[i + 1] == '.') {
        cout << 1;
      } else if (s[i + 1] == '-' || s[i - 1] == '-') {
        cout << 2;
      }
      i++;
      break;
    }
  }

  cout << endl;

  return 0;
}
