#include <bits/stdc++.h>   // 271A
using namespace std;

int main () {

  int y;
  int temp = 0;
  vector<int> digits;

  cin >> y;

  while (y != 0) {
    
    temp = y % 10;
    y /= 10;
    
    
    cout << "y = " << y << endl;
    cout << "temp = " << temp << endl;

    
  }


  return 0;
}

/*

correct logic:

1987
   
   first aproaches are incorrect:

  int y;
  int u = 0;
  int x = 1;

  cin >> y;
  int z = y;

  while (y != 0) {
    y /= 10;

    u++;
  }

  // cout << u << endl;

  for (int i = 0; i < u; i++) {
    z = x +;

    x *= 10;
  }


  
    aproach from school project % 9 (using % operator to limit each digit from 0 t 9)
    if (isupper(caracter)) {
        res[i] = ((caracter - 'A' + clave) % 26) + 'A';

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

-- 

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
