#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    set<int> s; //all elements will be in sorted order, no duplicate elements, all elements will be unique

    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(7);
    s.insert(5);
    //4 5 6 7
    for(auto x:s){
        cout<<x<<" ";
    }

    cout<<endl;

    //cout<<(*s.find(5)); s.find(5)-> return the iterator of 5

    if(s.count(5)){ //similarly check for other elements
        cout<<"present";
    }else{
        cout<<"absent";
    }

    return 0;
}