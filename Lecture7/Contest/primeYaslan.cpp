#include <iostream>

using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  int cnt = 0;
  bool flag = true;
  for(int i = l; i <= r; i++) {
    if(i == 1 || i == 0) {
      continue;
    }
    for(int j = 2; j < i; j++) {
      if(i % j == 0) {
        flag = false;
        break;
      }
    }
    if(flag == true) {
      cout << i << " ";
      cnt++;
    } else {
      flag = true;
    }
  }
  cout << endl << cnt << endl;
 
  return 0;
}

// 6
// 6 % 2 = 0 - 6 is not Prime flag = false;
// flag = true
// 7
// 7 % 2 == 1
// 7 % 3 == 1
// 7 % 4 == 3
// 7 % 5 == 2
// 7 % 6 == 1