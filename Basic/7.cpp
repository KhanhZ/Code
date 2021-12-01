#include <iostream>
using namespace std;

int main () {
    int a, i, c;
    c = 0;
    cin >> a;
    for (i = 1; i < a; i++) {
        if (a % i == 0) {
            c = c + i;
        }
    }
    if (c != 0 && c == a) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}