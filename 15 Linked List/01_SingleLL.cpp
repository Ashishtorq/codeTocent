#include<iostream>
using namespace std;
// struct node{
//     int data;
//     node *next;
//     node(int d){
//         data = d ;
//         next = nullptr;
//     }
// };
class node{
    public:
    int data;
    node * next;
    node(int d){
        this -> data = d;
        this -> next = nullptr;
    }
};
int main()
{
    node *head = new node(2);
     head->next = new node(3);
     head->next->next = new node(5);
    cout<<head->next->next->data;
    cout<<head->next->data;
    return 0;
}