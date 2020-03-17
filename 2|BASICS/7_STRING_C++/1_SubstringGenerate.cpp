//1. Substrings 
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="abcd";
	int i,j,n;	n=s.length();
	for(i=0 ; i<n ;i++)
	{	for(j=1; j<=n-i ; j++)
			cout<<s.substr(i,j)<<" ";
		cout<<endl;	
	}
}

