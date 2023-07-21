
#include<stack>

vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int> ans(n,-1);
    stack<int> mystack;

    for(int i=n-1; i>=0 ;i--){
        while(!mystack.empty() && arr[i]>=mystack.top()){
            mystack.pop();
        }
        if(!mystack.empty()) ans[i]=mystack.top();
        mystack.push(arr[i]);
    }
    return ans;

}