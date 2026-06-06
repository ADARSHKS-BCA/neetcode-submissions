class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
        int val = prices[0];
        vector<int> result;
        for (int i = 1; i < n; i++) {
            ans = prices[i] - val;
            if(ans>=0){
            result.push_back(ans);
            }
            val=prices[i];
        }
        int sum = 0;
        for (int num: result ) {
            sum += num;
        }
        return sum;
    }
};