#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<string> a;
	a.push_back("Max");
	a.push_back("Allen");  //aslo can use emplace_back() but doesn't work in devc++
	a.push_back("Clark");
	a.push_back("Barry");
	
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<"\t";              // can use iterator funtion auto it=v.begin()/end()/back()/rbegin()/rend()
	}								   // iterator points at memory address and a[] points at object	
	cout<<endl;
	
	a.erase(a.begin()+1);			   // pop_back() delete element from end.
	
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	
	a.insert(a.begin(),"Allen");
	
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	
}




