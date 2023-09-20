#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,1,6,14,9};
    for(int i = 0; i<5; i++){
        int min = i;
        for(int j = i+1; j<5; j++){
            if(arr[min]>arr[j]) min = j;
        }
        swap(arr[min],arr[i]);
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}