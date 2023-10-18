#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
};
int main()
{
    node *head = new node(2);
    head->next = new node(3);
    head->next->next = new node(5);
    cout<<head->data<<endl;
    cout << head->next->next->data<<endl;
    cout << head->next->data<<endl;
    return 0;
}