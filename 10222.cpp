#include<bits/stdc++.h>
using namespace std;

int main() {
    string key = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while(getline(cin, s)) {
        for (char c : s) {
            if (c == ' ') {
                cout << ' ';
                continue;
            }
            for (int i = 0; i < key.size(); i++) {
                if (key[i] == c) {
                    cout << key[i-2]; 
                    break;
                }
            }
        }
        cout << "\n";
    }
}
