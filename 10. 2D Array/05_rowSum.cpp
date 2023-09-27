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
    int rowSum = 0;
    for(int i=0 ;i<3; i++){
        for(int j=0; j<4; j++){
            rowSum+=arr[i][j];
        }
        rowSum = 0;
        cout<<endl;
    }
    return 0;
}