//5. Loop in a LL
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
void findloop(node *head)
{	int flag=0;
	node *p1,*p2;	p1=p2=head; 	//p2=p1->next;
	while(p2->next!=NULL)
	{	if(p1==p2 && p2!=head)
		{	flag=1; cout<<"Loop exist in LL";	break;	}
		else	
		p1=p1->next;
		p2=p2->next->next;
	}
	if(flag==0)
		cout<<"No Loop exist in LL";
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
{	int val,count=-1,i;		char ch;
	node n1,n2,n3,n4,n5,*head;
	n1.val=1; n1.next=&n1;
/*	n2.val=2; n2.next=&n3;
	n3.val=3; n3.next=&n4;
	n4.val=4; n4.next=&n5;
	n5.val=5; n5.next=NULL;		head=&n1;
*/
//Find Middle
	node *t; 
	findloop(head);	
	
}

