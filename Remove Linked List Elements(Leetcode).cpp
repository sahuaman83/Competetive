/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

 Remove all elements from a linked list of integers that have value val.

Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5


 */



class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        while(head && head->val==val)
            head=head->next;
        ListNode* curr=head,*prev=head;
        while(curr!=NULL)
        {
            if(curr->val==val)
            {
                prev->next=curr->next;
                curr=curr->next;
            }
            else
            {
            prev=curr;
            curr=curr->next;
            }
        }
        
        return head;
    }
};