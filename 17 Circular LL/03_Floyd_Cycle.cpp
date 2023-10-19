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
bool floydDetect(node* head){
    if(head == nullptr){
        return false;
    }
    node* slow = head;
    node* fast = head;
    while(fast != nullptr){
        fast = fast->next;
        if(fast!= nullptr){
            fast = fast ->next;
        }
        slow = slow -> next;
        if(slow == fast){
            cout<<"Cycle present at -> "<<slow->data<<endl;
            return true;
        }
    }
    return false;
}
int main()
{
    node *head = new node(2);
    head->next = new node(10);
    head->next->next = new node(5);
    head->next->next->next = new node(10);
    head->next->next->next->next = new node(5);

    if (floydDetect(head)) cout<<"loop"<<endl;
    else cout<<"no loop";
        return 0;
}