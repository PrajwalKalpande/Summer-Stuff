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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        stack<TreeNode*> stk;
        TreeNode* cur = root;
        TreeNode* temp;
        while(cur!=NULL || !stk.empty()){
           if(cur){stk.push(cur);cur=cur->left;}
            else{
                temp = stk.top();
                
            if(temp->right){
                cur=temp->right;   
            }
            else{
                stk.pop();
                postorder.push_back(temp->val);
                while(!stk.empty() && temp==stk.top()->right){
                    temp = stk.top();
                    stk.pop();
                    postorder.push_back(temp->val);
                    
                }
            }   
            }
            
        }
        return postorder;
    }
};