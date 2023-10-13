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
    void insertAtHead(node* &head,int data){
        node* temp = new node(data);
        temp -> next = head;
        temp = head;
    }
int main()
{
    node *head = new node(2);
    // head->next = new node(6);

    return 0;
}