#include <iostream>
using namespace std;

int count(int n)
{

    if (n == -1){
        return true;
        }
    cout << n << ", ";
    return count(n - 1);
}

int main()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    int ans = count(n);
    // cout << "Ans : " << ans;
    return 0;
}