//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// https://leetcode.com/problems/contains-duplicate/
#include <iostream>
#include <set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int originalCount = nums.size();

        set<int> uniqueElements(nums.begin(), nums.end());

        int uniqueCount = uniqueElements.size();

        return originalCount != uniqueCount;
    }
};

//다른 방법

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> numSet(nums.begin(), nums.end());
            return numSet.size() < nums.size();        
        }
    };