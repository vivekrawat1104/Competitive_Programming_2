/*Q2. Write a program to count the number of digits in a string.
Sample Input :	15	[2Raman01Classes9]
Sample Output :	4									*/
#include<bits/stdc++.h>
using namespace std;
int  digitcount(char *str, int n){				int c=0,i;
	for(i=0 ;i<n; i++){
		if(str[i]>='0' && str[i]<='9')
			c++;
	}
	return c;
}
int main(){
	int n;					cout<<"n= ";		cin>>n;	
	char *str;	str=new char[n];	cout<<"string= ";	cin>>str;
	cout<<digitcount(str,n);	
}
