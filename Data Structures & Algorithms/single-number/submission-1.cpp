class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count^= nums[i];
        }
        return count;
    }
};
