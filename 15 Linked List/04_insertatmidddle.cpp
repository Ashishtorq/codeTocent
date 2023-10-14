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
void print(node* &head){
    node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"null"<<endl;
}
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp; // or tail = tail->next;
}
void insertAtmiddle(node* &head, int position, int data){
    node*temp = head;
    int count = 1;
    while(count< position - 1){
        temp = temp->next;
        count++;
    }
    node*insert = new node(data);
    insert->next = temp->next;
    temp->next = insert;
}
int main()
{
     node* head = new node(2);
     node*tail = head;
     print(head);
     insertAtHead(head,10);
     print(head);
     insertAtTail(tail,12);
     print(head);
     insertAtmiddle(head,4,22);
     print(head);
     return 0;
}