class TrieNode{
    public:
    TrieNode* children[26];
    bool isLeaf ;
    
    TrieNode(){
        isLeaf = false;
        for(int i=0;i<26;i++)children[i]=NULL;
    }
};

 void insert(TrieNode* root,string s){
      TrieNode* node = root;
      int ch ;
      for(int i=0;i<s.size();i++){
          ch = s[i]-'a';
          if(!node->children[ch])node->children[ch]=new TrieNode();
          node = node->children[ch];
      }
      node->isLeaf= true;
      
  }
void search(TrieNode*root,string temp,string& ans){
    char ch ;
 
     for(int i=0;i<26;i++){
          
         if(  root->children[i] && root->children[i]->isLeaf){
             ch = i+'a';
         search(root->children[i], temp+ch,ans);
             
            
         }
         else{
             if(ans.size()<temp.size())ans = temp;
         }
     }
    return;
}
string completeString(int n, vector<string> &a){
    // Write your code here.
     TrieNode* root = new TrieNode();
     for(int i=0;i<n;i++){
         insert(root,a[i]);
     }
     string ans ="";
     search(root,"",ans);
    if(ans.size())return ans;
    return "None";
}



 