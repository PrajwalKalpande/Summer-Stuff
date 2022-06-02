#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
            return NULL;
        unordered_map<Node *, Node *> mp;
        Node *dummy;
        dummy = head;
        Node *newhead = new Node(head->val);
        mp[head] = newhead;
        head = head->next;

        while (head)
        {
            newhead->next = new Node(head->val);
            newhead = newhead->next;
            mp[head] = newhead;
            head = head->next;
        }

        head = dummy;
        Node *temp;
        while (head)
        {
            temp = mp[head];
            temp->random = mp[head->random];
            head = head->next;
        }

        return mp[dummy];
    }
};
