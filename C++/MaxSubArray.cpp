// Maximum SubArray using Brute Force Approach

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int maxSum = 0;

    for(int st = 0; st < n; st++){
        int arrSum = 0;
        
        for(int end = st; end < n; end++){
            arrSum += arr[end];  
            maxSum = max(arrSum, maxSum);
        }
    }

    cout << "The Maximum of SubArray is: " << maxSum;
}