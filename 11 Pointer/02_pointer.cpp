#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *p = &i;
    int **p2 = &p;

    cout<< i <<endl;
    cout<< *p <<endl;
    cout<< **p <<endl;
    return 0;
}