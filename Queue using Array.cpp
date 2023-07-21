#include <bits/stdc++.h> 
class Queue {
    
public:
    int start;
    int rear;
    int count;
    vector<int> store;
    Queue() {
        start=0;
        rear=0;
        count=0;

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return (count==0);
    }

    void enqueue(int data) {
        store.push_back(data);
        rear++;
        count++;
    }

    int dequeue() {
        if(count>0){
            start++;
            count--;
            return store[start-1];
        }
        return -1;
    }

    int front() {
        if(count>0){
            return store[start];
        }
        return -1;
    }
};