#include <iostream>
using namespace std;

int main()
{
    int r, n, m, reverse = 0;
    cout << "Enter a number:" << endl;
    cin >> n;
    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;

        reverse = (reverse * 10) + r;
    }
    cout << "Reversed Number:" << reverse;
    return 0;
}