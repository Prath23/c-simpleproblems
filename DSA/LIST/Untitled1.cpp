#include<bits/stdc++.h>
using namespace std;

int main(){
	list <int> a;
	a.push_front(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	for(auto i: a){
	    cout<<i<<"\t";
	}
	auto it=a.begin();
	auto it2=a.begin();
	advance(it,2);
	advance(it2,1);
	a.insert(it,88);
	a.erase(it2);
	for(auto i:a){
	    if(i==5){
	       i=10; 
	    }
		
	}
	 cout<<endl;
	for(auto i: a){
	   
	    cout<<i<<"\t";
	}
}
