#include <iostream>
#include <map>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
bool detectloop(node *head)
{
    if (head == nullptr)
    {
        return false;
    }
    map<node *, bool> mp;
    node *temp = head;
    while (temp != nullptr)
    {
        if (mp[temp] == true)
        {
            cout<<"cycle is present at -> "<<temp->data<<endl;
            return true;
        }

        else
        {
            mp[temp] = true;
            temp = temp->next;
        }
    }
    return false;
}
int main()
{
    node *head = new node(2);
    head->next = new node(10);
    head->next->next = new node(5);
    head->next->next->next = new node(7);
    head->next->next->next->next = new node(10);
    if (detectloop(head))
    {
        cout << "loop" << endl;
    }
    else
        cout << "no loop" << endl;

    return 0;
}