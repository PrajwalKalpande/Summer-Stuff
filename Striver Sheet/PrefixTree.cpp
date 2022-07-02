class TrieNode{
    public:
    TrieNode* children [26];
    int index ;
    TrieNode(){
         
        index = 0;
        for(int i=0;i<26;i++){children[i]=NULL;}
    }
    
};



class Trie {
      TrieNode* root;
//set to -1 if leaf
public:
    Trie() {
     root = new TrieNode();
    }
    
    void insert(string word) {
        int ch;
        TrieNode* node = root;
        for(int i=0;i<word.size();i++){
            ch = word[i]-'a';
            if(!node->children[ch]) node->children[ch] = new TrieNode();
            node = node->children[ch];
        }
        node->index = -1;
        return;
    }
    
    bool search(string word) {
        int i=0,ch;
        TrieNode* node=root;
        while(i<word.size()){
            ch = word[i]-'a';
            if(!node->children[ch])return false;
            node = node->children[ch];
            i++;
        }
        if(node->index==-1)return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        int i=0,ch;
        TrieNode* node=root;
        while(i<prefix.size()){
            ch = prefix[i]-'a';
            if(!node->children[ch])return false;
            node = node->children[ch];
            i++;
        }
  
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */