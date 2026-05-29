#include <bits/stdc++.h>
using namespace std;

int main () {

  string s;
  cin >> s;
  
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '.') {
      if (s[i + 1] == '-' || s[i + 1] == '.') {
        cout << 0 << "-im here (0)" << endl;
      }

    } else if (s[i] == '-') {

      if (s[i + 1] == '.') {
        cout << 1 << "-here (1)" << endl; 
      } else if (s[i + 1] == '-'){
        cout << 2 << "-here (2)" << endl;
      }
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
