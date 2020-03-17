//3. middle
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:	int val; node *next;
};
node* insert(node *head,int value)
{
	node *t=head;
	node *temp=new node();
	temp->val=value;
	temp->next=NULL;
	if(head==NULL)
		{	head=temp;	return head;} // return *tail;	}
	else
	{
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
		return head;
	}
	
}
void display(node *head)
{
	node *t=head;
	cout<<"Display Linked List: \n";
	while(t!=NULL)
	{	cout<<(t->val)<<" ";//(t->val)<<" ";
		t=t->next;
	}
}

node* middle(node *first)
{
	node *p1,*p2;	p1=p2=first;
	while(p2->next!=NULL)
	{	p1=p1->next;
		p2=p2->next->next;
	}
	return p1;
}

void split(node *head,node **first ,node **second)
{	node *p1=middle(*first);
	*first=head;	p1->next=NULL;
	*second=p1->next;	
}

node* merge(node *first, node *second) 
{ 	node *rhead;
    /* Pick either a or b, and recur */
    if ( first->val < second->val) 
    {   rhead=insert(rhead,first->val);	 
        first=first->next;
    } 
    else //f->val > s->val 
    {   rhead=insert(rhead,second->val);	 
        second=second->next;
    } 
	//Copy rest elements 
	while(first!=NULL)
	{	rhead=insert(rhead,first->val);	first=first->next;	
	}
	while(second!=NULL)
	{	rhead=insert(rhead, second->val);	second=second->next;	
	}
    return (rhead); 
} 

void msort(node **head)
{
	node *h=*head, *first=NULL, *second=NULL;
	if(h==NULL || h->next==NULL)
		return;
	split(*head,&first,&second);
	msort(&first);	
	msort(&second);	
	*head=merge(first,second);
}


int main()
{	int n,val,count=-1,i;		char ch;
	node *head=NULL;//*tail=NULL;
	cout<<"n= ";	cin>>n;
	for(int i=1; i<=n ;i++	)
	{	cout<<"val= ";	cin>>val;
		head=insert(head,val);	
	}
//Display
	display(head);	cout<<endl;
//Sort
	msort(&head);	
	display(head);

}

