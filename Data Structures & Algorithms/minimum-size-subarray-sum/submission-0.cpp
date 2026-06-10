class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,total=0, res=INT_MAX;
        int n=nums.size();
        for(int r=0;r<n;r++){
            total+=nums[r];
            while(total>=target){
                res=min(r-l+1,res);
                total-=nums[l];
                l++;
            }
        }
        return res==INT_MAX ? 0:res;
    }
};