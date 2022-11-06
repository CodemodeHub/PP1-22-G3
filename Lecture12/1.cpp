#include <iostream>
using namespace std;

int n;

void someFunction(int n, int a[]) {
  for (int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }
}

int main() {
  cin >> n;
  int a[n];

  for (int i = 0; i < n; ++i) cin >> a[i];

  someFunction(n, a);
}