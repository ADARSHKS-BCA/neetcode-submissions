class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n=nums.size();
         unordered_map<int,int> result;
        vector<int> ans;
         for(int i=0;i<n;i++){
            result[nums[i]]++;
         }
         for(auto num:result){
            if(num.second>(n/3)){
                 ans.push_back(num.first);
            }
         }
         return ans;
    }
};