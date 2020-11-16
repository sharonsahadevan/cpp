#include <iostream>

using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter a number" << endl;
    cin >> number;

    for (int i = 1; i < number + 1; i++)
    {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}