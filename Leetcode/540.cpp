#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        int st = 0, end = n - 1;


        while(st <= end){
            int mid = st + (end - st) / 2;
            
            if(mid == 0 && nums[0] != nums[1]) return nums[mid];
            if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];

            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];

            if(mid % 2 == 0){                       //Even
                if(nums[mid] == nums[mid-1]){   //Left
                    end = mid - 1;
                } else {                        //Right
                    st = mid + 1;
                }
            } else {                                //Odd
               if(nums[mid] == nums[mid-1]){    //Right
                    st = mid + 1;
                } else {                        //Left
                    end = mid - 1;
                } 
            }
        } 
        return -1;
    }
};