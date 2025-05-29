class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> counter;
        vector<vector<int>> temp(n+1); //1,2,3,4,5,6번호로 바뀜
        vector<int> res;
        for(auto x: nums){
            counter[x] = counter[x] + 1;
        }
        for(auto [key, count]: counter){
            temp[count].push_back(key);
        }
        int count = 0;
        for(int i=n; i>=0 && count<k ; i--){
            for(int x:temp[i]){
                res.push_back(x);
                count++;
            }
        }
        return res;
    }
};