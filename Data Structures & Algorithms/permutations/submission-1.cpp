class Solution {
public:
vector<vector<int>> ans;
vector<int> path;
void backtrack(vector<int>&nums,vector<bool>&used){
    if(path.size()==nums.size()){
        ans.push_back(path);
        return;
    }
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(used[i]) continue;
        used[i]= true;
        path.push_back(nums[i]);
        backtrack(nums,used);
        path.pop_back();
        used[i]=false;
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        backtrack(nums,used);
        return ans;
    }
};
