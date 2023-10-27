#include <iostream>
using namespace std;
class stack
{
public:
    int top;
    int *arr;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 and top < size)
        {
            int t = arr[top];
            return t;
        }
        else
        {
            cout << "stack is empty" << endl;
        }
    }
    void print()
    {
        if (top == -1)
            return;
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    bool isEmpty()
    {
        if (top == -1)
            return 0;
        else
            return 0;
    }
};
int main()
{
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"Top value of Stack : "<<st.peek()<<endl;
    st.pop();
    cout<<st.isEmpty()<<endl;
    cout<<st.peek()<<endl;
    return 0;
}