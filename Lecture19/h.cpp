// #include <iostream>
// #include <iomanip>

// using namespace std;
// int main() {
//   int n;
//   cin >> n;

//   string bestPhone = "";
//   float bestRatio = 0;
  
//   for (int i = 0; i < n; ++i) {
//     string name;
//     long long quality;
//     float price;
//     cin >> name >> price >> quality;
//     cout << endl;

//     float tempRatio = (quality * 10^9) / (price);
//     cout << fixed;
//     cout << setprecision(10) << tempRatio << " " << bestRatio << endl;
//     if (tempRatio > bestRatio) {
//       bestPhone = name;
//     }
//   }
//   cout << bestPhone << endl;
// }