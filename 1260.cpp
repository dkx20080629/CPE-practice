#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        int ans = 0, a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            for (int j : v) {
                if (j <= a) {
                    ans++;
                }
            }
            v.push_back(a);
        }
        cout << ans << "\n";
    }
}