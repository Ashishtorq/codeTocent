#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size();
    return 0;
}