#include <iostream>
using namespace std;

int sum = 0;

void favNum(int n) {
  if (n == 0) return;

  sum += n % 10;

  favNum(n / 10);
}

int main() {
  int n;
  cin >> n;

  int lastDigit = n % 10;

  favNum(n);
  
  if (sum % lastDigit == 0) {
    cout << "yes";
  } else cout << "no";

  cout << endl;
}