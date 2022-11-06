#include <iostream>
using namespace std;

int visiblePillars(int a[], int l, int r) {
  int max = a[l];
  int cnt = 1;
  
  for (int i = l; i <= r; ++i) {
    if (a[i] > max) {
      max = a[i];
      cnt++;
    }
  }

  return cnt;
}

int main() {
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; ++i) cin >> a[i];

  int q;
  cin >> q;

  int b[q];

  for (int i = 0; i < q; ++i) {
    int left, right;
    cin >> left >> right;

    b[i] = visiblePillars(a, left, right);
  }

  for (int i = 0; i < q; ++i) cout << b[i] << endl;
}