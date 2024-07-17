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
    vector<TreeNode*>ans;
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& d) {
      int t=  help(root,d);
      if(t==0){
        ans.push_back(root);
      }
        return ans;
    }
    int help(TreeNode* root, vector<int>& d){
        if(!root)return 0;
        int t=help(root->left,d);
        if(t){
            root->left=NULL;
        }
        t=help(root->right,d);
        if(t){
            root->right=NULL;
        }
        for(auto x:d){
            if(x==root->val){
                if(root->left)ans.push_back(root->left);
                if(root->right)ans.push_back(root->right);
                return 1;
            }
        }
        return 0;

    }
};