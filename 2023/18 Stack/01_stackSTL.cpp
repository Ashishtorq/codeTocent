#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    //insertion
    s.push(2);
    s.push(3);
    //  check the top element
    cout<<s.top()<<endl;
    // check empty or not
    cout<<s.empty()<<endl;
    // check the size of stack
    cout<<s.size();
    return 0;
}
