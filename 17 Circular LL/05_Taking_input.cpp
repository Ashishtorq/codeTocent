#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this ->data = data;
        this -> next = nullptr;
    }
};
void print(node* head){
    node* temp = head;
    while(temp != nullptr){
        temp = temp -> next;
        cout<<temp->data<<"->";
    }
    cout<<"NULL";
    cout<<endl;
    }
node *insert(node *head, int d)
{
    node *temp = new node(d);
    if (head == nullptr)
        return temp;
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    print(head);
    return head;
}
int main()
{
    node* head = nullptr;
    for(int i=0; i<10; i++){
        head = insert(head,i);
    }
    return 0;
}