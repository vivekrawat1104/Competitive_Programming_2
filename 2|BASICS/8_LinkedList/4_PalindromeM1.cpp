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
int findknode(node *head,int k)
{
	int c=0; node *t=head;
	while(c!=k)
	{	c++; 	t=t->next;
	}
	return (t->val);
}
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

//Count for Palindrome
	node *t;	t=head;
	while(t!=NULL)
	{	count++;	t=t->next; 
	}		
	ispalindrome(head,count);	
}

