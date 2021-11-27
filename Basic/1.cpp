#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int a, b, v;
    cin >> a >> b >> v;
    if (v <= a) {
        cout << '1';
    }
    else {
        if ((v - b) % (a - b) == 0 && b < a) {
            cout << (v - b) / (a - b);
        }
        else {
            cout << (v - b) / (a - b) + 1;
        }
    }
    return 0;
}