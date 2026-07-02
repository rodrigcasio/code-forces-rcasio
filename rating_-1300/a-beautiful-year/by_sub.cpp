#include <bits/stdc++.h> // 271A
using namespace std;

int main () {
  
  ios::sync_with_stdio(0);
  cin.tie(0);

  int y, a, b, c, d;
  cin >> y;
  ++y;

  while (true) {
    a = (y % 10);
    b = ((y/10) % 10);
    c = ((y/100) % 10);
    d = ((y/1000) % 10);
    
    if (a != b && a != b && a != c && a != d && b != c && b != d && c != d) {
      cout << y << "\n";
      break;
    } else {
      ++y;
    }
  }
  
  return 0;
}
