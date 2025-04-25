#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    map<string, string> dict;
    string s, s1;
    for (int i=0; i<n; i++) {
        cin >> s >> s1;
        dict[s]=s1;
    }
    for (int i=0; i<k; i++) {
        cin >> s;
        int l=s.size();
        if (dict.count(s)!=0) {
            cout << dict[s];
        }else if(s[l-1]=='y') {
            s[l-1]='i';
            s += "es";
            cout << s;
        }else if(s[l-1]=='o' || s[l-1]=='s' || s[l-1]=='x' || (s[i-1]=='h' && (s[i-2]=='c' || s[i-2]=='s'))) {
            s += "es";
            cout << s;
        }else {
            s += 's';
            cout << s;
        }
        cout << '\n';
    }
    return 0;
}