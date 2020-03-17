#include<bits/stdc++.h>
using namespace std;
int myatoi(char c[])
{
	int i=0, val=0;
	int l=strlen(c);
	while(c[i]!='\0')
	{	if(c[i]>='0' && c[i]<='9')
  		{	
			val=val*10 + (c[i]-'0');		i++;
		}
		else	return(-1);
	}
		return(val);
}
int main()
{
	char c[10];
	cin>>c;
 	cout<<myatoi(c);	
}
