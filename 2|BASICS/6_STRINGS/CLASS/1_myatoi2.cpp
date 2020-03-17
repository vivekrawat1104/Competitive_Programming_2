#include<bits/stdc++.h>
using namespace std;
float myatoi(char c[])
{
	float valf=0,val=0,f=1/10.0;	int i=0,j=1;
	//int l=strlen(c);
	while(c[i]!='\0')
	{	if(c[i]>='0' && c[i]<='9')
  		{	
			val=val*10 + (c[i]-'0');		
		}
		else if(c[i]=='.')
		{	i++;		break;
		}
		else	return(-1);
		i++;
	}	cout<<val<<endl;
	while(c[i]!='\0')
	{	if(c[i]>='0' && c[i]<='9')
  		{	
			valf= valf + ( (c[i]-'0' )* f );	f=f*(1/10.0);
		}
		else	return(-1);
		i++;
	}	cout<<valf<<endl;
	//valf+=val;		
	return(val+valf);
}
int main()
{
	char c[10];
	cin>>c;
 	cout<<myatoi(c);	
}
