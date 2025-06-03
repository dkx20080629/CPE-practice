#include<bits/stdc++.h>
using namespace std;

int main(){
    int j, r;
    while (cin >> j >> r) {
        int s;
        vector<int> score(j, 0);
        for (int i = 0; i < r; i++) {
            for (int k = 0; k < j; k++) {
                cin >> s;
                score[k] += s;
            }
        }
        int m, index;
        for (int i = 0; i < j; i++) {
            if (i == 0 || score[i] >= m) {
                m = score[i];
                index = i;
            }
        }
        cout << index + 1 << "\n";
    }
}
