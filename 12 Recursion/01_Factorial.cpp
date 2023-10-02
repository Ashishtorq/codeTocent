#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    for (int i = n; i >= 1; i--)
    {
        f = f * i;
    }
    
    return f;
}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "Factorial : " << fact(n);
    return 0;
}