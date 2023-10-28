#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr; // initilised in heap memory
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
    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
    void print(){
        if(top == -1) return;
        for(int i=0; i<=top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    // stack st(3);
    // st.push(1);
    // st.push(2);
    // // st.push(3);
    // // st.pop();
    // st.print();
    // cout<<"print top element"<<endl;
    // st.peek();
    // cout<<"print empty or not"<<endl;
    // cout<<st.isEmpty();
    // cout<<"print all elemetn"<<endl;
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // cout << "Top value of Stack : " << st.peek() << endl;
    // st.pop();
    cout << st.isEmpty() << endl;
    // cout << st.peek() << endl;
    st.print();
    return 0;
}