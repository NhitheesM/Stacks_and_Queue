// Using Stack 

/*
	Time complexity: O(N)
	Space Complexity: O(N)
	
	Where N is the number of elements in the queue. 
*/

#include <stack>

queue<int> reverseQueue(queue<int> q)
{	
    // Maintain a stack
    stack<int> stk;
	
    // Iterate till q is not empty
    while (!q.empty())
    {
        stk.push(q.front());
        q.pop();
    }

    while (!stk.empty())
    {	
        // Insert the top element of stk into q
        q.push(stk.top());
        stk.pop();
    }
	
    // Return the queue containing elements in reverse order
    return q;
}

// Using Array

/*
	Time complexity: O(N)
	Space Complexity: O(N)
	
	Where N is the number of elements in the queue. 
*/

#include <vector>

queue<int> reverseQueue(queue<int> q)
{
    int n = q.size();
	
    // Maintain a array
    vector<int> nums(n);

    for (int i = n - 1; i >= 0; --i)
    {
        nums[i] = q.front();
        q.pop();
    }
	
    // Iterate i from 0 to N - 1
    for (int i = 0; i < n; i++)
    {
        q.push(nums[i]);
    }
	
    // Return the queue containing elements in reverse order
    return q;
}


