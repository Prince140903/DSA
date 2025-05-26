#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    // Store primes in a list
    vector<int> primesList;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            primesList.push_back(i);
    }
    return primesList;
}

int main()
{
    int x, y, a, b;
    cin >> x >> y;

    int limit = 100000; // Adjust this limit if needed
    vector<int> primes = sieve(limit);

    if (x <= primes.size())
        a = primes[x - 1];
    else
        cout << "Not enough primes generated!" << endl;

    vector<int> primes2 = sieve(limit);

    if (y <= primes2.size())
        b = primes2[y - 1];
    else
        cout << "Not enough primes generated!" << endl;

    int cal = a * b - 1;

    cout << cal;
    return 0;
}
