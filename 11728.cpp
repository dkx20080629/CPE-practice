#include<bits/stdc++.h>
using namespace std;

int fsum(int a) {
    int s = 0;
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            s += i;
            if (i != a / i) {
                s += a / i;
            }
        }
    }
    return s;
}

int main() {
    int n, c = 0;
    while(cin >> n && n) {
        c++;
        for (int i = n; i >= 1; i--) {
            if (fsum(i) == n) {
                cout << "Case " << c << ": " << i << "\n";
                break;
            }
            if (i == 1){
                cout << "Case " << c << ": " << -1 << "\n";
            }
        }
    }
}