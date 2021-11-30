#include <iostream>
using namespace std;

int main(){
    long long int a;
    cin >> a;
    if (a < 10)
        cout << a;
    else {
        cout << (a - 3) / 7 * 3 + a;
    }
    return 0;
}