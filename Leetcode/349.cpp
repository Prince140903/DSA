#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int currNum, lastNum;
        std::vector<int> section;

        for(int i = 0; i < size1; i++){
            for(int j = 0; j < size2; j++){
                if(nums1[i] == nums2[j]){
                    section.push_back(nums2[j]);
                }
            }
        }
        std::sort(section.begin(), section.end());
        section.erase(std::unique(section.begin(), section.end()), section.end());
        return section;
    }
};