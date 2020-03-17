/*Q5. Write a program to check if a string is  palindrome or not.
Sample Input :	5	[madam]
Sample Output :	Palindrome			*/
#include<bits/stdc++.h>
using namespace std;
int ispalindrome(char *str){	int i,n;	n=strlen(str);
	for(i=0 ; i<n/2 ;i++){
			if(str[i]!=str[n-1-i])
				return 0;
	}
	return 1;
}
int main(){
	char str[1000];		cout<<"string = ";  cin>>str; 				//cout<<str;
	ispalindrome(str) ? 	cout<<"PALINDROME\n" : cout<<"Not PALINDROME\n" ;
}
