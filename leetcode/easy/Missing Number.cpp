/*
#문제설명
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
*/

class Solution{
public:
    
    int missingNumber(vector<int>& nums) {
        long n = nums.size();
        return n * (n+1) / 2 - accumulate(begin(nums), end(nums), 0);
    }
};
