#include <iostream>
using namespace std;

int main()
{
    float base, height, area;

    cout << "Enter triangle base" << endl;
    cin >> base;

    cout << "Enter triangle height" << endl;
    cin >> height;

    area = (base * height) / 2;

    printf("Area: %f ", area);

    return 0;
}