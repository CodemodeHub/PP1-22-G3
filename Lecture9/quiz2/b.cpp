#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n][n];

  for(int i = 0; i < n; i++){
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < 2 * n - 1; i++) {

    for (int j = 0; j < n; ++j) {

      if (n - 1 - i + j >= 0 && n - 1 - i + j < n) {

        cout << a[j][n - 1 - i + j] << " ";
        
      }

    }
    cout << endl;
  }
}