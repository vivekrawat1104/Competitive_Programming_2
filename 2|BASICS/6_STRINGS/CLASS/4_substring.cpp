// 4. Substrings generate
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void substr(char *a,int i)
{	int j,k;
	for(j=i; j<=strlen(a) ;j++)
	{
		for(k=i ; k<j ;k++)
			cout<<a[k]<<" ";
		cout<<endl;
	}
}
int main()
{
	int i,n;	char a[]="abcde"; cout<<strlen(a)<<endl;
	for(i=0 ;i<=strlen(a); i++)
	{
		substr(a,i);
	}
}
