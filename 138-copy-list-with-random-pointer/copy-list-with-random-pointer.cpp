/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        while(temp){
            Node*nw=new Node(temp->val);
            nw->next=temp->next;
            temp->next=nw;
            temp=temp->next->next;
        }
        temp=head;
        while(temp){
            Node *nw=temp->next;
           if(temp->random) nw->random=temp->random->next;
            temp=temp->next->next;
        }
        Node* dummy=new Node(-1);
        Node* trav=dummy;
        temp=head;
        while(temp){
            trav->next=temp->next;
            temp->next=temp->next->next;
            trav=trav->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};