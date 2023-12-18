#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, int> p;

    p.first = 5;
    p.second = 10;

    cout << "{" << p.first << "," << p.second << "}"<<endl;

    // chaining of pair

    pair<int, pair<int,int>> p1;

    p1.first = 3;
    p1.second.first = 6;
    p1.second.second = 9;

    cout<<p1.first<<endl;
    cout<<p1.second.first<<endl;
    cout<<p1.second.second<<endl;

    vector<pair<int, int>> v;       //constructing vector of pair

    int n;
    cout << "Enter the value of n:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}