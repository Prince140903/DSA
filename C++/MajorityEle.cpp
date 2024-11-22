#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Majority Element using Brute Force Method | Time complexity O(n^2)

// int Majority(vector<int> nums){
//     int n = nums.size();

//     for(int val : nums){
//         int freq = 0;

//         for(int el : nums){
//             if(el == val){
//                 freq++;
//             }
//         }
//         if(freq > n / 2){
//             return val;
//         }
//     }

//     return -1;
// }

//Majority Element using Optimized sort Method | Time complexity O(nlogn)

// int Majority(vector<int> nums){
//     int n = nums.size();
//     int freq = 1, ans = nums[0];

//     sort(nums.begin(), nums.end());

//     for(int i = 1; i < n; i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }
//         else{
//             freq = 1;
//             ans = nums[i];
//         }

//         if(freq > n / 2){
//             return ans;
//         }
//     }

//     return -1;
// }

//Majority Element using Optimized sort Method | Time complexity O(nlogn)

int Majority(vector<int> nums){
    int n = nums.size();
    int freq = 1, ans = nums[0];

    sort(nums.begin(), nums.end());

    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }

        if(freq > n / 2){
            return ans;
        }
    }

    return -1;
}


int main() {
    vector<int> nums = {1, 2, 2, 1, 2};

    int ME = Majority(nums);

    cout << "The Majority Element is: " << ME;

    return 0;
}