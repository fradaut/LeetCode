class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans(0);
        for (const auto& n:jewels){
            ans += count(stones.begin(), stones.end(), n);
        }
        return ans;
    }
};