#include <iostream>

using namespace std;

int main()
{
    // int num = 5;
    // int *ptr = &num;
    // cout << &num << endl;
    // cout << *ptr << endl
    // (*ptr)++;
    // cout << *ptr << endl;
    int n = 5;
    int *p = &n;
    int *q = p;
    cout<<p<<" - "<<*p<<" - "<<q<<" - "<<*q<<endl;

    return 0;
}
