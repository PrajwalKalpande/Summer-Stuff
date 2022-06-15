#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
      stack<int> stk1,stk2;
       
    MyQueue() {
    }
    
    void push(int x) {
        while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk2.push(x);
        while(!stk2.empty()){
            stk1.push(stk2.top());
            stk2.pop();
        }
        return;
    }
    
    int pop() {
       int front =  stk1.top();
        stk1.pop();
        return front;
    }
    
    int peek() {
        if(!stk1.empty())return stk1.top();
        return -1;
    }
    
    bool empty() {
        return stk1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */