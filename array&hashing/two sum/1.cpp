class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> counter; //// A mapping to store numbers and their indices
            for (int i=0 ; i < nums.size(); i++){
                int temp = target - nums[i]; // find the new target number
                if(counter.find(temp) != counter.end()){
                    return {counter[temp], i}; // return newtarget number and current number i
                }
                counter[nums[i]] = i; // store the number with its index
            }
            return {};
        }
    };