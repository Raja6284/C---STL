#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// v.push_back() :- insert element at last position
// v.pop_back() :- delete an element from lasts position
//  v.size() :- returns the number of elements present in the vector
// v.resize(new_size) :- change the size of vector to given new_size and fill the rest index wiht 0
// v.begin() :- pointer to first index of the vector
// v.end() :- pointer to last element of the vector
// v.erase(position,value) :- delente element from a particular position in a vector
// v.isert(poition,value) :- insert element at a particular position in a vector
// reverse(positon1,positon2) :- reverse the element of the vector from position1 to position2
// sort(positon1,positon2) :- sort the element of the vector from position1 to position2 in ascending order

int main()
{

    vector<int> v;

    cout << "Current size of vector is: " << v.size() << endl;

    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout << "Current size of vector is: " << v.size() << endl;

    cout << "Elements of the vector are : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "Elements after calling v.pop_back() are :";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.push_back(9);
    cout << endl;

    cout << "Size of the vector is " << v.size() << endl;
    cout << "First element of the vector is :" << (*(v.begin())) << endl;
    // cout << "Last element of the vector is :" << (*(v.end())) << endl;

    v.erase((v.begin() + 1)); // erase element from a particular position in a vector

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert((v.begin() + 1), 10);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    reverse(v.begin(), v.end());
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}