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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head1=l1,*head2=l2,*sorting;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(head1->next==NULL && head2->next==NULL)
        {
            if(head1->val<head2->val)
            {
                sorting=head1;
                sorting->next=head2;
            }
            else
            {
                sorting=head2;
                sorting->next=head1;
            }
            return sorting;
        }
        
        if(head1->val<head2->val)
        {
            sorting=head1;
            head1=head1->next;
        }
        else
        {
            sorting=head2;
            head2=head2->next;
        }
        
        if(head1==NULL)
        {
            sorting->next=head2;
            return sorting;
        }
        if(head2==NULL)
        {
             sorting->next=head1;
            return sorting;
        }
        ListNode* new_head=sorting;
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->val<head2->val)
            {
                sorting->next=head1;
                sorting=head1;
                head1=head1->next;
            }
            else
            {
                sorting->next=head2;
                sorting=head2;
                head2=head2->next;
            }
            if(head1==NULL)
                sorting->next=head2;
            if(head2==NULL)
                sorting->next=head1;
            
        }
        return new_head;
    }
};