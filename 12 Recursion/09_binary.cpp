#include<iostream>
using namespace std;

bool binary(int arr[],int s, int e,int x){
    int mid = (s+e)/2;
    if(s>e) return false;
    if(arr[mid]==x) return true;
    else if(arr[mid]>x){
        binary()
    }
    else{
        binary()
    }
}

int main()
{
    int arr[6] = {2,3,6,8,10,12};
    int s = arr[0];
    int e = arr[5];
    int s = 10;
    binary(arr,s,e,x);
    return 0;
}