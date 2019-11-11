/*
#문제설명
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

class Solution {
public:
    unordered_map<int, int> hash;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        for(int i=0; i < nums.size(); ++i){
            int complement = target - nums[i];
            if(hash.find(complement) != hash.end()){
                ret.push_back(i);
                ret.push_back(hash[complement]);
                break;
            }
            hash[nums[i]] = i;
        }
        return ret;
    }
};

//
