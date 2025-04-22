#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, U, D, F;
    while (cin >> H >> U >> D >> F && (H || U || D || F)) {
        double height = 0, up = U;
        int day = 0;
        string success = "failure";
        while (height >= 0){
            day += 1;
            height += up;
            up -= U * F / 100.0;
            if (up < 0) up = 0;
            if (height > H) {
                success = "success";
                break;
            }
            height -= D;
        }
        cout << success << " on day " << day << '\n';
    }
}