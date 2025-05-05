#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n && n) {
        int p = 0;
        string b = "";
        while(n > 0) {
            if (n % 2 == 0) {
                b = "0" + b;
            } else {
                b = "1" + b;
                p++;
            }
            n /= 2;
        }
        cout << "The parity of " << b << " is " << p << " (mod 2).\n";
    }
}
