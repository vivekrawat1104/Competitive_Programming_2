//1. Substrings length-wise
#include<bits/stdc++.h>
using namespace std;
int palindrome(string a, int i, int j){
	while(i<=j){
		if(a[i]==a[j]){
			i++; j--;
		}
			else	return 0;	
	}	return 1;
}
int main(){
	string s;				cout<<"string= ";  cin>>s;
	int i,j,n,k;	n=s.length();	cout<<"k= ";  cin>>k;
	for(j=1 ; j<=n  ; j++)
	{	for(i=0 ; (i+j)<=n ; i++)
		{	if(j==k ) 
			{	string t;	t= s.substr(i,j);	 //palindrome(t, i, j);
				if( palindrome(t, i, j) )	cout<<t<<" ";   //t<<s(i,j)<<" ";
			}	
		}
		cout<<endl;
	}
}

