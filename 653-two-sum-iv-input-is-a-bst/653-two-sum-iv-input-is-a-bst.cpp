/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     vector<int> nums;
    
    void dfs(TreeNode* now) {
        if(now==nullptr)return;
        nums.push_back(now->val);
        dfs(now->left);
        dfs(now->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        dfs(root);
        for(int i=0;i<nums.size();i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]+nums[j]==k)return true;
            }
        }
        return false;
    }
};