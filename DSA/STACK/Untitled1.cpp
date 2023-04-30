#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	st.push(2);
	st.push(3);
	st.emplace(4);
	st.emplace(5);
	st.emplace(6);
	st.pop();
	
	stack<int> copy_stack=st;
	
	while(!copy_stack.empty()){
	    cout<<copy_stack.top()<<" ";
	    copy_stack.pop();
	}
	return 0;
}

