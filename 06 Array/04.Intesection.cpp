#include<iostream>
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
    
    return 0;
}