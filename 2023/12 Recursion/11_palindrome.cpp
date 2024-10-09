#include <iostream>
using namespace std;
bool palindrome(string &s, int i, int j)
{

    cout << "Call received for : " << s << endl;

    if (i > j)
        return 1;
    if(s[i]!=s[j]) return false;
    else;
    i++, j--;
    return palindrome(s, i, j);
    
}

int main()
{
    string s = "abca";
    int i = 0, j = s.length() - 1;
    cout<<"ans : "<<palindrome(s, i, j);

    return 0;
}