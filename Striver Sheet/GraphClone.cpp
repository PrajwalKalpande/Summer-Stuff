/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void bfs(Node* node,Node* current,map<Node*,Node*>& mp){
        if(node==NULL)return ;
        current->val = node->val;
        
        for(auto x: node->neighbors){
            if(mp.find(x)==mp.end()){
                  
                mp[x] = new Node(x->val);
            }
            
            Node* temp  = mp[x];
            
            current->neighbors.push_back(temp);
            bfs(node,temp,mp);
           
        }
        return;
        
    }
    
    Node* cloneGraph(Node* node) {
        map<Node*,Node*> mp;
        Node* root =new Node(node->val);
        
        queue<Node*> q;
        mp[node]=root;
        q.push(node);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            
            for(auto adj:curr->neighbors){
                if(mp.find(adj)==mp.end()){
                    mp[adj]=new Node(adj->val);
                    q.push(adj);
                }
                mp[curr]->neighbors.push_back(mp[adj]);
                
            }
            
            
        }
        return root;
    }
};