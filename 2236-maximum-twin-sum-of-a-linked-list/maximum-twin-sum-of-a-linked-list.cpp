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
    int pairSum(ListNode* head) {
        vector<int>ref;
        while(head){
            ref.push_back(head->val);
            head=head->next;
        }
        int  n=ref.size(),maximum=INT_MIN;
        for(int i=0;i<n/2;i++){
            maximum=max(maximum,ref[i]+ref[n-i-1]);
        }
        return maximum;
    }
};