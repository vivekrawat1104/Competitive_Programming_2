/* Q8. Write a program to print the longest numeric substring.
Sample Input :	This345is78a1num12string.
Sample Output :	345							*/
#include<bits/stdc++.h>
using namespace std;
void  longestsubstring(char *a){		int t,i,n,index=0,c=0,max=0;	n=strlen(a);
	for(i=0 ; i<n ;i++){
			if(a[i]>='0' && a[i]<='9')
			{	c++; 	t=i;	i++;	
				while(a[i]>='0' && a[i]<='9')
				{	c++;			i++;		}			i--;
				if(c>max)	
				{
					index=t;		max=c;
				}
			}
			
				c=0;	
	}
	for( i=index; i<=index+(c-1) ; i++)	cout<<a[i];
}
int main(){
	char str[100]="This345is78a1num12string";//			cout<<"string = "; 	 cin>>str; 				
	longestsubstring(str);	cout<<"\n"; 
	//cout<<atoi("324");
}

