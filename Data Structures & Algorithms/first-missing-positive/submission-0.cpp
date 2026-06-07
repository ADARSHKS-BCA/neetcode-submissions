class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     int n=nums.size();
     unordered_set<int> result;
     int ans=0;
     for(int i=0;i<n;i++){
        result.insert(nums[i]);
     }
    for(int j=1;j<=result.size()+1;j++){
        if(result.count(j)==0) return j;
    }
     return ans;   
    }
};