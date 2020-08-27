ListNode* swapPairs(ListNode* head)
	{
		if(head==NULL || head->next==NULL)
			return head;
		ListNode *headt=head->next,*first=head,*temp,*second;
		while(1)
		{
			second=first->next;
			temp=second->next;
			second->next=first;

			if(temp==NULL)
			{
				first->next=NULL;
				break;
			}
			if(temp->next==NULL)
			{
				first->next=temp;
				break;
			}
			first->next=temp->next;
			first=temp;
       }
    
    return headt;
   }
 };