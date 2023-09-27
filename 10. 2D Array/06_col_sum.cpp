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
    int colSum = 0;
    for(int j=0 ;j<4; j++){
        for(int i=0; i<3; i++){
            colSum+=arr[i][j];
        }
        cout<<"Col Sum for index "<<j<<" is "<<colSum;
        colSum = 0;
        cout<<endl;
    }
    return 0;
}