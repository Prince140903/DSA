#include<vector>
#include<iostream>
using namespace std;

// Container with Most Water using Brute force method
class Solution {
public:
    int maxArea(vector<int>& height) {
        int MaxWater = 0;
        int n = height.size();

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int width = j-i;
                int ht = min(height[i], height[j]);
                int area = width * ht;

                MaxWater = max(MaxWater, area);
            }
        }
        return MaxWater;
    }
};

// Container with Most Water using (2)Two Pointer Approach

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int MaxWater = 0, leftP = 0, rightP = n-1;          //leftP and rightP are Two Pointers
        int ans = 0;

        while(leftP < rightP){
            int weight = rightP - leftP;
            int ht = min(height[rightP], height[leftP]);
            int CurrWater = weight * ht;
            
            MaxWater = max(MaxWater, CurrWater);

            height[rightP] > height[leftP] ? leftP++ : rightP--;        //Ternary Operation
        }
        return MaxWater;
    }
};