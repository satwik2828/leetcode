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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL||k==0) return head;
        int count=1;
        ListNode* temp=head;
        while(temp->next){
            temp=temp->next;
            count++;
        }
        k%=count;
        if(k==0) return head;
        count-=k;
        ListNode* second=head;
        while(count>1){
            head=head->next;
            count--;
        }
        ListNode* first=head->next;
        head->next=NULL;
        temp->next=second;
        return first;
    }
};