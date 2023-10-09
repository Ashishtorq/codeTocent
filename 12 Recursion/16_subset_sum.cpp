#include <iostream>
#include <vector>
using namespace std;

bool helper(int arr[], int n, vector<int> temp, int index, int s, int sum)
{
    if (index == n)
    {
        if (s == sum)
        {
            for (auto x : temp)
                cout << x;
            cout << endl;
            return true;
        }
        else
            return false;
    }
    // pick
    temp.push_back(arr[index]);
    s = s + arr[index];
    helper(arr, n, temp, index + 1, s, sum);
    if (helper(arr, n, temp, index + 1, s, sum) == true)
        return true;
    // not pick
    temp.pop_back();
    s = s - arr[index];
    helper(arr, n, temp, index + 1, s, sum);
    if (helper(arr, n, temp, index + 1, s, sum) == true)
        return true;
    return false;
}
int main()
{
    int arr[] = {1, 2};
    int sum = 3;
    int n = 3;
    vector<int> temp;
    helper(arr, n, temp, 0, 0, sum);
    return 0;
}