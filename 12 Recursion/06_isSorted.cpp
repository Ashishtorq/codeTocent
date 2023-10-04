#include<iostream>
using namespace std;
    bool isSorted(int arr[],int n){
        if(n==0 || n==1) return true;
        if(arr[0]>arr[1]) return false;
        else if(arr[0]<arr[1]){
            int ans = isSorted(arr+1,n-1);
        }
    }
int main()
{ 
    int arr[5] = {5,10,5,20,25};
    cout<<"Ans is : "<<isSorted(arr,5);
    return 0;
}