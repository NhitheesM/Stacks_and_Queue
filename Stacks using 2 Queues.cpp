#include <bits/stdc++.h> 
class Stack {
	int count;
    int topvalue;
    queue<int> q1,q2;

   public:
    Stack() {
        this->count=0;
        this->topvalue;
        this->q1;
        this->q2;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return count;
    }

    bool isEmpty() {
        return (count==0);
    }

    void push(int element) {
        q1.push(element);
        count++;
    }

    int pop() {
        if(count==0) return -1;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        while(q2.size()>1){
            q1.push(q2.front());
            q2.pop();
        }
        int temp=q2.front();
        q2.pop();
        count--;
        return temp;
    }

    int top() {
        if(count==0) return -1;
        return q1.back();
    }
};