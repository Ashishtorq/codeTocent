#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    int i = 0;
    int j = i + 1;
    while (j < 5)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i += 2;
        j += 2;
    }
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}