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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
        ListNode* temp1=l2;
        ListNode* prev=NULL;
        int carry=0;
        while(temp!=NULL && temp1!=NULL){
            int k=temp->val+temp1->val+carry;
            if(k<=9) temp->val=k,carry=0;
            else{
                temp->val=k%10;
                carry=k/10;
            }
            prev=temp;
            temp=temp->next;
            temp1=temp1->next;
        }
        while(temp!=NULL && carry!=0){
            int l=temp->val+carry;
            if(l<=9) temp->val=l,carry=0;
            else{
                temp->val=l%10;
                carry=(l-l%10)/10;
            }
            prev=temp;
            temp=temp->next;
        }
        while(temp1!=NULL){
            int k=temp1->val+carry;
            ListNode* use=new ListNode(k%10);
            carry=k/10;
                prev->next=use;
                prev=prev->next;
            temp1=temp1->next;
        }
        if(carry!=0){
            ListNode* use=new ListNode(carry);
            prev->next=use;
        }
        return l1;
    }
};