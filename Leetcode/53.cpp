#include<vector>
#include<iostream>
#include<limits.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int arrSum = 0, maxSum = INT_MIN;

        for(int value : nums){
            arrSum += value;
            maxSum = max(arrSum, maxSum);
            if(arrSum < 0){
                arrSum = 0;
            }
        }
        return maxSum;
    }
};