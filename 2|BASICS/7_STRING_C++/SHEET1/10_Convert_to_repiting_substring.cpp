//10. Convert to a string ie. repitition of a substring of k-length.	///"abcbedabcabc"; k=3 ; YES
#include<bits/stdc++.h>
using namespace std;
int main(){
		string s;	getline(cin,s);	
		int k; 	cout<<"k= ";	cin>>k;
	string t = s.substr(0,k);			
	int pos = s.find(t);	s.erase(pos,k);		
	if(s.length()>k)
{
	for(int i=0 ; i<s.length()/k ;	i++	)
	{
		int pos= s.find(t);	
		if(pos>s.length())	break;		
		else				s.erase(pos,k);		
	}//cout<<s;
}
	
	if(s.length()==k)		cout<<"Yes";
	else				cout<<"No";
cout<<endl;
}

