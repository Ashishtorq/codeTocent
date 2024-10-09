#include<iostream>
using namespace std;

int main()
{
    int arr[3][4];
    for(int i=0 ;i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0 ;i<4; i++){
        for(int j=0; j<3; j++){
            cout<<arr[j][i];
        }
        cout<<endl;
    }
    return 0;
}