#include <iostream>

using namespace std;

int main()
{
    int i, n, FactSum = 0;

    cout << "Enter a number:" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            FactSum += i;
    }

    if (FactSum == n * 2)
        cout << n << " is a perfect number" << endl;
    else
        cout << n << " is NOT a perfect number" << endl;

    return 0;
}