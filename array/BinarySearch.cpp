#include <iostream>

using namespace std;

int main()
{
    int A[10] = {10, 20, 35, 40, 50, 60, 70, 80, 95, 100}, l = 0, h = 9, mid, key;

    mid = l + h / 2;

    while (l <= h)
    {
        if (key == A[mid])
        {
            cout << "Found" << endl;
            return 0;
        }
        else if (key > A[mid])
            l = mid + 1;
        else
            h = mid - 1;
    }

    cout << "Not Found" << endl;
    return 0;
}