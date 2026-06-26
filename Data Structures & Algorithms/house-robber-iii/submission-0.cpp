class Solution {
public:
    // Returns {rob, notRob} for each subtree
    pair<int, int> dfs(TreeNode* node) {
        if (!node) return {0, 0};

        auto [leftRob,  leftSkip]  = dfs(node->left);
        auto [rightRob, rightSkip] = dfs(node->right);

        // Rob this node → cannot rob direct children
        int rob    = node->val + leftSkip + rightSkip;

        // Skip this node → children can be robbed OR skipped (take best)
        int notRob = max(leftRob, leftSkip) + max(rightRob, rightSkip);

        return {rob, notRob};
    }

    int rob(TreeNode* root) {
        auto [robRoot, skipRoot] = dfs(root);
        return max(robRoot, skipRoot);
    }
};