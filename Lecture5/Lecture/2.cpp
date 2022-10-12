#include <iostream>
#include <climits>

using namespace std;

int main() {
  int n, m;

  int max = INT_MIN;
  int maxX, maxY;
  // int max = -100000;

  cin >> n >> m; 

  int a[n][m];

  int cnt = 0;

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      a[i][j] = cnt++;
    }
  }

  // for (int i = 0; i < n; ++i) {
  //   if (max < a[i]) max = a[i];
  // }

  for( int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << a[i][j] << " ";
      if (max < a[i][j]) {
        max = a[i][j];
        maxX = j;
        maxY = i;
      }
    }
    cout << endl;
  }

  cout << max << " " << maxX << " " << maxY << endl;

  cout << endl;
}