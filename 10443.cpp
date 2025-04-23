#include<bits/stdc++.h>
using namespace std;

// 判斷 attacker 是否能征服 defender
bool canConquer(char attacker, char defender) {
    return (attacker == 'R' && defender == 'S') ||
           (attacker == 'S' && defender == 'P') ||
           (attacker == 'P' && defender == 'R');
}

int main() {
    int T; // 測試資料組數
    cin >> T;

    while (T--) {
        int R, C, N; // 行數、列數、天數
        cin >> R >> C >> N;

        vector<string> current(R); // 當前狀態
        for (int i = 0; i < R; i++) {
            cin >> current[i];
        }

        // 定義上下左右的方向
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        // 模擬 N 天
        for (int day = 0; day < N; day++) {
            vector<string> next = current; // 初始化下一天的狀態

            for (int i = 0; i < R; ++i) {
                for (int j = 0; j < C; ++j) {
                    for (int dir = 0; dir < 4; dir++) {
                        int ni = i + dx[dir];
                        int nj = j + dy[dir];

                        // 檢查是否在範圍內
                        if (ni >= 0 && ni < R && nj >= 0 && nj < C) {
                            if (canConquer(current[i][j], current[ni][nj])) {
                                next[ni][nj] = current[i][j]; //被征服
                            }
                        }
                    }
                }
            }

            current = next; // 更新當前狀態
        }

        // 輸出結果
        for (int i = 0; i < R; i++) {
            cout << current[i] << endl;
        }

        if (T) {
            cout << '\n'; // 換行
        }
    }

    return 0;
}
