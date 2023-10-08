#include<iostream>
#include<vector>
using namespace std;
//bool flag = true;
void helper(int arr[],int n, vector<int>temp, int index, int s, int sum){
    if(index==n){
        if(s==sum){
           // flag = false;
            for(auto x:temp) cout<<x;
            cout<<endl;
        }
        return;
    }
    // pick 
    temp.push_back(arr[index]); 
    s = s + arr[index];
    helper(arr, n, temp, index+1, s, sum);
    // if(helper == true) return;
    // not pick
    temp.pop_back();
    s  = s - arr[index];
    helper(arr, n, temp, index+1, s, sum);
}
int main()
{
    int arr[] = {1,2};
    int sum = 3 ;
    int n = 3;
    vector<int>temp;
    helper(arr,n,temp,0,0,sum);
    return 0;
}