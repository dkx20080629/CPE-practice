#include<bits/stdc++.h>
using namespace std;

int main() {
    double x, y, c[4][2], ansx, ansy;
    while (cin >> c[0][0] >> c[0][1] >> c[1][0] >> c[1][1] >> c[2][0] >> c[2][1] >> c[3][0] >> c[3][1]) {
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j <= 3; j++) {
                if (c[i][0] == c[j][0] && c[i][1] == c[j][1]) {
                    x = c[i][0];
                    y = c[i][1];
                }
            }
        }
        ansx = x;
        ansy = y;
        for (int i = 0; i < 4; i++){
            if (c[i][0] != x || c[i][1] != y) {
                ansx += c[i][0] - x;
                ansy += c[i][1] - y;
            }
        }
        cout << fixed << setprecision(3) << ansx << " " << ansy << "\n";
    }
}