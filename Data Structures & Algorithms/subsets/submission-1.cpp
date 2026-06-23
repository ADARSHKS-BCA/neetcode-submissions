class Solution {
public:
   vector<vector<int>> result;
    void backtrack(vector<int>& nums,int start,vector<int>& current){
        result.push_back(current);
        int n=nums.size();
        for(int i=start;i<n;i++){
            current.push_back(nums[i]);
            backtrack(nums,i+1,current);
            current.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>current;
       backtrack(nums,0,current);
       return result; 
    }
};
/*
 * CODE EXPLANATION:
 * 1. result: A global-style vector to store all generated subsets.
 * 2. backtrack function: Uses recursion to explore all possible combinations.
 * 3. result.push_back(current): Every time we enter the function, the 'current' 
 * path represents a valid subset, so we save it.
 * 4. for (int i = start; i < nums.size(); i++): The 'start' variable ensures we 
 * only move forward in the array, preventing duplicate subsets like [1,2] and [2,1].
 * 5. current.push_back(nums[i]): We temporarily include an element to build a path.
 * 6. backtrack(nums, i + 1, current): We recurse, forcing the next step to look 
 * only at elements appearing AFTER the current one.
 * 7. current.pop_back(): The 'backtrack' step; we remove the last element to 
 * clean up the path so we can try the next available number.
 */
