#include<bits/stdc++.h>
using namespace std;

int main(){
	deque<string> dq={"max","sony","barry"};
	dq.push_back("jack");
	dq.push_front("oliver");
	for(auto i:dq){
	    cout<<i<<'\t';
	}
}

