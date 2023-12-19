#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    priority_queue<int>pq;  //by default this is max heap, it will arrange element in decreasing order automatically

    pq.push(4);
    pq.push(3);
    pq.push(1);
    pq.push(5);
    pq.push(2);
    //5 4 3 2 1
    cout<<"Size of max heap priority_queue is "<<pq.size()<<endl;

    pq.pop();
    while(!pq.empty()){
         cout<<pq.top()<<" ";
         pq.pop();
    }
    cout<<endl;


    //now creating min heap

    priority_queue<int,vector<int>,greater<int>> p;    //this is min heap, elements will be arranged in increasing order automatically

    p.push(4);
    p.push(3);
    p.push(1);
    p.push(5);
    p.push(2);
    //1 2 3 4 5
    cout<<"Size of min heap priority_queue is "<<p.size()<<endl;

    p.pop();
    while(!p.empty()){
         cout<<p.top()<<" ";
         p.pop();
    }
    cout<<endl;

    return 0;
}