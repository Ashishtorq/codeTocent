#include<iostream>
using namespace std;


void merge(int *arr, int s, int e){
    if(s>e) return;
    int mid = (s+e)/2;
    // left side of array
    merge(arr,s,mid);
    // right side of an array
    merge(arr,mid+1,e);
    
    merge(arr,s,e);
}
int main()
{
   int arr[5] = {5,4,3,2,1};
   int s = 0, e = 4;
   merge(arr,0,4);
    return 0;
}