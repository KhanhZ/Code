#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    long long int N, a;
    cin >> N;
    a = sqrt(8 * N + 1);
    if (8 * N + 1 == a * a)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
