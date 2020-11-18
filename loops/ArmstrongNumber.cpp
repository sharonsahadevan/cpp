#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, r, m, sum = 0;
    cout << "Enter a number:" << endl;
    cin >> n;
    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum += pow(r, 3);
    }

    cout << sum << endl;
    if (sum == m)
        cout << m << " is an Armstrong number" << endl;
    else
        cout << m << " is not an Armstrong number" << endl;

    return 0;
}