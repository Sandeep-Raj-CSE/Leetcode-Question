class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
        
        
    }
    void inorder(TreeNode*root,vector<int>&ans){
        if(root==NULL) return;
        ans.push_back(root->val);
        inorder(root->left,ans);
        
        inorder(root->right,ans);
        return;

    }
        
    
};