#include<iostream>
using namespace std;
int firstOccurace(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    // int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if (k>arr[mid]){
            s = mid + 1;
        }
        else e = mid -1;
    }
    return ans;
}
int lastOccurace(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    // int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if (k>arr[mid]){
            s = mid + 1;
        }
        else e = mid -1;
    }
    return ans;
}
int main()
{
    int arr[6] = {5,7,7,8,8,10};
    cout<<"The first occurance is at index "<<firstOccurace(arr,6,8)<<endl;
    cout<<"The last occurance is at index "<<lastOccurace(arr,6,8)<<endl;
    return 0;
}