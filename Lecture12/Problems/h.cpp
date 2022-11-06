#include <iostream>
using namespace std;

bool isLater(int a[], int b[]) {
  for (int i = 0; i < 3; ++i) {
    if (a[i] > b[i]) return false;
    if (a[i] < b[i]) return true;
  }
  
  return false;
}

int main() {
  int n;
  cin >> n;

  int a[n][3];

  for (int i = 0; i < n; ++i) {
    cin >> a[i][0] >> a[i][1] >> a[i][2];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (isLater(a[i], a[j])) {
        swap(a[i], a[j]);
      }
    }
  }

  cout << endl;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

}