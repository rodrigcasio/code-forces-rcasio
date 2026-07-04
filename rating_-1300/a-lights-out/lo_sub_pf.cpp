#include <bits/stdc++.h>
using namespace std;

int main () {
  
  // std::vector<std::vector <int>> arr (3, std::vector<int> (3, 1));
  int arr[3][3] = {
    {1, 1, 1 },
    {1, 1, 1 },
    {1, 1, 1 }
  };
  
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;

  for (int i = 0; i <= 2; ++i) {
    for (int j = 0; j <= 2; ++j) {
      cin >> x;

      // n = arr[i][j];
      if (x % 2 != 0) {
        if (i == 0 && j == 0) {
          if (x % 2 != 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              ((arr[i][j+1] = 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);
              ((arr[i+1][j] = 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
            } else {
              arr[i][j] = 0;
              ((arr[i][j+1] = 0) ? arr[i][j+1] = 1 : arr[i][j+1] = 1);
              ((arr[i+1][j] = 0) ? arr[i+1][j] = 1 : arr[i+1][j] = 1);
            }
          }

        } else if (i == 0 && j == 1) {
          if (x % 2 != 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              ((arr[i+1][j] = 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
              ((arr[i][j+1] = 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);
              ((arr[i][j-1] = 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);

            } else {
              arr[i][j] = 0;
              ((arr[i+1][j] = 0) ? arr[i+1][j] = 1 : arr[i+1][j] = 0);
              ((arr[i][j+1] = 0) ? arr[i][j+1] = 1 : arr[i][j+1] = 0);
              ((arr[i][j-1] = 0) ? arr[i][j-1] = 1 : arr[i][j-1] = 0);
            }
          }
        }

        else if (i == 0 && j == 2) {
          if (x % 2 != 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              ((arr[i][j-1] = 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
              ((arr[i+1][j] = 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
            } else {
                arr[i][j] = 0;
              ((arr[i][j-1] = 0) ? arr[i][j-1] = 1 : arr[i][j-1] = 0);
              ((arr[i+1][j] = 0) ? arr[i+1][j] = 1 : arr[i+1][j] = 0);
            }
          }

        } else if (i == 1 && j == 0) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                ((arr[i+1][j] = 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
                ((arr[i-1][j] = 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
                ((arr[i][j+1] = 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1); 
            
              } else {
                arr[i][j] = 0;
                ((arr[i+1][j] = 0) ? arr[i+1][j] = 1 : arr[i+1][j] = 0);
                ((arr[i-1][j] = 0) ? arr[i-1][j] = 1 : arr[i-1][j] = 0);
                ((arr[i][j+1] = 0) ? arr[i][j+1] = 1 : arr[i][j+1] = 0); 
          
              }
            } 

        } else if (i == 1 && j == 1) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                ((arr[i-1][j] = 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
                ((arr[i+1][j] = 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
                ((arr[i][j-1] = 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
                ((arr[i][j+1] = 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);
              } else {
                arr[i][j] = 0;
                ((arr[i-1][j] = 0) ? arr[i-1][j] = 1 : arr[i-1][j] = 0);
                ((arr[i+1][j] = 0) ? arr[i+1][j] = 1 : arr[i+1][j] = 0);
                ((arr[i][j-1] = 0) ? arr[i][j-1] = 1 : arr[i][j-1] = 0);
                ((arr[i][j+1] = 0) ? arr[i][j+1] = 1 : arr[i][j+1] = 0);
              }
            }

        } else if (i == 1 && j == 2) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                ((arr[i-1][j] = 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
                ((arr[i][j-1] = 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
                ((arr[i+1][j] = 1) ? arr[i+1][j] = 0 : arr[i+1][j] = 1);
              } else {
                arr[i][j] = 0;
                ((arr[i-1][j] = 0) ? arr[i-1][j] = 1 : arr[i-1][j] = 0);
                ((arr[i][j-1] = 0) ? arr[i][j-1] = 1 : arr[i][j-1] = 0);
                ((arr[i+1][j] = 0) ? arr[i+1][j] = 1 : arr[i+1][j] = 0);
              }
            }

        } else if (i == 2 && j == 0) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                ((arr[i-1][j] = 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
                ((arr[i][j+1] = 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);
            
              } else {
                  arr[i][j] = 0;
                ((arr[i-1][j] = 0) ? arr[i-1][j] = 1 : arr[i-1][j] = 0);
                ((arr[i][j+1] = 0) ? arr[i][j+1] = 1 : arr[i][j+1] = 0);
              }
            }

        } else if (i == 2 && j == 1) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                ((arr[i-1][j] = 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
                ((arr[i][j-1] = 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
                ((arr[i][j+1] = 1) ? arr[i][j+1] = 0 : arr[i][j+1] = 1);
              } else  {
                arr[i][j] = 0;
                ((arr[i-1][j] = 0) ? arr[i-1][j] = 1 : arr[i-1][j] = 0);
                ((arr[i][j-1] = 0) ? arr[i][j-1] = 1 : arr[i][j-1] = 0);
                ((arr[i][j+1] = 0) ? arr[i][j+1] = 1 : arr[i][j+1] = 0);
              }
            }

        } else if (i == 2 && j == 2) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                ((arr[i][j-1] = 1) ? arr[i][j-1] = 0 : arr[i][j-1] = 1);
                ((arr[i-1][j] = 1) ? arr[i-1][j] = 0 : arr[i-1][j] = 1);
              
              } else {
                  arr[i][j] = 0;
                  ((arr[i][j-1] = 0) ? arr[i][j-1] = 1 : arr[i][j-1] = 1);
                  ((arr[i-1][j] = 0) ? arr[i-1][j] = 1 : arr[i-1][j] = 1);
              }
            }
        }

      }
    }
  }
  
  // for (const auto& row : arr) {
  //   for (int n : row) {
  //     cout << n;
  //   }
  //   cout << "\n";
  // }
  
  for (int r = 0; r <= 2; ++r) {
    for (int c = 0; c <= 2; ++c) {
      cout << arr[r][c];
    }
     cout << "\n";
  }

  return 0;
}



/*
  -- 4th aproach
 
      if (x != 0) {
        if (i == 0 && j == 0) {
          if (x % 2 != 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              arr[i][j+1] = 1;
              arr[i+1][j] = 1;
            } else {
              arr[i][j] = 0;
              arr[i][j+1] = 0;
              arr[i+1][j] = 0;
            }
          }

        } else if (i == 0 && j == 1) {
          if (x % 2 != 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              arr[i+1][j] = 1;
              arr[i][j+1] = 1;
              arr[i][j-1] = 1;

            } else {
              arr[i][j] = 0;
              arr[i+1][j] = 0;
              arr[i][j+1] = 0;
              arr[i][j-1] = 0;
            }
          }
        }

        else if (i == 0 && j == 2) {
          if (x % 2 != 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              arr[i][j-1] = 1;
              arr[i+1][j] = 1;
            } else {
                arr[i][j] = 0;
                arr[i][j-1] = 0;
                arr[i+1][j] = 0;
            }
          }

        } else if (i == 1 && j == 0) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i+1][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j+1] = 1; 
            
              } else {
                arr[i][j] = 0;
                arr[i+1][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j+1] = 0;
          
              }
            } 

        } else if (i == 1 && j == 1) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i+1][j] = 1;
                arr[i][j-1] = 1;
                arr[i][j+1] = 1;
              } else {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i+1][j] = 0;
                arr[i][j-1] = 0;
                arr[i][j+1] = 0;
              }
            }

        } else if (i == 1 && j == 2) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j-1] = 1;
                arr[i+1][j] = 1;
              } else {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j-1] = 0;
                arr[i+1][j] = 0;
              }
            }

        } else if (i == 2 && j == 0) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j+1] = 1;
            
              } else {
                  arr[i][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i][j+1] = 0;
              }
            }

        } else if (i == 2 && j == 1) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j-1] = 1;
                arr[i][j+1] = 1;
              } else  {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j-1] = 0;
                arr[i][j+1] = 0;
              }
            }

        } else if (i == 2 && j == 2) {
            if (x % 2 != 0) {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i][j-1] = 1;
                arr[i-1][j] = 1;
              
              } else {
                  // cout << "-h  2.2 (arr=1)";
                  arr[i][j] = 0;
                  arr[i][j-1] = 0;
                  arr[i-1][j] = 0;
              }
            }
        }
  -- 3rd aproach
  
      // n = arr[i][j];
      if (x != 0) {
        if (i == 0 && j == 0) {
          if (x % 2 == 0) {
            // if (arr[i][j] == 0) {
            //   arr[i][j] = 0;
            //   arr[i][j+1] = 0;
            //   arr[i+1][j] = 0;
            // } else {
            //   arr[i][j] = 1;
            //   arr[i][j+1] = 1;
            //   arr[i+1][j] = 1;
            //
            // }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i][j+1] = 1;
                arr[i+1][j] = 1;
              } else {
                arr[i][j] = 0;
                arr[i][j+1] = 0;
                arr[i+1][j] = 0;
              }
          }

        } else if (i == 0 && j == 1) {
          if (x % 2 == 0) {
            // if (arr[i][j] == 0) {
            //   arr[i][j] = 0;
            //   arr[i+1][j] = 0;
            //   arr[i][j+1] = 0;
            //   arr[i][j-1] = 0;
            //
            // } else {
            //   arr[i][j] = 1;
            //   arr[i+1][j] = 1;
            //   arr[i][j+1] = 1;
            //   arr[i][j-1] = 1;
            // }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i+1][j] = 1;
                arr[i][j+1] = 1;
                arr[i][j-1] = 1;

              } else {
                arr[i][j] = 0;
                arr[i+1][j] = 0;
                arr[i][j+1] = 0;
                arr[i][j-1] = 0;
              }
          }
        } 

        else if (i == 0 && j == 2) {
          if (x % 2 == 0) {
            // if (arr[i][j] == 0) {
            //   arr[i][j] = 0;
            //   arr[i][j-1] = 0;
            //   arr[i+1][j] = 0;
            // } else {
            //   arr[i][j] = 1;
            //   arr[i][j-1] = 1;
            //   arr[i+1][j] = 1;
            //
            // }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i][j-1] = 1;
                arr[i+1][j] = 1;
              } else {
                  arr[i][j] = 0;
                  arr[i][j-1] = 0;
                  arr[i+1][j] = 0;
              }
          }

        } else if (i == 1 && j == 0) {
            if (x % 2 == 0) {
              // if (arr[i][j] == 0){
              //   arr[i][j] = 0;
              //   arr[i+1][j] = 0;
              //   arr[i-1][j] = 0;
              //   arr[i][j+1] = 0;
              // } else {
              //   arr[i][j] = 1;
              //   arr[i+1][j] = 1;
              //   arr[i-1][j] = 1;
              //   arr[i][j+1] = 1;
              // }
            } else {
                if (arr[i][j] == 0) {
                  arr[i][j] = 1;
                  arr[i+1][j] = 1;
                  arr[i-1][j] = 1;
                  arr[i][j+1] = 1; 
              
                } else {
                  arr[i][j] = 0;
                  arr[i+1][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i][j+1] = 0;
            
                }
            }

        } else if (i == 1 && j == 1) {
            if (x % 2 == 0) {
              // if (arr[i][j] == 0) {
              //   arr[i][j] = 0;
              //   arr[i-1][j] = 0;
              //   arr[i+1][j] = 0;
              //   arr[i][j-1] = 0;
              //   arr[i][j+1] = 0;
              //
              // } else {
              //   arr[i][j] = 1;
              //   arr[i-1][j] = 1;
              //   arr[i+1][j] = 1;
              //   arr[i][j-1] = 1;
              //   arr[i][j+1] = 1;
              // }
            } else {
                if (arr[i][j] == 0) {
                  arr[i][j] = 1;
                  arr[i-1][j] = 1;
                  arr[i+1][j] = 1;
                  arr[i][j-1] = 1;
                  arr[i][j+1] = 1;
                } else {
                  arr[i][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i+1][j] = 0;
                  arr[i][j-1] = 0;
                  arr[i][j+1] = 0;
                }
            }

        } else if (i == 1 && j == 2) {
            if (x % 2 == 0) {
              // if (arr[i][j] == 0) {
              //   arr[i][j] = 0;
              //   arr[i-1][j] = 0;
              //   arr[i][j-1] = 0;
              //   arr[i+1][j] = 0;
              // } else {
              //   arr[i][j] = 1;
              //   arr[i-1][j] = 1;
              //   arr[i][j-1] = 1;
              //   arr[i+1][j] = 1;
              // }
            } else {
                if (arr[i][j] == 0) {
                  arr[i][j] = 1;
                  arr[i-1][j] = 1;
                  arr[i][j-1] = 1;
                  arr[i+1][j] = 1;
                } else {
                  arr[i][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i][j-1] = 0;
                  arr[i+1][j] = 0;
                }
            }

        } else if (i == 2 && j == 0) {
            if (x % 2 == 0) {
              // if (arr[i][j] == 0) {
              //   arr[i][j] = 0;
              //   arr[i-1][j] = 0;
              //   arr[i][j+1] = 0;
              // } else {
              //     arr[i][j] = 1;
              //     arr[i-1][j] = 1;
              //     arr[i][j+1] = 1;
              // }
            } else {
                if (arr[i][j] == 0) {
                  arr[i][j] = 1;
                  arr[i-1][j] = 1;
                  arr[i][j+1] = 1;
              
                } else {
                    arr[i][j] = 0;
                    arr[i-1][j] = 0;
                    arr[i][j+1] = 0;
                }
            }
          

        } else if (i == 2 && j == 1) {
            if (x % 2 == 0) {
              // if (arr[i][j] == 0) {
              //   arr[i][j] = 0;
              //   arr[i-1][j] = 0;
              //   arr[i][j-1] = 0;
              //   arr[i][j+1] = 0;
              // } else {
              //   arr[i][j] = 1;
              //   arr[i-1][j] = 1;
              //   arr[i][j-1] = 1;
              //   arr[i][j+1] = 1;
              // }
            } else {
                if (arr[i][j] == 0) {
                  arr[i][j] = 1;
                  arr[i-1][j] = 1;
                  arr[i][j-1] = 1;
                  arr[i][j+1] = 1;
                } else  {
                  arr[i][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i][j-1] = 0;
                  arr[i][j+1] = 0;
                }
            }
        } else if (i == 2 && j == 2) {
            if (x % 2 == 0) {
              // if (arr[i][j] == 0) {
              //   arr[i][j] = 0;
              //   arr[i][j-1] = 0;
              //   arr[i-1][j] = 0;
              // } else {
              //     arr[i][j] = 1;
              //     arr[i][j-1] = 1;
              //     arr[i-1][j] = 1;
              // }
            } else {
                if (arr[i][j] == 0) {
                  arr[i][j] = 1;
                  arr[i][j-1] = 1;
                  arr[i-1][j] = 1;
                
                } else {
                    // cout << "-h  2.2 (arr=1)";
                    arr[i][j] = 0;
                    arr[i][j-1] = 0;
                    arr[i-1][j] = 0;
                }
            }
        }
      }
    }
  }
  -- 2nd explicit aproach
      if (i == 0 && j == 0) {
        if (x % 2 == 0) {
          if (arr[i][j] == 0) {
            arr[i][j] = 0;
            arr[i][j+1] = 0;
            arr[i+1][j] = 0;
          } else {
            arr[i][j] = 1;
            arr[i][j+1] = 1;
            arr[i+1][j] = 1;
            
          }
        } else {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              arr[i][j+1] = 1;
              arr[i+1][j] = 1;
            } else {
              arr[i][j] = 0;
              arr[i][j+1] = 0;
              arr[i+1][j] = 0;
            }
        }

      } else if (i == 0 && j == 1) {
        if (x % 2 == 0) {
          if (arr[i][j] == 0) {
            arr[i][j] = 0;
            arr[i+1][j] = 0;
            arr[i][j+1] = 0;
            arr[i][j-1] = 0;

          } else {
            arr[i][j] = 1;
            arr[i+1][j] = 1;
            arr[i][j+1] = 1;
            arr[i][j-1] = 1;
          }
        } else {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              arr[i+1][j] = 1;
              arr[i][j+1] = 1;
              arr[i][j-1] = 1;

            } else {
              arr[i][j] = 0;
              arr[i+1][j] = 0;
              arr[i][j+1] = 0;
              arr[i][j-1] = 0;
            }
        }
      } 

      else if (i == 0 && j == 2) {
        if (x % 2 == 0) {
          if (arr[i][j] == 0) {
            arr[i][j] = 0;
            arr[i][j-1] = 0;
            arr[i+1][j] = 0;
          } else {
            arr[i][j] = 1;
            arr[i][j-1] = 1;
            arr[i+1][j] = 1;

          }
        } else {
            if (arr[i][j] == 0) {
              arr[i][j] = 1;
              arr[i][j-1] = 1;
              arr[i+1][j] = 1;
            } else {
                arr[i][j] = 0;
                arr[i][j-1] = 0;
                arr[i+1][j] = 0;
            }
        }

      } else if (i == 1 && j == 0) {
          if (x % 2 == 0) {
            if (arr[i][j] == 0){
              arr[i][j] = 0;
              arr[i+1][j] = 0;
              arr[i-1][j] = 0;
              arr[i][j+1] = 0;
            } else {
              arr[i][j] = 1;
              arr[i+1][j] = 1;
              arr[i-1][j] = 1;
              arr[i][j+1] = 1;
            }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i+1][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j+1] = 1; 
            
              } else {
                arr[i][j] = 0;
                arr[i+1][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j+1] = 0;
          
              }
          }

      } else if (i == 1 && j == 1) {
          if (x % 2 == 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 0;
              arr[i-1][j] = 0;
              arr[i+1][j] = 0;
              arr[i][j-1] = 0;
              arr[i][j+1] = 0;
  
            } else {
              arr[i][j] = 1;
              arr[i-1][j] = 1;
              arr[i+1][j] = 1;
              arr[i][j-1] = 1;
              arr[i][j+1] = 1;
            }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i+1][j] = 1;
                arr[i][j-1] = 1;
                arr[i][j+1] = 1;
              } else {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i+1][j] = 0;
                arr[i][j-1] = 0;
                arr[i][j+1] = 0;
              }
          }

      } else if (i == 1 && j == 2) {
          if (x % 2 == 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 0;
              arr[i-1][j] = 0;
              arr[i][j-1] = 0;
              arr[i+1][j] = 0;
            } else {
              arr[i][j] = 1;
              arr[i-1][j] = 1;
              arr[i][j-1] = 1;
              arr[i+1][j] = 1;
            }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j-1] = 1;
                arr[i+1][j] = 1;
              } else {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j-1] = 0;
                arr[i+1][j] = 0;
              }
          }

      } else if (i == 2 && j == 0) {
          if (x % 2 == 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 0;
              arr[i-1][j] = 0;
              arr[i][j+1] = 0;
            } else {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j+1] = 1;
            }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j+1] = 1;
            
              } else {
                  arr[i][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i][j+1] = 0;
              }
          }
        

      } else if (i == 2 && j == 1) {
          if (x % 2 == 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 0;
              arr[i-1][j] = 0;
              arr[i][j-1] = 0;
              arr[i][j+1] = 0;
            } else {
              arr[i][j] = 1;
              arr[i-1][j] = 1;
              arr[i][j-1] = 1;
              arr[i][j+1] = 1;
            }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j-1] = 1;
                arr[i][j+1] = 1;
              } else  {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j-1] = 0;
                arr[i][j+1] = 0;
              }
          }
      } else if (i == 2 && j == 2) {
          if (x % 2 == 0) {
            if (arr[i][j] == 0) {
              arr[i][j] = 0;
              arr[i][j-1] = 0;
              arr[i-1][j] = 0;
            } else {
                arr[i][j] = 1;
                arr[i][j-1] = 1;
                arr[i-1][j] = 1;
            }
          } else {
              if (arr[i][j] == 0) {
                arr[i][j] = 1;
                arr[i][j-1] = 1;
                arr[i-1][j] = 1;
              
              } else {
                  arr[i][j] = 0;
                  arr[i][j-1] = 0;
                  arr[i-1][j] = 0;
              }
          }
      }


-- aproach
      if (i == 0 && j == 1) {
        if (x % 2 == 0) {
          switch (n) {
            case 0: {
              arr[i][j] = 0;
              arr[i+1][j] = 0;
              arr[i][j+1] = 0;
              arr[i][j-1] = 0;
              break;
            }
            case 1: {
              arr[i][j] = 1;
              arr[i+1][j] = 1;
              arr[i][j+1] = 1;
              arr[i][j-1] = 1;
              break;
            }
          }
        } else {
            switch (n) {
              case 0: {
                arr[i][j] = 1;
                arr[i+1][j] = 1;
                arr[i][j+1] = 1;
                arr[i][j-1] = 1;
                break;
              }
              case 1: {
                arr[i][j] = 0;
                arr[i+1][j] = 0;
                arr[i][j+1] = 0;
                arr[i][j-1] = 0;
                break;
              }
            }
        }

      } else if (i == 1 && j == 0) {
          if (x % 2 == 0) {
            switch (n) {
              case 0: { 
                arr[i][j] = 0;
                arr[i+1][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j+1] = 0;
                break;
              }
              case 1: {
                arr[i][j] = 1;
                arr[i+1][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j+1] = 1;
                break;
              }
            }
          } else {
              switch (n) {
                case 0: {
                  arr[i][j] = 1;
                  arr[i+1][j] = 1;
                  arr[i-1][j] = 1;
                  arr[i][j+1] = 1; 
                  break;
                }
                case 1: {
                  arr[i][j] = 0;
                  arr[i+1][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i][j+1] = 0;
                  break;
                }
              }
          }
      } else if (i == 1 && j == 1) {
          if (x % 2 == 0) {
            switch (n) {
              case 0: {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i+1][j] = 0;
                arr[i][j-1] = 0;
                arr[i][j+1] = 0;
                break;
              }
              case 1: {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i+1][j] = 1;
                arr[i][j-1] = 1;
                arr[i][j+1] = 1;
                break;
              }
            }
          } else {
            switch (n) {
              case 0: {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i+1][j] = 1;
                arr[i][j-1] = 1;
                arr[i][j+1] = 1;
                break;
              }
              case 1: {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i+1][j] = 0;
                arr[i][j-1] = 0;
                arr[i][j+1] = 0;
                break;
              }
            }
          }
      } else if (i == 1 && j == 2) {
          if (x % 2 == 0) {
            switch (n) {
              case 0: {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j-1] = 0;
                arr[i+1][j] = 0;
                break;
              }
              case 1: {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j-1] = 1;
                arr[i+1][j] = 1;
                break;
              }
            }
          } else {
              switch (n) {
                case 0: {
                  arr[i][j] = 1;
                  arr[i-1][j] = 1;
                  arr[i][j-1] = 1;
                  arr[i+1][j] = 1;
                  break;
                }
                case 1: {
                  arr[i][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i][j-1] = 0;
                  arr[i+1][j] = 0;
                  break;
                }
              }
          }
      } else if (i == 2 && j == 1) {
          if (x % 2 == 0) {
            switch (n) {
              case 0: {
                arr[i][j] = 0;
                arr[i-1][j] = 0;
                arr[i][j-1] = 0;
                arr[i][j+1] = 0;
                break;
              }
              case 1: {
                arr[i][j] = 1;
                arr[i-1][j] = 1;
                arr[i][j-1] = 1;
                arr[i][j+1] = 1;
                break;
              }
            }
          } else {
              switch (n) {
                case 0: {
                  arr[i][j] = 1;
                  arr[i-1][j] = 1;
                  arr[i][j-1] = 1;
                  arr[i][j+1] = 1;
                  break;
                }
                case 1: {
                  arr[i][j] = 0;
                  arr[i-1][j] = 0;
                  arr[i][j-1] = 0;
                  arr[i][j+1] = 0;
                  break;
                }
              }
          }
      }

*/
