/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
Node* releive(Node* head)
{
    if(head==NULL)
        return NULL;
    Node* curr=head,*tail=head;
    while(curr!=NULL)
    {
        Node* child=curr->child;
        Node* next=curr->next;
        if(curr->child!=NULL)
        {
            
           Node* _tail = releive(curr->child);
            
    
            _tail->next=next;
            if(next)
            next->prev=_tail;
            
            curr->next=child;
            curr->child=NULL;
            child->prev=curr;
            
            curr=tail;

        }
        else
        curr=curr->next;
        if(curr!=NULL) tail=curr;
    }
    
    return tail;
}
class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL)
            return NULL;
        releive(head);
            return head;
    }
};