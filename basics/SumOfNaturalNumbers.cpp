#include <iostream>
using namespace std;

int main()
{
    int number, sum;

    cout << "Enter Number:" << endl;
    scanf("%d", &number);

    sum = number * (number + 1) / 2;

    printf("Sum of %d natural numbers is: %d \n", number, sum);

    return 0;
}