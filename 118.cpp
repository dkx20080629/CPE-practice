#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, n, m,t1,t2;
    string o,s,to;
    bool l;
    set<pair<int,int>> sent;
    
    cin >> n >> m;
    while (cin >> a) {
        l=false;
        cin >> b >> o >> s;

        for (char move : s) {
            t1=a;t2=b;to=o;
            if (move == 'L') {
                if (o == "N") o = "W";
                else if (o == "E") o = "N";
                else if (o == "S") o = "E";
                else if (o == "W") o = "S";
            } 
            else if (move == 'R') {
                if (o == "N") o = "E";
                else if (o == "E") o = "S";
                else if (o == "S") o = "W";
                else if (o == "W") o = "N";
            } 
            else if (move == 'F') {
                if (o == "N") b++;
                else if (o == "E") a++;
                else if (o == "S") b--;
                else if (o == "W") a--;
            }
            if (a < 0 || a > n || b < 0 || b > m) {
                if (sent.count({t1, t2})) {
                    a = t1;
                    b = t2;
                } else {
                    l = true;
                    sent.insert({t1,t2});
                    a = t1;
                    b = t2;
                    o = o;
                    break;
                }
            }
        }
        
        cout << a << " " << b << " " << o;
        if (l){
            cout << " LOST";
        }
        cout << "\n";
    }
    return 0;
}
