//7. Check if frequency of all distint char are same if atmost 1 char is removed.	"xxyyxzzyzy";YES
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;	int indx=1,count=0;		cout<<"String= "; cin>>s;
	char c=s[0];				
	for(int i=0 ; i<s.length() ; i++)	//Count all frequency of 1st char and remove all of them
	{		if (  s[i] == c )	{	count++;	s.erase(i,1);		i--;		}
	}cout<<count<<" "<<s<<endl;	
	for(int i=0 ; i<s.length() ;i++)	//Remove all distinct char at count times
	{	c=s[i];
		while( indx<=count){	//indx=1
				s.erase(s.find(c) , 1);	indx++;
		}i=0; indx=1;
	}	
	if( s.length()== 0 || s.length()==1)		cout<<"YES\n";
	else							cout<<"NO\n";
}

