#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}