#include<iostream>
#include<vector>
#define _VECTOR_TCC 
class Solution {
public:
    _VECTOR_TCC<> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int start=0;
        int end=numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
                else if(numbers[start]+numbers[end]<target)
                start++;
                else
                end--;
            
        }
        return ans;
        
    }
};