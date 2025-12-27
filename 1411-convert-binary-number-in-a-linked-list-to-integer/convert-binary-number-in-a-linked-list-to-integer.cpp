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
    int getDecimalValue(ListNode* head) {
       int sum=0;
       string s="";
       ListNode*temp=head;
       while(temp!=NULL){
        int x=temp->val;
        s+=to_string(x);
        temp=temp->next;
       } 
       cout<<s;
       int len=s.length()-1;
       for(int i=0;i<s.length();i++) sum+=pow(2,len--)*(s[i]-'0');
           return sum;
    }
};