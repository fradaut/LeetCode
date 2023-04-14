class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n(nums.size()), i(0);
        unordered_map<int, int> m;
        for (i=0; i<n; i++){
            if(m.find(target-nums.at(i))!=m.end()){
                ans.push_back(m[target-nums.at(i)]);
                ans.push_back(i);
                return ans;
            }
            m[nums.at(i)] = i;
        }
        return ans;
    }
};