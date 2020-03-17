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
void middle(node *head)
{
	node *p1,*p2;	p1=p2=head;
	while(p2->next!=NULL)
	{	p1=p1->next;
		p2=p2->next->next;
	}
	cout<<"Middle="<<a(p1->val);
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

int main()
{	int val,n,i;
	node *head=NULL;//*tail=NULL;
	cout<<"n= ";	cin>>n;
	for(i=0 ; i<n ;i++)
	{	cout<<"val= ";	cin>>val;
		head=insert(head,val);		
	}
	display(head);	cout<<endl;
	middle(head);	
}

