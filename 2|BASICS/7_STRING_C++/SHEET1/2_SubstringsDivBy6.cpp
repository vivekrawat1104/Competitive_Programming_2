//2. Count Substrings div by 6.
#include<bits/stdc++.h>
using namespace std;
void  substrings(string s){	int n=s.length(),c=0;
	for(int i=0 ; i<=n ; i++){	
		for(int j=1; (i+j)<=n ; j++)
		{	string t;	t=s.substr(i,j);	//cout<<t<<endl;
			if(t[0]=='0')	   {	cout<<t<<endl;	c++; break;	}
			else if( stoi(t)%6==0 )   { cout<<t<<endl;	c++;}//cout<< stoi(s.substr(i,j))<<endl;	c++;	}
		}		
	}		
		cout<<"Div by 6 : "<<c;
}
int main(){
	string s1="6080";	// cout<<stoi("123")<<endl;
	substrings(s1);
}
