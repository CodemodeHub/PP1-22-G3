#include <iostream>
using namespace std;
int main(){
    int n;

    cin >> n;
    char a[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
          a[i][j] = '.';
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
          if (i == j || (i + j + 1) == n || n / 2 == i || n / 2 == j) {
            cout << '*';
          }
          else cout << a[i][j];

          // cout << " ";
        }
      cout << endl;
    }
}