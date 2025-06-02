#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxX, maxY;
    cin >> maxX >> maxY;
    set<pair<int, int>> scent;
    int curX, curY;
    string orientation, commands;

    while (cin >> curX >> curY >> orientation >> commands) {
        bool isLost = false;

        for (char command : commands) {
            int prevX = curX, prevY = curY;
            string prevOrientation = orientation;

            if (command == 'L') {
                if (orientation == "N") orientation = "W";
                else if (orientation == "W") orientation = "S";
                else if (orientation == "S") orientation = "E";
                else if (orientation == "E") orientation = "N";
            }else if (command == 'R') {
                if (orientation == "N") orientation = "E";
                else if (orientation == "E") orientation = "S";
                else if (orientation == "S") orientation = "W";
                else if (orientation == "W") orientation = "N";
            }else if (command == 'F') {
                if (orientation == "N") curY++;
                else if (orientation == "E") curX++;
                else if (orientation == "S") curY--;
                else if (orientation == "W") curX--;
            }

            if (curX < 0 || curX > maxX || curY < 0 || curY > maxY) {
                if (scent.count({prevX, prevY})) {
                    curX = prevX;
                    curY = prevY;
                    // Ignore this F move
                } else {
                    isLost = true;
                    scent.insert({prevX, prevY});
                    curX = prevX;
                    curY = prevY;
                    break;
                }
            }
        }

        cout << curX << " " << curY << " " << orientation;
        if (isLost) cout << " LOST";
        cout << "\n";
    }

    return 0;
}
