#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int arrLength)
{
    unordered_map<int, int> mp;
    int freq = 0;

    for (int i = 0; i < arrLength; i++)
    {
        mp[arr[i]]++;
    }

    for (auto pair : mp)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }
}

int main()
{
    int arr[] = {1, 1, 3, 4, 5, 1, 3, 4, 5};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    cout << "The Freqency of given array is: " << endl;
    freq(arr, arrLength);

    return 0;
}