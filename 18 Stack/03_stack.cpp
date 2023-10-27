#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;

    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else cout<<"Stack overflow"<<endl;
    }

    void pop(){
        if(top>-1){
            top--;
        }
        else cout<<"Stack is underflow"<<endl;
    }
    void peek(){
        if(top > -1){
            cout<<"Top element : "<<arr[top]<<endl;
        }
        else cout<<"stack is empty"<<endl;
    }
};
int main()
{
    stack st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.peek();
    return 0;
}