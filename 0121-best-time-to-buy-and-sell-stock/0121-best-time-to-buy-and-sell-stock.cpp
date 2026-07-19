class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int max = 0;
        if(n == 0 || n == 1) return 0;
        for(int i = 1;i<n;i++){
            if(prices[i] < min) min = prices[i];
            if(prices[i] - min > max) max = prices[i] - min;
        }
        return max;
    }
};