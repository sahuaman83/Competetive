#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};

struct llist
{
	node *head;
	llist()
	{
		head=NULL;
	}
void insert_beg(int x)
{
	node *temp=new node(x);
	temp->next=head;
	head=temp;
}

void print()
{
	node *temp=head;
	cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void middle()
{
	node *slow=head, *fast=head;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<endl<<"Middle of linked list is :"<<slow->data<<endl;
}
void nth_end(int x)
{
	node *fir=head,*sec=head;
	int y=x;
	while(x--)
	{
		fir=fir->next;
	}
	while(fir!=NULL)
	{
		fir=fir->next;
		sec=sec->next;	
	}
	cout<<endl<<"Last "<<y<<"th node from end is : "<<sec->data<<endl;	
}
void iter_rev()
{
	node *curr=head,*prev=NULL,*next;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
}
void rec_rev(node *curr, node *prev)
{
	if(curr==NULL)
	return;
	if(curr->next==NULL)
	{
		curr->next=prev;
		head=curr;
		return;
	}
	node *next=curr->next;
	curr->next=prev;
	rec_rev(next,curr);	
}
void bubbsort(int n)
{
	node *temp=head;
  for(int i=0;i<n-1;i++)
  {
  	temp=head;
  	for(int j=0;j<n-i-1;j++)
  	{
  		if(temp->data>temp->next->data)
  		swap(temp->data,temp->next->data);
  		temp=temp->next;
	}
  }	
}
};
int main()
{
	llist l;
	int x,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		l.insert_beg(x);
	}
	l.print();
	l.middle();
	l.nth_end(2);
	l.iter_rev();
	cout<<endl<<"Iterative reverse of linked list is"<<endl;
	l.print();
	l.rec_rev(l.head,NULL);
	cout<<endl<<"Tail recursive reverse of linked list is"<<endl;
    l.bubbsort(n); //number of nodes passed
	l.print();
	
return 0;	
}
