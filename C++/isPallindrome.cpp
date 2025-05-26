#include <iostream>
using namespace std;

bool isPallindrome(int n)
{
    int original = n, reversed = 0;

    while (n > 0)
    {
        int temp = n % 10;
        reversed = reversed * 10 + temp;
        n /= 10;
    }

    return original == reversed;
}

int main()
{
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "The given value is " << (isPallindrome(n) ? "" : "not ") << "pallindrome" << endl;
    return 0;
}