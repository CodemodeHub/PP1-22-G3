#include <iostream>
using namespace std;

int main() {
  
  int a;

  cin >> a;

  string hex = "";

  while (a != 0) {

    int reminder = a % 16;
    char nextChar;

    if (reminder > 9) {
      nextChar = char(reminder % 10 + 65);
    } 
    else {
      nextChar = char(a % 16 + 48);
    }

    hex = nextChar + hex;

    a /= 16;

  }

  cout << hex << endl;

}