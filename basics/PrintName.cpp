#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name" << endl;
    getline(cin, str);
    cout << "Hello " << str << endl;
    return 0;
}