#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter the X value:" << endl;
    cin >> x;

    cout << "Enter the Y value:" << endl;
    cin >> y;

    if (x > y)
        cout << "X is bigger than Y" << endl;
    else
    {
        cout << "Y is bigger than X" << endl;
    }

    return 0;
}