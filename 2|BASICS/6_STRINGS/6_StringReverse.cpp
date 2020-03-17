/*Q6. Write a program to reverse a string.
Sample Input :	12 RamanClasses
Sample Output :	sessalcnamaR			*/
#include<bits/stdc++.h>
using namespace std;
void  reverse(char *a){	int i,n;	n=strlen(a);
	for(i=0 ; i<n/2 ;i++){
			char t=a[n-1-i];		a[n-1-i]=a[i];	a[i]=t;
	}
}
int main(){
	int n;						cout<<"n= ";		 cin>>n;
	char *str;		str=new char[n];		cout<<"string = "; 	 cin>>str; 				//cout<<str;
	reverse(str); 					cout<<str;
}
