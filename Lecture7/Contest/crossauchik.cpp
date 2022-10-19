#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j || i + j == n - 1) {
        cout << "[*]";
      } else {
        cout << "---";
      }
    }
    cout << endl;
  }

  return 0;
}

/*
n - size of 2d array
0   1    2  3
1 (1,1)    
2 
3 

*/