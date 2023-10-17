#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};
// in circular ll we use tail to access whole list
void print(node* &tail){
    node *temp = tail;
    cout<<tail->data<<"->";
    while(tail->next != temp){
        cout<<tail->data<<"->";
        tail = tail->next;
    }
    cout<<"NULL";
    cout<<endl;
}
void insert(node* &tail, int element, int data){
    // empty list
    if(tail == nullptr){
        node* newnode = new node(data);
        tail = newnode;
        newnode ->next = newnode;
    }
    // non-empty list.(assuming element is present)
    else{
        node* currEle = tail;
        while(currEle->data != element){
            currEle = currEle -> next;
        }
    // we got the element and currEle is reprenting it
    node*temp = new node(data);
    temp -> next = currEle->next;
    currEle->next = temp;
    }
}
int main()
{
    node*tail = nullptr;
    insert(tail,5,3);
    insert(tail,3,5);
    insert(tail,5,10);
    print(tail);
    return 0;
}