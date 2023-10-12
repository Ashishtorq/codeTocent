#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int d){
        data = d ;
        next = nullptr;
    }
};
int main()
{
    node *head = new node(2);
    head->next = new node(3);

    return 0;
}