//1. Substrings length-wise
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="abcd";
	int i,j,n;	n=s.length();
	for(j=1 ; j<=n  ; j++)
	{	for(i=0 ; (i+j)<=n ; i++)
			cout<<s.substr(i,j)<<" ";
		cout<<endl;
	}
}

