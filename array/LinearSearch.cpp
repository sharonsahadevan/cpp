#include <iostream>

using namespace std;

int main()
{
    int A[10], n = 10, key;

    cout << "Enter numbers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter the Key:" << endl;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
            cout << "Key Found at " << i << "index" << endl;
    }

    cout << "Key Not found!" << endl;
    return 0;
}