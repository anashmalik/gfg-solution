/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int>ans;
        help(root,ans);
        return ans;
    }
    void help(Node *r,vector<int>&a){
        if(!r)return;
        for(auto x:r->children){
            help(x,a);
        }
        a.push_back(r->val);
    }
};