#include <bits/stdc++.h>
using namespace std;

int main () {

  string s;
  cin >> s;
  
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '.') {
      if (s[i + 1] == '-') {
        cout << 0;
      }
    } else if (s[i] == '-') {
      if (s[i + 1] == '.') {
       cout << 1; 
      } else {
        cout << 2;
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
