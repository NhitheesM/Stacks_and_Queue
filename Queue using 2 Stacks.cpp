#include <bits/stdc++.h> 
class Queue{
    // Stacks to be used in the operations.
    stack<int> stk1, stk2;
    int count=0;
    
    public:
    // Enqueues 'X' into the queue. Returns true after enqueuing.
    bool enqueue(int X){
        stk1.push(X);
        count++;
        return true;        
    }

    /*
      Dequeues top element from queue. Returns -1 if the queue is empty, 
      otherwise returns the popped element.
    */
    int dequeue(){
        if(count<1) return -1;
        while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
        }
        int temp=stk2.top();
        stk2.pop();
        while(!stk2.empty()){
            stk1.push(stk2.top());
            stk2.pop();
        }
        count--;
        return temp;
    }
};