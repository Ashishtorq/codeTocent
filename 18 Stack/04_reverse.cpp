#include<iostream>
#include<stack>
using namespace std;

int main()
// first empty the sting and push it to stack
{
    string s = "abcde";
    stack<char>st;
    int i=0;
    while(i<st.size()){
        char ch = s[i];
        st.push(ch);
        i++;
    }
    s.clear();
    while(!st.empty()){
        char ch = st.top();
        s.push_back(ch);
        st.pop();
    }
    cout<<s;
    return 0;
}
