#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head,*slow; 
        int n=0 ;
        while(temp){
            temp=temp->next;
            n++;
        }
        temp=head;
        for(int i=0; i<n/2;i++){
            temp= temp->next;
        }
        return temp;
   
    }
};

//Tortoise and Hare approach 
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *fast, *slow;
        slow = fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};


