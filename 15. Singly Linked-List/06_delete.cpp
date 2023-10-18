#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAttail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void insertatAnywhere(node *&tail, node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == nullptr)
    {
        insertAttail(tail, data);
    }
    node *insertmiddle = new node(data);
    insertmiddle->next = temp->next;
    temp->next = insertmiddle;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "->NULL" << endl;
}
// deleting the node
// void deletenode(node *head, int position){
//     if(position == 1){
//         node*temp = head;
//         head = head->next;
//         delete temp;
//     }
//     else{
//         node *prev= head;
//         int cnt = 1;
//         while(cnt < position-1){
//             prev = prev ->next;
//             cnt++;
//         }
//         node *curr = prev->next;
//         prev->next = curr->next;
//         delete curr;
//     }
// }
    void deletenode(node *head, int position){
        if(position == 1){
            node*temp = head;
            head = head->next;
            delete temp;
        }
        else{
            node *prev = head;
            node *curr = nullptr;
            int cnt = 1;
            while (cnt <= position)
            {
            prev = prev->next;
            cnt++;
            }
            delete curr;
        }
    }

    int main()
{
    node *head = new node(2);
    head->next = new node(3);
    head->next->next = new node(4);
    head->next->next->next = new node(5);
    node *tail = head->next->next->next;
   // insertatAnywhere(tail, head, 5, 10);
    print(head);
    deletenode(head,1);
    print(head);
    return 0;
}