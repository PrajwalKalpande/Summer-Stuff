/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private: 
   TreeNode* lca=NULL;
    bool search(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL)return false;
        int parentchild=0;
        if(root  ==p || root  ==q)parentchild=1;
        bool left,right;
        left = search(root->left,p,q)?1:0;
        right = search(root->right,p,q)?1:0;
        int total = left+right+parentchild;
        if(!lca && total==2)lca = root;
        if(total>0)return true;
        return false;
                
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        search(root,p,q);
        return lca;
    }
};