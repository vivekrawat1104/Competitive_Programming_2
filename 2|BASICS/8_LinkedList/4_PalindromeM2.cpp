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
node* findmiddle(node *head)
{
	node *p1,*p2;	p1=p2=head;
	while(p2->next!=NULL)
	{	p1=p1->next;
		p2=p2->next->next;
	}
	return(p1);
}

void reverse(node *p)
{
	node *prev=p,*curr=p->next, *right=curr->next;
	while(curr!=NULL)
	{	right=curr->next;	
		if(curr==p->next)
			curr->next=NULL;
		else curr->next=prev;
		prev=curr;
		curr=right;
	}	
	//*head=prev;
	p->next=prev;
	
}
/*
void ispalindrome(node *head,int count)
{
	int begin=0,end=count;
	while(begin<end)
	{	
		if( findknode(head,begin)!=findknode(head,end))
		{	cout<<"Not Palindrome";
			return;
		}	
		begin++;	end--;
	}
		cout<<"Palindrome";
}
*/
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
{	int val,count=-1,i;		char ch;
	node *head=NULL;//*tail=NULL;
	//cout<<"n= ";	cin>>n;
	do
	{	cout<<"val= ";	cin>>val;
		head=insert(head,val);	
		cout<<"Choice:"; cin>>ch;	
	}while(ch=='y');
//Display
	display(head);	cout<<endl;

//Find Middle
	node *t; 
	t=findmiddle(head);
	reverse(t);
	display(head);	
	
}

