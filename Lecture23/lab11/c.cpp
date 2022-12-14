#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, int> p1, pair<string, int> p2){
    if(p1.second == p2.second) return p1.first > p2.first;
    return p1.second > p2.second;
}

int main(){
    int n, x;
    double sumi = 0;
    cin >> n;
    string s;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        cin >> s >> x;
        sumi += x;
        if(m.find(s) == m.end()) m.insert(make_pair(s, x)); 
        else m[s] += x;
    }
    cout << "------------------------------------------------\n";
    // map<string, int> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << (*it).first << " " << (*it).second << "\n";
    // }
    vector<pair<string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);
    vector<pair<string, int> > :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).first << " " << ((*it).second / sumi) * 100 << "%\n"; 
    }
}