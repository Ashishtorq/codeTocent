#include<iostream>
using namespace std;
void f(int i, int n, int x){
    if(i>x)return;
    f(i+1,n,x);
    cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    f(n,n,x);
    return 0;
}