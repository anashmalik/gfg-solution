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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        map<int, TreeNode*>mp;
        map<int,vector<int>>chi;
        for(auto x:d){
            chi[x[0]]={0,0};
            chi[x[1]]={0,0};
        }
        for(auto x:d){
            mp[x[1]]= new TreeNode(x[1]);
            chi[x[0]][0]++;
            chi[x[1]][1]++;
        }
         TreeNode* root=NULL;
        for(auto x:chi){
            // cout<<x.second[0]<<" "<<x.second[1]<<endl;
            if(x.second[1]==0){
                
                root= new  TreeNode(x.first);
                mp[x.first]=root;
                break;
            }
            

        }
        for(auto x:d){
            if(x[2]){
                mp[x[0]]->left=mp[x[1]];
            }
            else{
                mp[x[0]]->right=mp[x[1]];
            }
        }
        return root;
    }
};