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
void insertAtHead(node* &head, int data){
    node*temp = new node(data);
    temp ->next = head;
    head = temp;
}
void insertAttail(node* &tail, int data){
    node* temp = new node(data);
    tail -> next = temp;
    tail = temp;

}
void insertAtmiddle(node* &head, int position, int data){
    if(position == 1){
        insertAtHead(head,data);
    }
    node*temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    node* insertmiddle = new node(data);
    insertmiddle->next = temp->next;
    temp->next = insertmiddle;
}

int main()
{
    node*head = new node(2);
    cout<<head->data;
    return 0;
}