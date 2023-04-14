class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans(0), sum(0);
        for (int i=0; i<accounts.size(); i++){
            for (const auto& n:accounts[i]){
                sum+=n;
            }
            if (sum>ans){ans=sum;}
            sum=0;
        }
        return ans;
    }
};