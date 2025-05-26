#include <iostream>
using namespace std;

bool isLeapYear(int n)
{
    if (n % 400 == 0)
        return true;
    if (n % 100 == 0)
        return false;
    return n % 4 == 0;
}

int main()
{
    int n;
    cout << "Enter year to check: ";
    cin >> n;
    if (n < 1000 || n > 9999)
    {
        cout << "Invalid Input: " << n;
        return 0;
    }

    cout << "The input year is" << (isLeapYear(n) ? " " : " not ") << "leap year" << endl;
    return 0;
}