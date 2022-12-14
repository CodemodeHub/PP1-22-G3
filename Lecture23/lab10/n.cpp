#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(vector<int> v){
    for(int i = 0; i < v.size() / 2; i++){
        if(v[i] != v[v.size() - i - 1]) return false;
    }
    return true;
}

int main(){
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    while(next_permutation(v.begin(), v.end())){
        if(isPalindrome(v)){
            for(int j = 0; j < n; j++){
                cout << v[j] << " ";
            }
            return 0;
        }
    }
    cout << "Impossible";
}

