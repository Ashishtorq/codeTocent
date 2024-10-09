#include<iostream>
using namespace std;

int main()
{
    int arr[3][4] = {{1,11,111,1111,},{2,22,222,2222},{3,33,333,333}};
    for(int i=0 ;i<4; i++){
        for(int j=0; j<3; j++){
            cout<<arr[j][i];
        }
        cout<<endl;
    }
    return 0;
}