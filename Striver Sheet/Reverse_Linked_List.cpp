#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;


//Recursive Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if(head==NULL || head->next==NULL)return head;
        
        ListNode* rest= reverseList(head->next);
        
        head->next->next =head;
        head->next =NULL;
        return rest;
        
        
        
    }
};

//Iterative Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if(!head)return NULL;
        
        ListNode* prev,*curr,*next ;
        prev=NULL;
        curr=head;
        next=head->next;
        while(curr->next){
            next = curr->next;
            curr->next =prev;
            prev = curr;
            curr = next;
        }
        curr->next = prev;
        
        return curr;
        
    }
};