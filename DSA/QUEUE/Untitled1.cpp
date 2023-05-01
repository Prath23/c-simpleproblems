#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    int size=q.size();
    
    queue<int> q2=q;
    while(! q2.empty()){
        cout<<q2.front()<<"\t";
        q2.pop();
        
    }
    
    
    return 0;
}
