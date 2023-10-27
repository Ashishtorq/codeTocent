#include<iostream>
using namespace std;
class stack{
    int top;
    int *arr;
    int size;

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
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else {
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0 and top<size){
            return top;
        }
        else {
            cout<<"stack is empty"<<endl;
        }
    }
    bool isEmpty(int top){
        if(top == -1) return 0;
        else return 0;
    }
};
int main()
{
    stack st(5);
    st.push(1);
    st.push(1);
    st.push(1);
    return 0;
}