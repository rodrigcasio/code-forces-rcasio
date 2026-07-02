#include <bits/stdc++.h>   // 271A
using namespace std;

int main () {
  
  ios::sync_with_stdio(0);
  cin.tie(0);

  // int a, b, c, d;
  int y;
  // bool des = true;
  cin >> y;
  ++y;
  // a = (y % 10);
  // b = ((y/10) % 10);
  // c = ((y/100) % 10);
  // d = ((y/1000) % 10);

  while (true) {
    if ((y % 10) != ((y/10) % 10) &&
        (y % 10) != ((y/100) % 10) && 
        (y % 10) != ((y/1000) % 10) &&
        ((y/10) % 10) != ((y/100) % 10) &&
        ((y/10) % 10) != ((y/1000) % 10) && 
        ((y/100) % 10) != ((y/1000) % 10)) {
      cout << y << "\n";
      break;
    } else {
      ++y;
      cout << y << "\n";
    }
  }

  
  
  // while (des) {
  //   if (a != b && a != c && a != d && b != c && b != d && c != d) {
  //     cout << y << "\n";
  //     des = false;
  //   } else {
  //     ++y;
  //     a = (a + 1) % 10;
  //     b = (b + 1) % 10;
  //     c = (c + 1) % 10;
  //     d = (c + 1) % 10;
  //     cout << y << "\n";
  //   }
  // }

  
  return 0;

}

/*
  
   1 9 8 7
  1988
  1989
  ...
  ...
  2013
  
  // (y % 10) = 7
  // ((y/10) % 10) = 8
  // ((y/100) % 10) = 9
  // ((y/1000) % 10) = 1
  ---
  
---

  1 9 8 7

  / 1000 = 1
  y /= 10;
  
  / 100 = 9
  
  / 1000
  / 100
  / 10
  / 1
 
  int y, z;
  int temp;
  const int YEARS = 3;
  vector<int> digits;

  cin >> y;

  for (int i = 0; i < YEARS; i++) {
    if (y != 0) {
      z = y /= 10;
      cout << z << endl;
    }
  }


  for (const int& d : digits) {
    cout << d;
  }

  cout << endl;


  while (y != 0) {
    temp = y % 10;
    y /= 10;
    
    cout << temp << " - " << y << endl;

    digits.insert(digits.begin(), temp); 
  }
 
  for (int i = 0; i < YEARS; i++) {
    z = digits[i];

    auto it = find(digits.begin(), digits.end(), z);
    static_cast<int> (it);
    cout << it << endl;
    int index = it - digits.begin();

      switch (index) {
        case 0: { digits[i] += 1; } break;
        case 1: { digits[i] += 1; } break;
        case 2: { digits[i] += 1; } break;
        case 3: { digits[i] += 1; } break;
      }
      cout << "Vector modified" << endl;
      i--;
  }





 ---- new aproach
  [1, 9, 8, 7]

  int temp;
  while (y != 0) {
    temp = y % 10;
    y /= 10;
    
    digits.insert(digits.begin(), temp);
  }
  
  temp = digits[i];
  auto it = find(digits.begin(), digits.end(), temp);
  
  int index = 0;
  if (it) {
    index = distance(digits.begin(), it);
    
    switch (index) {
      case 0: { digits[i] += 1; } break;
      case 1: { digits[i] += 1; } break;
      case 2: { digits[i] += 1; } break;
      case 3: { digits[i] += 1; } break;
    }
    cout << "vector modified" << endl;
    i--;
  }

---- 
  int y, z;
  int temp = 0;
  int prev = 0;
  int u = 0;

  vector<int> digits;

  cin >> y; 
  z = y;

  while (y != 0) {
    
    temp = y % 10;
    y /= 10;

    prev = temp;
    digits.insert(digits.begin(), temp);

    cout << "y = " << y << endl;
    cout << "temp = " << temp << endl;
    
    u++;
  }


-----
    if (temp == prev) {
      switch (u) {
        case 0: { z += 1; } break;
        case 1: { z += 10; } break;
        case 2: { z += 100; } break;
        case 3: { z += 1000; } break;
      }
      cout << "here" << endl;
    }


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
