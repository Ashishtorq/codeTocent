#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// used to detect the cycle
node *floydDetect(node *head)
{
    if (head == nullptr)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head;
    while (fast != nullptr)
    {
        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "Cycle present at -> " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}
node *startPoint(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *intersect = floydDetect(head);
    if (intersect == NULL)
        return NULL;
    node *slow = head;
    while (slow != intersect)
    {
        slow = slow->next;
        intersect = intersect->next;
    }
    return slow;
}
void removeLOOP(node *head)
{
    if (head == NULL)
        return;
    node *start = startPoint(head);
    if (start == NULL)
        return;
    node *temp = start;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    node *head = new node(2);
    head->next = new node(12);
    head->next->next = new node(5);
    head->next->next->next = new node(10);
    head->next->next->next->next = head->next;

    if (floydDetect(head))
        cout << "loop" << endl;
    else
        cout << "no loop";
    node *loop = startPoint(head);
    cout << "Starting point of loop is at : " << loop->data << endl;
    
    return 0;
}
