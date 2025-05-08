#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    while (cin >> a >> b) {
        map<char, int> mapa, mapb;
        for (int i = 0; i < a.size(); i++) {
            if (mapa.find(a[i]) == mapa.end()) {
                mapa[a[i]] = 1;
            }else {
                mapa[a[i]] ++;
            }
            if (mapb.find(b[i]) == mapb.end()) {
                mapb[b[i]] = 1;
            }else {
                mapb[b[i]] ++;
            }
        }
        vector<int> freqa, freqb;
        for (const auto& [k, v] : mapa) {
            freqa.push_back(v);
        }
        for (const auto& [k, v] : mapb) {
            freqb.push_back(v);
        }
        sort(freqa.begin(), freqa.end());
        sort(freqb.begin(), freqb.end());
        for (int i = 0; i < freqa.size(); i++) {
            if (freqa[i] != freqb[i]) {
                cout << "NO\n";
                break;;
            }
            if (i == freqa.size() - 1) {
                cout << "YES\n";
            }
        }
    }
}
