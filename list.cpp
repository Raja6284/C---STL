#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l;

    l.push_front(5);
    l.push_front(4);
    l.push_back(6);
    l.push_back(7);

    list<int>::iterator it;

    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    l.pop_front();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    l.pop_back();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Front element is " << l.front() << endl;
    cout << "Back element is " << l.back() << endl;

    l.push_back(3);
    l.push_front(9);

    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    l.reverse();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    l.sort();
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}