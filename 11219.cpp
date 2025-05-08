#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, nd, nm, ny, bd, bm, by;
    cin >> t;
    cin.ignore();

    for (int i = 1; i <= t; i++) {
        string now, born, blank;
        getline(cin, blank);
        getline(cin, now);
        getline(cin, born);
        sscanf(now.c_str(), "%d/%d/%d", &nd, &nm, &ny);
        sscanf(born.c_str(), "%d/%d/%d", &bd, &bm, &by);
        int age = ny - by;
        if (nm < bm || (nm == bm && nd < bd)) {
            age--;
        }
        cout << "Case #" << i << ": ";
        if (ny < by || (ny == by && nm < bm) || (ny == by && nm == bm && nd < bd)) {
            cout << "Invalid birth date";
        } else if (age > 130) {
            cout << "Check birth date";
        } else {
            cout << age;
        }
        cout << "\n";
    }
    return 0;
}
