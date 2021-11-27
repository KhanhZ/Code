#include <iostream>
using namespace std;

int main () {
    int a;
    cin >> a;
    if (a < 7)
    {
        cout << 7 - a << ' ' << 7 - (7 - a);
    }
    else if (a == 7)
    {
        cout << 7 << ' ' << 0;
    }
    else {
        if ((a / 7) % 2 == 0 )
        {
            cout << 7 - (7 - (7 - (a % 7))) << ' ' << 7 - (7 - (a % 7));
        }
        else
        {
            cout << 7 - (7 - (a % 7)) << ' ' << 7 - (7 - (7 - (a % 7)));
        }
    }
    return 0;
}
    