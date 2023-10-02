#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==1) return 1;
    // int smallProblem = fact(n-1);
    // int bigProblem = n * smallProblem;
    // return bigProblem;
    return n * fact(n-1);

}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "Factorial : " << fact(n);
    return 0;
}