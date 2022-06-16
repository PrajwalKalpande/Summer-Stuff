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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        vector<vector<int>> ans;
          if(root==NULL)return ans;
        int level ;
        TreeNode* cur;
        q.push({root,0});
        while(!q.empty()){
            cur = q.front().first;
            level = q.front().second;
            q.pop();
            if(ans.size()>level){
                ans[level].push_back(cur->val);
            }
            else{
                ans.push_back({cur->val});
            }
           if(cur->left) q.push({cur->left,level+1});
           if(cur->right) q.push({cur->right,level+1});
            
        }
        return ans;
    }
};