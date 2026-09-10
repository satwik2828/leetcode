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
    ListNode* reverse(ListNode* h,int k){
        ListNode* prev=NULL;
        int count=0;
        while(count!=k && h){
            ListNode* temp1=h->next;
            h->next=prev;
            prev=h;
            h=temp1;
            count++;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        ListNode* temp2=head;
        ListNode*dummy=new ListNode(-1);
        ListNode* t=dummy;
        while(count-k>=0 && temp2!=NULL){
            int rot=k;
            while(temp!=NULL && rot>0){
                temp=temp->next;
                rot--;
            }
            t->next=reverse(temp2,k);
            rot=k;
            while(rot--){
                t=t->next;
            }
            temp2=temp;
            count-=k;
        }
        t->next=temp;
        return dummy->next;
    }
};