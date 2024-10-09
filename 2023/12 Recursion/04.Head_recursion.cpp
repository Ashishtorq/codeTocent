#include <iostream>
using namespace std;

void count(int n)
{

    if (n == 0)
        return;
    cout << "count : " << n << ", ";
    count(n - 1);
}

int main()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    count(n);
    // cout << "Ans : " << ans;
    return 0;
}