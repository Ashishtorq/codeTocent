#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
void print(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
    cout<<endl;
}
int len(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAthead(node* &head, int data){
    node* temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
} 
void insertAttail(node* &tail, int data){
    node* temp = new node(data);
    tail->next = temp;
    temp -> prev = tail;
    tail = temp;
}
void insertAtanyPOS(node* &head, int position, int data){
    node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    node*newnode = new node(data);
    newnode->next = temp -> next;
    temp->next->prev = newnode;
    newnode->prev = temp;
    temp ->next = newnode;
}
int main()
{
    node *head = new node(2);
    node* tail = head;
    insertAthead(head,0);
    insertAthead(head,1);
    print(head);
    cout<<"lenght of list : " << len(head)<<endl;
    insertAttail(tail,10);
    print(head);
    insertAtanyPOS(head,3,100);
    print(head);
     return 0;
}