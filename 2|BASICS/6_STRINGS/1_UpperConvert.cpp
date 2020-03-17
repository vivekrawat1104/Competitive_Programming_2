/*Q1. Write a program in C++ to convert the input string from lower case to upper case.
Sample Input :	12	RamanClasses
Sample Output :	RAMANCLASSES		*/
#include<bits/stdc++.h>
using namespace std;
void  makeupper(char *str, int n){
	for(int i=0 ;i<n; i++){
		if(str[i]>='A' && str[i]>='Z')
			str[i]-=32;
	}
	//return str;
}
int main(){
	int n;					cout<<"n= ";		cin>>n;	
	char *str;	str=new char[n];	cout<<"string= ";	cin>>str;
	makeupper(str,n);	 cout<<str;	
}
