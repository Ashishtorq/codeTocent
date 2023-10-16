#include<iostream>
using namespace std;

int main()
{
    int arr[6]  = {1,2,4,3,6,5};
    for(int i =0; i<6; i++){
        for(int j=0; j<6; j++){
            if(arr[i]==arr[j]&& i!=j){
                cout<<"duplicate : "<<arr[i];
                break;
            }
        }
    }
    return 0;
}