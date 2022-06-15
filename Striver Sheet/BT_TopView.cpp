#include<bits/stdc++.h>
using namespace std;

        map<int,int> mp;
        int offset = 0; 
        queue<pair<Node*,int>> q;
        q.push({root,0});
        Node* cur; 
        vector<int> bottom;
        while(!q.empty()){
            
            cur = q.front().first;
            if(cur==NULL){
                q.pop();
                continue;}
                
            offset = q.front().second;
            mp[offset] = cur->data;
            q.pop();
            
            q.push({cur->left,offset-1});
            q.push({cur->right,offset+1});
   
        }
        
        for(auto x:mp){
            bottom.push_back(x.second);
        }
        
        return bottom;
        