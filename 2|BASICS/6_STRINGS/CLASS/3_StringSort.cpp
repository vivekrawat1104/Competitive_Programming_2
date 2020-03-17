#include<bits/stdc++.h>
using namespace std;
void sort(char c[])
{
	

/*	for(i=0 ; i<26  ;i++)	
	{	
		cout<<a[i]=i+'a';  count[i]--;
	}
*/
}
int main()
{
	char c[100];
	cin>>c;
 	//cout<<sort(c);
	int sum=0,count[26]={0},i,t=0,s;	 char a[100];
	//cout<<strlen(c);
	for(i=0 ; i<strlen(c)  ;i++)	
	{	
		count[ c[i]-'a' ]++;
	}
	for(i=0 ; i<26  ;i++)	
	{	sum+=count[i];
		count[i]=sum;    //cout<<count[i]<<" ";
	}	
	for(i=strlen(c)-1;  i>=0; i--)
	{	
		t=--count[c[i]-'a'];	a[t]=c[i];
	}
	cout<<a;
}
