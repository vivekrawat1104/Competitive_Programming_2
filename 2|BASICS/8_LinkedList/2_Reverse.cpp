//2. Reverse LL
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:	int val; node *next;
};
void insert(node **head,int value)
{
	node *t=*head;
	node *temp=new node();
	temp->val=value;
	temp->next=NULL;
	if(*head==NULL)
		{	*head=temp;	} // return *tail;	}
	else
	{
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
		return;
	}
}
void reverse(node **head)
{
	node *prev=NULL,*curr=*head, *right=curr->next;
	while(curr!=NULL)
	{	right=curr->next;	
		curr->next=prev;
		prev=curr;
		curr=right;
	}	*head=prev;
}
void display(node *head)
{
	node *t=head;
	cout<<"Display Linked List: \n";
	while(t!=NULL)
	{	cout<<(t->val)<<" ";
		t=t->next;
	}
}

int main()
{	int val,n,i;
	node *head=NULL;//*tail=NULL;
	cout<<"n= ";	cin>>n;
	for(i=0 ; i<n ;i++)
	{	cout<<"val= ";	cin>>val;
		insert(&head,val);		
	}
	display(head);
	reverse(&head);
	display(head);		
}

