#include <iostream>

using namespace std;

int main()
{
    string s;
    int n, m;
    
    cin >> s >> n >> m;
    
    char a[n][m];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j] = 'X';
        }
    }
    
    a[0][0] = '*';
    
    int x = 0, y = 0;
    
    for (int i = 0; i < s.size(); ++i) {
        
        if (s[i] == 'D' && y < n - 1) y++;
        if (s[i] == 'U' && y > 0) y--;
        if (s[i] == 'R' && x < m - 1) x++;
        if (s[i] == 'L' && x > 0) x--;
        
        a[y][x] = '*';
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
