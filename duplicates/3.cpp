#include <iostream>
#include <set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet; //중복없는 빠른 집합 자료구조를 선언하고 insert할때 중복이되면 없애주는거같음

        for (int n : nums){
            if (numSet.find(n) != numSet.end()){ //unordered_set 에서 n 이라는 값을 찾는데 값이 있으면 그 위치를 반환 없으면 numSet.end()를 반환함
                return true;
            }
            numSet.insert(n);
        }
        return false;
};
