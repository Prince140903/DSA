#include <iostream>
using namespace std;

// Without using third veriable
int main()
{
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Swapped two numbers: a: " << a << " b: " << b << endl;
}