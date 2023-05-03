
#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.top()<<endl;
    priority_queue<int> q2=q;
    while(!q2.empty()){
        cout<<q2.top()<<'\t';
        q2.pop();
    }
    
    //priority_queue<int,vector<int>,greater<int>> q3=q;
    //does the same but in ascending order
    


    return 0;
}
