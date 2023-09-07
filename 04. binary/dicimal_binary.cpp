#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 0;
    int ans = 0; 
    int n = 4;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n>>1;
        i++;
    }
    cout<<"Binary value is :"<<ans<<endl;
    return 0;
}