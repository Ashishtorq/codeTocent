#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int i = 1;
    int val;
    while (i <= n)
    {
        int j = 1;
        val = 1;
        while (j <= n) 
        {
            // cout << val;
            cout << val;
            j++;
            val++;
        }
        i++;
        val++; // This value will get repeated 
        cout << endl;
    }

    return 0;
}