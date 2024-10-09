#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1;
    int nextNum;
    cout << a << " " << b << " ";
    for (int i = 1; i <= 10; i++)
    {
        nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }

    return 0;
}