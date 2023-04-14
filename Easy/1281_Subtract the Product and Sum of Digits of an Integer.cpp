class Solution {
public:
    int subtractProductAndSum(int n) {
        int product(n%10), sum(n%10);
        while (n/=10){
            product*=(n%10);
            sum+=(n%10);
        }
        return product-sum;
    }
};