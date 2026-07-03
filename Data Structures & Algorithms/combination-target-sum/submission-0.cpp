class Solution {
public:
vector<vector<int>> ans;
void backtrack(int index,vector<int> & candidates,int target,vector<int>& current){
    if(target==0){
        ans.push_back(current);
        return;
    }
    if(index==candidates.size()) return;
    if(candidates[index]<=target){
        current.push_back(candidates[index]);
        backtrack(index,candidates,target-candidates[index],current);
        current.pop_back();
    }
    backtrack(index+1,candidates,target,current);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        backtrack(0,candidates,target,current);
        return ans;
    }
};
