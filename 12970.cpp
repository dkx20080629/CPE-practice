#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }else {
        return gcd(b, a % b);
    }
} 

int main() {
    long long ra, da, rb, db, c = 0;
    while (cin >> ra >> da >> rb >> db && (ra || da || rb || db)) {
        c++;
        long long ta = da * rb, tb = db * ra;
        cout << "Case #" << c <<": ";
        if (ta < tb) {
            cout << "You owe me a beer!\n";
        }else {
            cout << "No beer for the captain.\n";
        }
        cout << "Avg. arrival time: ";
        long long a = (ra * db) + (rb *da), b = 2 * ra * rb;
        long long f = gcd(a, b);
        a /= f, b /= f;
        if (b == 1) {
            cout << a << "\n";
        }else {
            cout << a << "/" << b << "\n";
        }
    }
}
