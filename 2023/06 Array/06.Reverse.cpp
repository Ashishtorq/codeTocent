#include<iostream>
using namespace std;

int main()
{                
    int arr[5] = {5,6,3,2,1};
    int i=0; 
    int j=4;
    while(i<=j){
        // int temp = arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp;
        swap(arr[i],arr[j]);
        i++,j--;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}