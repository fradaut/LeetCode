class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        for (short i=0; i<indices.size(); i++){ans[indices.at(i)] = s[i];}
        return ans;
    }
};