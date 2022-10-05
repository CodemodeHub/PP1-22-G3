#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int seconds = n % 60;
  int minutes = (n / 60) % 60;
  int hours = (n / 3600) % 24;

  cout << hours << ":" <<  minutes / 10 << minutes % 10 << ":" << seconds / 10 << seconds % 10;
}