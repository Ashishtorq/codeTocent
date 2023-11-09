#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    return 0;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
ListNode* rev(ListNode* head, ListNode* back){
    ListNode* curr = head;
    ListNode* far = curr->next;
    ListNode* prev = NULL;
    while(curr != NULL){
        curr->next = prev;
        prev = curr;
        curr = far;
    }
    return prev;
}
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp_head = head;
        ListNode* temp_tail = head;
        ListNode* temp1 = head;
        ListNode* temp2 = NULL;
        int count = 1;
        while(count != left){
            temp_head = temp_head->next;
            count++;
        }
        count = 1;
        while(count != right){
            temp_tail = temp_tail->next;
            count++;
        }
        temp2 = temp_tail->next;
        temp_tail->next = NULL;

        rev(temp_head, temp_tail);
        temp1->next =  temp_head;
        temp_tail->next = temp2;
        return head;
    }
};
