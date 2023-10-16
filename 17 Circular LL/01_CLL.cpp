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
int main()
{
    node* head = new node(1);
    head->next = new node(2);
    return 0;
}