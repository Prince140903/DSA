#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {18, 2, 4, 5, 12, 3, 9, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    // increasing order half
    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[i] << " ";
    }
    // Decreasing order half
    for (int i = n - 1; i >= n / 2; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}