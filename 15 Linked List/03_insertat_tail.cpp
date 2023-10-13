#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
// inserting at head 
void inserthead(node* &head, int data){
   node *temp = new node(data);
   temp->next = head;
   head = temp;
}
// printing the list
void print(node* &head){
   node*temp = head;
   while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
   }
   cout<<endl;
}
// insering at tail
void insertAtTail(node* &tail, int data){
    node*temp = new node(data);
    tail->next = temp;
    tail= tail->next;
}
int main()
{
    node *head = new node(2);
    print(head);
    // inserthead(head,10);
    // print(head);
    node*tail = head;
    insertAtTail(tail,10);
    print(head);
    insertAtTail(tail,12);
    print(head);
    return 0;
}