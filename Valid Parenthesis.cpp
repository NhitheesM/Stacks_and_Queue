 /*
	Time Complexity : O(N)
	Space Complexity : O(N)

	Where N is the length of the string.
*/

bool isValidParenthesis(string S) 
{   
    stack<char> stk;
	for(int i=0;i <S.length();i++){
		if(S[i]=='(' || S[i]=='{' || S[i]=='[' ){
			stk.push(S[i]);
			continue;
		}
		if(stk.empty()){
			return false;
		}
		
		char x=stk.top();
		stk.pop();
		
		switch(S[i]){
			case ')':
				if(x!='('){
					return false;
				}
				break;
			case '}':
				if(x!='{'){
					return false;
				}
				break;
			case ']':
				if(x!='['){
					return false;
				}
				break;
		}
		
	}
	return (stk.empty());
} 

 