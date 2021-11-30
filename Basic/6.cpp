#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 23 && b <= 59 && c < 59)
    {
        cout << a << ' ' << b << ' ' << c + 1;
    }
    else if (a <= 23 && b < 59 && c == 59)
    {
        cout << a << ' ' << b + 1 << ' ' << 0;
    }
    else if (a < 23 && b == 59 && c == 59)
    {
        cout << a + 1 << ' ' << 0 << ' ' << 0;
    }
    else 
    {
        cout << 0 << ' ' << 0 << ' ' << 0;
    }
    return 0;
}