#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<bool> prime(2001, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= 2000; i++) {
        if (prime[i]) {
            for (int j = 2; i * j <= 2000; j++){
                prime[i * j] = false;
            }
        }
    }
    int t;
    string s,ans;
    map<char, int> dict;
    vector<char> keys;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ans = "";
        dict.clear();
        keys.clear();
        cin >> s;
        for (char c:s){
            if (dict.find(c) != dict.end()) {
                dict[c]++;
            }else {
                dict[c] = 1;
                keys.push_back(c);
            }
        }
        sort(keys.begin(), keys.end());
        cout << "Case " << i+1 << ": ";
        for (int j = 0; j < keys.size(); j++){
            if (prime[dict[keys[j]]]) {
                ans += keys[j];
            }
        }
        if (ans == "") {
            ans = "empty";
        }
        cout << ans << "\n";
    }
}
