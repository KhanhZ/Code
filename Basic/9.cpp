#include <iostream>
using namespace std;

int main()
{
    int a, i;
    cin >> a;
    if (a == 1)
    {
        cout << "NO";
    }
    else
    {
        for (i = 2; i * i <= a; ++i)
        {
            if (a % i == 0)
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}
