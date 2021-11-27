#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a % 10 == 0)
    {
        cout << 0;
    }
    else if ((a - 1) % 10 == 0)
    {
        cout << 1;
    }
    else if ((a - 4) % 10 == 0)
    {
        if (b % 2 == 0)
        {
            cout << 6;
        }
        else
        {
            cout << 4;
        }
    }
    else if ((a - 5) % 10 == 0)
    {
        cout << 5;
    }
    else if ((a - 6) % 10 == 0)
    {
        cout << 6;
    }
    else if ((a + 1) % 10 == 0)
    {
        if (b % 2 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 9;
        }
    }
    else if ((a - 2) % 10 == 0)
    {
        if (b % 4 == 1)
        {
            cout << 2;
        }
        else if (b % 4 == 2)
        {
            cout << 4;
        }
        else if (b % 4 == 3)
        {
            cout << 8;
        }
        else
        {
            cout << 6;
        }
    }
    else if ((a - 3) % 10 == 0)
    {
        if (b % 4 == 1)
        {
            cout << 3;
        }
        else if (b % 4 == 2)
        {
            cout << 9;
        }
        else if (b % 4 == 3)
        {
            cout << 7;
        }
        else
        {
            cout << 1;
        }
    }
    else if ((a - 3) % 10 == 0)
    {
        if (b % 4 == 1)
        {
            cout << 3;
        }
        else if (b % 4 == 2)
        {
            cout << 9;
        }
        else if (b % 4 == 3)
        {
            cout << 7;
        }
        else
        {
            cout << 1;
        }
    }
    else if ((a - 7) % 10 == 0)
    {
        if (b % 4 == 1)
        {
            cout << 7;
        }
        else if (b % 4 == 2)
        {
            cout << 9;
        }
        else if (b % 4 == 3)
        {
            cout << 3;
        }
        else
        {
            cout << 1;
        }
    }
    else if ((a + 2) % 10 == 0)
    {
        if (b % 4 == 1)
        {
            cout << 8;
        }
        else if (b % 4 == 2)
        {
            cout << 4;
        }
        else if (b % 4 == 3)
        {
            cout << 2;
        }
        else
        {
            cout << 6;
        }
    }
    return 0;
}
