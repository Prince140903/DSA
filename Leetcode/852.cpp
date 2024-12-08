#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2;

        while(st <= end){
            int mid = st + (end - st) / 2;

            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                return mid;
            } else if(arr[mid] > arr[mid+1]){           //left side
                end = mid - 1;
            } else {                                    //right side
                st = mid + 1;
            }
        }

        return -1;
    }
};