#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data){
        this-> data= data;
        this-> next = nullptr;
    }
};
int main()
{
    node *head = new node(2);
    head->next = new node(3);
    head->next->next = new node(5);
    head->next->next->next = new node(7);
    head->next->next->next->next = new node(8);
    return 0;
}