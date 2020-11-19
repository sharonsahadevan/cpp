#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5}, sum = 0;

    for (int x : A)
        sum += x;

    cout << "Sum: " << sum << endl;
}