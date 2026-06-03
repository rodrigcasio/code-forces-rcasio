#include <iostream>   // 271A
using namespace std;

int main () {

  int y;
  int x = 0;
  int z = 1;
  int u = 0;

  cin >> y;

  while (y != 0) {
    x += 1;
    x += (y % 10) * (z);
    
    u += x;

    z *= 10;
    y /= 10;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    x = 0;
  }

  cout << "Total value: " << u << endl;

  return 0;
}

/*

  int y;
  int x = 0;

  cin >> y;

  while (y != 0) {
    x = y % 10;
    y /= 10;
    cout << "value of x: " << x << endl;
    cout << "value of y: " << y << endl;
  }


*/
