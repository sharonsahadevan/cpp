#include <iostream>

using namespace std;

int main()
{
    int max = 0, A[] = {23, 56, 34, 98, 74};

    for (int i = 0; i < 5; i++)
    {
        if (A[i] > max)
            max = A[i];
    }

    cout << "Max: " << max << endl;
    return 0;
}