#include <iostream>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m; 

  int b[n];
  
  int a[n][m];

  int cnt = 0;

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      a[i][j] = cnt++;
    }
  }

  for( int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl; 
  }

  // cout << a[2][1] << endl;
  cout << endl;
}