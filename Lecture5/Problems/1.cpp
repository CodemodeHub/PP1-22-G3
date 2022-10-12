#include <iostream>
using namespace std;
int main(){
    int n, m;
    int cnt = 1;

    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = cnt++;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
          if(i % 2 == 0) {
            cout << a[i][j] << " ";
          }
          else {
            cout << a[i][m-j-1] << " ";
          }
        }
      cout << endl;
    }
}