#include <iostream>
using namespace std;

bool hasPassedTest(int a[], int test, int n) {
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += a[i];
  }
  return sum >= test;
}

int main() {
  int n, m;
  cin >> n >> m;

  int a[n][m];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }

  int q;
  cin >> q;

  int ans[q];

  for (int i = 0; i < q; ++i) {
    int test;
    cin >> test;
    int count = 0;
    for (int j = 0; j < n; ++j) {
      if (hasPassedTest(a[j], test, m)) {
        count++;
      }
    }
    ans[i] = count;
  }

  for (int i = 0; i < q; ++i) {
    cout << ans[i] << endl;
  }
}