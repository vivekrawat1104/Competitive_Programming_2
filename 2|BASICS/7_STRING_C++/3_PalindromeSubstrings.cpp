//3. Palindrome	Substrings 
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
	string s="ababa";
	int i,j,n;	n=s.length();
	for(i=0 ; i<n ;i++)
	{	for(j=1; j<=n-i ; j++)
		{	string t;	t= s.substr(i,j); // <<" ";
			if( palindrome(t, 0, t.length()-1) )	cout<<t<<" ";
		}		
		cout<<endl;	
	}
}

