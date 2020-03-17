//9. Reverse each word of a string.
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;	getline(cin,s);	//reverse(s.begin(),s.end());	cout<<s;
	int prev=0,e; 	
	for(int i=0 ; i<= s.length() ; i++){
		if(s[i]==' '||s[i]=='\0')	{	string t;
		if(prev!=0)		 t = s.substr(prev,i-prev)+" ";		
		else			 t = s.substr(prev,i-prev);					
		reverse(t.begin(),t.end());		
		cout<<t;			
		prev=i+1;	}
	}
	cout<<endl;
}

