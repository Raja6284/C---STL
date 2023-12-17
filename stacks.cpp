#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Total no. of element present in the stack is : " << s.size() << endl;

    cout << "Element present at top most of stack is :" << s.top() << endl;

    s.pop(); // calling pop function, it will top most element of the stack

    cout << "Element present at top most of stack is :" << s.top() << endl;
    cout << "Total no. of element present in the stack is : " << s.size() << endl;
    while (!s.empty())
    { // this will keep printing the element of the stack from top to bottom till the stack is not empty
        cout << s.top() << endl;
        s.pop();
    }

    cout << "Total no. of element present in the stack is : " << s.size() << endl;
    return 0;
}