#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==true) cout<<n<<" is prime number"<<endl;
    else cout<<n<<" is not prime number"<<endl;

    return 0;
}