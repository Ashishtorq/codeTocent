#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(11);
    q.push(15);
    q.push(14);
    q.push(16);
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    if(q.empty()) cout<<"Empty"<<endl;
    else cout<<"not empty"<<endl;
    cout<<q.front(
    return 0
}
