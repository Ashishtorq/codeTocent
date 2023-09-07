#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // int i = 1;
    // int val = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n) 
    //     {
    //         // cout << val;
    //         cout << i;
    //         j++;
    //     }
    //     i++;
    //     val++; // This value will get repeated 
    //     cout << endl;
    // }
    int a , b = 1;
    a=10;
    if(++a){
        cout<<b;
    }
    else{
        cout<<++b;
    }

    return 0;
}