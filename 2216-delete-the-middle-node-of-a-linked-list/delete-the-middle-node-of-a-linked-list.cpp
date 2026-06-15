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
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int total=0;
        while(temp){
            temp=temp->next;
            total++;
        }
        if(total==1) return NULL;
        total/=2;
        total--;
        temp=head;
        while(total--){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};