#include <iostream>
#include <math.h>
using namespace std;
int update(int a)
{
    a -= 5;
    cout << "dummy" << a << endl;
    return a;
}
int main()
{
    // int i = 0;
    // int ans = 0;
    // int n = 4;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n>>1;
    //     i++;
    // }
    // cout<<"Binary value is :"<<ans<<endl;
    int a = 15;
    // update(a);
    cout << "main" << update(a) << endl;
    return 0;
}