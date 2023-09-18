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
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    int ans;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
            ans = mid;
        }
        else if (arr[mid]<arr[0]){
            e = mid;
        }
    }

    
}