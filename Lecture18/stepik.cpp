#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s, t, q;
    map<string, string> m;

    for(int i = 0; i < n; i++){
        cin >> s >> t;
        m.insert(make_pair(s, t)); // m[s] = t
        // m.insert({s, t});
    }
    cin >> q;
    map<string, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if((*it).first == q){
            cout << (*it).second;
            return 0;
        } 
        else if((*it).second == q){
            cout << (*it).first;
            return 0;
        }
    }
}