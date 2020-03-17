//5. Find max & min string.		"This large  beautiful is"
#include<bits/stdc++.h>
using namespace std;
int main(){	int max=0,min=0;
	string s;		cout<<"I/P : "; 	getline(cin,s);
	string mins,maxs;	
	max=0,min=s.length();
	for(int i=0,startmax=0,startmin=0  ; i<=s.length() ; i++ ){
		if(s[i]==' '||s[i]=='\0')
		{
			if((i-startmax)>(max))
			{	maxs=s.substr(startmax,i-startmax);	max=i-startmax;	}//set max-string
			if((i-startmin)<(min) && (i-startmin>=2))
			{	mins=s.substr(startmin,i-startmin);    min=i-startmin;	} //set min-string						
			startmax=startmin=i+1;	
		}			
	} 
		cout<<"\nmaxs-string= "<<maxs;
		cout<<"\nmins-string= "<<mins<<endl;
}
