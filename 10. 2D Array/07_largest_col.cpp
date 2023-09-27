 #include<iostream>
using namespace std;

int main()

{
    int max = 0;
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
        cout<<"Sum of column no. "<<j<<" is "<<colSum;
        for(int i=0; i<4; i++){
            if(max<colSum){
                max = colSum;
            }
        }
        colSum = 0;
        cout<<endl;
    }
    cout<<"max : "<<max<<endl;
    return 0;
}