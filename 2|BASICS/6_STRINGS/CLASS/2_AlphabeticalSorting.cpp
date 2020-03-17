#include<bits/stdc++.h>
using namespace std;
int myatoi(char a[])
{
	int i,flag=1;
	for(i=1 ; i<strlen(a); )
	{	
		if(a[i]>=a[i-1])	i++;
		else{	flag=0;  return(0);}	
	}
	if(flag!=0)
		return(1);
}
int main()
{
	char c[10];
	cin>>c;
 	cout<<myatoi(c);	
}
