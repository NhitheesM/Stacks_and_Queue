#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack {
    vector<int> store;
    int count;
    int minElement;

public:
    minStack() {
        count = 0;
        minElement = INT_MAX;
    }

    void push(int num) {
        store.push_back(num);
        count++;

        if (num < minElement) {
            minElement = num;
        }
    }

    int pop() {
        if (count == 0)
            return -1;

        int temp = store[count - 1];
        store.pop_back();
        count--;

        if (temp == minElement) {
            minElement = INT_MAX;
            for (int i = 0; i < count; i++) {
                if (store[i] < minElement) {
                    minElement = store[i];
                }
            }
        }

        return temp;
    }

    int top() {
        if (count == 0)
            return -1;

        return store[count - 1];
    }

    int getMin() {
        if (count == 0)
            return -1;

        return minElement;
    }
};