#include <iostream>
using namespace std;

int main()
{
    int n = 236;
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        n = n / 10;
    }
    cout <<product<<" "<<sum<<endl;
    int sub = product - sum;
    cout<<sub;
    return 0;
}