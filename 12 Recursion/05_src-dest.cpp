#include<iostream>
using namespace std;
void home(int src, int dest){
    if(src>dest) return;
    cout<<", "<<src;
    home(src+1,dest);
}
int main()
{
    int src = 0;
    int dest = 10;
    home(src,dest);
    return 0;
}