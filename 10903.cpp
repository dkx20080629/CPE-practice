#include <bits/stdc++.h>
using namespace std;

pair<int, int> who_win(string a, string b, int pa, int pb) {
    if (a == b) return {0, 0};
    if ((a == "rock" && b == "scissors") ||
        (a == "scissors" && b == "paper") ||
        (a == "paper" && b == "rock")) {
        return {pa, pb};
    } else {
        return {pb, pa};
    }
}

int main() {
    int n, k;
    bool first_case = true;

    while (cin >> n >> k && n) {
        if (!first_case) cout << "\n";
        first_case = false;

        int win[101] = {0}, lose[101] = {0};
        string m1, m2;
        int p1, p2;
        int total_games = k * n * (n - 1) / 2;

        for (int i = 0; i < total_games; ++i) {
            cin >> p1 >> m1 >> p2 >> m2;
            auto result = who_win(m1, m2, p1, p2);
            if (result.first != 0) {
                win[result.first]++;
                lose[result.second]++;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (win[i] + lose[i] == 0) {
                cout << "-\n";
            } else {
                double rate = (double)win[i] / (win[i] + lose[i]);
                cout << fixed << setprecision(3) << rate << "\n";
            }
        }
    }

    return 0;
}
