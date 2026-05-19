#include <bits/stdc++.h>
// printfing version
using namespace std;

int main () {

  int arr[5][5];
  int swap = 0;
  int const size = 4;

  int value_i, value_j;

  for (int i = 0; i <= size; i++) {
    for (int j = 0; j <= size; j++) {
      cin >> arr[i][j];
      cout << i << j << endl;

      if (arr[i][j] == 1) {
        cout << "Position " << i << j << "= " << arr[i][j] << endl;
        value_i = i;
        value_j = j;

        arr[i][j] = 0;

        cout << "saved position in value_i & value_j: "  << value_i << value_j << endl;
      }
    }
  }
  
  while (value_i != 2) {
    if (value_i < 2) {
      value_i++;
      swap++;
    } else if (value_i > 2) {
      value_i--;
      swap++;
    }
  }
  
  while (value_j != 2) {
    if (value_j < 2) {
      value_j++;
      swap++;
    } else if (value_j > 2) {
      value_j--;
      swap++;
    }
  }
  
  arr[value_i][value_j] = 1;
  
  cout << "value of value_i: " << value_i << endl;
  cout << "value of value_j: " << value_j << endl;
  cout << "value of swap: " << swap << endl;


  for (int z = 0; z <= size; z++) {
    for (int w = 0; w <= size; w++) {
      cout << arr[z][w] << " ";
    }
    cout << endl;
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



thought before closing 12:13 15/5 : 
save the position of where the 1, turn it into 0 and
count the numbers of additions and subtracions needed to move to the middle
then change the value

  for (int p = 0; p <= size; p++) {
    for (int r = 0; r <= size; r++) {
      if (arr[p][r] != arr[2][2]) {
        while (arr[p][r] != arr[2][2]) {
          switch (p) {
            case 0:{ p += 2; swap += 1; break; }
            case 1:{ p += 1; swap += 1; break; }
            case 2:{ p = 2; swap += 1; break; }
            case 3:{ p -= 1; swap += 1; break; }
            case 4:{ p -= 2; swap += 1; break; }
          }
          cout << "changed to: " << arr[p][r] << "value swap: " << swap << endl;
        }
      }
    }
  }

        while (i != 2 || j != 2) {
          if (valueI < 2) {
            valueI++;
            swap++;
            cout << "value of swap: " << swap << endl;
          } else {
            valueI--;
            swap++;
          }

          if (valueJ < 2) {
            valueJ++;
            swap++;
          } else {
            valueJ--;
            swap++;
          }
        }


*/
