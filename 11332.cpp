#include<bits/stdc++.h>
using namespace std;
int f(int n) {
    if (n < 10) return n;
    int t = 0;
    while (n > 0) {
        t += n % 10;
        n /= 10;
    }
    return f(t);
}
int main() {
    int n;
    while(cin >> n && n) {
        cout << f(n) << "\n";
    }
}
