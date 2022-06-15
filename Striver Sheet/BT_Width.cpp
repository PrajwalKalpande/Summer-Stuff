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
    
    int widthOfBinaryTree(TreeNode* root) {
         
        queue<pair<TreeNode*,long long>> q;
     
        q.push({root,0});
        int width=0,size = 0;
        TreeNode* cur;
        int leftmost,rightmost,curmin;
        long long cur_id;
        while(!q.empty()){
            curmin = q.front().second;
            size = q.size();
            for(int i=0;i<size;i++){
            cur = q.front().first;
            cur_id = q.front().second-curmin;
            q.pop();
                if(i==0)leftmost = cur_id;
                if(i==size-1)rightmost =cur_id;
            if(cur->left)q.push({cur->left,2*cur_id+1});
            if(cur->right)q.push({cur->right,2*cur_id+2});
                
            }
            width =max(width,rightmost-leftmost+1);
            
        }
        return width;
    }
};