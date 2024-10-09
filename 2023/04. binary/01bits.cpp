#include<iostream>
using namespace std;

int main()
{
    uint32_t n = 1010;
    int count  = 0;
    while (n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<"Number of 1's bit in the binary digit is : "<<count;
    return 0;
}