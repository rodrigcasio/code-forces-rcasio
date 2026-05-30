#include <bits/stdc++.h>
using namespace std;

int main () {

  string s;
  cin >> s;
  
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '.' && s[i + 1] == '-') {
      cout << 0 << endl;
      i++;
      cout << "new value of i: " << i << endl;
    } else if (s[i] == '.' && s[i - 1] == '-' && s[i]) {
      cout << 1 << endl;
      i++;
      cout << "new value of i: " << i << endl;
    } else if (s[i] == '-' && s[i - 1] == '-') {
      cout << 2 << endl;
      i++;
      cout << "new value of i: " << i << endl;
    }
  }


  return 0;
}


/*

Logic:

. == 0

-. == 1

--  == 0


. -. --

0 1 2

*/
