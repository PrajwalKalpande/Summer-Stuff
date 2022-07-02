#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
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
     
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder ;
        stack<TreeNode*> stk;
        TreeNode* cur = root;
        while(cur!=NULL || !stk.empty()){
            while(cur!=NULL){
                stk.push(cur);
                cur = cur->left;
            }
            cur = stk.top();
            stk.pop();
            inorder.push_back(cur->val);
            cur = cur->right;
  
        }
        
       return inorder;
    }
};