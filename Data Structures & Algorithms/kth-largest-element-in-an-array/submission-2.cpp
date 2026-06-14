class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> ans;
        for(auto num:nums){
            if(ans.size()<k) ans.push(num);
            else if( num>ans.top()){
                ans.pop();
                ans.push(num);
            }
        }
        return ans.top();
    }
};
