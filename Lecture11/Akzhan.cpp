#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  
  int a[n], b[n];

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (a[i] == b[j]) {
        cnt++;
        b[j] = -1;
        break;
      }
    }
  }

  cout << cnt << endl;
}