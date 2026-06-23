class Solution {
public:
    vector<vector<int>> result;
    void backtrack(vector<int>& nums,int start,vector<int>& current){
        result.push_back(current);
        int n=nums.size();
        for(int i=start;i<n;i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            current.push_back(nums[i]);
            backtrack(nums,i+1,current);
            current.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>current;
        sort(nums.begin(),nums.end());
        backtrack(nums,0,current);
        return result;
    }
};
/*
 similar to subset 1 use the back tracking and the recursion 
 but sort the array before passing has the value 
 check if the i is greater then start and if the i is equal to the previous value 
*/