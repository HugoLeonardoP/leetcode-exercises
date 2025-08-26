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

 //teste
class Solution {
public:
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return v;
    }

    void inOrder(TreeNode* root){
        if(root){
            inOrder(root->left);
            v.insert(v.end(), root->val);
            inOrder(root->right);
        }
    }
};