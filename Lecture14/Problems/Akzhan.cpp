#include <iostream>
using namespace std;

int a[100];
int n;

bool isCheater(int index, int temp, int k) {
  // temp = index + 1;
  if (temp == n) return false;

  if (abs(a[index] - a[temp]) > k) {
    return isCheater(index, temp + 1, k);
  } else return true;

}

int main() {
  int k;
  cin >> n >> k;

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    if (isCheater(i, i + 1, k)) {
      cout << "cheater" << endl;
      return 0;
    }
  }

  // for (int i = 0; i < n; ++i) {
  //   for (int j = i + 1; j < n; ++j) {
  //     if (abs(a[i] - a[j]) < k) {
  //       cout << "cheater" << endl;
  //       return 0;
  //     } 
  //   }
  // }
  cout << "no" << endl;
}