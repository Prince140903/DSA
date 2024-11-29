#include<vector>
#include<iostream>
#include<unordered_map>         //Added this to use
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        //Hash Mapping
        unordered_map<char, int> d = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int Sum = 0, i = 0;
        int n = s.size();

        while(i < n){
            if(i < n-1 && d[s[i]] < d[s[i+1]]){
                Sum += d[s[i+1]] - d[s[i]];
                i += 2;
            } else {
                Sum += d[s[i]];
                i++;
            }
        }

        return Sum;
    }
};