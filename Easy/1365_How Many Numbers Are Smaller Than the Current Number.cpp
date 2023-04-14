class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count[101]={0};
        short i(0);
        for (i=0; i<nums.size(); i++){count[nums.at(i)]++;}
        for (i=1; i<101; i++){count[i]+=count[i-1];}
        for (i=0; i<nums.size(); i++){
            if (nums.at(i)==0){ans.push_back(0);}
            else {ans.push_back(count[nums.at(i)-1]);}
        }
        return ans;
    }
};