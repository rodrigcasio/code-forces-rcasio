#include <bits/stdc++.h>
using namespace std;

// .-.--

int main () {

  string s;
  cin >> s;
  
  for (int i = 0; i < s.size(); i++) {
    while (s[i] == '.') {
      if (s[i + 1] == '-' || s[i + 1] == '\0') {
        cout << "value i = " << i << "| value of next i + 1: " << s[i+1] << endl;
        cout << 0 << endl;
      } else if (s[i + 1] == '.' || s[i + 1] == '\0') {
        cout << "value i = " << i << "| value of next i + 1: " << s[i+1] << endl;
        cout << 0 << endl;
      } else if (s[i - 1] == '-') {
        cout << "value i = " << i << "| previous value i - 1: " << s[i-1] << endl;
        cout << 1 << endl;
      }
      i++;
      break;
    }

    while (s[i] == '-') {
      if (s[i + 1] == '.') {
        cout << "value i = " << i << "| value of next i + 1: " << s[i+1] << endl;
        cout << 1 << endl;
      } else if (s[i + 1] == '-' || s[i - 1] == '-') {
        cout << 2 << endl;
        cout << "value i = " << i << "| value of next i + 1: " << s[i+1] << endl;
      }
      i++;
      break;
    }
  }

  cout << endl;


  return 0;
}


/*

    while (s[i] == '-') {
      if (s[i + 1] == '.') {
        cout << 1;
      } else if (s[i + 1] == '-') {
        cout << 2;
      } else {
        cout << 0;
      }
    }

    while (s[i] == '.') {
      if (s[i + 1] == '.' || s[i - 1] == '-') {
        cout << 0;
        break;
      }
    }
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


Logic:

. == 0

-. == 1

--  == 0


. -. --

0 1 2

*/
