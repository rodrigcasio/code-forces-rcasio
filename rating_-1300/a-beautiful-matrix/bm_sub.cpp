#include <bits/stdc++.h>
using namespace std;

int main () {

  int arr[5][5];
  int swap = 0;
  int const size = 5;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cin >> arr[i][j];
      cout << i << j << endl;

      if (arr[i][j] == 1) {
        cout << "Position " << i << j << "= " << arr[i][j] << endl;
        break;
      }
    }
  }

  return 0;
}

/*

        while (arr[i][j] != arr[2][2]) {
          switch (i) {
            case 0:{ i += 2; swap += 1; break; }
            case 1:{ i += 1; swap += 1; break; }
            case 2:{ i = 2; swap += 1; break; }
            case 3:{ i -= 1; swap += 1; break; }
            case 4:{ i -= 2; swap += 1; break; }
          }
          //-----------
          switch (j) {
            case 0:{ j += 2; swap += 1; break; }
            case 1:{ j += 1; swap += 1; break; }
            case 2:{ j = 2; swap += 1; break; }
            case 3:{ j -= 1; swap += 1; break; }
            case 4:{ j -= 2; swap += 1; break; }
          }
  

  read the position where the digit is
  evaluate the position
  move the row so it can be in the middle row [1]
  
int arr[5][5]; 

 -0 0 0 0 0
 -0 0 0 0 1
 -0 0 0 0 0
 -0 0 0 0 0
 -0 0 0 0 0
arr[1][4]

i = 1
j = 4
  
Logic

 switch (i) {
  case 0:{
    i+= 2; swap += 1; break;
  }
  case 1:{
    i+= 1; swap += 1; break;
  }
  case 2: {
    i = 2; swap += 1; break;
  }
  case 3: {
    i -= 1; swap += 1; break;
  }
  case 4: {
    i -= 2; swap += 1; break;
  }
 }


 switch (i) {
  case 0:{
    i+= 2; swap += 1; break;
  }
  case 1:{
    i+= 1; swap += 1; break;
  }
  case 2: {
    i = 2; swap += 1; break;
  }
  case 3: {
    i -= 1; swap += 1; break;
  }
  case 4: {
    i -= 2; swap += 1; break;
  }
 }

 switch (j) {
  case 0:{
    j+= 2; swap += 1; break;
  }
  case 1:{
    j += 1; swap += 1; break;
  }
  case 2: {
    j = 2; swap += 1; break;
  }
  case 3: {
    j -= 1; swap += 1; break;
  }
  case 4: {
    j -= 2; swap += 1; break;
  }
 }
*/
