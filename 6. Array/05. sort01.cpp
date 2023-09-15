#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {0,1,0,1,1,0,1};
    int i = 0, j = 6;
    while(i<j){
        if(arr[i] == 0) i++;
        if(arr[j] == 1) j--;
        if(arr[i]==1 && arr[j] == 0){
            swap(arr[i],arr[j]);
            i++,j--;
        }
    }
    for(int i = 0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}