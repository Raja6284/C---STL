#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    queue<int> q;   //First In First Out
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    cout<<"No. of element present in queue is :"<<q.size()<<endl;

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<"Elements of the queue are:";

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<endl;

    deque<int> dq;

    dq.push_back(5);
    dq.push_front(4);
    dq.push_back(6);


    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    dq.pop_front();
    dq.pop_back();
    
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    return 0;
}