#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 6, 8, 10, 12, 20};
    int s = 0;
    int e = 5;
    int mid = (s + e) / 2;
    int x = 10;
    while (s <= e)
    {

        if (arr[mid] == x)
            {cout << "Element is found at : " << mid;}
        else if (mid > x)
           { e = mid - 1;}
        else
            {s = mid + 1;}
        mid = (s + e) / 2;
    }
    cout << "Element not found" << endl;
}