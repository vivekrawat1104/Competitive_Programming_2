//3. middle
#include<bits/stdc++.h>
using namespace std;
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  

void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = new Node();
  
    /* put in the data  */
    new_node->data  = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
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
void split(head, **first , **second)
{	node *slow,*fast;	slow=head;	fast=head->next;
	while(fast!=NULL)
	{	
		slow=slow->next;		fast=fast->next->next;
	}	
	*first=head;		*second=slow->next;		slow->next=NULL;
}
void msort(node **head)
{
	node *h=*head, *first, *second;
	if(h==NULL || h->next==NULL)
		return;
	split(head,&first,&second);
	msort(&first);	
	msort(&second);	
	*head=merge(first,second);
}

node* merge(node* first, node* second) 
{ 
    node* result = NULL; 
     /* Base cases */
    if (first == NULL) 
        return (second); 
    else if (second == NULL) 
        return (first); 
  
    /* Pick either a or b, and recur */
    if ( first->val <= second->val) 
    {          result = first; 
        result->next = merge(first->next, second); 
    } 
    else { 
        result = second; 
        result->next = merge(first, second->next); 
    } 
    return (result); 
} 

int main() 
{ 
    Node *head1 = NULL, *head2 = NULL, *result = NULL; 
  
    int arr1[] = {9, 9, 9}; 
    int arr2[] = {1, 8}; 
  
    int size1 = sizeof(arr1) / sizeof(arr1[0]); 
    int size2 = sizeof(arr2) / sizeof(arr2[0]); 
  
    // Create first list as 9->9->9 
    int i; 
    for (i = size1-1; i >= 0; --i) 
        push(&head1, arr1[i]); 
  
    // Create second list as 1->8 
    for (i = size2-1; i >= 0; --i) 
        push(&head2, arr2[i]); 
  
    addList(head1, head2, &result); 
  
    printList(result); 
  
    return 0; 
} 

