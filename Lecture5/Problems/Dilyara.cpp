#include <iostream>
using namespace std;

int main() {
  double a, b;

  cin >> a >> b;

  int cnt = 1;

  while (a < b) {
    a = a * 1.1; 
    cnt++;
  }

  cout << cnt << endl;
}