
#include <vector>
#include <stack>
vector<int> findSpans(std::vector<int>& price) {
    vector<int> result;
    stack<int> stk;

    for (int i = 0; i < price.size(); i++) {
        while(!stk.empty() && price[stk.top()]<=price[i]){
            stk.pop();
        }
        int span= stk.empty() ? i+1 : i-stk.top();
        result.push_back(span);
        stk.push(i);

    }

    return result;
}

