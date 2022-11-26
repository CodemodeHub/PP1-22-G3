#include <bits/stdc++.h>

using namespace std;

bool comp(pair<double, pair<int, int> > &p1, pair<double, pair<int, int> > &p2){
    return p1.first > p2.first;
}

int main(){
    int n; cin >> n;
    int x, y;
    map<double, pair<int, int> > m;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        double d = sqrt(pow(x, 2) + pow(y, 2));
        m.insert(make_pair(d, make_pair(x, y)));
    }
    vector<pair<double, pair<int, int> > > v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);
    vector<pair<double, pair<int, int> > > :: iterator it;
    it = v.begin();
    cout << (*it).first << " " << (*it).second.first << " " << (*it).second.second << "\n";
    return 0;

    for(it = v.begin(); it != v.end(); it++){
        cout << (*it).first << " " << (*it).second.first << " " << (*it).second.second << "\n";
    }
}