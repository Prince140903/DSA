#include <iostream>
using namespace std;

// Sum of A.P series using a: First Term, d: Distance, n: Total Nos

int main()
{
    int n, a, d, sum;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "\nEnter the value of a: ";
    cin >> a;
    cout << "\nEnter the value of d: ";
    cin >> d;

    sum = (n * (2 * a + (n - 1) * d)) / 2;
    cout << "The sum of A.P. series is: " << sum << endl;
    return 0;
}