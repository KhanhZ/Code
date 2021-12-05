#include <iostream>
using namespace std;

int main () {
    int y1, x1, y2, y3, x2, x3;
    cin >> y1 >> x1 >> y2 >> x2 >> y3 >> x3;
    if (y3 == 0 && x3 == 0) {
        cout << -1;
    }
    else if (y3 == 0 && x3 == 9) {
        cout << -1;
    }
    else if (y3 == 8 && x3 == 0) {
        cout << -1;
    }
    else if (y3 == 8 && x3 == 9) {
        cout << -1;
    }
    else if (y1 == y2 && y2 == y3) {
        if (x1 < x3 && x2 > x3 && x1 < x2) { // 1 3 2
            cout << 1;
        }
        else if (x1 > x2 && x1 > x3 && x3 > x2) { // 2 3 1
            cout << 1;
        }
        else if (x1 < x3 && x1 > x2 && x3 > x2 && x3 < 8) { // 2 1 3
            cout << 2;
        }
        else if (x1 > x3 && x1 < x2 && x3 < x2 && x3 > 0) { // 3 1 2
            cout << 2;
        }
        else if (x1 > x2 && x1 > x3 && x2 > x3 && x3 > 0) { // 3 2 1
            cout << 2;
        }
        else if (x1 < x2 && x1 < x3 && x2 < x3 && x3 < 8) { // 1 2 3
            cout << 2;
        }

    }
    else if (x1 == x2 && x2 == x3) {
        if (y1 < y3 && y2 > y3 && y1 < y2) { // 1 3 2
            cout << 1;
        }
        else if (y1 > y2 && y1 > y3 && y3 > y2) { // 2 3 1
            cout << 1;
        }
        else if (y1 < y3 && y1 > y2 && y3 > y2 && y3 < 9) { // 2 1 3
            cout << 2;
        }
        else if (y1 > x3 && y1 < y2 && y3 < y2 && y3 > 0) { // 3 1 2
            cout << 2;
        }
        else if (y1 > y2 && y1 > y3 && y2 > y3 && y3 > 0) { // 3 2 1
            cout << 2;
        }
        else if (y1 < y2 && y1 < y3 && y2 < y3 && y3 < 9) { // 1 2 3
            cout << 2;
    }
    else if ()
    return 0;
}    