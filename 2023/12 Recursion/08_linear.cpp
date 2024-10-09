#include <iostream>
using namespace std;
int ans = 0;
bool linear(int arr[], int n, int x)
{
    if(n==0) return false;
    if(arr[0]==x) return true;
    else if(arr[0]!=x){
        linear(arr+1, n-1,x);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 2, 10};
    cout << "Ans : " << linear(arr, 5,4);
    return 0;
}