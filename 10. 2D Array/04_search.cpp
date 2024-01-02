#include<iostream>
using namespace std;

int main()
{
    int target;
    cout<<"Enter targer"<<endl;
    cin>>target;
    int arr[3][3];
    for(int i=0 ;i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0 ;i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0 ;i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]==target){
            cout<<"value found at index : "<<i<<" "<<j<<endl;
            break;
            }
        }
        cout<<endl;
    }

    
    return 0;
}
