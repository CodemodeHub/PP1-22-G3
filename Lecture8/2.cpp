#include <iostream>
using namespace std;

int main() {
  
  int a;

  cin >> a;

  string octal = "";

  while (a != 0) {

    octal = char(a % 8 + 48) + octal;

    a /= 8;

  }

  cout << octal << endl;

}