#include <iostream>
using namespace std;

long long fact(int n)
{
    long long fact = 1;
    while (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }
}

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << fact(n) << endl;
    return 0;
}