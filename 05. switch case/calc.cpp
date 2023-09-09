#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a" << endl;
    cin >> a;
    char op;
    cout << "Enter operator" << endl;
    cin >> op;
    int b;
    cout << "Enter b" << endl;
    cin >> b;

    switch(op) {
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
    }

    return 0;
}