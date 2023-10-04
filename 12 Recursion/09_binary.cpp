#include<iostream>
using namespace std;

bool binary(int arr[],int s, int e,int x){
    int mid = (s+e)/2;
    if(s>e) return false;
    if(arr[mid]==x) return true;
    else if(arr[mid]>x){
        binary(arr,s,mid-1,x);
    }
    else if (arr[mid]<x){
        binary(arr, mid+1, e, x);
    }
}

int main()
{
    int arr[6] = {2,3,6,8,10,12};
    int s = arr[0];
    int e = arr[5];
    int x = 11;
    int ans = binary(arr,s,e,x);
    if(ans) cout<<"Element is present"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}