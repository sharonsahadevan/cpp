#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter 2 numbers: " << endl;
    cin >> n >> m;

    while (n != m)
    {
        if (n > m)
            n = n - m;
        else
            m = m - n;
    }

    cout << "GCD is: " << n << endl;
    return 0;
}